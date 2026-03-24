%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots.
% (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida,
% Tohoku University, Japan.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%	Sept. 16, 1998, Last modification by K.Yoshida
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%
% I_KINE	Inverse Kinematics
%		Calculate joint angle solution (q_sol) for
%		given end point position/orientation.
%		It takes an iterative approach from a specified
%		initial posture (q_init).
%
% I_KINE    逆运动学
%        根据给定端点位置/姿态计算关节角度解（q_sol）。
%        该算法从指定初始姿态（q_init）出发采用迭代方法。

% 计算全局逆运动学
function [q_sol,flag]= m_ik_2( LP, SV, POS_e, ORI_e, q_init, Path )

loop_limit = 500;
norm_limit = 1e-8;
gain  = 0.1*ones(6,1);
SV.q = q_init;
m = length(Path);
% 全局 Jacobian 为 (6*m) × LP.num_q
J_global = zeros(6*m, LP.num_q);
flag = 0;

for iter = 1:loop_limit
    % ------ 更新前向运动学 ------
    SV = calc_aa_new_mex(LP, SV);
    SV = calc_pos_new_mex(LP, SV);
    % ========= 1. 计算每条路径的误差 DT_k =========
    DT = zeros(6*m,1);

    for k = 1:m
        % --- 当前末端位姿 ---
        [now_p, now_o] = f_kin_end(LP, SV, Path{k});

        % --- 误差 ---
        err_p = POS_e{k} - now_p;
        err_o = tr2diff(ORI_e{k}, now_o);
        err = [ err_p; err_o ];
        err = err.*gain;
        DT(k*6-5:k*6) = err;

        % ========= 1.1 计算每条路径的 Jacobian =========
        Jacob = calc_je(LP, SV, Path{k});

        % ========= 1.2 把 J_k 填到全局 Jacobian =========
        row_s = (k-1)*6 + 1; % k=1 row_s=1 | k=1 row_s=7
        row_e = k*6;         % k=1 roe_s=6 | k=2 row_s=12

        % 把路径上的 Jacobian 映射到全局关节编号
        for idx = 1:length(Path{k})
            joint_id = Path{k}(idx);
            J_global(row_s:row_e, joint_id) = Jacob(:, joint_id);
        end
    end
    % ========= 2. 求解 dq =========
    dq = pinv(J_global) * DT;

    % ========= 3. 更新关节 =========
    SV.q = SV.q + dq;
    % SV.q = max(0, min(SV.q, pi/2));

    Jacob = 0 * Jacob ;
    % ========= 4. 收敛判断 =========
    if norm(dq) < norm_limit
        fprintf('√ Converged at iter:%d\n\n',iter);
        break;
    end
end

if iter >= loop_limit
    flag = 1; 
    disp('× unConverged yet');
end

q_sol = SV.q;
end

