function cost = joint_IK_cost_0325(q, LP, SV, Goal, w_ref, change)

SV_tmp = Trans_aa_pos_init(LP, SV, q);

pos_err = 0;
for i = change
    pos_err = pos_err + norm(Goal.POS{i} - SV_tmp.POS_e{i});
end

w_struct = calc_Manipulability_0318(LP, SV_tmp);
w_curr = w_struct(change);

ratio = (w_curr + 1e-9) ./ w_ref;
cost_w = -sum(log(ratio));

cost = pos_err + cost_w;
end



