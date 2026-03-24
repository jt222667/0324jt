function cost = joint_IK_cost_0318(q, LP, SV, Goal, w_ref)

SV_tmp = Trans_aa_pos_init(LP, SV, q);

pos_err = norm(Goal.POS{2} - SV_tmp.POS_e{2});

w_struct = calc_Manipulability_0318(LP, SV_tmp);
w_curr = w_struct(2);

cost_w = -log((w_curr + 1e-9) / w_ref);

cost = pos_err + cost_w;
end


