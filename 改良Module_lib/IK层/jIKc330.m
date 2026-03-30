function cost = jIKc330(q, LP, SV, Goal, change)

SV_tmp = Trans_aa_pos_init(LP, SV, q);

pos_err = 0;
for i = change
    pos_err = pos_err + norm(Goal.POS{i} - SV_tmp.POS_e{i});
end

if pos_err < 1e-4
    w = calc_Manipulability_0318(LP, SV_tmp);
    [sig, ~]= calc_Accuracy_0325(LP, SV_tmp);
    cost = weight_w(w, LP.weight_cfg) + weight_sig(sig, LP.weight_cfg);
else
    cost = 1e12;
end

end

