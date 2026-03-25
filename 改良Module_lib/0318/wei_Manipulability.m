function c_w = wei_Manipulability(w)
% wei_Manipulability
% -------------------------------------------------------------------------
% 将可操作度指标 w (越大越好) 映射为待最小化代价 c_w (越小越好)
%
% 设计原则:
% 1) 采用“最弱分支优先”策略，避免某一末端奇异但均值掩盖问题。
% 2) 使用幂律惩罚，便于调参并保持单调性。
%
% 形式:
%   w_eff = min(w_i)
%   c_w = LAMBDA_W * (W_REF / max(w_eff, EPS_W)) ^ P_W
% -------------------------------------------------------------------------

% 默认参数(可按项目经验调整)
EPS_W    = 1.0e-12;  % 防止除零
W_REF    = 1.0;      % 参考可操作度(归一化基准)
LAMBDA_W = 1.0;      % 权重系数
P_W      = 1.0;      % 惩罚指数(>1 会更强调低可操作度)

if isempty(w)
    c_w = inf;
    return;
end

w = w(:);
mask = isfinite(w) & (w > 0);
if ~any(mask)
    c_w = inf;
    return;
end

% 保守：取最小可操作度作为等效指标
w_eff = min(w(mask));

ratio = W_REF / max(w_eff, EPS_W);
c_w = LAMBDA_W * (ratio ^ P_W);

if ~isfinite(c_w)
    c_w = inf;
end
end
