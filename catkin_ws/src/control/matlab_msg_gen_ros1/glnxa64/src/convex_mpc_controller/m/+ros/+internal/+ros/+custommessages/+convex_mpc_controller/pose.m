function [data, info] = pose
%pose gives an empty data for convex_mpc_controller/pose
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'convex_mpc_controller/pose';
[data.X, info.X] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Y, info.Y] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Z, info.Z] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Roll, info.Roll] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Pitch, info.Pitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Yaw, info.Yaw] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'convex_mpc_controller/pose';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'x';
info.MatPath{2} = 'y';
info.MatPath{3} = 'z';
info.MatPath{4} = 'roll';
info.MatPath{5} = 'pitch';
info.MatPath{6} = 'yaw';
