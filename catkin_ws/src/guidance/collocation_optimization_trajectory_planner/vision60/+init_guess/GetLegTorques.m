function [outputArg1,outputArg2] = GetLegTorques(state, acc, f_reaction, robot, upper_cm_frame, lower_cm_frame, upper_mass, lower_mass, upper_J, lower_J)
%GETLEGTORQUES Summary of this function goes here
%   Detailed explanation goes here
J_spatial_upper = robot.getSpatialJacobian(upper_cm_frame);
J_body_upper = robot.getBodyJacobian(upper_cm_frame);
J_spatial_lower = robot.getSpatialJacobian(lower_cm_frame);
J_body_lower = robot.getBodyJacobian(lower_cm_frame);


end

