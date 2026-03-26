%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots.
% (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida,
% Tohoku University, Japan.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%	February 4, 1998, Last modification by K.Yoshida
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%
% CALC_JTE	Translational Jacobians w.r.t.
%           for the point specified by connection vector 'joints.'
%
% CALC_JTE    关于连接向量'joints.'指定点的平移雅可比矩阵

function JJ_te = calc_jte_0318(LP, SV, k)

Ez = [0; 0; 1];       % 初始化 Ez

% Check number of joint
path_1 = SV.Path{1}(LP.J_type(SV.Path{1}) == 'R');
path_k = SV.Path{k}(LP.J_type(SV.Path{k}) == 'R');

% If a Single body,
if LP.num_q == 0
    JJ_te = [];

    % If a Multi body system,
else

    JJ_te = [];

    for i = length(path_1): -1 : 1
        A_I_i = SV.AA(:,path_1(i)*3-2:path_1(i)*3);
        temp = cross( (A_I_i*Ez) , ( SV.POS_e{k} - SV.RR(:,path_1(i))) );
        JJ_te = [ JJ_te temp ];
    end

    for i = 1 : 1 : length(path_k)
        A_I_i = SV.AA(:,path_k(i)*3-2:path_k(i)*3);
        temp = cross( (A_I_i*Ez) , ( SV.POS_e{k} - SV.RR(:,path_k(i))) );
        JJ_te = [ JJ_te temp ];
    end

end


%%%EOF
