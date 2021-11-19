function [x_gazebo] = mpcpose2gazebopose(x_mpc)
%MP Summary of this function goes here
%   Detailed explanation goes here
x_gazebo = x_mpc;
x_gazebo(4:6) = utils.extr2intr(x_mpc(4:6)', 'xyz')';
x_gazebo(13) = x_mpc(13) + pi;
x_gazebo(16) = x_mpc(16) - pi;

end

