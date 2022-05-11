function [J] = calcDiscreteJacobian(t, x, node, guard, guard_params)
%CALCDISCRETEJACOBIAN Summary of this function goes here
%   Detailed explanation goes here
J = zeros(36);
h = 1e-6;
h_vec = h*eye(36);

x_p = x + h_vec;
x_m = x - h_vec;

for i = 1:36
    [t_p, x_p_post] = guard.calcDiscreteMap(t, x_p(:,i), node, guard_params);
    [t_m, x_m_post] = guard.calcDiscreteMap(t, x_m(:,i), node, guard_params);
    
    J(:,i) = (x_p_post - x_m_post)/(2*h);
end
end

