function cost = joint_IK_cost(q, LP, SV, POS_e_target, ORI_e_target, Path)
    SV.q = q;
    SV = calc_aa_new(LP, SV);
    SV = calc_pos_new(LP, SV);
    cost = 0;
    for i = 1:length(Path)
        [pos_now, ori_now] = f_kin_end(LP, SV, Path{i});
        pos_err = norm(POS_e_target{i} - pos_now);
        ori_err = norm(tr2diff(ORI_e_target{i}, ori_now));
        cost = cost + pos_err + ori_err;
    end
end