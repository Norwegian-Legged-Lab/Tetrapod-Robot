frost_setup;

export_path = 'gen/mpc'; %path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = '/home/melyso/Temporary_urdf_folder/ASTRo_urdf'; % //TODO: fix better solution
urdf = fullfile(cur, 'urdf', 'ASTRo.urdf');

load_path = [];

delay_set = false;

%% MPC is written in extrinsic XYZ for reasons of linearization, the rest of the system is in intrinsic XYZ for some reason
base = get_base_dofs('floating');
[base(1:6).Name] = deal('BasePosX','BasePosY','BasePosZ','BaseRotX','BaseRotY','BaseRotZ'); 
[base(1:3).Axis] = deal([1,0,0],[0,1,0],[0,0,1]);
[base(4:6).Axis] = deal([0,0,1],[0,1,0],[1,0,0]);


[base.Parent] =  deal('Origin', 'BasePosX','BasePosY','BasePosZ','BaseRotZ','BaseRotY'); 

% the child link of the base dofs
[base.Child] = deal('BasePosX','BasePosY','BasePosZ','BaseRotZ','BaseRotY','');


robot = ASTRoModel(urdf, base);
robot.configureDynamics('OmitCoriolisSet', true);

%%
frame_fl = sys.frames.FlFoot(robot);
frame_fr = sys.frames.FrFoot(robot);
frame_rl = sys.frames.RlFoot(robot);
frame_rr = sys.frames.RrFoot(robot);

pos_fl = robot.getCartesianPosition(frame_fl)';
pos_fr = robot.getCartesianPosition(frame_fr)';
pos_rl = robot.getCartesianPosition(frame_rl)';
pos_rr = robot.getCartesianPosition(frame_rr)';

b_vars = SymVariable([robot.States.x(1:3,:); robot.States.x(6); robot.States.x(5); robot.States.x(4)]);
fl_vars = SymVariable(robot.States.x(7:9,:));
fr_vars = SymVariable(robot.States.x(10:12,:));
rl_vars = SymVariable(robot.States.x(13:15,:));
rr_vars = SymVariable(robot.States.x(16:18,:));

J_fl = jacobian(pos_fl, [b_vars; fl_vars]);
J_fr = jacobian(pos_fr, [b_vars; fr_vars]);
J_rl = jacobian(pos_rl, [b_vars; rl_vars]);
J_rr = jacobian(pos_rr, [b_vars; rr_vars]);

pos_fl_fun = SymFunction('pos_fl', pos_fl, [b_vars; fl_vars]);
pos_fr_fun = SymFunction('pos_fr', pos_fr, [b_vars; fr_vars]);
pos_rl_fun = SymFunction('pos_rl', pos_rl, [b_vars; rl_vars]);
pos_rr_fun = SymFunction('pos_rr', pos_rr, [b_vars; rr_vars]);


J_fl_fun = SymFunction('J_fl', J_fl, [b_vars; fl_vars]);
J_fr_fun = SymFunction('J_fr', J_fr, [b_vars; fr_vars]);
J_rl_fun = SymFunction('J_rl', J_rl, [b_vars; rl_vars]);
J_rr_fun = SymFunction('J_rr', J_rr, [b_vars; rr_vars]);

export(pos_fl_fun, export_path);
export(pos_fr_fun, export_path);
export(pos_rl_fun, export_path);
export(pos_rr_fun, export_path);

export(J_fl_fun, export_path);
export(J_fr_fun, export_path);
export(J_rl_fun, export_path);
export(J_rr_fun, export_path);