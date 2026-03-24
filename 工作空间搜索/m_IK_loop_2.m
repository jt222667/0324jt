function [q_sol,Flag] = m_IK_loop_2(LP, SV, POS_e, ORI_e, Path)
limit = 2;
for i = 1:limit
    Flag = 0;
    q_init =  rand(LP.num_q, 1) * (pi*2);
    [q_sol, flag] = m_ik_2( LP, SV, POS_e, ORI_e, q_init, Path );
    fprintf('=== Loop:%d\n\n', i);
    if flag == 0
        fprintf('=== m_ik_2 在第%d次找到了\n\n', i);
        break
    end
end
    if i>=limit
        Flag = 1;
    end
end
