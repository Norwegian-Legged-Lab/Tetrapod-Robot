function [data, info] = init_pos
%init_pos gives an empty data for convex_mpc_controller/init_pos
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'convex_mpc_controller/init_pos';
[data.FlPos, info.FlPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.FrPos, info.FrPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.RlPos, info.RlPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.RrPos, info.RrPos] = ros.internal.ros.messages.ros.default_type('double',3);
[data.ContactState, info.ContactState] = ros.internal.ros.messages.ros.default_type('logical',4);
info.MessageType = 'convex_mpc_controller/init_pos';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'fl_pos';
info.MatPath{2} = 'fr_pos';
info.MatPath{3} = 'rl_pos';
info.MatPath{4} = 'rr_pos';
info.MatPath{5} = 'contact_state';
