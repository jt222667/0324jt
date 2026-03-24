function Goal = Goal_init(LP,SV)
Goal.Path = SV.Path;
Goal.POS  = SV.POS_e;
Goal.ORI  = SV.ORI_e;
Goal.change = zeros(1,SV.m);
q0 = rand(LP.num_joint,1)  * pi * 2;
SV = Trans_aa_pos_init(LP, SV, q0);
for i = 2:SV.m
    [ Goal.POS{i} , Goal.ORI{i} ] = f_kin_end(LP, SV, SV.Path{i});
end
end