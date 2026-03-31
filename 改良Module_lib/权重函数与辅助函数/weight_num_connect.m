function c_connect = weight_num_connect(num_connect, cfg)
% weight_num_connect
% -------------------------------------------------------------------------
% 将连接次数(越小越好)映射为最小化代价 c_connect。
%
% cfg 字段(可选，带默认值)：
%   .num_connect_ref      归一化参考连接次数（默认 1）
%   .lambda_num_connect   连接次数权重系数（默认 0）
%   .p_num_connect        指数（默认 1）
% -------------------------------------------------------------------------

connect_ref = cfg.num_connect_ref;
lambda_connect = cfg.lambda_num_connect;
p_connect = cfg.p_num_connect;

connect_ref = max(connect_ref, 1);
ratio = num_connect / connect_ref;
c_connect = lambda_connect * (ratio ^ p_connect);

end
