function [vfc] = calcVfc(domain, x)
%CALCVFC Summary of this function goes here
%   Detailed explanation goes here

nx = 18;
q = x(1:nx);
dq = x(nx+1:end);

Mmat = domain.calcMassMatrix(q);
Ie = eye(nx);
Fv = domain.calcDriftVector(q, dq);
Je = sens.calcJe(domain, x);
XiInv = sens.calcXiInv(domain, x);
Jedot = sens.calcJedot(domain, x);

vfc = [
    dq;
    Mmat \ ((Ie-transpose(Je) * (XiInv \ (Je / Mmat))) * (Fv) - transpose(Je) * (XiInv \ Jedot * dq))];

end

