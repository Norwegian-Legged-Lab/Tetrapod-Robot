function [data, info] = solveMpcRequest
%solveMpcRequest gives an empty data for convex_mpc_controller/solveMpcRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'convex_mpc_controller/solveMpcRequest';
[data.X0, info.X0] = ros.internal.ros.messages.ros.default_type('double',12);
[data.T0, info.T0] = ros.internal.ros.messages.ros.default_type('double',1);
[data.InitStancePos, info.InitStancePos] = ros.internal.ros.custommessages.convex_mpc_controller.init_pos;
info.InitStancePos.MLdataType = 'struct';
[data.VelDes, info.VelDes] = ros.internal.ros.messages.ros.default_type('double',2);
[data.YawRateDes, info.YawRateDes] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'convex_mpc_controller/solveMpcRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,13);
info.MatPath{1} = 'x0';
info.MatPath{2} = 't0';
info.MatPath{3} = 'init_stance_pos';
info.MatPath{4} = 'init_stance_pos.fl_pos';
info.MatPath{5} = 'init_stance_pos.fr_pos';
info.MatPath{6} = 'init_stance_pos.rl_pos';
info.MatPath{7} = 'init_stance_pos.rr_pos';
info.MatPath{8} = 'init_stance_pos.fl_set';
info.MatPath{9} = 'init_stance_pos.fr_set';
info.MatPath{10} = 'init_stance_pos.rl_set';
info.MatPath{11} = 'init_stance_pos.rr_set';
info.MatPath{12} = 'vel_des';
info.MatPath{13} = 'yaw_rate_des';
