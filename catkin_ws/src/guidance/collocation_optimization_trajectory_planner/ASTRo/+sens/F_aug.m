function [zdot] = F_aug(t, z, domain, controller, params, intermediary_jacobians, cp)
%F_AUG Summary of this function goes here
%   Detailed explanation goes here

if nargin > 6
    tau = (t-cp.ts(1))/(cp.ts(end)-cp.ts(1));

    x = kin.EvaluateBezier(tau, cp.points);

    phi = reshape(z, 36, 36);

    A = sens.calcJacobian(t - cp.ts(1), x, domain, controller, params, intermediary_jacobians);
% %     A = sens.findiff(@(y) domain.secondOrderDynamics(t - cp.ts(1), y, controller, params, []), x);
    dphi = A*phi;
    zdot = reshape(dphi,[],1);
else
    x = z(1:36);
    phi = reshape(z(37:end), 36, 36);
    dx = domain.calcDynamics(t, x, controller, params, []);
    A = sens.calcJacobian(t, x, domain, controller, params, intermediary_jacobians);
    dphi = A*phi;

    zdot = [dx; reshape(dphi, [], 1)];
end
end