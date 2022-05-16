function [contact, fric_coef, geometry] = FlFoot(robot)
%BODY Summary of this function goes here
%   Detailed explanation goes here
param = sys.GetExtraParams();

fl_calf_frame = robot.Joints(getJointIndices(robot, 'fl_knee_pitch'));
contact = CoordinateFrame(...
    'Name', 'FlFoot', ...
    'Reference', fl_calf_frame, ...
    'Offset', [param.L3, 0, param.Z3], ...
    'R', [0, 0, 0]...
    );
fric_coef.mu = param.mu;
fric_coef.gamma = param.gamma;

geometry.la = param.bw/2;
geometry.lb = param.bw/2;
geometry.La = param.bw/2;
geometry.Lb = param.bw/2;
end
