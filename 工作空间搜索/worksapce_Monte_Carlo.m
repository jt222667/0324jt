%% 3.17 12:46 修正f_kin_end

clc;
clear;
RP_data = Module_Lib();
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

% 蒙塔卡罗工作空间
num_samples = 100000;
W = zeros(num_samples,3,m);
q = rand(LP.num_q, num_samples) * (pi * 2) ;
parfor i = 1:num_samples
    SV_i = SV;
    SV_i.q = q(:,i);
    SV_i = calc_aa_new(LP, SV_i);
    SV_i = calc_pos_new(LP, SV_i);
    for j = 1:m
        W(i,:,j) = f_kin_end(LP, SV_i, Path{j})';
    end
    i
end

% 绘制点云
figure;
colors = {'r', 'g', 'b', 'c', 'm', 'y', 'k'};
hold on;
for j = 1:m
    scatter3(W(:,1,j), W(:,2,j), W(:,3,j), 1.5, colors{j}, 'filled');
end
xlabel('X/m');
ylabel('Y/m');
zlabel('Z/m');
title('工作空间-离散点');

% 绘制包络
shp = cell(1, 1);
for j = 1:m
    shp{j} = alphaShape(W(:,:,j),0.5);
end
figure; hold on; grid on; view(3);
axis equal;
axis(7*[-1 1 -1 1 -1 1]);
colors = {'r', 'g', 'b', 'c', 'm', 'y', 'k'};
for j = 1:m
    arm = plot(shp{j});
    arm.EdgeColor = 'none';
    arm.FaceColor = colors{j};
    arm.FaceAlpha = 0.2;
end
camlight;
xlabel('X/m');
ylabel('Y/m');
zlabel('Z/m');
title('工作空间-包络面');

inShape(shp{1}, 0,0,7.47)










