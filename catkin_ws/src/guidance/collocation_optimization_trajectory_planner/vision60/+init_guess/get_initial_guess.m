function [gait] = get_initial_guess(vel_des, z_des, h_des, T_gait, num_nodes, robot)
%GET_INITIAL_GUESS Summary of this function goes here
%   Detailed explanation goes here
dx = vel_des(1)*T_gait/4;
dz = h_des;

T_phase = T_gait/4;
num_steps = 2*num_nodes + 1;

diag_phase = struct();

t0.diag_phase = 0;
tf.diag_phase = t0.diag_phase + T_phase;

t0.paral_phase = tf.diag_phase;
tf.paral_phase = t0.paral_phase + T_phase;

params = sys.GetExtraParams;

desired_pose = [-params.hip_offset_x - vel_des(1)*T_gait/4; params.hip_offset_y - vel_des(2)*T_gait/4; z_des; 0; 0; 0];

control_points_pose = repmat(desired_pose, 1, 6);

control_points_pose(1:2,:) = control_points_pose(1:2,:) + (1/5)*T_gait/4*vel_des*(0:5);

[pose, twist, pose_acc] = kin.BezierCurve(num_steps, control_points_pose);

%account for the derivative of normalized phase variable wrt time
twist = (1/T_phase)*twist;
pose_acc = (1/T_phase^2)*pose_acc;

l1 = abs(params.L2); % fix something better here
l2 = params.L3;
l3 = abs(params.Z3);

[cp_fl, cp_rl, cp_fr, cp_rr] = kin.GetBezierControlPointsJointSpace(dx, dz, z_des, l1, l2, l3);

[p_fl, v_fl, a_fl] = kin.BezierCurve(num_steps, cp_fl);
v_fl = (1/T_phase)*v_fl;
a_fl = (1/T_phase^2)*a_fl;

[p_rl, v_rl, a_rl] = kin.BezierCurve(num_steps, cp_rl);
v_rl = (1/T_phase)*v_rl;
a_rl = (1/T_phase^2)*a_rl;

[p_fr, v_fr, a_fr] = kin.BezierCurve(num_steps, cp_fr);
v_fr = (1/T_phase)*v_fr;
a_fr = (1/T_phase^2)*a_fr;

[p_rr, v_rr, a_rr] = kin.BezierCurve(num_steps, cp_rr);
v_rr = (1/T_phase)*v_rr;
a_rr = (1/T_phase^2)*a_rr;

%need to account for 1)tspan, 2)states, 3)inputs, 4)params
%diagonal phase
%% tspan
diag_phase.tspan = linspace(t0.diag_phase, tf.diag_phase, num_steps);

%% states
diag_phase.states = struct();
diag_phase.states.x = [pose; p_fl; p_rl; p_fr; p_rr];
diag_phase.states.dx = [twist; v_fl; v_rl; v_fr; v_rr];
diag_phase.states.ddx = [pose_acc; a_fl; a_rl; a_fr; a_rr];


%% inputs

mass = robot.getTotalMass;
g = [0; 0; 9.81];

total_ground_reaction_force = mass*(pose_acc(1:3,:) + g);

num_stance_legs = 2;

ground_reaction_force_each_leg = total_ground_reaction_force/num_stance_legs;

diag_phase.inputs.fFrFoot = ground_reaction_force_each_leg;
diag_phase.inputs.fRlFoot = ground_reaction_force_each_leg;

planar_inertia_upper = robot.Links(6).Inertia(2,2);
planar_inertia_lower = robot.Links(7).Inertia(2,2);
mass_upper = robot.Links(6).Mass;
mass_lower = robot.Links(7).Mass;

diag_phase.inputs.u = zeros(12, num_steps);

%these are both very approximate and of questionable legitimacy, consider
%replacing

% swing legs
diag_phase.inputs.u(2,:) = (mass_upper+mass_lower)*a_fl(2,:);
diag_phase.inputs.u(3,:) = mass_lower*a_fl(3,:);
diag_phase.inputs.u(11,:) = (mass_upper+mass_lower)*a_rr(2,:);
diag_phase.inputs.u(12,:) = mass_lower*a_rr(3,:);

%stance legs

diag_phase.inputs.u(4:6,:) = kin.StanceLegTorqueProjection(p_rl, diag_phase.inputs.fRlFoot, l1, l2, l3);
diag_phase.inputs.u(7:9,:) = kin.StanceLegTorqueProjection(p_fr, diag_phase.inputs.fFrFoot, l1, l2, l3);




