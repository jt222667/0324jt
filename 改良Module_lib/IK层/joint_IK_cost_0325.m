function cost = joint_IK_cost_0325(q, LP, SV, Goal, change)

SV_tmp = Trans_aa_pos_init(LP, SV, q);

pos_err = 0;
for i = change
    pos_err = pos_err + norm(Goal.POS{i} - SV_tmp.POS_e{i});
end

% w_struct = calc_Manipulability_0318(LP, SV_tmp);
% w_curr = w_struct(change);
%
% ratio = (w_curr + 1e-9) ./ w_ref;
% cost_w1 = -sum(log(ratio));
fprintf('===========================================');
w = calc_Manipulability_0318(LP, SV_tmp);
[sig, ~]= calc_Accuracy_0325(LP, SV_tmp);

w_w =weight_w(w, LP.weight_cfg)
w_sig =weight_sig(sig, LP.weight_cfg)
pos_error = pos_err

% 综合代价函数

cost = pos_err + weight_w(w, LP.weight_cfg) + weight_sig(sig, LP.weight_cfg);
fprintf('===========================================\n');
% cost = pos_err + cost_w;
end



