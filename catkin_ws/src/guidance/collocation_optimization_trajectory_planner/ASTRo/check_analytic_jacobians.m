frost_setup;

export_path = 'gen/bmi'; % path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = utils.get_root_path();
urdf = fullfile(cur, 'urdf', 'vision60.urdf');

% Computation of Coriolis vector will be delayed if true
delay_set = true;

load_sym = false;

if load_sym
    load_path = 'gen/sym';
else
    load_path = [];
end

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadBMISystem(robot, load_path);
% system = sys.LoadSystem(robot, load_path);
% system = sys.LoadReverseSystem(robot, load_path);

% system.compile(export_path);

param = load('local/tmp_gait.mat');

%% bmi/yalmip stuff
homestr = '/home/melyso';
addpath(genpath([homestr filesep 'yalmip']));
addpath(genpath([homestr filesep 'Penbmi2.1']));

addpath('gen/sens');
%%
gait = utils.extend_gait(param.gait);

% cp_q_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x(3:5,:), 5);
cp_q_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x([3:5, 13:15, 10, 12, 7:9, 16:18],:), 5);
full_aposition_1 = reshape(cp_q_1, [], 1);

% full_aposition_1 = reshape([cp_q_1; reshape(gait(1).params.aposition, [], 6)], [], 1);

diag_stance_1_param = gait(1).params;

diag_stance_1_param.epsilon = 5;

diag_stance_1_param.aposition = full_aposition_1;

% cp_q_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x(3:5,:), 5);
% 
% full_aposition_2 = reshape([cp_q_2; reshape(gait(3).params.aposition, [], 6)], [], 1);

cp_q_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x([3:5, 13:15, 16, 18, 7:9, 10:12],:), 5);
full_aposition_2 = reshape(cp_q_2, [], 1);


paral_stance_1_param = gait(3).params;

paral_stance_1_param.aposition = full_aposition_2;

paral_stance_1_param.epsilon = 5;

% cp_q_3 = kin.bezierFit(gait(5).tspan, gait(5).states.x(3:5,:), 5);
% 
% full_aposition_3 = reshape([cp_q_3; reshape(gait(5).params.aposition, [], 6)], [], 1);

cp_q_3 = kin.bezierFit(gait(5).tspan, gait(5).states.x([3:5, 7:9, 16, 18, 13:15, 10:12],:), 5);
full_aposition_3 = reshape(cp_q_3, [], 1);


diag_stance_2_param = gait(5).params;

diag_stance_2_param.aposition = full_aposition_3;

diag_stance_2_param.epsilon = 5;

% cp_q_4 = kin.bezierFit(gait(7).tspan, gait(7).states.x(3:5,:), 5);
% 
% full_aposition_4 = reshape([cp_q_4; reshape(gait(7).params.aposition, [], 6)], [], 1);

cp_q_4 = kin.bezierFit(gait(7).tspan, gait(7).states.x([3:5, 7:9, 10, 12, 13:15, 16:18],:), 5);
full_aposition_4 = reshape(cp_q_4, [], 1);


paral_stance_2_param = gait(7).params;

paral_stance_2_param.aposition = full_aposition_4;

paral_stance_2_param.epsilon = 5;

system = setVertexProperties(system, 'DiagonalStance', 'Param', diag_stance_1_param);

system = setVertexProperties(system, 'ParallelStance', 'Param', paral_stance_1_param);

system = setVertexProperties(system, 'DiagonalStance2', 'Param', diag_stance_2_param);

system = setVertexProperties(system, 'ParallelStance2', 'Param', paral_stance_2_param);

H = [zeros(11, 3), eye(11)];

diag_stance_1 = system.Gamma.Nodes.Domain{1};
diag_stance_1.PreProcess = @sim.DiagonalStancePreProcess;
diag_stance_1.VirtualConstraints.position.setSelectionMatrix(H);

paral_stance_1 = system.Gamma.Nodes.Domain{2};
paral_stance_1.PreProcess = @sim.ParallelStancePreProcess;
paral_stance_1.VirtualConstraints.position.setSelectionMatrix(H);

diag_stance_2 = system.Gamma.Nodes.Domain{3};
diag_stance_2.PreProcess = @sim.DiagonalStancePreProcess;
diag_stance_2.VirtualConstraints.position.setSelectionMatrix(H);

paral_stance_2 = system.Gamma.Nodes.Domain{4};
paral_stance_2.PreProcess = @sim.ParallelStancePreProcess;
paral_stance_2.VirtualConstraints.position.setSelectionMatrix(H);

%%

cp = cell(2,1);

cp{1} = struct();

t = gait(1).tspan;
x = [gait(1).states.x; gait(1).states.dx];

cp{1}.points = kin.bezierFit(t, x, 5);
cp{1}.ts = [t(1), t(end)];

cp{2} = struct();

t = gait(3).tspan;
x = [gait(3).states.x; gait(3).states.dx];

