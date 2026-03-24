%% 3.17 11.:39 修正f_kin_end
clc;clear;
RP_data = Module_Lib();
module =   [1 2 1 2 1 2 1 ...
    1 2 1 2 1 2 1 ...
    1 2 1 2 1 2 1];
install =  [1 1 1 1 1 1 1 ...
    1 1 1 1 1 1 1 ...
    1 1 1 1 1 1 1];
align =    [0 0 0 0 0 0 0 ...
    0 0 0 0 0 0 0 ...
    0 0 0 0 0 0 0];
sequence = [0  1  2  3  4  5  6 ...
    0  8  9  10 11 12 13 ...
    0  15 16 17 18 19 20];

LP = LP_generate(module,install,align,sequence,RP_data);
SV = SV_generate(LP);

% SV.q =  rand(LP.num_q, 1) * (pi*2);

SV = calc_aa_new( LP, SV );
SV = calc_pos_new( LP, SV );

path1 = j_num( LP , 1 );
path2 = j_num( LP , 2 );
path3 = j_num( LP , 3 );



figure('Color','white'); hold on; grid on; view(3);
axis equal tight;
xlabel('X/m'); ylabel('Y/m'); zlabel('Z/m');
title('机器人末端点三维分布（标注+相邻点连线）');
paths = {path1, path2, path3};
colors = {'b-','k-','m-'};
for i=1:3
    % 绘制路径和标记点
    plot3(SV.RR(1,paths{i}),SV.RR(2,paths{i}),SV.RR(3,paths{i}),colors{i},...
        'LineWidth',5,'Marker','o','MarkerSize',10,'MarkerEdgeColor','red','MarkerFaceColor','none',...
        'DisplayName', ['路径',num2str(i)]);
    % 标注每个点的坐标（核心新增逻辑）
    for j=1:length(paths{i})
        % 提取当前点坐标
        x = SV.RR(1, paths{i}(j));
        y = SV.RR(2, paths{i}(j));
        z = SV.RR(3, paths{i}(j));
        % 在点旁标注坐标（保留3位小数，偏移0.02避免遮挡）
        text(x+0.02, y+0.02, z+0.02, ...
            sprintf('(%.3f,%.3f,%.3f)',x,y,z), ...
            'FontSize',8, 'Color',colors{i}(1)); % 字体颜色与路径一致
    end
end
[ POS_e1 , ORI_e1 ] = f_kin_end( LP, SV, path1)
[ POS_e2 , ORI_e2 ] = f_kin_end( LP, SV, path2)
[ POS_e3 , ORI_e3 ] = f_kin_end( LP, SV, path3)
plot3(POS_e1(1),POS_e1(2),POS_e1(3),colors{i},...
    'LineWidth',5,'Marker','o','MarkerSize',10,'MarkerEdgeColor','y','MarkerFaceColor','none',...
    'DisplayName', ['末端点',num2str(i)]);
plot3(POS_e2(1),POS_e2(2),POS_e2(3),colors{i},...
    'LineWidth',5,'Marker','o','MarkerSize',10,'MarkerEdgeColor','y','MarkerFaceColor','none',...
    'DisplayName', ['末端点',num2str(i)]);
plot3(POS_e3(1),POS_e3(2),POS_e3(3),colors{i},...
    'LineWidth',5,'Marker','o','MarkerSize',10,'MarkerEdgeColor','y','MarkerFaceColor','none',...
    'DisplayName', ['末端点',num2str(i)]);
legend('Location','best');
hold off;




