%% 单条分支的可操作度
function w = calc_Manipulability_0318(LP, SV)

w = zeros(1,SV.m);

for i = 1:SV.m
    Jacob = calc_je_0318( LP, SV , i);
    JJT = Jacob * Jacob';
    det_val = det(JJT);
    if det_val > 0
        w(i) = sqrt(det_val);
    else
        w(i) = 0;
    end
    % fprintf('w(%d) = %d\n',i,w(i));
end

end
