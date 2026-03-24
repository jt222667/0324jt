%% 构型寻优
clc;
clear;

%% 1. 构型库数据初始化
RP_data = Module_Lib();

%% 2. 【定义任务点】
% 仅有任务点够吗？之后是否需要根据任务类型改变寻优策略
goal = [0;0;8];

%% 3. 【遗传算法参数设置】
num_modules = calc_modules_upper_0318(goal,RP_data);   % 根据任务点限制模块上限
IntCon = 1:num_modules*3;               % 声明这num_modules个变量全部是整数

%% 生成该构型对应的mex文件，加快计算
MEX_generate(num_modules,RP_data);

%% 4. 【调用 GA 求解】
% module 范围 [1,5], install 范围 [0,1], align 范围 [0,2]，但先假设全部正装，对齐角为0
lb = [ones(1, num_modules)*1, ones(1, num_modules)*0,ones(1, num_modules)*0];
ub = [ones(1, num_modules)*5, ones(1, num_modules)*1,ones(1, num_modules)*2];

% 算法选项配置
options = optimoptions('ga', ...
    'Display', 'iter', ...
    ... % --- 种群与迭代 ---
    'PopulationSize', 200, ...       % 【调大】变量变多后，50的种群多样性不够，容易早熟陷入局部最优。建议设为 100~200。
    'MaxGenerations', 200, ...       % 【调小】对于整数规划，500代太多了，通常100-200代内就会收敛。
    'MaxStallGenerations', 5, ...   % 【新增】停滞代数。如果连续 30 代最优解都没有改变，就提前终止，节省大量时间。
    ... % --- 算法行为 ---
    'CreationFcn', @gacreationlinearfeasible, ... % 【关键】强制保证初始种群满足整数和上下界约束
    ... % --- 加速计算 ---
    'UseParallel', true, ...         % 【极力推荐】如果你的 evaluate_config_0318 计算很慢，务必开启并行池（前提是评价函数内部没有全局变量冲突）
    ... % --- 可视化 ---
    'PlotFcn', @gaplotbestf);

% GA启动
fprintf('开始构型寻优...\n');
options = optimoptions('ga', options, 'OutputFcn', @(options, state, flag) ga_outfun(options, state, flag, goal, RP_data));
[best_x, best_cost] = ga(@(x) mex_ev(x, goal, RP_data), num_modules*3, [], [], [], [], lb, ub, [], IntCon, options);

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
    end
end


%% 5. 【结果解析】
disp('寻优完成！最优构型参数：');
best_module  = best_x(1:num_modules);
best_install = best_x(num_modules+1 : 2*num_modules);
best_align   = best_x(2*num_modules+1 : end);

fprintf('Module:  [%s]\n', num2str(best_module));
fprintf('Install: [%s]\n', num2str(best_install));
fprintf('Align:   [%s]\n', num2str(best_align));
 
fprintf('Cost:    %.6f\n', best_cost);
fprintf('q_opt:   [%s]\n', num2str(best_detail.q_opt(:).'));
fprintf('w_opt:   %.6f\n', best_detail.w);
fprintf('w_opt:   %.6f\n', best_detail.sig);
