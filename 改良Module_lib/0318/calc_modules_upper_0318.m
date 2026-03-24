function num_modules = calc_modules_upper_0318(goal,RP_data)
% 返回模块数量上限 标量
% 避障需求，工况需求，负载与刚度要求

%% 1. 基于自由度 (DoF) 的最低需求估算
% 空间中实现任意位置+姿态通常需要 6 个关节 (6 DoF)
% 考虑到模块库中可能存在纯连杆(J_type='L')，不提供自由度，
% 以及为了避免奇异形位，我们需要增加冗余关节裕度。
min_dof_required = 3;  % 因为path1含三个自由度，保证最小6自由度

%% 2. 基于臂展距离 (Reachability) 的需求估算
% 计算基座(假设在原点)到所有目标点的最大距离
max_dist = 0;
num_goals = size(goal, 2);
for i = 1:num_goals
    % 计算欧氏距离
    dist = norm(goal(:,i));
    if dist > max_dist
        max_dist = dist;
    end
end
max_dist = max_dist - norm([0;0;3.5]-[0;-0.433;-0.25]);  % 减去末端1到接口2的距离

% 根据模块库 (Module_Lib) 的数据估算平均模块长度
% 根据距离计算至少需要的模块数 (向上取整)
dist_based_modules = ceil(max_dist / RP_data.avg_length);

%% 3. 综合评估并设定绝对上限
% 取"自由度需求"和"距离需求"的最大值，再额外给 1~2 个纯连杆模块的裕度(优先连杆)
num_modules = max(min_dof_required, dist_based_modules) + 2;

% 【关键安全锁】: 防止目标点过远导致 GA 变量数爆炸，内存溢出或无法收敛
% 建议串联机器人的模块总数不要超过 12~15 个
MAX_ALLOWABLE_MODULES = 10;

if num_modules > MAX_ALLOWABLE_MODULES
    warning('目标点距离过远，计算出的模块数(%d)超出建议上限，已强制截断为 %d。', num_modules, MAX_ALLOWABLE_MODULES);
    num_modules = MAX_ALLOWABLE_MODULES;
end

% 确保输出为整数
num_modules = round(num_modules);
end
