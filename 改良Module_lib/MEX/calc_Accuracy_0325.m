function [sig, detail] = calc_Accuracy_0325(LP, SV)
% calc_Accuracy_0318
% -------------------------------------------------------------------------
% 一阶精度分析（Veitschegger & Wu, 1986）工程实现。
%
% 支持：
%   1) 数值微分构造 W2/W3/W8/W9（默认开启）
%   2) 可切换输出指标模式：
%      - 'worst3sigma' : 3*sqrt(lambda_max)
%      - 'axis3sigma'  : max([3σx,3σy,3σz])
%      - 'trace_rms'   : sqrt(trace(Cov_p))
%   3) 可切换多末端聚合模式：
%      - 'mean' / 'max'
% -------------------------------------------------------------------------

n = LP.num_joint;
%                 指标模式          聚合模式         每点精度            xyz 误差           最坏 3σ          协方差矩阵        求导方式
detail = struct('metric_mode', '', 'agg_mode', '', 'sig_each', [], 'sigma_xyz_each', [], 'worst3_each', [], 'cov_each', {{}}, 'W_method', '');

detail.metric_mode = LP.acc_metric_mode;
detail.agg_mode = LP.acc_agg_mode;
detail.W_method = ternary(LP.acc_use_numeric_W, 'numeric_fd', 'analytic_axis');

% ===== 默认误差统计(可由 LP.err_std_* 覆盖) =====
Vtheta = diag(LP.err_std_theta.^2);
Vd     = diag(LP.err_std_d.^2);
Va     = diag(LP.err_std_a.^2);
Valpha = diag(LP.err_std_alpha.^2);
Vbeta  = diag(LP.err_std_beta.^2);

sig_each = inf(1, SV.m);
sigma_xyz_each = nan(3, SV.m);
worst3_each = inf(1, SV.m);
cov_each = cell(1, SV.m);

% 数值微分步长（可覆盖）
eps_d     = LP.acc_fd_eps_d;
eps_a     = LP.acc_fd_eps_a;
eps_alpha = LP.acc_fd_eps_alpha;
eps_beta  = LP.acc_fd_eps_beta;

for k = 2:SV.m
    J = calc_je_0318(LP, SV, k);
    if isempty(J)
        continue;
    end

    % W7 ~ ∂p/∂θ
    W7 = J(1:3, :);

    W2 = zeros(3, n);
    W3 = zeros(3, n);
    W8 = zeros(3, n);
    W9 = zeros(3, n);

    pe = SV.POS_e{k};
    for c = 1:n
        j = LP.R_idx(c);
        A = SV.AA(:, j*3-2:j*3);
        xj = A(:,1);
        yj = A(:,2);
        zj = A(:,3);
        pj = SV.RR(:,j);

        if LP.acc_use_numeric_W
            % --- d_i: 沿 z_i 平移扰动（中心差分）
            p_plus  = pe + eps_d * zj;
            p_minus = pe - eps_d * zj;
            W2(:,c) = (p_plus - p_minus) / (2*eps_d);

            % --- a_i: 沿 x_i 平移扰动（中心差分）
            p_plus  = pe + eps_a * xj;
            p_minus = pe - eps_a * xj;
            W3(:,c) = (p_plus - p_minus) / (2*eps_a);

            % --- α_i: 绕 x_i 小转角扰动（中心差分）
            p_plus  = pj + local_rot_axis(xj, +eps_alpha) * (pe - pj);
            p_minus = pj + local_rot_axis(xj, -eps_alpha) * (pe - pj);
            W8(:,c) = (p_plus - p_minus) / (2*eps_alpha);

            % --- β_i: 绕 y_i 小转角扰动（中心差分）
            p_plus  = pj + local_rot_axis(yj, +eps_beta) * (pe - pj);
            p_minus = pj + local_rot_axis(yj, -eps_beta) * (pe - pj);
            W9(:,c) = (p_plus - p_minus) / (2*eps_beta);
        else
            % 原解析映射
            rj = pe - pj;
            W2(:,c) = zj;
            W3(:,c) = xj;
            W8(:,c) = cross(xj, rj);
            W9(:,c) = cross(yj, rj);
        end
    end

    Vp1 = W7*Vtheta*W7' + W2*Vd*W2' + W3*Va*W3' + W8*Valpha*W8' + W9*Vbeta*W9';
    Cov_p = Vp1 + (LP.err_std_model^2) * eye(3);
    Cov_p = 0.5 * (Cov_p + Cov_p.');

    cov_each{k} = Cov_p;

    % 每轴 1σ / 3σ
    sigma_xyz = sqrt(max(real(diag(Cov_p)), 0));
    sigma_xyz_each(:,k) = sigma_xyz;

    lam = eig(Cov_p);
    lam_max = max(real(lam));
    if ~(isfinite(lam_max)) || lam_max < 0
        continue;
    end
    worst3 = 3 * sqrt(max(lam_max, 1.0e-16));
    worst3_each(k) = worst3;

    switch lower(detail.metric_mode)
        case 'worst3sigma'
            sig_each(k) = worst3;
        case 'axis3sigma'
            sig_each(k) = 3 * max(sigma_xyz);
        case 'trace_rms'
            sig_each(k) = sqrt(max(trace(Cov_p), 0));
        otherwise
            sig_each(k) = worst3;
    end
end

valid = isfinite(sig_each);
if ~any(valid)
    sig = inf;
else
    switch lower(detail.agg_mode )
        case 'max'
            sig = max(sig_each(valid));
        otherwise
            sig = mean(sig_each(valid));
    end
end

if ~isfinite(sig)
    sig = inf;
end

detail.sig_each = sig_each;
detail.sigma_xyz_each = sigma_xyz_each;
detail.worst3_each = worst3_each;
detail.cov_each = cov_each;
end

%%
function R = local_rot_axis(axis_u, angle)
axis_u = axis_u(:);
n = norm(axis_u);
if n < 1e-15
    R = eye(3);
    return;
end
u = axis_u / n;
ux = [   0   -u(3)  u(2);
    u(3)    0    -u(1);
    -u(2)  u(1)    0  ];
R = eye(3) + sin(angle)*ux + (1-cos(angle))*(ux*ux);
end

%%
function out = ternary(cond, a, b)
if cond
    out = a;
else
    out = b;
end
end