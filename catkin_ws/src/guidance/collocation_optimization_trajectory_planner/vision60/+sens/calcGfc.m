function [gfc] = calcGfc(domain, x)
%CALCGFC Summary of this function goes here
%   Detailed explanation goes here
nx = 18;
q = x(1:nx);
dq = x(nx+1:end);

Mmat = domain.calcMassMatrix(q);

control_name = fieldnames(domain.Inputs.Control);

Be = feval(domain.Gmap.Control.(control_name{1}).Name,q);
Je = sens.calcJe(domain, x);
XiInv = sens.calcXiInv(domain, x);

Ie = eye(nx);


gfc = [
    zeros(size(Be));
    Mmat \ (Ie - transpose(Je)* (XiInv \ (Je / Mmat))) * Be];

end

