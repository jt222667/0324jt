function SV = aa_pos(LP, SV, q0)

SV.R0 = [ 0 0 0 ]'; 
SV.A0 = eye(3); 

SV.q(LP.J_type == 'R') = q0;

SV = calc_aa_0318( LP, SV );
SV = calc_pos_0318( LP, SV );

for i = 1:SV.m
    [ SV.POS_e{i} , SV.ORI_e{i} ] = f_kin_end(LP, SV, SV.Path{i});
end

end