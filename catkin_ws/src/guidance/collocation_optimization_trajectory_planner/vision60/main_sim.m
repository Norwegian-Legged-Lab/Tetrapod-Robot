frost_setup;

export_path = 'gen/sim'; % path to export compiled C++ and MEX files
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

system = sys.LoadSimSystem(robot, load_path);
% system = sys.LoadSystem(robot, load_path);
% system = sys.LoadReverseSystem(robot, load_path);

system.compile(export_path);

param = load('local/tmp_gait.mat');
%%
gait = utils.extend_gait(param.gait);

diag_stance_1_param = gait(1).params;

diag_stance_1_param.epsilon = 5;

paral_stance_1_param = gait(3).params;

paral_stance_1_param.epsilon = 5;

diag_stance_2_param = gait(5).params;

diag_stance_2_param.epsilon = 5;

paral_stance_2_param = gait(7).params;

paral_stance_2_param.epsilon = 5;

system = setVertexProperties(system, 'DiagonalStance', 'Param', diag_stance_1_param);

system = setVertexProperties(system, 'ParallelStance', 'Param', paral_stance_1_param);

system = setVertexProperties(system, 'DiagonalStance2', 'Param', diag_stance_2_param);

system = setVertexProperties(system, 'ParallelStance2', 'Param', paral_stance_2_param);

diag_stance_1 = system.Gamma.Nodes.Domain{1};
diag_stance_1.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance_1 = system.Gamma.Nodes.Domain{2};
paral_stance_1.PreProcess = @sim.ParallelStancePreProcess;

diag_stance_2 = system.Gamma.Nodes.Domain{3};
diag_stance_2.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance_2 = system.Gamma.Nodes.Domain{4};
paral_stance_2.PreProcess = @sim.ParallelStancePreProcess;
%%
gait = param.gait;

diag_stance_param = gait(1).params;
diag_stance_param.epsilon = 10;

paral_stance_param = gait(3).params;
paral_stance_param.epsilon = 10;

system = setVertexProperties(system, 'DiagonalStance', 'Param', diag_stance_param);
system = setVertexProperties(system, 'ParallelStance', 'Param', paral_stance_param);

diag_stance = system.Gamma.Nodes.Domain{1};
diag_stance.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance = system.Gamma.Nodes.Domain{2};
paral_stance.PreProcess = @sim.ParallelStancePreProcess;
%%
gait = utils.extend_gait(param.gait);

diag_stance_param = gait(5).params;
diag_stance_param.epsilon = 10;

paral_stance_param = gait(7).params;
paral_stance_param.epsilon = 10;

system = setVertexProperties(system, 'DiagonalStance2', 'Param', diag_stance_param);
system = setVertexProperties(system, 'ParallelStance2', 'Param', paral_stance_param);

diag_stance = system.Gamma.Nodes.Domain{1};
diag_stance.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance = system.Gamma.Nodes.Domain{2};
paral_stance.PreProcess = @sim.ParallelStancePreProcess;
%%

x0 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];
tic
logger = system.simulate(0, x0, [], [], 'NumCycle', 2);
toc

%% finite diff

h = 1e-6;
h_vecs = h*eye(36);

x0 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];

J = sens.calcFlowJacobian(x0, system);
%% Animation

anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true, 'UseExported', false);

%% you can also plot the states and torques
plot.plotSimStates(system,logger);
plot.plotSimTorques(system,logger);
