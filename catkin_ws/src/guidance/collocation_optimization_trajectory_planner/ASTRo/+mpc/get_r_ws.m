function [stances] = get_r_ws(stance_indices, body_xy_positions, yaw_des, vel_des, init_stance_pos, b_height, r_b_fl_b, cycle_period)
%GET_R_WS Summary of this function goes here
%   Detailed explanation goes here

fields = {'fl', 'fr', 'rl', 'rr'};
stance_info = get_stance_info_ambling;

for i = 1:length(fields)
    f = fields{i};

    stances.(f) = zeros(3, length(body_xy_positions));

    if stance_indices.(f).stance(1)
        if isfield(init_stance_pos, f)
            stances.(f)(:,1) = init_stance_pos.(f);
        else
            stances.(f)(:,1) = get_new_r_vector(b_height, vel_des, sum(stance_info.(f).durations)*cycle_period, yaw_des(1), f, r_b_fl_b);
        end
    end

    for j = 2:length(body_xy_positions)
        if stance_indices.(f).stance(j) %if foot is stance foot
            if stance_indices.(f).d_stance(j) %if foot is landing
                stances.(f)(:, j) = get_new_r_vector(b_height, vel_des, sum(stance_info.(f).durations)*cycle_period, yaw_des(j), f, r_b_fl_b);
            else %if foot was already on the ground, relative in world changes by the displacement of the body in world
                stances.(f)(:, j) = stances.(f)(:, j-1) - [(body_xy_positions(:,j) - body_xy_positions(:, j-1)); 0];
            end
        end
    end
end

