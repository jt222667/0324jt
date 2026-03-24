function q_sol = m_IK_loop(LP, SV, POS_e, ORI_e, Path)
for i = 1:100
    q_init =  rand(LP.num_q, 1) * (pi*2);
    [q_sol, flag] = m_ik( LP, SV, POS_e, ORI_e, q_init, Path );
    fprintf('=== Loop:%d\n\n', i);
    if flag == 0
        fprintf('=== 在第%d次找到了\n\n', i);
        break
    end
end
end
