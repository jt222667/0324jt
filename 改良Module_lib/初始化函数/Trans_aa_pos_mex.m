function SV = Trans_aa_pos_mex(LP, SV, q0)

SV.R0 = [ 0 0 0 ]'; 
SV.A0 = eye(3); 

SV.q(LP.J_type == 'R') = q0;

SV = calc_aa_0318_mex( LP, SV );
SV = calc_pos_0318_mex( LP, SV );

for i = 1:SV.m
    [ SV.POS_e{i} , SV.ORI_e{i} ] = f_kin_end(LP, SV, SV.Path{i});
end

T = Rx(pi)*T_inv([SV.ORI_e{1},SV.POS_e{1};0 0 0 1]);
SV.A0 = T(1:3,1:3);
SV.R0 = T(1:3,4);
SV = calc_aa_0318_mex( LP, SV );
SV = calc_pos_0318_mex( LP, SV );

for i = 1:SV.m
    [ SV.POS_e{i} , SV.ORI_e{i} ] = f_kin_end(LP, SV, SV.Path{i});
end

for i = 1:length(SV.Path{1})
    SV.AA(:,3*SV.Path{1}(i)-2:3*SV.Path{1}(i)) = SV.AA(:,3*SV.Path{1}(i)-2:3*SV.Path{1}(i))*cx(pi) ;
end

end