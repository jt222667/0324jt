function sig = calc_Accuracy_0318(LP, SV)
% calc_Accuracy_0318
% -------------------------------------------------------------------------
% 依据论文: W. K. Veitschegger, C.-H. Wu, IEEE RA-2(3), 1986
% "Robot Accuracy Analysis Based on Kinematics"
%
% 本实现采用论文的一阶误差方差模型(式(38)、(56))并做工程化映射:
%   dp^1 = W7*Δθ + W2*Δd + W3*Δa + W8*Δα + W9*Δβ         (38)
%   Vp^1 = W7*Vθ*W7' + W2*Vd*W2' + W3*Va*W3'
%        + W8*Vα*W8' + W9*Vβ*W9'                           (56)
%
% 说明:
% 1) 你的模型不是标准 DH 直接参数化，因此 W2/W3/W8/W9 使用局部坐标轴的一阶近似映射；
% 2) W7 使用现有几何雅可比的平移部分 Jv (= ∂p/∂θ)；
% 3) 输出 sig 为所有末端平均的 3σ 最差方向位置误差(米)。
% -------------------------------------------------------------------------

% ===== 默认误差统计(可由 LP.err_std_* 覆盖) =====
n = LP.num_joint;
if n <= 0 || SV.m <= 0
    sig = inf;
    return;
end

% 关节角误差 std (rad)
std_theta = local_get_std(LP, 'err_std_theta', deg2rad(0.05), n);
% 轴向偏距 d 误差 std (m)
std_d     = local_get_std(LP, 'err_std_d',     5.0e-5, n);
% 连杆长度 a 误差 std (m)
std_a     = local_get_std(LP, 'err_std_a',     5.0e-5, n);
% 扭角 α 误差 std (rad)
std_alpha = local_get_std(LP, 'err_std_alpha', deg2rad(0.02), n);
% 近平行补偿角 β 误差 std (rad)
std_beta  = local_get_std(LP, 'err_std_beta',  deg2rad(0.02), n);

% 额外未建模残差 (m)
std_model = local_get_scalar(LP, 'err_std_model', 1.0e-4);

Vtheta = diag(std_theta.^2);
Vd     = diag(std_d.^2);
Va     = diag(std_a.^2);
Valpha = diag(std_alpha.^2);
Vbeta  = diag(std_beta.^2);

ridx = LP.R_idx(1:n); % 每列雅可比对应的旋转关节在 LP 中的索引

sig_each = zeros(1, SV.m);
for k = 1:SV.m
    J = calc_je_0318(LP, SV, k);
    if isempty(J)
        sig_each(k) = inf;
        continue;
    end

    % W7 ~ ∂p/∂θ
    W7 = J(1:3, :);

    % 按论文(38)(39)构造其余灵敏度矩阵(工程映射)
    W2 = zeros(3, n); % ∂p/∂d
    W3 = zeros(3, n); % ∂p/∂a
    W8 = zeros(3, n); % ∂p/∂α
    W9 = zeros(3, n); % ∂p/∂β

    pe = SV.POS_e{k};
    for c = 1:n
        j = ridx(c);
        A = SV.AA(:, j*3-2:j*3);
        xj = A(:,1);
        yj = A(:,2);
        zj = A(:,3);
        rj = pe - SV.RR(:,j);

        % d_i: 沿 z_i 的平移误差
        W2(:,c) = zj;
        % a_i: 沿 x_i 的平移误差
        W3(:,c) = xj;
        % α_i: 绕 x_i 小转角引起位置误差
        W8(:,c) = cross(xj, rj);
        % β_i: 绕 y_i 小转角引起位置误差(近平行轴补偿项)
        W9(:,c) = cross(yj, rj);
    end

    % 论文式(56): 一阶笛卡尔位置误差协方差
    Vp1 = W7*Vtheta*W7' + W2*Vd*W2' + W3*Va*W3' + W8*Valpha*W8' + W9*Vbeta*W9';

    % 加入未建模残差并数值对称化
    Cov_p = Vp1 + (std_model^2) * eye(3);
    Cov_p = 0.5 * (Cov_p + Cov_p.');

    lam = eig(Cov_p);
    lam_max = max(real(lam));
    if ~(isfinite(lam_max)) || lam_max < 0
        sig_each(k) = inf;
    else
        sig_each(k) = 3 * sqrt(max(lam_max, 1.0e-16));
    end
end

sig = mean(sig_each);
if ~isfinite(sig)
    sig = inf;
end
end

function v = local_get_std(LP, field_name, default_scalar, n)
if isfield(LP, field_name)
    raw = LP.(field_name);
    if isscalar(raw)
        v = repmat(double(raw), n, 1);
    else
        raw = double(raw(:));
        if numel(raw) >= n
            v = raw(1:n);
        else
            v = [raw; repmat(default_scalar, n-numel(raw), 1)];
        end
    end
else
    v = repmat(default_scalar, n, 1);
end
end

function s = local_get_scalar(LP, field_name, default_value)
if isfield(LP, field_name)
    raw = LP.(field_name);
    if isscalar(raw)
        s = double(raw);
    else
        s = default_value;
    end
else
    s = default_value;
end
end
