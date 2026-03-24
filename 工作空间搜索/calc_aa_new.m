%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots.
% (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida,
% Tohoku University, Japan.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   version 1 // Oct 4, 1999, Last modification by K.Yoshida
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%
% CALC_AA 	Calculate the coordinate transfrom matrices in the Robotics convention.
%
%   CALC_TRN( A0 , q ) returns the coordinate tranformation matrices AA.
%   AA is a collection of A_I_1, A_I_2, ... A_I_n.
%
% CALC_AA     计算机器人学坐标系中的坐标变换矩阵。
%
%   CALC_TRN( A0 , q ) 返回坐标变换矩阵 AA。
%   AA 是由 A_I_1, A_I_2, ... A_I_n 组成的集合。

function SV = calc_aa_new( LP, SV )

A_I_0 = SV.A0;
A_BB_i = zeros(3,3);
A_0_i = zeros(3,3);

for i = 1 : LP.num_q

    if LP.BB(i) == 0
        if LP.J_type(i) == 'R'
            A_0_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        else
        end
        SV.AA(:,i*3-2:i*3) = A_I_0*A_0_i; 
        % R(惯性系原点~基座原点)*R(基座原点~当前模块关节点)
    else
        if LP.J_type(i) == 'R'
            A_BB_i = LP.Rd(:,:,LP.module(i-1))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        else
        end
        SV.AA(:,i*3-2:i*3) = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3)*A_BB_i; 
        % R(惯性系原点~父模块关节点)*R(父模块关节点~当前模块关节点)
    end
    
end


% function SV = calc_aa_new( LP, SV )
%
% A_I_0 = SV.A0;
% A_BB_i = zeros(3,3);
% A_0_i = zeros(3,3);
%
% for i = 1 : LP.num_q
%
%     if LP.BB(i) == 0
%         if LP.J_type(i) == 'R'
%             A_0_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
%             % A_0_i = rpy2dc( LP.Qi(1,i) , LP.Qi(2,i) , LP.Qi(3,i) )*cz( SV.q(i) );
%
%         else
%             % A_0_i = (rpy2dc( LP.Qi(:,i) ));
%         end
%         SV.AA(:,i*3-2:i*3) = A_I_0*A_0_i; % R(惯性系原点~基座原点)*R(基座原点~基座接口)
%
%     else % 此关节是不是0关节
%
%         if LP.J_type(i) == 'R'
%             A_BB_i = LP.Rd(:,:,LP.module(i-1))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
%
%             % A_BB_i = rpy2dc( LP.Qi(1,i), LP.Qi(2,i), LP.Qi(3,i) )*cz( SV.q(i) );
%
%         else
%             % A_BB_i = (rpy2dc( LP.Qi(:,i) ));
%         end
%         SV.AA(:,i*3-2:i*3) = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3)*A_BB_i;
%
%     end
%
% end