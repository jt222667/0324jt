function LP = LP_generate(module,install,align,sequence,RP_data) %#codegen
% module   ：使用到的各个模块种类
% install  ：各个模块的安装顺序，1=正装，2=反装
% align    ：安装对齐角度φ
% sequence ：模块组合顺序，与LP.BB可以相互转换

%% ===================== 1. 运动学参数 =====================
LP.module = module;
LP.num_q  = length(module);  % 总模块数
LP.install = install;
LP.align   = align * 2*pi/3;
LP.BB      = sequence;

% 从 RP_data 读取基础参数
LP.Rp   = RP_data.Rp;
LP.Rd   = RP_data.Rd;
LP.Pp   = RP_data.Pp;
LP.Pd   = RP_data.Pd;
LP.RBcp = RP_data.RBcp;
LP.PBcp = RP_data.PBcp;
LP.T_L  = RP_data.T_L;
LP.T_B  = RP_data.T_B;

% 关节类型与索引
LP.J_type    = RP_data.J_type(module);
R_idx        = find(LP.J_type == 'R');
LP.R_idx     = [R_idx, zeros(1, 20 - length(R_idx))];
LP.num_joint = length(R_idx); 

% 被动关节标记
LP.S0 = zeros(1, LP.num_q);
LP.S0(LP.BB == 0) = 1;

% 被动关节编号
LP.SN = zeros(1, LP.num_q);
zero_indices = find(LP.BB == 0);
LP.SN(zero_indices) = 1:length(zero_indices);

% SE 标记
LP.SE = zeros(1, LP.num_q);
for i = 2:LP.num_q
    if LP.S0(i) == 1
        LP.SE(i-1) = 1;
    end
end
LP.SE(LP.num_q) = 1;

LP.SS = calculate_SS_project(LP);

% 初始化坐标相关矩阵
LP.Qe  = zeros(3, LP.num_q);
LP.cc  = zeros(3, LP.num_q, LP.num_q);
LP.c0  = zeros(3, LP.num_q);
LP.ce  = zeros(3, LP.num_q);
% P =
% Pc
% E =

%% ===================== 2. 动力学参数 =====================
LP.m0      = zeros(1, LP.num_q);
LP.m       = 0;
LP.mass    = sum(LP.m0) + LP.m;
LP.inertia = zeros(3, 3*LP.num_q);
for k = 1:LP.num_q
    LP.inertia(:, 3*k-2:3*k) = eye(3);
end
LP.inertia0 = eye(3);

%% ===================== 3. 精度分析配置（误差参数） =====================
% 精度计算模式（存入结构体，供外部函数使用）
LP.acc_metric_mode    = 'worst3sigma';    % 精度指标模式
LP.acc_agg_mode       = 'max';           % 多末端聚合模式
LP.acc_use_numeric_W  = true;             % 是否使用数值微分

% 各项误差标准差（默认值）
% 关节角误差
LP.err_std_theta      = deg2rad(0.05);    % 转动关节角度误差
% DH 参数误差
LP.err_std_d          = 5.0e-5;          % 连杆 d 误差
LP.err_std_a          = 5.0e-5;          % 连杆 a 误差
LP.err_std_alpha      = deg2rad(0.02);    % alpha 角误差
LP.err_std_beta       = deg2rad(0.02);    % beta 角误差
% 模型总误差
LP.err_std_model      = 1.0e-4;           % 模型噪声标准差

% 数值微分步长
LP.acc_fd_eps_d       = 1.0e-6;
LP.acc_fd_eps_a       = 1.0e-6;
LP.acc_fd_eps_alpha   = 1.0e-6;
LP.acc_fd_eps_beta    = 1.0e-6;

%% 权重
LP.weight_cfg = RP_data.weight_cfg;

end