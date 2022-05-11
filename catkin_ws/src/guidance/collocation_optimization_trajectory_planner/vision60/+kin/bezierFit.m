function [cp] = bezierFit(t, q, n)
%BEZIERFIT Computes the best n-order bezier curve fit in least-squares
%sense using BLUE
%   Detailed explanation goes here
if size(q,1) ~= length(t)
    q = q';
end

tau = (t - t(1))/(t(end) - t(1));
tau = reshape(tau, [], 1);

ks = 0:n;

nck_vec = factorial(n)./(factorial(ks).*factorial(n - ks));

X = (((1 - tau).^(n-ks)).*(tau.^(ks))).*nck_vec;

cp = ((X'*X)\X'*q)';
end

