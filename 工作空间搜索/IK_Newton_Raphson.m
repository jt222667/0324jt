%% 机器人参数初始化：随机初始姿态搜寻给定目标
%% 3.17 11.:39 修正f_kin_end
RP_data = Module_Lib();
% [1 2 1 2 1 2 1] SRS; [1 2 3 1 2 3 1] 甜甜圈; [1 1 1 2 1 2 2] 空心
Configuration_Lib ={[1 2 1 2 1 2 1] [1 2 3 1 2 3 1] [1 1 1 2 1 2 2] [2 2 2 2 2 2 2] };
module = [...
    Configuration_Lib{1} ...
    Configuration_Lib{1} ...
    Configuration_Lib{1}];
install = [...
    1 1 1 1 1 1 1 ...
    1 1 1 1 1 1 1 ...
    1 1 1 1 1 1 1];
align = [...
    0 0 0 0 0 0 0 ...
    0 0 0 0 0 0 0 ...
    0 0 0 0 0 0 0];
sequence = [...
    0  1  2  3  4  5  6 ...
    0  8  9  10 11 12 13 ...
    0  15 16 17 18 19 20];

LP = LP_generate(module, install, align, sequence, RP_data);
SV = SV_generate(LP);
SV.q =  rand(LP.num_q, 1) * (pi*2);
SV = calc_aa_new( LP, SV );
SV = calc_pos_new( LP, SV );

m = sum(LP.SE);
Path = cell(1,m);
for i = 1:m
    Path{i} = j_num(LP ,i);
end

%% 逆运动学
% 参数初始化
POS_e_start = cell(1,m);
POS_e_end   = cell(1,m);
ORI_e_start = cell(1,m);
ORI_e_end   = cell(1,m);
for i = 1:m
     [ POS_e_start{i} , ORI_e_start{i} ] = f_kin_end(LP, SV, Path{i});
end

%% 指定目标位置
POS_e_start{1} = [0;0;6];

%%

% 生成在𝑆𝑂(3)上均匀分布的随机旋转矩阵
rot_num = 200;
rot_mats = cell(1,rot_num);
for i=1:rot_num
    [Q,~] = qr(randn(3));
    if det(Q)<0
        Q(:,1) = -Q(:,1);
    end
    rot_mats{i} = Q;
end

for i = 1:rot_num
    ORI_e_start{1} = rot_mats{i};
    [q_sol_tmp, Flag] = m_IK_loop_2( LP, SV, POS_e_start, ORI_e_start, Path );
    tolerance = 1e-6;
    q_sol = mod(q_sol_tmp, 2*pi);
    q_sol(abs(q_sol - 2*pi) < tolerance) = 0;
    if Flag == 0
        fprintf('=== m_IK_loop_2 在第%d次找到了\n\n', i);
        break
    end
end

%% 用正运动学验证逆解结果
SV.q = q_sol;
SV = calc_aa_new( LP, SV );
SV = calc_pos_new( LP, SV );
for i = 1:m
    [ POS_e_end{i} , ORI_e_end{i} ] = f_kin_end(LP, SV, Path{i});
end
% 结果对比可视化
for i = 1:m
    fprintf('   POS_s{%d}: POS_e{%d}:\n', i, i);
    disp([POS_e_start{i} , POS_e_end{i}]);
    fprintf('   ORI_s{%d}:                     ORI_e{%d}:\n', i, i);
    disp([ORI_e_start{i} , ORI_e_end{i}]);
end

%% 绘构型图可视化(验证)
figure; hold on; grid on; view(3);
axis equal;
xlabel('X/m'); ylabel('Y/m'); zlabel('Z/m');
title('机器人末端点三维分布（标注+相邻点连线）');
colors = {'r', 'g', 'b', 'c', 'm', 'y', 'k'};

for i = 1:m
    x = [RP_data.PBcp(1,i) SV.RR(1, Path{i})];
    y = [RP_data.PBcp(2,i) SV.RR(2, Path{i})];
    z = [RP_data.PBcp(3,i) SV.RR(3, Path{i})];
    xe = POS_e_end{i}(1);
    ye = POS_e_end{i}(2);
    ze = POS_e_end{i}(3);
    plot3(x,y,z,colors{i},...
        'LineWidth',2,'Marker','o','MarkerSize',5,'MarkerEdgeColor','y','MarkerFaceColor','none',...
        'LineStyle',':','DisplayName', ['验证路径',num2str(i)]);
    plot3(xe,ye,ze,colors{i},...
        'LineWidth',2,'Marker','o','MarkerSize',5,'MarkerEdgeColor','m','MarkerFaceColor','none',...
        'DisplayName', ['验证路径',num2str(i),' 末端点']);
    for j=1:length(Path{i})
        text(x(j)+0.02, y(j)+0.02, z(j)+0.02, ...
            sprintf('(%.3f,%.3f,%.3f)',x(j),y(j),z(j)), ...
            'FontSize',8, 'Color','k');
    end
    text(xe+0.02, ye+0.02, ze+0.02, ...
        sprintf('(%.3f,%.3f,%.3f)',xe,ye,ze), ...
        'FontSize',12, 'Color','m');
end

xs = [RP_data.PBcp(1,:), RP_data.PBcp(1,1)];
ys = [RP_data.PBcp(2,:), RP_data.PBcp(2,1)];
zs = [RP_data.PBcp(3,:), RP_data.PBcp(3,1)];
plot3(xs, ys, zs, 'k',...
    'LineWidth',5,'Marker','o','MarkerSize',5,'MarkerEdgeColor','m','MarkerFaceColor','none',...
    'LineStyle',':','DisplayName', '基座连接点');
legend('Location','best');
hold off;










