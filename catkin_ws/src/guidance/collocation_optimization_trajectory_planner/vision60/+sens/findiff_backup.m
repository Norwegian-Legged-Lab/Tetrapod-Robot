function [J] = findiff(f,x, idx)
%FINDIFF Summary of this function goes here
%   Detailed explanation goes here

h = 1e-7;

if nargin < 3
    idx = 1:length(x);
end

n_vars = length(idx);
n_fun = size(f(x), 1);

h_vec_ext = h*eye(length(x));
h_vec = h_vec_ext(:,idx);

x_p = x + h_vec;
x_m = x - h_vec;

J = zeros(n_fun, n_vars);

for i = 1:n_vars
    f_p = f(x_p(:,i));
    f_m = f(x_m(:,i));
    
    J(:,i) = (f_p - f_m)/(2*h);
end


end
