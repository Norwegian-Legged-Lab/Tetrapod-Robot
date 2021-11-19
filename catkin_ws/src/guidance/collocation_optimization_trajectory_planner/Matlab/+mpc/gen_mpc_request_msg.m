function [mpcRequestMsg] = gen_mpc_request_msg(x0, t0, init_stance_pos, vel_des, yaw_rate_des)
%GEN_MPC_REQUEST_MSG Summary of this function goes here
%   Detailed explanation goes here
mpcRequestMsg = rosmessage('collocation_optimization_trajectory_planner/solveMpcRequest');
mpcRequestMsg.X0 = x0;
mpcRequestMsg.T0 = t0;
mpcRequestMsg.VelDes = vel_des;
mpcRequestMsg.YawRateDes = yaw_rate_des;
field_names = {'Fl', 'Fr', 'Rl', 'Rr'};
for i = 1:length(field_names)
    if isfield(init_stance_pos, lower(field_names{i}))
        mpcRequestMsg.InitStancePos.([field_names{i} 'Pos']) = init_stance_pos.(lower(field_names{i}));
        mpcRequestMsg.InitStancePos.([field_names{i} 'Set']) = true;
    else
        mpcRequestMsg.InitStancePos.([field_names{i} 'Set']) = false;
    end
end

end

