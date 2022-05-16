function [lambda] = calcLambda(domain, controller, params, t, x)
%CALCLAMBDA Summary of this function goes here
%   Detailed explanation goes here

nx = 18;
q = x(1:nx);
dq = x(nx+1:end);

XiInv = sens.calcXiInv(domain, x);
Jedot = sens.calcJedot(domain, x);
Je = sens.calcJe(domain, x);
Fv = domain.calcDriftVector(q, dq);
Mmat = domain.calcMassMatrix(q);
Gv_u = sens.calcGv_u(domain, controller, params, t, x);

lambda = -XiInv \ (Jedot * dq + Je * (Mmat \ (Fv + Gv_u)));
end

