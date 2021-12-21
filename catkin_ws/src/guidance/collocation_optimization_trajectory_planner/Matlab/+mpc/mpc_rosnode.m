frost_setup;
%%
export_path = 'gen/opt'; %path to export compiled C++ and MEX files
utils.init_path(export_path);
load_path=[];
delay_set=true;
cur = '/home/melyso/Temporary_urdf_folder/ASTRo_urdf'; % //TODO: fix better solution
urdf = fullfile(cur, 'urdf', 'ASTRo.urdf');

robot = sys.LoadModel(urdf, load_path, delay_set);
%%
%base_link = robot.Links(robot.getLinkIndices('base_link'));

%m = base_link.Mass;
m = 8.7385;
%I_b = base_link.Inertia;
I_b = [0.0328, 0, 0;
        0, 0.0328, 0;
        0, 0, 0.0617];

mu = 0.3;

%r_body_to_fl_ref = robot.Joints(robot.getJointIndices('fl_hip_yaw')).Offset;
r_body_to_fl_ref = [0.4512; 0.1512; 0];
r_body_to_fl_ref(1) = r_body_to_fl_ref(1) + 0.2;

delta_t = 0.05;

horizon = 0.5;

cycle_period = 0.5;

ref_cost = 1e4;

force_cost = 1;

stance_info = mpc.get_stance_info_ambling;

solver = mpc.mpc_solver(m, I_b, mu, r_body_to_fl_ref, delta_t, horizon, cycle_period, ref_cost, force_cost, stance_info);
%%

% --- Start Matlab Global Node  
try
    rosnode list
catch exp   % Error from rosnode list
    rosinit  % only if error: rosinit
end
%%
addpath('/home/melyso/Tetrapod-Robot/catkin_ws/src/control/matlab_msg_gen_ros1/glnxa64/install/m');
savepath;
rehash toolboxcache


%%
mpcPub = rospublisher('/mpc/response_channel', 'convex_mpc_controller/solveMpcResponse', 1);

mpcSub = rossubscriber('/mpc/request_channel', 'convex_mpc_controller/solveMpcRequest', @(src, msg) calculation_callback(src, msg, mpcPub, solver), 'BufferSize', 1);

r = rosrate(200);
t = tic;
while true
    waitfor(r);
end

function calculation_callback(src, mpcRequestMsg, pub, solver)
    mpcResponseMsg = solver.solve_ros(mpcRequestMsg);
    pub.send(mpcResponseMsg);
end