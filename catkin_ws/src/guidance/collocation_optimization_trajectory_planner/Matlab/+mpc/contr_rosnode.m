%%

% --- Start Matlab Global Node  
try
    rosnode list
catch exp   % Error from rosnode list
    rosinit  % only if error: rosinit
end
%%
addpath('/home/melyso/Tetrapod-Robot/catkin_ws/src/guidance/matlab_msg_gen_ros1/glnxa64/install/m');
savepath;
rehash toolboxcache
%%
coord = handle_value;
vel = handle_value;
sol = handle_value;

simCoordSub = rossubscriber('/my_robot/gen_coord', 'std_msgs/Float64MultiArray', @(src, msg) genCoordCallback(src, msg, coord), "BufferSize", 1);
simVelSub = rossubscriber('/my_robot/gen_vel', 'std_msgs/Float64MultiArray', @(src, msg) genCoordCallback(src, msg, vel), "BufferSize", 1);
mpcSub = rossubscriber('/mpc/response_channel', 'collocation_optimization_trajectory_planner/solveMpcResponse', @(src, msg) mpcCallback(src, msg, sol), "BufferSize", 1);
mpcPub = rospublisher('/mpc/request_channel', 'collocation_optimization_trajectory_planner/solveMpcRequest');
triggerSub = rossubscriber('trigger', 'std_msgs/Bool', @(src, msg) triggerCallback(src, msg, mpcPub, coord, vel), "BufferSize", 1);

r = rosrate(100);

while true
    waitfor(r);
end
    
function genCoordCallback(src, msg, coord)
    coord.data = msg.Data;
end

function mpcCallback(src, mpcResponseMsg, sol)
    sol.data = mpc.ros_msg_to_sol(mpcResponseMsg);
    disp(sol.data);
    disp('mpcCallback');
    toc
end

function triggerCallback(src, msg, pub, coord, vel)
    tic
    coordcp = coord.data;
    velcp = vel.data;
    x0 = [coordcp(1:6,:); velcp(1:6,:)];
    t0 = 0;
    init_stance_pos = struct();
    init_stance_pos.fl = pos_fl([coordcp(1:6,:);coordcp(7:9,:)]) - x0(1:3,:);
    init_stance_pos.fr = pos_fr([coordcp(1:6,:);coordcp(10:12,:)]) - x0(1:3,:);
    init_stance_pos.rl = pos_rl([coordcp(1:6,:);coordcp(13:15,:)]) - x0(1:3,:);
    init_stance_pos.rr = pos_rr([coordcp(1:6,:);coordcp(16:18,:)]) - x0(1:3,:);
    vel_des = [0.5; 0];
    yaw_rate_des = 0;
    mpcRequestMsg = mpc.gen_mpc_request_msg(x0, t0, init_stance_pos, vel_des, yaw_rate_des);
    pub.send(mpcRequestMsg);
end
