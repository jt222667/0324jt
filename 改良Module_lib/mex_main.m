%% 构型寻优
clc;
clear;

%% 1. 构型库数据初始化
RP_data = Module_Lib();
% 权重设置
RP_data.weight_cfg.lambda_sig = 1;
RP_data.weight_cfg.lambda_w = 1;
RP_data.weight_cfg.lambda_num_modules = 1;

%% 2. 【定义任务点】
% 仅有任务点够吗？之后是否需要根据任务类型改变寻优策略
goal = [0;0;8];

%% 3. 【遗传算法参数设置】
num_modules_upper = calc_modules_upper_0318(goal,RP_data);    % 根据任务点限制模块上限
num_modules_lower = 1;                                        % 至少保留1个可变模块

% 用于模块数代价归一化
RP_data.weight_cfg.num_modules_ref = num_modules_upper;

% 染色体编码：
% x = [num_modules, module(1:upper), install(1:upper), align(1:upper)]
% 实际评价只取前 num_modules 个模块参数
nvars = 1 + 3 * num_modules_upper;
IntCon = 1:nvars;

lb = [num_modules_lower, ...
      ones(1, num_modules_upper)*1, ...
      ones(1, num_modules_upper)*0, ...
      ones(1, num_modules_upper)*0];
ub = [num_modules_upper, ...
      ones(1, num_modules_upper)*5, ...
      ones(1, num_modules_upper)*1, ...
      ones(1, num_modules_upper)*2];

% 算法选项配置
options = optimoptions('ga', ...
    'Display', 'iter', ...
    ... % --- 种群与迭代 ---
    'PopulationSize', 1000, ...
    'MaxGenerations', 200, ...
    'MaxStallGenerations', 5, ...
    ... % --- 算法行为 ---
    'CreationFcn', @gacreationlinearfeasible, ...
    'UseParallel', true, ...
    ... % --- 可视化 ---
    'PlotFcn', @gaplotbestf);

%% 4. 【调用 GA 求解】
fprintf('开始构型寻优（num_modules作为GA变量，范围：%d ~ %d）...\n', num_modules_lower, num_modules_upper);

evalin('base', 'clear tracked_best');
options = optimoptions('ga', options, 'OutputFcn', @(options, state, flag) ga_outfun(options, state, flag, goal, RP_data));

[best_x, best_cost] = ga(@(x) mex_ev(x, goal, RP_data), nvars, [], [], [], [], lb, ub, [], IntCon, options);

% 获取best_x对应的detail
[cost_eval, best_detail] = mex_ev(best_x, goal, RP_data);
if cost_eval < best_cost
    best_cost = cost_eval;
end

% 使用 OutputFcn 中逐代复核得到的全局最优（含 w / q_opt）
if evalin('base', "exist('tracked_best','var')")
    ga_tracked_best = evalin('base', 'tracked_best');
    if ga_tracked_best.cost < best_cost
        best_x = ga_tracked_best.x;
        best_cost = ga_tracked_best.cost;
        best_detail.q_opt = ga_tracked_best.q_opt;
        best_detail.w = ga_tracked_best.w;
        best_detail.sig = ga_tracked_best.sig;
        best_detail.num_modules = ga_tracked_best.num_modules;
    end
end

num_modules = best_detail.num_modules;

%% 5. 【结果解析】
disp('寻优完成！最优构型参数：');
module_gene  = best_x(2 : 1+num_modules_upper);
install_gene = best_x(2+num_modules_upper : 1+2*num_modules_upper);
align_gene   = best_x(2+2*num_modules_upper : end);

best_module  = module_gene(1:num_modules);
best_install = install_gene(1:num_modules);
best_align   = align_gene(1:num_modules);

fprintf('Best num_modules: %d\n', num_modules);
fprintf('Module:  [%s]\n', num2str(best_module));
fprintf('Install: [%s]\n', num2str(best_install));
fprintf('Align:   [%s]\n', num2str(best_align));

fprintf('Cost:    %.6f\n', best_cost);
fprintf('q_opt:   [%s]\n', num2str(best_detail.q_opt(:).'));
fprintf('w_opt:   [%s]\n', num2str(best_detail.w(:).'));
fprintf('sig_opt: %.6f\n', best_detail.sig);
