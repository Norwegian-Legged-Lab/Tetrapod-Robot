function [data, info] = foot_input
%foot_input gives an empty data for convex_mpc_controller/foot_input
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'convex_mpc_controller/foot_input';
[data.StanceIndices, info.StanceIndices] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.DStanceIndices, info.DStanceIndices] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.Forces, info.Forces] = ros.internal.ros.messages.std_msgs.float64MultiArray;
info.Forces.MLdataType = 'struct';
[data.StanceVectors, info.StanceVectors] = ros.internal.ros.messages.std_msgs.float64MultiArray;
info.StanceVectors.MLdataType = 'struct';
info.MessageType = 'convex_mpc_controller/foot_input';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'stance_indices';
info.MatPath{2} = 'd_stance_indices';
info.MatPath{3} = 'forces';
info.MatPath{4} = 'forces.layout';
info.MatPath{5} = 'forces.layout.dim';
info.MatPath{6} = 'forces.layout.dim.label';
info.MatPath{7} = 'forces.layout.dim.size';
info.MatPath{8} = 'forces.layout.dim.stride';
info.MatPath{9} = 'forces.layout.data_offset';
info.MatPath{10} = 'forces.data';
info.MatPath{11} = 'stance_vectors';
info.MatPath{12} = 'stance_vectors.layout';
info.MatPath{13} = 'stance_vectors.layout.dim';
info.MatPath{14} = 'stance_vectors.layout.dim.label';
info.MatPath{15} = 'stance_vectors.layout.dim.size';
info.MatPath{16} = 'stance_vectors.layout.dim.stride';
info.MatPath{17} = 'stance_vectors.layout.data_offset';
info.MatPath{18} = 'stance_vectors.data';
