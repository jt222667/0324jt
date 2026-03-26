function c_w = weight_w(w, cfg)
% wei_Manipulability
% -------------------------------------------------------------------------
% 将可操作度 w(越大越好) 映射为最小化代价 c_w(越小越好)
%
% 支持统一配置：
%   1) 第二参数 cfg 直接传入
%   2) 若未传入，则尝试 evalin('base','weight_cfg')
%   3) 否则使用默认值
%
% cfg 字段：
%   .eps_w, .w_ref, .lambda_w, .p_w, .w_mode('min'|'mean')
% -------------------------------------------------------------------------

EPS_W    = cfg.eps_w;       % 防止除0
W_REF    = cfg.w_ref;       % w参考值
LAMBDA_W = cfg.lambda_w;    % 权重系数
P_W      = cfg.p_w;         % 指数
W_MODE   = cfg.w_mode;      % 模式 min / mean

if isempty(w)
    c_w = inf;
    return;
end

switch lower(W_MODE)
    case 'max'
        w_eff = max(w);
    otherwise
        w_eff = mean(w);
end

ratio = W_REF / max(w_eff, EPS_W);
c_w = LAMBDA_W * (ratio ^ P_W);

if ~isfinite(c_w)
    c_w = inf;
end
end

