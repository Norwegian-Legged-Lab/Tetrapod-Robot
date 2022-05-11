function [y_fin] = calcFinalFlowState(odefun, ts, y0, odeopts)
%CALCLASTFLOWSTATE Summary of this function goes here
%   Detailed explanation goes here
if nargin > 3
    [t, y] = ode45(@(t, z) odefun(t, z), ts, y0, odeopts);
else
    [t, y] = ode45(@(t, z) odefun(t, z), ts, y0);
end
y_fin = y(end,:)';
end

