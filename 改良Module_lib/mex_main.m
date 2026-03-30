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
fprintf('开始构型寻优（可变模块数：%d ~ %d）...\n', num_modules_lower, num_modules_upper);

global_best.cost = Inf;
global_best.x = [];
global_best.detail = struct('q_opt', [], 'w', NaN, 'sig', NaN);
global_best.num_modules = NaN;

for num_modules = num_modules_lower:num_modules_upper
    fprintf('\n===== 当前优化模块数: %d =====\n', num_modules);

    IntCon = 1:num_modules*3;                               % 声明这num_modules个变量全部是整数

    %% 生成该构型对应的mex文件，加快计算
    MEX_generate(num_modules,RP_data);

    % module 范围 [1,5], install 范围 [0,1], align 范围 [0,2]，但先假设全部正装，对齐角为0
    lb = [ones(1, num_modules)*1, ones(1, num_modules)*0,ones(1, num_modules)*0];
    ub = [ones(1, num_modules)*5, ones(1, num_modules)*1,ones(1, num_modules)*2];

    % 每个模块数单独追踪一份最优历史
    evalin('base', 'clear tracked_best');

    options_k = optimoptions('ga', options, ...
        'OutputFcn', @(options, state, flag) ga_outfun(options, state, flag, goal, RP_data));

    [best_x_k, best_cost_k] = ga(@(x) mex_ev(x, goal, RP_data), num_modules*3, [], [], [], [], lb, ub, [], IntCon, options_k);

    % 获取best_x对应的detail
    [cost_eval, best_detail_k] = mex_ev(best_x_k, goal, RP_data);
    if cost_eval < best_cost_k
        best_cost_k = cost_eval;
    end

    % 使用 OutputFcn 中逐代复核得到的全局最优（含 w / q_opt）
    if evalin('base', "exist('tracked_best','var')")
        ga_tracked_best = evalin('base', 'tracked_best');
        if ga_tracked_best.cost < best_cost_k
            best_x_k = ga_tracked_best.x;
            best_cost_k = ga_tracked_best.cost;
            best_detail_k.q_opt = ga_tracked_best.q_opt;
            best_detail_k.w = ga_tracked_best.w;
            best_detail_k.sig = ga_tracked_best.sig;
        end
    end

    fprintf('模块数 %d 对应最优代价: %.6f\n', num_modules, best_cost_k);

    if best_cost_k < global_best.cost
        global_best.cost = best_cost_k;
        global_best.x = best_x_k;
        global_best.detail = best_detail_k;
        global_best.num_modules = num_modules;
    end
end

best_x = global_best.x;
best_cost = global_best.cost;
best_detail = global_best.detail;
num_modules = global_best.num_modules;

%% 5. 【结果解析】
disp('寻优完成！最优构型参数：');
best_module  = best_x(1:num_modules);
best_install = best_x(num_modules+1 : 2*num_modules);
best_align   = best_x(2*num_modules+1 : end);

fprintf('Best num_modules: %d\n', num_modules);
fprintf('Module:  [%s]\n', num2str(best_module));
fprintf('Install: [%s]\n', num2str(best_install));
fprintf('Align:   [%s]\n', num2str(best_align));
 
fprintf('Cost:    %.6f\n', best_cost);
fprintf('q_opt:   [%s]\n', num2str(best_detail.q_opt(:).'));
fprintf('w_opt:   [%s]\n', num2str(best_detail.w(:).'));
fprintf('sig_opt: %.6f\n', best_detail.sig);
