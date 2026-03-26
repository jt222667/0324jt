function Goal = Goal_init(SV)
Goal.Path = SV.Path;
Goal.POS  = SV.POS_e;
Goal.ORI  = SV.ORI_e;
Goal.change = zeros(1,SV.m);
end