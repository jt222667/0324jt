function neg_proj = NP(q, LP, SV, path, v,P) % Negative Projection 负投影
    SV.q = q;
    SV = calc_aa_new(LP, SV);
    SV = calc_pos_new(LP, SV);
    [pos_tmp,~] = f_kin_end(LP, SV, path);
    pos = pos_tmp - P;
    neg_proj = -1 * dot(pos', v);
end

