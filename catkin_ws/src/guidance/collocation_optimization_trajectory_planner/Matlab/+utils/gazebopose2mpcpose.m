function [x_mpc] = gazebopose2mpcpose(x_gazebo)
%GAZEBOPOSE2MPCPOSE Summary of this function goes here
%   Detailed explanation goes here
x_mpc = x_gazebo;
x_mpc(4:6) = utils.intr2extr(x_gazebo(4:6)', 'xyz')';
x_mpc(13) = x_gazebo(13) - pi;
x_mpc(16) = x_gazebo(16) + pi;

end

