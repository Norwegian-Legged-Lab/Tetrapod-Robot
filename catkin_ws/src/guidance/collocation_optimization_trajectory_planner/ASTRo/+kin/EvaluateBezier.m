function [p, v, a] = EvaluateBezier(t, cp)
%EVALUATEBEZIER Summary of this function goes here
%   for an 1xnt parameter array t and NxM array cp, evaluate the N-dimensional bezier
%   curve defined by M N-dimensional control points at each of the values
%   in t, t consists of values between 0 and 1. Return the bezier curve
%   itself, but also its two first derivatives.
order = size(cp,2) - 1;

vel_order = order - 1;

acc_order = order - 2;

t = reshape(t, [], 1);

bin_coeff = factorial(order)./(factorial(0:order).*factorial(order:-1:0));

basis_pol = bin_coeff.*(t.^(0:order)).*((1-t).^(order:-1:0));

vel_bin_coeff = factorial(vel_order)./(factorial(0:vel_order).*factorial(vel_order:-1:0));

vel_basis_pol = vel_bin_coeff.*(t.^(0:vel_order)).*((1-t).^(vel_order:-1:0));

acc_bin_coeff = factorial(acc_order)./(factorial(0:acc_order).*factorial(acc_order:-1:0));

acc_basis_pol = acc_bin_coeff.*(t.^(0:acc_order)).*((1-t).^(acc_order:-1:0));

p = cp*basis_pol.';

q = order*diff(cp, 1, 2);

v = q*vel_basis_pol.';

r = vel_order*diff(q, 1, 2);

a = r*acc_basis_pol.';