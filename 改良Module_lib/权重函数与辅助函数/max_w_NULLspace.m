function [SV, q_opt, w_opt] = max_w_NULLspace(LP, SV, i)

q0 = SV.q(LP.J_type=='R');
max_iter = 150; 
alpha = 0.05;  

x_target = SV.POS_e{i};

for k = 1:max_iter
    % 1. 更新当前状态
    SV_tmp = Trans_aa_pos_init(LP, SV, q0);

    % 2. 计算雅可比矩阵
    Jacob = calc_je_0318( LP, SV_tmp , i);
    J_pos = Jacob(1:3,:); % 只关注位置

    % 3. 零空间投影矩阵
    J_pinv = pinv(J_pos);
    N = eye(size(J_pos,2)) - J_pinv * J_pos;

    % 4. 计算当前位置误差
    x_now = SV_tmp.POS_e{i};
    dx = x_target - x_now;

    % 5. 计算可操作度梯度
    grad_w = compute_grad_w_0323(LP, SV_tmp, i);

    % 【修复点1】：必须对梯度进行归一化或限幅，防止步子迈得太大导致严重非线性漂移
    if norm(grad_w) > 1e-4
        grad_w = grad_w / norm(grad_w);
    end

    % 【修复点2】："收尾"策略。在最后10次迭代，或者位置误差较大时，
    % 削弱或关闭零空间优化，优先保证末端位置精度。
    if k > max_iter - 10
        alpha_tmp = 0; % 纯逆运动学拉回目标点
    else
        alpha_tmp = alpha;
    end

    % 主任务 + 零空间
    dq_task = J_pinv * dx;
    dq_null = alpha_tmp * N * grad_w;

    dq = dq_task + dq_null;
    q0 = q0 + dq;
    
    % 【修复点3】：收敛判断必须同时考虑关节更新量和末端位置误差
    if norm(dq) < 1e-6 && norm(dx) < 1e-6
        % disp(['在第 ', num2str(k), ' 次迭代收敛']);
        break;
    end
end

% 最终结果
SV = Trans_aa_pos_init(LP, SV, q0);
w_opt = calc_Manipulability_0318(LP, SV);
q_opt = q0;

% 可以在命令行打印最终误差，验证是否解决偏移
final_error = norm(x_target - SV.POS_e{i});
disp(['优化后位置偏差: ', num2str(final_error)]);
end