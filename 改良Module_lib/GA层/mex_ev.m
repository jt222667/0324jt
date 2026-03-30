function [cost, detail] = mex_ev(x, goal, RP_data)
cost = 0;
detail = struct('x', x, 'flag', 1, 'q_opt', [], 'w', NaN,  'sig', NaN, 'num_modules', NaN);
% 1. 解码染色体 x 还原为构型参数
num_modules = length(x) / 3;
detail.num_modules = num_modules;

module  = [1 2 1 x(1 : num_modules)];
install = [1 1 1 x(num_modules+1 : 2*num_modules)];
align   = [0 0 0 x(2*num_modules+1 : end)];
% 为简化问题，固定串联拓扑
sequence = [0, 1, 2, 0, 4:(num_modules+2)];

% 2. 生成运动学模型
% 强烈建议：把之前初始化好的 Rp, Rd, Pp, Pd 作为 RP_data 传进来，
LP = LP_generate(module, install, align, sequence, RP_data);
SV = SV_generate(LP);

% 3. 运行逆运动学检查是否可达
Goal = Goal_init(SV);
Goal.change = [0 1 0];
Goal.POS{Goal.change==1} = goal;

[LP, SV, flag, q_sol] = mex_ck(LP, SV, Goal);
% 4. 评价指标计算
if flag
    cost = inf; % 惩罚项：如果工作点不可达，赋予极大的惩罚值，直接淘汰
    detail.flag = 1;
    return;
else

    % 如果可达，计算可操作度 (Manipulability)和精度(Accuracy)
    % 假设你有一个函数 calc_manipulability() 计算当前位姿的雅可比矩阵行列式
    w = calc_Manipulability_0318(LP, SV);
    [sig, ~]= calc_Accuracy_0325(LP, SV);
    % 综合代价函数

    cost = cost ...
        + weight_w(w, RP_data.weight_cfg) ...
        + weight_sig(sig, RP_data.weight_cfg) ...
        + weight_num_modules(num_modules, RP_data.weight_cfg);

    detail.flag = 0;
    detail.q_opt = q_sol;
    detail.w = w;
    detail.sig = sig;
end
end
