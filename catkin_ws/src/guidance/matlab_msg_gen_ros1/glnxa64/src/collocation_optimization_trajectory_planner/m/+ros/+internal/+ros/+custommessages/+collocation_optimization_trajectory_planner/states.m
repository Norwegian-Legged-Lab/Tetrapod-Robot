function [data, info] = states
%states gives an empty data for collocation_optimization_trajectory_planner/states
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'collocation_optimization_trajectory_planner/states';
[data.X, info.X] = ros.internal.ros.messages.std_msgs.float64MultiArray;
info.X.MLdataType = 'struct';
[data.Dx, info.Dx] = ros.internal.ros.messages.std_msgs.float64MultiArray;
info.Dx.MLdataType = 'struct';
info.MessageType = 'collocation_optimization_trajectory_planner/states';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,16);
info.MatPath{1} = 'x';
info.MatPath{2} = 'x.layout';
info.MatPath{3} = 'x.layout.dim';
info.MatPath{4} = 'x.layout.dim.label';
info.MatPath{5} = 'x.layout.dim.size';
info.MatPath{6} = 'x.layout.dim.stride';
info.MatPath{7} = 'x.layout.data_offset';
info.MatPath{8} = 'x.data';
info.MatPath{9} = 'dx';
info.MatPath{10} = 'dx.layout';
info.MatPath{11} = 'dx.layout.dim';
info.MatPath{12} = 'dx.layout.dim.label';
info.MatPath{13} = 'dx.layout.dim.size';
info.MatPath{14} = 'dx.layout.dim.stride';
info.MatPath{15} = 'dx.layout.data_offset';
info.MatPath{16} = 'dx.data';
