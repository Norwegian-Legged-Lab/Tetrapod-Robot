function [A, B] = systemMatrices(m, I_b, yaw, r)
%F Summary of this function goes here
%   x is 13 because last is "gravity state"
R = eul2rotm([yaw, 0, 0], 'zyx');
I_w = R*I_b*R.';

B = getB(r, m, I_w, yaw);

A = zeros(12);
A(1:3, 7:9) = eye(3);
A(4:6,10:12) = R;

end

