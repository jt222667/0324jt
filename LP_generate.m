function LP = LP_generate(module,install,align,sequence,RP_data) %#codegen
% module 使用到的各个模块都是什么种类
% install 各个模块的安装顺序，1代表正装，2代表反装
% align 安装对齐角度φ，安装完之后不变的固定角度
% sequence 模块组合顺序，与LP.BB可以相互转换

%% 运动学参数
LP.module = module;
LP.num_q = length(module);

LP.install = install;

LP.align = align *2*pi/3;

LP.BB = sequence;

LP.Rp = RP_data.Rp;
LP.Rd = RP_data.Rd;
LP.Pp = RP_data.Pp;
LP.Pd = RP_data.Pd;
LP.RBcp = RP_data.RBcp;
LP.PBcp = RP_data.PBcp;

LP.T_L = RP_data.T_L;
LP.T_B = RP_data.T_B;

LP.J_type = RP_data.J_type(module);

R_idx = find(LP.J_type == 'R');
LP.R_idx = [R_idx zeros(1,(20-length(R_idx)))];

LP.num_joint = length(R_idx);

LP.S0 = zeros(1, LP.num_q);
LP.S0(LP.BB == 0) = 1;

LP.SN = zeros(1, LP.num_q);
zero_indices = find(LP.BB == 0);
LP.SN(zero_indices) = 1:length(zero_indices);  % 向量化赋值，替代循环

for i = 2:LP.num_q
    if LP.S0(i) == 1
        LP.SE(i-1) = 1;
    end
end
LP.SE(LP.num_q) = 1;

LP.SS = calculate_SS_project(LP);

LP.Qe = zeros(3, LP.num_q);
%
% P =
%
% Pc
%
% E =

LP.cc = zeros(3, LP.num_q, LP.num_q);

LP.c0 = zeros(3, LP.num_q);

LP.ce = zeros(3, LP.num_q);

%% 动力学参数
LP.m0 = zeros(1,LP.num_q);
LP.m = 0;
LP.mass = sum(LP.m0) + LP.m;

LP.inertia = zeros(3, 3*LP.num_q);
for k = 1:LP.num_q
    LP.inertia(:, 3*k-2:3*k) = eye(3);
end

LP.inertia0 = eye(3);

end
