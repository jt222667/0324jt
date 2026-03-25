function c_sig = weight_sig(sig, cfg)
% wei_Accuracy
% -------------------------------------------------------------------------
% 将精度指标 sig(越小越好) 映射为最小化代价 c_sig。
%
% 支持统一配置：
%   1) 第二参数 cfg 直接传入
%   2) 若未传入，则尝试 evalin('base','weight_cfg')
%   3) 否则使用默认值
%
% cfg 字段：
%   .sig_ref, .lambda_sig, .p_sig
% -------------------------------------------------------------------------

if nargin < 2 || isempty(cfg)
    cfg = local_get_weight_cfg();
end

SIG_REF    = local_get_field(cfg, 'sig_ref',    1.0e-3);
LAMBDA_SIG = local_get_field(cfg, 'lambda_sig', 1.0);
P_SIG      = local_get_field(cfg, 'p_sig',      2.0);

if isempty(sig) || ~isfinite(sig) || sig < 0
    c_sig = inf;
    return;
end

ratio = sig / SIG_REF;
c_sig = LAMBDA_SIG * (ratio ^ P_SIG);

if ~isfinite(c_sig)
    c_sig = inf;
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