function [L, P] = calcLiftAndProjectionMatrices(dsdx, v_h)
%CALCLIFTANDPROJECTIONMATRICES Summary of this function goes here
%   Detailed explanation goes here
n = numel(dsdx);
dsdx = reshape(dsdx, [], 1);

I = eye(n);

if nargin < 2
    v_h = I(:,1);
end

% normalize
v_n = dsdx/norm(dsdx);

B = zeros(n);

B(:,end) = v_n;

v_temp = cross(v_h, v_n);
B(:, end - 1) = v_temp/norm(v_temp);

for i = n-2:-1:1
    v_temp = cross(B(:, i + 2), B(:, i + 1));
    B(:, i) = v_temp/norm(v_temp);
end

P_b = I(1:end-1, :);

P = P_b*B';
L = P';
end

