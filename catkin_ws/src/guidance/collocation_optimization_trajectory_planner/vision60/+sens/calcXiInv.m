function [XiInv] = calcXiInv(domain, x)
%CALCXIINV Summary of this function goes here
%   Detailed explanation goes here
nx = 18;
q = x(1:nx);
dq = x(nx+1:end);
M = domain.calcMassMatrix(q);
Je = sens.calcJe(domain, x);
XiInv = Je * (M \ transpose(Je));

end