cp{2}.points = kin.bezierFit(t, x, 5);
cp{2}.ts = [t(1), t(end)];
%%
x0_1 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];

ts_1 = [gait(1).tspan(1), gait(1).tspan(end)];

x0_2 = [gait(3).states.x(:,1); gait(3).states.dx(:,1)];

ts_2 = [gait(3).tspan(1), gait(3).tspan(end)];

nodes = system.Gamma.Nodes;

intermediaryJacobians = sens.getIntermediaryJacobians(system);

% calculate flow 1 using variational equation

phi_0 = eye(36);
z0 = reshape(phi_0, [], 1);

[t1, y1] = ode45(@(tau, y) sens.F_aug(tau, y, nodes.Domain{1}, nodes.Control{1}, nodes.Param{1}, intermediaryJacobians{1}, cp{1}), ts_1, z0);%, odeopts);
Phi_1 = reshape(y1(end,:)', 36, 36);

% calculate flow 1 finite diff

Phi_1_fd = sens.findiff(@(y) sens.calcFinalFlowState(@(tau,z) nodes.Domain{1}.calcDynamics(tau - ts_1(1), z, nodes.Control{1}, nodes.Param{1}, []), ts_1, y), x0_1);



% calculate flow 2 using variational equation

phi_0 = eye(36);
z0 = reshape(phi_0, [], 1);

[t2, y2] = ode45(@(tau, y) sens.F_aug(tau, y, nodes.Domain{2}, nodes.Control{2}, nodes.Param{2}, intermediaryJacobians{2}, cp{2}), ts_2, z0);%, odeopts);
Phi_2 = reshape(y2(end,:)', 36, 36);

% calculate flow 2 finite diff

Phi_2_fd = sens.findiff(@(y) sens.calcFinalFlowState(@(tau,z) nodes.Domain{2}.calcDynamics(tau - ts_2(1), z, nodes.Control{2}, nodes.Param{2}, []), ts_2, y), x0_2);


disp('error in flow 1:');
disp(max(max(abs(Phi_1 - Phi_1_fd))));

disp('error in flow 2:');
disp(max(max(abs(Phi_2 - Phi_2_fd))));

%% Calculate with event/saltation

logger = system.simulate(0, x0_1, [], [], 'NumCycle', 1);
flows = [logger.flow];

odeopts_1 = odeset('Events',@(t, x) ...
    nodes.Domain{1}.checkGuard(t, x, nodes.Control{1}, nodes.Param{1}, struct2array(nodes.Domain{1}.EventFuncs)));

odeopts_2 = odeset('Events',@(t, x) ...
    nodes.Domain{2}.checkGuard(t, x, nodes.Control{2}, nodes.Param{2}, struct2array(nodes.Domain{2}.EventFuncs)));

Pr = sens.calcSaltationMatrices(flows, system, intermediaryJacobians);

x0_1 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];

ts_1 = [gait(1).tspan(1), gait(1).tspan(end)];

x0_2 = [gait(3).states.x(:,1); gait(3).states.dx(:,1)];

ts_2 = [gait(3).tspan(1), gait(3).tspan(end)];

nodes = system.Gamma.Nodes;

intermediaryJacobians = sens.getIntermediaryJacobians(system);

% calculate flow 1 using variational equation

phi_0 = eye(36);
z0 = reshape(phi_0, [], 1);

[t1, y1] = ode45(@(tau, y) sens.F_aug(tau, y, nodes.Domain{1}, nodes.Control{1}, nodes.Param{1}, intermediaryJacobians{1}, cp{1}), ts_1, z0);%, odeopts);
Phi_1_full = Pr{1}*reshape(y1(end,:)', 36, 36);

% calculate flow 1 finite diff

Phi_1_fd_full = sens.findiff(@(y) sens.calcFinalFlowState(@(tau,z) nodes.Domain{1}.calcDynamics(tau - ts_1(1), z, nodes.Control{1}, nodes.Param{1}, []), ts_1, y, odeopts_1), x0_1);



% calculate flow 2 using variational equation

phi_0 = eye(36);
z0 = reshape(phi_0, [], 1);

[t2, y2] = ode45(@(tau, y) sens.F_aug(tau, y, nodes.Domain{2}, nodes.Control{2}, nodes.Param{2}, intermediaryJacobians{2}, cp{2}), ts_2, z0);%, odeopts);
Phi_2_full = Pr{2}*reshape(y2(end,:)', 36, 36);

% calculate flow 2 finite diff

Phi_2_fd_full = sens.findiff(@(y) sens.calcFinalFlowState(@(tau,z) nodes.Domain{2}.calcDynamics(tau - ts_2(1), z, nodes.Control{2}, nodes.Param{2}, []), ts_2, y, odeopts_2), x0_2);


disp('error in flow 1:');
disp(max(max(abs(Phi_1_full - Phi_1_fd_full))));

disp('error in flow 2:');
disp(max(max(abs(Phi_2_full - Phi_2_fd_full))));