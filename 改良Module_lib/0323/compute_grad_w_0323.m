function grad_w = compute_grad_w_0323(LP, SV, i)

eps = 1e-6;

grad_w = zeros(LP.num_joint,1);

q0 = SV.q(LP.J_type=='R');

for k = 1:LP.num_joint

    q_p = q0;
    q_m = q0;
    q_p(k) = q0(k) + eps;
    q_m(k) = q0(k) - eps;

    % 正向
    SV_tmp = Trans_aa_pos_init(LP, SV, q_p);
    w_p = calc_Manipulability_0318(LP, SV_tmp);

    % 反向
    SV_tmp = Trans_aa_pos_init(LP, SV, q_m);
    w_m = calc_Manipulability_0318(LP, SV_tmp);

    grad_w(k) = (w_p(i) - w_m(i)) / (2*eps);
end

end