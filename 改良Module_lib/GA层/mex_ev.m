function [cost, detail] = mex_ev(x, goal, RP_data)
cost = 0;
detail = struct('x', x, 'flag', 1, 'q_opt', [], 'w', NaN,  'sig', NaN, ...
    'num_modules', NaN, 'num_connect', NaN, 'module_expanded', [], ...
    'install_expanded', [], 'align_expanded', []);

% 染色体编码：
% x = [num_modules, module(1:upper), install(1:upper), align(1:upper)]
num_modules_upper = (length(x) - 1) / 3;
num_modules = round(x(1));
num_modules = max(1, min(num_modules, num_modules_upper));
detail.num_modules = num_modules;

module_gene  = x(2 : 1 + num_modules_upper);
install_gene = x(2 + num_modules_upper : 1 + 2*num_modules_upper);
align_gene   = x(2 + 2*num_modules_upper : end);

module_active  = module_gene(1:num_modules);
install_active = install_gene(1:num_modules);
align_active   = align_gene(1:num_modules);

% 1. 解码染色体 x 还原为构型参数（支持集成模块）
[module_dyn, install_dyn, align_dyn, num_modules_physical] = ...
    expand_module_units(module_active, install_active, align_active, RP_data);

module  = [1 2 1 module_dyn];
install = [1 1 1 install_dyn];
align   = [0 0 0 align_dyn];
% 为简化问题，固定串联拓扑
num_q = length(module);
sequence = [0, 1, 2, 0, 4:num_q];

detail.num_modules = num_modules_physical;
detail.num_connect = num_modules;
detail.module_expanded = module_dyn;
detail.install_expanded = install_dyn;
detail.align_expanded = align_dyn;

% 2. 生成运动学模型
LP = LP_generate(module, install, align, sequence, RP_data);
SV = SV_generate(LP);

% 3. 运行逆运动学检查是否可达
Goal = Goal_init(SV);
Goal.change = [0 1 0];
Goal.POS{Goal.change==1} = goal;

% 使用可变尺寸版本IK检查，避免num_modules变化时MEX尺寸不匹配
[LP, SV, flag, q_sol] = mex_ck330(LP, SV, Goal);

% 4. 评价指标计算
if flag
    cost = 1e12; % 惩罚项：如果工作点不可达，赋予极大的惩罚值，直接淘汰
    detail.flag = 1;
    return;
else
    % 如果可达，计算可操作度 (Manipulability)和精度(Accuracy)
    w = calc_Manipulability_0318(LP, SV);
    [sig, ~]= calc_Accuracy_0325(LP, SV);

    % 综合代价函数
    cost = cost ...
        + weight_w(w, RP_data.weight_cfg) ...
        + weight_sig(sig, RP_data.weight_cfg) ...
        + weight_num_modules(num_modules_physical, RP_data.weight_cfg) ...
        + weight_num_connect(num_modules, RP_data.weight_cfg);

    detail.flag = 0;
    detail.q_opt = q_sol;
    detail.w = w;
    detail.sig = sig;
end
end

function [module_out, install_out, align_out, num_modules_physical] = ...
    expand_module_units(module_units, install_units, align_units, RP_data)

module_out = [];
install_out = [];
align_out = [];

num_single = 5;
integrated_modules = RP_data.integrated_modules;

for i = 1:length(module_units)
    unit_id = round(module_units(i));
    unit_install = round(install_units(i));
    unit_align = round(align_units(i));

    if unit_id <= num_single
        module_out(end+1) = unit_id; %#ok<AGROW>
        install_out(end+1) = unit_install; %#ok<AGROW>
        align_out(end+1) = unit_align; %#ok<AGROW>
    else
        idx_integrated = unit_id - num_single;
        if idx_integrated < 1 || idx_integrated > numel(integrated_modules)
            module_out(end+1) = 1; %#ok<AGROW>
            install_out(end+1) = unit_install; %#ok<AGROW>
            align_out(end+1) = unit_align; %#ok<AGROW>
            continue;
        end

        unit = integrated_modules{idx_integrated};
        module_out = [module_out, unit.module]; %#ok<AGROW>
        install_out = [install_out, unit.install]; %#ok<AGROW>
        align_out = [align_out, unit.align]; %#ok<AGROW>
    end
end

num_modules_physical = length(module_units) - numel(find(module_units > num_single));
for i = 1:length(module_units)
    unit_id = round(module_units(i));
    if unit_id > num_single
        idx_integrated = unit_id - num_single;
        if idx_integrated >= 1 && idx_integrated <= numel(integrated_modules)
            num_modules_physical = num_modules_physical + length(integrated_modules{idx_integrated}.module);
        else
            num_modules_physical = num_modules_physical + 1;
        end
    end
end

end
