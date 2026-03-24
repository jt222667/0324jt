%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots.
% (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida,
% Tohoku University, Japan.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%	February 4, 1999, Last modification by K.Yoshida
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%
% CALC_POS	Calculate the position vectors of each link
%
%		CALC_POS returns the position vectors RR in the Inertia frame.
%
% CALC_POS    计算每个连杆的位置向量
%
%        CALC_POS 返回惯性坐标系中的位置向量 RR。

function SV = calc_pos_new( LP, SV )

for i = 1 : LP.num_q

    if LP.BB(i) == 0
        A_I_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i));
        if LP.J_type(i) == 'R'
            SV.RR(:,i) = SV.R0(:) + LP.PBcp(:,LP.SN(i)) + SV.A0*A_I_i*LP.Pp(:,LP.module(i));
            % P(惯性系原点~基座原点) + P(基座原点~基座接口) + P(基座接口~模块关节点)
        else
        end

    else
        A_I_BB = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3);
        if LP.J_type(i) == 'R'
            SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.Pd(:,LP.module(LP.BB(i)))+ A_I_BB*LP.Rd(:,:,LP.module(LP.BB(i)))*cz(LP.align(i))*LP.Pp(:,LP.module(i));
            % P(惯性系原点~父模块关节点) + P(父模块关节点~父模块远端点) + P(父模块远端点~当前模块关节点)
        else
        end
    end

end


% function SV = calc_pos_new( LP, SV )
% 
% Ez = [0; 0; 1];       % 初始化 Ez
% 
% % If a Multi body system,
% 
% % Calculation of position vectors
% for i = 1 : LP.num_q
% 
%     % Current (i-th) link connects to the 0-th link
%     if LP.BB(i) == 0
% 
%         A_I_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i));
% 
%         % Rotational joint
%         if LP.J_type(i) == 'R'
%             SV.RR(:,i) = SV.R0(:) + LP.PBcp(:,LP.SN(i)) + SV.A0*A_I_i*LP.Pp(:,LP.module(i));
% 
%             % SV.RR(:,i) = SV.R0(:) + SV.A0*LP.c0(:,i) - A_I_i*LP.cc(:,i,i);
%         else
%             % SV.RR(:,i) = SV.R0(:) + SV.A0*LP.c0(:,i) + A_I_i*( Ez*SV.q(i)-LP.cc(:,i,i) );
%         end
%     else
% 
%         % A_I_1_BB  = SV.AA(:,LP.BB(i-1)*3-2:LP.BB(i-1)*3);
%         % A_I_BB = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3);
% 
%         A_I_BB = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3);
% 
%         % Rotational joint
%         if LP.J_type(i) == 'R'
%             % SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.cc(:,LP.BB(i),i) - A_I_i*LP.cc(:,i,i);
%             SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.Pd(:,LP.module(LP.BB(i)))+ A_I_BB*LP.Rd(:,:,LP.module(LP.BB(i)))*cz(LP.align(i))*LP.Pp(:,LP.module(i));
% 
%             % Prismatic joint
%         else
%             % SV.RR(:,i) = SV.RR(:,LP.BB(i)) + A_I_BB*LP.cc(:,LP.BB(i),i) + A_I_i*( Ez*SV.q(i)-LP.cc(:,i,i) );
% 
%         end
% 
%     end
% 
% end