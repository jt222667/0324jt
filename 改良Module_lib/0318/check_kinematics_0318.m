%% 3.17 12:28 修正f_kin_end
function [LP, SV, flag] = check_kinematics_0318(LP, SV, Goal)
%% 初始化
% 目标点容差设置
norm_limit = 1e-2;
% 目标点可达flag = 0，不可达flag = 1
flag = 0;

%% 优化关节角求逆解
% 随机初始关节角
num_trials = 5;  % 一次运行中尝试5个随机初始点
% 优化器设置
options = optimoptions('fmincon', ...
    'Display','off', ...
    'Algorithm','sqp', ...
    'MaxIterations',300, ...
    'MaxFunctionEvaluations',5000);
% 假设你已经开启了并行池（如果没有，MATLAB 会在第一次运行 parfor 时自动开启）

% 为了在 parfor 内部比较，我们需要先准备好存储容器
all_q_opt = cell(num_trials, 1);
all_fvals = Inf(num_trials, 1);

parfor k = 1:num_trials
    % 这里的 q0 依然在每个迭代中独立生成
    q_init = rand(LP.num_joint,1) * 2 * pi;

    SV_init = Trans_aa_pos_init(LP, SV, q_init);
    w_init_struct = calc_Manipulability_0318(LP, SV_init);
    w_ref = w_init_struct(2) + 1e-9; 

    % 调用 fmincon
    [q_opt, fval] = fmincon(@(q) joint_IK_cost_0318(q, LP, SV, Goal, w_ref), ...
        q_init, [], [], [], [], ...
        zeros(LP.num_joint,1), 2*pi*ones(LP.num_joint,1), [], options);
    % 将结果存入临时数组（parfor 内部不能直接更新外部的全局 best_cost）
    all_q_opt{k} = q_opt;
    all_fvals(k) = fval;
end
% 循环结束后，在主线程找出最优解
[~, best_idx] = min(all_fvals);
q_sol = all_q_opt{best_idx};
SV = Trans_aa_pos_init(LP, SV, q_sol);

%% 验证逆解结果
% 结果对比可视化
for i = 1:SV.m
    fprintf('   Goal.POS{%d}: SV.POS_e{%d}:\n', i, i);
    disp([Goal.POS{i} , SV.POS_e{i}]);
    fprintf('   Goal.ORI{%d}:                  SV.ORI_e{%d}:\n', i, i);
    disp([Goal.ORI{i} , SV.ORI_e{i}]);
end

ERROR = 0;
for i = 1:SV.m
    ERROR = ERROR + norm(SV.POS_e{i} - Goal.POS{i});
end
if ERROR > norm_limit
    flag = 1;
end
fprintf(' ERROR = %d\n',ERROR);
fprintf(' flag  = %d\n',flag);

end






