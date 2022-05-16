function [J] = calcFluxJacobian(t, x, domain, controller, param)
%CALCFLUXJACOBIAN Summary of this function goes here
%   Detailed explanation goes here

J = zeros(36);

h = 1e-6;

h_vec = h*eye(36);

x_p = x + h_vec;
x_m = x - h_vec;

for i = 1:36
    f_p = domain.calcDynamics(t, x_p(:,i), controller, param, []);
    f_m = domain.calcDynamics(t, x_m(:,i), controller, param, []);
    J(:,i) = (f_p - f_m)/2*h;
end

end

