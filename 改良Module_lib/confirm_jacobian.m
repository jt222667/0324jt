clc;
clear;

%% 参数初始化
RP_data = Module_Lib();
Configuration_Lib = { ...
    [1 2 1], ...
    [1 2 1 2 1 2 1], ...
    [1 2 3 1 2 3 1], ...
    [1 1 1 2 1 2 2], ...
    [2 2 2 2 2 2 2], ...
    [] ...
    };
module = [ ...
    Configuration_Lib{1} ...
    Configuration_Lib{2} ...
    Configuration_Lib{2} ...
    ];
install = [ ...
    ones(1,length(Configuration_Lib{1})) ...
    ones(1,length(Configuration_Lib{2})) ...
    ones(1,length(Configuration_Lib{2})) ...
    ];

align = [ ...
    [0 0 0] ...
    zeros(1,length(Configuration_Lib{2})) ...
    zeros(1,length(Configuration_Lib{2})) ...
    ];

sequence = [ ...
    0  1  2, ...
    0  4  5  6  7  8  9, ...
    0  11 12 13 14 15 16, ...
    ];
LP = LP_generate(module, install, align, sequence, RP_data);
SV = SV_generate(LP);

%% 正运动学
q = rand(LP.num_joint,1)  * pi * 2;
SV = Trans_aa_pos_init(LP, SV, q);

%% 绘构型图可视化(验证)
PlotSV(LP,SV);

%% 位置雅可比验证
i = 2;
J = calc_je_0318(LP,SV,i);
q0 = SV.q(LP.J_type=='R');
eps = 1e-6;

for k = 1:17
    q_p = q0;
    q_p(k) = q_p(k) + eps;
    q_m = q0;
    q_m(k) = q_m(k) - eps;
    SV_tmp1 = Trans_aa_pos_init(LP, SV, q_p);
    SV_tmp2 = Trans_aa_pos_init(LP, SV, q_m);
    dx = SV_tmp1.POS_e{i} - SV_tmp2.POS_e{i};
    J_num(:,k) = dx / (2*eps);
end

j1 = J(1:3,:)
j2 = J_num
d1 = j2-j2
err_pos = norm(d1)

%% 旋转雅可比验证
Jw = J(4:6,:);
R0 = SV.ORI_e{i};

for k = 1:17
    % ===== 1. 单关节微扰 =====
    q_p = q0;
    q_p(k) = q_p(k) + eps;
    q_m = q0;
    q_m(k) = q_m(k) - eps;
    SV_tmp1 = Trans_aa_pos_init(LP, SV, q_p);
    SV_tmp2 = Trans_aa_pos_init(LP, SV, q_m);
    R1 = SV_tmp1.ORI_e{i};
    R2 = SV_tmp2.ORI_e{i};
    % ===== 2. 相对旋转 =====
    R_err = R1 * R0';
    % ===== 3. 转轴角（推荐方法）=====
    axang = rotm2axang(R_err);
    axis = axang(1:3);
    angle = axang(4);
    % ===== 4. 角速度近似 =====
    omega = axis * angle;
    % ===== 5. 数值 Jacobian =====
    Jw_num_tmp(:,k) = omega / eps;
end

% ===== 6. 误差 =====
Jw
Jw_num = Jw_num_tmp;
Jw_num(:,1) = Jw_num_tmp(:,3);
Jw_num(:,3) = Jw_num_tmp(:,1);
Jw_num
d2 = Jw -Jw_num
err_ori = norm(Jw - Jw_num)

%% 

J
N = (eye(size(J,2))-pinv(J)*J)
n = J*N