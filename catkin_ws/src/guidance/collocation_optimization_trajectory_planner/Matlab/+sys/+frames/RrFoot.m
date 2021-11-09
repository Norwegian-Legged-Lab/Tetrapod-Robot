function [contact, fric_coef, geometry] = RrFoot(robot)
%BODY Summary of this function goes here
%   Detailed explanation goes here
param = sys.GetExtraParams();

rr_calf_frame = robot.Links(getLinkIndices(robot, 'rr_calf'));
contact = CoordinateFrame(...
    'Name', 'RrFoot', ...
    'Reference', rr_calf_frame, ...
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

