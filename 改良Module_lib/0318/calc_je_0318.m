%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots.
% (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida,
% Tohoku University, Japan.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%	February 4, 1998, Last modification by K.Yoshida
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%
% CALC_JE	Calculation of the Jacobian Matrix
%           for the endpoint given by connection vector 'joints.'
%
% CALC_JE    计算给定joint端执行器的雅可比矩阵

function Jacobian = calc_je_0318( LP, SV , k)

% Ez = [0; 0; 1];       % 初始化 Ez
% number of links from base to endpoint.
path_1 = SV.Path{1}(LP.J_type(SV.Path{1}) == 'R');
path_k = SV.Path{k}(LP.J_type(SV.Path{k}) == 'R');
path_all = [path_1 path_k];

% Calculation of Jacobian
JJ_te = calc_jte_0318( LP, SV, k );
JJ_re = calc_jre_0318( LP, SV, k );
JJ = [ JJ_te; JJ_re ];

% Compose the Jacobian using the corresponding joints.
Jacobian = zeros(6,LP.num_joint);


for i = 1:length(path_all)
    idx = LP.R_idx(1:LP.num_joint) == path_all(i);
    Jacobian(:, idx) = JJ(:, i);
end
end
%%%EOF



