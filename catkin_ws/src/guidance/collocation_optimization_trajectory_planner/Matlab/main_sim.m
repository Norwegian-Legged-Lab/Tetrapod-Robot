frost_setup;

export_path = 'gen/sim'; % path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = '/home/melyso/Temporary_urdf_folder/ASTRo_urdf'; % //TODO: fix better solution
urdf = fullfile(cur, 'urdf', 'ASTRo.urdf');

% Computation of Coriolis vector will be delayed if true
delay_set = true;

load_sym = false;

if load_sym
    load_path = 'gen/sym';
else
    load_path = [];
end

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadSystem(robot, load_path);

system.compile(export_path);

param = load('local/tmp_gait.mat');

diag_stance_param = param.gait(1).params;

diag_stance_param.epsilon = 10;

system = setVertexProperties(system, 'DiagonalStance', 'Param', diag_stance_param);

paral_stance_param = param.gait(3).params;

paral_stance_param.epsilon = 10;

system = setVertexProperties(system, 'ParallelStance', 'Param', paral_stance_param);

diag_stance = system.Gamma.Nodes.Domain{1};
diag_stance.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance = system.Gamma.Nodes.Domain{2};
paral_stance.PreProcess = @sim.ParallelStancePreProcess;

x0 = [param.gait(1).states.x(:,1); param.gait(1).states.dx(:,1)];
tic
logger = system.simulate(0, x0, [], [], 'NumCycle', 4);
toc

%% Animation

anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true, 'UseExported', false);

%% you can also plot the states and torques
plot.plotSimStates(system,logger);
plot.plotSimTorques(system,logger);
