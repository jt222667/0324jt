function c_sig = wei_Accuracy(sig)
% wei_Accuracy
% -------------------------------------------------------------------------
% 将精度指标 sig (位置误差, 越小越好) 映射为待最小化代价 c_sig。
%
% 形式:
%   c_sig = LAMBDA_SIG * (sig / SIG_REF) ^ P_SIG
%
% 其中 SIG_REF 是“可接受误差”基准(默认 1 mm)；
% 当 sig = SIG_REF 时，c_sig = LAMBDA_SIG。
% -------------------------------------------------------------------------

% 默认参数(可按任务精度需求调整)
SIG_REF    = 1.0e-3; % 1 mm
LAMBDA_SIG = 1.0;    % 权重系数
P_SIG      = 2.0;    % 指数(2=二次惩罚，强调大误差)

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
