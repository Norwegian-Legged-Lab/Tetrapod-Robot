function [phi_final] = calcIntegratePhi(phi0, flow, domain, control, param)
%CALCINTEGRATEPHI Summary of this function goes here
%   Detailed explanation goes here
ts = [flow.t(1), flow.t(end)];
phi0vec = reshape(phi0, [], 1);

[t, phivec] = ode45(@(t, x) sens.phi_f(t, x, flow, domain, control, param), ts, phi0vec);

phi_final = reshape(phivec(end,:)', 36, 36);

end

