function [ref] = sine_interp(p1, p2, tau, h)
%SINE_INTERP Summary of this function goes here
%   Detailed explanation goes here
xyzlin = p1 + tau.*(p2 - p1);
zsine = h*sin(pi*tau);
ref = xyzlin;
ref(3,:) = ref(3,:) + zsine;
end

