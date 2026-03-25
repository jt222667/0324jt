%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots.
% (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida,
% Tohoku University, Japan.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   version 1 // Oct 4, 1999, Last modification by K.Yoshida
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% F_DYN		Caluclation of Forward Dynamics
%
%		F_DYN returns accelation vectors, vd0,wd0 and qdd.
%
% F_DYN        正向动力学（递推法）：给定力矩，计算关节/基座加速度。
%
%        F_DYN 返回加速度向量、初始速度向量 vd0、初始横向速度向量 wd0 以及角动量向量 qdd。

% 这是一个“求加速度”的函数。
% 你告诉它机器人现在“在什么姿势、以多快的速度、受了多大的力”，
% 它就告诉你“下一时刻要怎么动（加速度是多少）”。
% “我现在这样动、受这么大力，你告诉我下一刻的加速度是多少？”

function SV = f_dyn( LP, SV )

Gravity = [0; 0; 0];  % 初始化 Gravity
Ez = [0; 0; 1];       % 初始化 Ez


% 更新各个连杆坐标系相对于惯性系的旋转矩阵
SV = calc_aa(LP,SV);

% 更新各个连杆质心在惯性系下的坐标
SV = calc_pos(LP,SV);

% 惯性矩阵HH的计算
HH = calc_hh(LP,SV);

% 速度相关项 Force0 的计算
% 这是通过递归牛顿 - 欧拉（RNE）逆动力学计算得到的，其中加速度和外力均为零。
vd0_tmp = SV.vd0;
wd0_tmp = SV.wd0;
qdd_tmp = SV.qdd;
Fe_tmp = SV.Fe;
Te_tmp = SV.Te;

SV.vd0 = zeros(3,1);
SV.wd0 = zeros(3,1);
SV.qdd = zeros(LP.num_q,1);
SV.Fe  = zeros(3,LP.num_q); % 作用在末端点的力
SV.Te  = zeros(3,LP.num_q); % 作用在末端点的力矩

Force0 = r_ne(LP,SV);

% Force = 广义坐标上的力，直接赋值
% Force_ex = 端点上的力，计算得到
Force = zeros(6+ LP.num_q,1);
Force_ex = zeros(6+ LP.num_q,1);

% F0、T0是作用在第0号刚体质心上的力和力矩。
Force(1:3) = SV.F0;
Force(4:6) = SV.T0;

% 若为多体系统，（该变量）是关节力矩。
if ( LP.num_q ~= 0 )
   Force(7:LP.num_q+6) = SV.tau;
end

% 计算外力 Force_ex 端点上的力。
% 若为单刚体系统，则无外力
if LP.num_q == 0
   % 注意，0号刚体不能有端点。
   Fx   = zeros(3,1);
   Tx   = zeros(3,1);
   taux = [];

% 多体系统
else
   Fx    = zeros(3,1);
   Tx    = zeros(3,1);
   taux  = zeros(LP.num_q,1);
   F_ex  = zeros(6+LP.num_q,LP.num_q); %add  2011/3/7
   
   E_3 = eye(3,3);
   O_3 = zeros(3,3);
   num_e = 1;
   
   for i = 1 : LP.num_q
      
      if LP.SE(i)==1
         joints = j_num(LP,num_e);
         tmp = calc_je(LP,SV,joints);
         JJ_tx_i = tmp(1:3,:);
         JJ_rx_i = tmp(4:6,:);
         
         num_e = num_e + 1;
         
         A_I_i = SV.AA(:,i*3-2:i*3);
         Re0i = SV.RR(:,i) - SV.R0 + A_I_i*LP.ce(:,i);
         
         Me_i = [         E_3      O_3;
                  tilde(Re0i)      E_3;
                     JJ_tx_i'  JJ_rx_i' ];
         F_ex(:,i) = Me_i * [ Fe_tmp(:,i) ; Te_tmp(:,i) ];
         
      end
      
   end
   
   for i = 1 : LP.num_q
      
      Fx   = Fx   + F_ex(1:3,i);
      Tx   = Tx   + F_ex(4:6,i);
      taux = taux + F_ex(7:6+LP.num_q,i);
      
   end
   
end

Force_ex(1:3) = Fx;
Force_ex(4:6) = Tx;
Force_ex(7:6+LP.num_q) = taux;

% 计算加速度算子
% Force = [ SV.F0; SV.T0; SV.tau ];  系统受到的总力
% Force_ex = [ Fx; Tx; taux ];       外部作用力
% τ = Force + Force_ex
% C = Force0
% a_Force是加速度算子，由 τ = H * qdd + C + G (G=0)
a_Force = Force - Force0 + Force_ex;

% 计算加速度
Acc = HH\a_Force;

vd0_tmp = Acc(1:3);
wd0_tmp = Acc(4:6);
qdd_tmp = Acc(7:6+LP.num_q);

if LP.num_q == 0
   SV.qdd=[];
end

% 更新计算加速度和末端力/力矩
SV.vd0 = vd0_tmp;
SV.wd0 = wd0_tmp;
SV.qdd = qdd_tmp;
% Fe_tmp、Te_tmp没有任何改变
SV.Fe = Fe_tmp; 
SV.Te = Te_tmp;


%%%EOF
