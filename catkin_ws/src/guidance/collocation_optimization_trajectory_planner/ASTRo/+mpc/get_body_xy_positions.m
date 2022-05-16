function [p] = get_body_xy_positions(p0, yaw_des, vel_des, delta_t)
%GET_BODY_POSITIONS Summary of this function goes here
%   Detailed explanation goes here
p = zeros(2, length(yaw_des));
p(:,1) = p0;
for i = 2:length(yaw_des)
    vel_rot = eul2rotm([yaw_des(i - 1), 0, 0], 'zyx')*[vel_des*delta_t;0];
    p(:,i) = p(:, i-1) + vel_rot(1:2);
end
end
