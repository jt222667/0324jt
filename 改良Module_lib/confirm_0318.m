clc;
clear;

%% 参数初始化
RP_data = Module_Lib();
Configuration_Lib = { ...
    [1 2 1], ...
    [2 2 1 1 2 2 3], ...
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

align = [
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
q0 = rand(LP.num_joint,1)  * pi * 2;
SV = Trans_aa_pos_init(LP, SV, q0);

%% w 计算
% %% 目标设置
Goal = Goal_init(SV);
Goal.change = [0 1 0];
Goal.POS{find(Goal.change==1)}  = [0;0;7];
%
% %% 该构型最佳可操作度
[LP, SV, ~] = check_kinematics_0323(LP, SV, Goal);
w_best = calc_Manipulability_0318(LP, SV);
%
% %% 逆运动学求解
[LP, SV, flag] = check_kinematics_0325(LP, SV, Goal);
w_ik = calc_Manipulability_0318(LP, SV)
[sig, ~] = calc_Accuracy_0325(LP, SV)

% %% 优化可操作度
[SV, q_opt, w_opt] = max_w_NULLspace(LP, SV, 2);

fprintf('w_best(2) = %.6f\n  w_ik(2) = %.6f\n w_opt(2) = %.6f\n', w_best(2),w_ik(2),w_opt(2));

%% 

% goal = [0;0;8];
% MEX_generate(7,RP_data);
% x=[1 2 1 2 1 2 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0];
% 
% [cost, detail] = mex_ev(x, goal, RP_data)

% w = calc_Manipulability_0318(LP, SV)
% [sig, ~]= calc_Accuracy_0325(LP, SV)
% 
% weight_w(w, RP_data.weight_cfg)
% weight_sig(sig_opt, RP_data.weight_cfg)

