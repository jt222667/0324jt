%% 3.17 12:44 修正f_kin_end
% 基于射线搜索的工作空间边界优化法
clc;
clear;
RP_data = Module_Lib();
% [1 2 1 2 1 2 1] SRS; [1 2 3 1 2 3 1] 甜甜圈; [1 1 1 2 1 2 2] 空心
Configuration_Lib ={[1 2 1 2 1 2 1] [1 2 3 1 2 3 1] [1 1 1 2 1 2 2]};
module =   [...
    Configuration_Lib{1} ...
    Configuration_Lib{1} ...
    Configuration_Lib{1}];
install =  [1 1 1 1 1 1 1 ...
            1 1 1 1 1 1 1 ...
            1 1 1 1 1 1 1];
align =    [0 0 0 0 0 0 0 ...
            0 0 0 0 0 0 0 ...
            0 0 0 0 0 0 0];
sequence = [0  1  2  3  4  5  6 ...
            0  8  9  10 11 12 13 ...
            0  15 16 17 18 19 20];

LP = LP_generate(module, install, align, sequence, RP_data);
SV = SV_generate(LP);

SV = calc_aa_new( LP, SV );
SV = calc_pos_new( LP, SV );

m = sum(LP.SE);

Path = cell(1,m);
for i = 1:m
    Path{i} = j_num(LP , i);
end

% 生成空间均匀的射线方向 (斐波那契球面算法)
Rays = 500;
dirs = zeros(Rays, 3);
phi = acos(1 - 2*(1:Rays)/(Rays+1));
theta = pi * (1 + sqrt(5)) * (1:Rays);
dirs(:,1) = sin(phi) .* cos(theta);
dirs(:,2) = sin(phi) .* sin(theta);
dirs(:,3) = cos(phi);

% 2. 优化器设置
options = optimoptions('fmincon', 'Display', 'off', 'Algorithm', 'sqp', 'MaxFunctionEvaluations', 3000);
lb = zeros(LP.num_q, 1);
ub = ones(LP.num_q, 1) * 2 * pi;

% 存储边界点
W = zeros(Rays, 3, m);

fprintf('开始进行边界优化求解，共 %d 个方向...\n', Rays);
parfor i = 1:Rays
    for j = 1:m
        v = dirs(i, :)';
        obj_fun = @(q) NP(q, LP, SV, Path{j}, v, RP_data.PBcp(:,j));
        q0 = rand(LP.num_q, 1) * 2*pi;
        [q_opt, ~] = fmincon(obj_fun, q0, [], [], [], [], lb, ub, [], options);

        SV_opt = SV;
        SV_opt.q = q_opt;
        SV_opt = calc_aa_new(LP, SV_opt);
        SV_opt = calc_pos_new(LP, SV_opt);
        W(i,:,j) = f_kin_end(LP,SV_opt,Path{j});
    end
    if mod(i, 100) == 0
        fprintf('已求解 %d / %d 个边界点\n', i, Rays);
    end
end

% 绘制优化的包络面
colors = {'r', 'g', 'b', 'c', 'm', 'y', 'k'};
figure;
hold on;
for j = 1:m
    k = convhulln(W(:,:,j));
    trisurf(k, W(:,1,j), W(:,2,j), W(:,3,j), ...
        'FaceColor', colors{j}, 'FaceAlpha', 0.2, 'EdgeColor', 'none');
end
camlight;
xlabel('X/m'); ylabel('Y/m'); zlabel('Z/m');
title('优化法生成的精确包络面 ');
axis equal;


% 1. 计算原始边界点的凸包体积
[~, V_origin] = convhulln(W(:,:,1));
% 2. 定义待测点
P_test = [0,0,7.49];
% 3. 将待测点加入点集，计算新体积
[~, V_new] = convhulln([W(:,:,1); P_test]);
% 4. 判断逻辑 (1e-6 是为了避开浮点数计算误差)
if V_new > V_origin + 1e-3
    disp('点在工作空间【外部】');
else
    disp('点在工作空间【内部】');
end

% 1. 计算原始边界点的凸包体积
[~, V_origin] = convhulln(W(:,:,1));
% 2. 定义待测点
P_test = [0,0,7.51];
% 3. 将待测点加入点集，计算新体积
[~, V_new] = convhulln([W(:,:,1); P_test]);
% 4. 判断逻辑 (1e-6 是为了避开浮点数计算误差)
if V_new > V_origin + 1e-3
    disp('点在工作空间【外部】');
else
    disp('点在工作空间【内部】');
end