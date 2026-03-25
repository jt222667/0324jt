function SV = calc_aa_0318( LP, SV )

A_BB_i = zeros(3,3);

for i = 1 : LP.num_q
    if LP.BB(i) == 0
        if LP.J_type(i) == 'R'
            A_0_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        else
            A_0_i = LP.RBcp(:,:,LP.SN(i))*cz(LP.align(i))*LP.T_L(1:3,1:3,LP.module(i));
        end
        SV.AA(:,i*3-2:i*3) = SV.A0*A_0_i;
    elseif LP.BB(i) ~= 0 && LP.J_type(LP.BB(i)) == 'R'
        if LP.J_type(i) == 'R'
            A_BB_i = LP.Rd(:,:,LP.module(i-1))*cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        elseif LP.J_type(i) == 'L'
            A_BB_i = LP.Rd(:,:,LP.module(i-1))*cz(LP.align(i))*LP.T_L(1:3,1:3,LP.module(i));
        end
        SV.AA(:,i*3-2:i*3) = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3)*A_BB_i;
    elseif LP.BB(i) ~= 0 && LP.J_type(LP.BB(i)) == 'L'
        if LP.J_type(i) == 'R'
            A_BB_i = cz(LP.align(i))*LP.Rp(:,:,LP.module(i))*cz(SV.q(i));
        elseif LP.J_type(i) == 'L'
            A_BB_i = cz(LP.align(i))*LP.T_L(1:3,1:3,LP.module(i));
        end
        SV.AA(:,i*3-2:i*3) = SV.AA(:,LP.BB(i)*3-2:LP.BB(i)*3)*A_BB_i;
    end
end

end








