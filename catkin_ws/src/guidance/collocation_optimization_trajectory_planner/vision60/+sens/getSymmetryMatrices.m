function [S_x, S_y] = getSymmetryMatrices(output_idx)
%GETSYMMETRYMATRICES Summary of this function goes here
%   Detailed explanation goes here
% joint symmetry matrix
S_j = diag([-1, 1, 1]);
S_j_outer = [
    0, 0, 1, 0;
    0, 0, 0, 1;
    1, 0, 0, 0;
    0, 1, 0, 0];

S_pose = diag([1, -1, 1, -1, 1, -1]);

S_q = blkdiag(S_pose, kron(S_j_outer, S_j));
S_x = kron(eye(2), S_q);

if nargin < 1
    S_y = [];
else
    S_y = S_x(output_idx(:, 1), output_idx(:,2));
end
end

