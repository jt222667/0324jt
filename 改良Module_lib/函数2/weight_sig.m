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

SIG_REF    = cfg.sig_ref;
LAMBDA_SIG = cfg.lambda_sig;
P_SIG      = cfg.p_sig;

ratio = sig / SIG_REF;
c_sig = LAMBDA_SIG * (ratio ^ P_SIG);

if ~isfinite(c_sig)
    c_sig = inf;
end
end
