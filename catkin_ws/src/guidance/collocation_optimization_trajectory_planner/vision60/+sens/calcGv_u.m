function [Gv_u] = calcGv_u(domain, controller, params, t, x)
%CALCGV_U Summary of this function goes here
%   Detailed explanation goes here
nx = 18;
q = x(1:nx);
dq = x(nx+1:end);

control_name = fieldnames(domain.Inputs.Control);

Be = feval(domain.Gmap.Control.(control_name{1}).Name,q);

vfc = sens.calcVfc(domain, x);
gfc = sens.calcGfc(domain, x);

u = calcControl(controller, t, x, vfc, gfc, domain, params, []);

Gv_u = Be*u;
end