%% params

diag_phase.params.pFrFoot = zeros(3,1);
diag_phase.params.pRlFoot = [-2*params.hip_offset_x; 2*params.hip_offset_y; 0] - [vel_des*T_gait/4; 0];


% As can be seen in the specification of the domain, virtual constraints
% are base roll, base yaw, front stance hip roll, front stance hip pitch,
% and front and rear swing joint positions

diag_phase.params.aposition = [...
    control_points_pose(4,:), control_points_pose(5,:), control_points_pose(6,:),...
    cp_fr(1,:), cp_fr(2,:), ...
    cp_fl(1,:), cp_fl(2,:), cp_fl(3,:),...
    cp_rr(1,:), cp_rr(2,:), cp_rr(3,:)].';

diag_phase.params.pposition = [t0.diag_phase; tf.diag_phase];

%parallel phase

paral_phase = struct();

%% tspan

paral_phase.tspan = linspace(t0.paral_phase, tf.paral_phase, num_steps);

%% states

control_points_pose = control_points_pose + [vel_des*T_gait/4; zeros(4,1)];

[pose, twist, pose_acc] = kin.BezierCurve(num_steps, control_points_pose);

%account for the derivative of normalized phase variable wrt time
twist = (1/T_phase)*twist;
pose_acc = (1/T_phase^2)*pose_acc;

paral_phase.states = struct();

%because of the periodicity constraints of all of the joint positions, we
%can simply reuse the joint positions of the diagonal phase by shuffling
%them

paral_phase.states.x = [pose; p_rr; p_fl; p_rl; p_fr];
paral_phase.states.dx = [twist; v_rr; v_fl; v_rl; v_fr];
paral_phase.states.ddx = [pose_acc; a_rr; a_fl; a_rl; a_fr];

%% inputs

%same shuffling can be done here
paral_phase.inputs.u(1:3,:) = diag_phase.inputs.u(10:12,:);
paral_phase.inputs.u(4:12,:) = diag_phase.inputs.u(1:9,:);

paral_phase.inputs.fFrFoot = diag_phase.inputs.fRlFoot;
paral_phase.inputs.fRrFoot = diag_phase.inputs.fFrFoot;


%% params

paral_phase.params.pFrFoot = zeros(3,1);

paral_phase.params.pRrFoot = [-2*params.hip_offset_x; 0; 0] + [vel_des*T_gait/4; 0];


% As can be seen in the specification of the domain, virtual constraints
% are base pitch, base yaw, front stance hip roll, front stance hip pitch,
% and front and rear swing joint positions

paral_phase.params.aposition = [...
    control_points_pose(4,:), control_points_pose(5,:), control_points_pose(6,:),...
    cp_rl(1,:), cp_rl(2,:), ...
    cp_rr(1,:), cp_rr(2,:), cp_rr(3,:),...
    cp_fl(1,:), cp_fl(2,:), cp_fl(3,:)].';

paral_phase.params.pposition = [t0.paral_phase; tf.paral_phase];

%% Discrete phases

paral_impact = struct();

paral_impact.tspan = cell(0);

paral_impact.states = struct();

paral_impact.states.x = diag_phase.states.x(:,end);
paral_impact.states.dx = diag_phase.states.dx(:,end);
paral_impact.states.xn = paral_phase.states.x(:,1);
paral_impact.states.dxn = paral_phase.states.dx(:,1);

paral_impact.inputs.fFrFoot = diag_phase.inputs.fFrFoot(:,end);
paral_impact.inputs.fRrFoot = paral_phase.inputs.fRrFoot(:,1);

paral_impact.params = struct();


diag_impact = struct();

diag_impact.tspan = cell(0);

diag_impact.states = struct();

diag_impact.states.x = paral_phase.states.x(:,end);
diag_impact.states.dx = paral_phase.states.dx(:,end);
diag_impact.states.xn = diag_phase.states.x(:,1);
diag_impact.states.dxn = diag_phase.states.dx(:,1);

%because of relabeling, the forces at the last impact will not correspond
%to those at the beginning of the first domain but rather its left/right mirror foot

diag_impact.inputs.fRrFoot = paral_phase.inputs.fRrFoot(:,end);
diag_impact.inputs.fFlFoot = diag_phase.inputs.fFrFoot(:,1);

diag_impact.params = struct();

gait = [diag_phase; paral_impact; paral_phase; diag_impact];
end

