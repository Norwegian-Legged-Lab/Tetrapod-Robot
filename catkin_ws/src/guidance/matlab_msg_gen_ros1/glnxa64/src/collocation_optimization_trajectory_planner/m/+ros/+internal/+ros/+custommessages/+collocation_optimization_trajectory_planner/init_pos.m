function [data, info] = init_pos
%init_pos gives an empty data for collocation_optimization_trajectory_planner/init_pos
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'collocation_optimization_trajectory_planner/init_pos';
[data.FlPos, info.FlPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.FrPos, info.FrPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.RlPos, info.RlPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.RrPos, info.RrPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.FlSet, info.FlSet] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.FrSet, info.FrSet] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.RlSet, info.RlSet] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.RrSet, info.RrSet] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'collocation_optimization_trajectory_planner/init_pos';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'fl_pos';
info.MatPath{2} = 'fr_pos';
info.MatPath{3} = 'rl_pos';
info.MatPath{4} = 'rr_pos';
info.MatPath{5} = 'fl_set';
info.MatPath{6} = 'fr_set';
info.MatPath{7} = 'rl_set';
info.MatPath{8} = 'rr_set';
