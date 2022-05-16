function [x, z] = PlanarLegForwardKinematics(theta_1, theta_2, l1, l2, l3)
%PLANARLEGFORWARDKINEMATICS Summary of this function goes here
%   Detailed explanation goes here

if nargin < 5
    l3 = 0;
end

theta_1 = reshape(theta_1, [], 1);
theta_2 = reshape(theta_2, [], 1);

v = l1*[cos(theta_1), -sin(theta_1)] - l2*[cos(theta_2 - theta_1), sin(theta_2 - theta_1)] + l3*[sin(theta_2 - theta_1), -cos(theta_2 - theta_1)];

x = v(:,1);

z = v(:,2);
end

