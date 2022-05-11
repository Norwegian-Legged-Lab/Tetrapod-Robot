function [sol] = ros_msg_to_sol(MpcResponseMsg)
%ROS_MSG_TO_SOL Summary of this function goes here
%   Detailed explanation goes here
sol = struct();
sol.states.x = mpc.decodeFloatMultiArray(MpcResponseMsg.States.X);
sol.states.dx = mpc.decodeFloatMultiArray(MpcResponseMsg.States.Dx);
sol.inputs = struct();
field_names = {'Fl', 'Fr', 'Rl', 'Rr'};
for i = 1:length(field_names)
    foot = struct();
    foot.forces = mpc.decodeFloatMultiArray(MpcResponseMsg.Inputs.(field_names{i}).Forces);
    foot.stance_vectors = mpc.decodeFloatMultiArray(MpcResponseMsg.Inputs.(field_names{i}).StanceVectors);
    foot.stance_indices = struct();
    foot.stance_indices.stance = reshape(MpcResponseMsg.Inputs.(field_names{i}).StanceIndices, 1, []);
    foot.stance_indices.d_stance = reshape(MpcResponseMsg.Inputs.(field_names{i}).DStanceIndices, 1, []);
    sol.inputs.(lower(field_names{i})) = foot;
end
sol.t = reshape(MpcResponseMsg.T, 1, []);
end

