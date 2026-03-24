function cost = joint_IK_cost_0323(q, LP, SV)

SV = Trans_aa_pos_init(LP, SV, q);
w = calc_Manipulability_0318(LP,SV);
cost = -w(2);

end