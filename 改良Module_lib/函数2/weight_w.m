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

if nargin < 2 || isempty(cfg)
    cfg = local_get_weight_cfg();
end

EPS_W    = local_get_field(cfg, 'eps_w',    1.0e-12);
W_REF    = local_get_field(cfg, 'w_ref',    1.0);
LAMBDA_W = local_get_field(cfg, 'lambda_w', 1.0);
P_W      = local_get_field(cfg, 'p_w',      1.0);
W_MODE   = local_get_field(cfg, 'w_mode',   'min');

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

switch lower(W_MODE)
    case 'mean'
        w_eff = mean(w(mask));
    otherwise
        w_eff = min(w(mask));
end

ratio = W_REF / max(w_eff, EPS_W);
c_w = LAMBDA_W * (ratio ^ P_W);

if ~isfinite(c_w)
    c_w = inf;
end
end

function cfg = local_get_weight_cfg()
cfg = struct();
try
    if evalin('base', 'exist(''weight_cfg'',''var'')')
        tmp = evalin('base', 'weight_cfg');
        if isstruct(tmp)
            cfg = tmp;
        end
    end
catch
    % ignore base-workspace access errors
end
end

function v = local_get_field(s, name, default_value)
if isstruct(s) && isfield(s, name)
    v = s.(name);
else
    v = default_value;
end
end