%% 3.17 12:28 修正f_kin_end
function [LP, SV, flag, q_sol] = ck(LP, SV, Goal)
%% 初始化
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

num_joint = LP.num_joint;
change = find(Goal.change==1);

parfor k = 1:num_trials
    % 使用确定性的初值，避免随机初值导致同一构型重复评估结果不一致
    base = (1:num_joint)' / (num_joint + 1);
    q_init = mod(2*pi*(base + (k-1)/num_trials), 2*pi);

    % 调用 fmincon
    [q_opt, fval] = fmincon(@(q) jIKc330(q, LP, SV, Goal, change), ...
        q_init, [], [], [], [], ...
        zeros(num_joint,1), 2*pi*ones(num_joint,1), [], options);
    % 将结果存入临时数组（parfor 内部不能直接更新外部的全局 best_cost）
    all_q_opt{k} = q_opt;
    all_fvals(k) = fval;
end
% 循环结束后，在主线程找出最优解
[best_cost, best_idx] = min(all_fvals);
q_sol = all_q_opt{best_idx};
SV = Trans_aa_pos_init(LP, SV, q_sol);

%% 验证逆解结果
if best_cost == inf
    flag = 1;
end

fprintf(' flag  = %d\n',flag);

end





