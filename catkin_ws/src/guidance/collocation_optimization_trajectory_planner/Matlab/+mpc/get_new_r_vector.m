function [r_w] = get_new_r_vector(b_height, v_des, stance_time, yaw, foot, r_b_fl_b)
%GET_R_VECTOR Summary of this function goes here
%   Detailed explanation goes here
switch foot
    case 'fl'
        r_base_shoulder = r_b_fl_b + [0.1; 0; 0];
    case 'fr'
        r_base_shoulder = r_b_fl_b + [0.1; 0; 0];
        r_base_shoulder(2) = -r_base_shoulder(2);
    case 'rl'
        r_base_shoulder = r_b_fl_b + [0.1; 0; 0];
        r_base_shoulder(1) = -r_base_shoulder(1);
    case 'rr'
        r_base_shoulder = r_b_fl_b + [0.1; 0; 0];
        r_base_shoulder(1:2) = -r_base_shoulder(1:2);
end

r_b = [r_base_shoulder(1:2) + v_des*stance_time/2; -b_height];
r_w = eul2rotm([yaw, 0, 0], 'zyx')*r_b;
end

