function c_num = weight_num_modules(num_modules, cfg)
% weight_num_modules
% -------------------------------------------------------------------------
% 将模块数(越小越好)映射为最小化代价 c_num。
%
% cfg 字段(可选，带默认值)：
%   .num_modules_ref      归一化参考模块数（默认 1）
%   .lambda_num_modules   模块数权重系数（默认 0）
%   .p_num_modules        指数（默认 1）
% -------------------------------------------------------------------------

num_ref = cfg.num_modules_ref;

lambda_num = cfg.lambda_num_modules;

p_num = cfg.p_num_modules;

num_ref = max(num_ref, 1);
ratio = num_modules / num_ref;
c_num = lambda_num * (ratio ^ p_num);

end
