% Main script

%% Setting up path
clear; close all; clc;
restoredefaultpath; matlabrc;

% specify the path to the FROST
frost_path  = '/home/melyso/frost-dev';
addpath(frost_path);
frost_addpath; % initialize FROST


export_path = 'gen/opt'; %path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = utils.get_root_path();
urdf = fullfile(cur, 'urdf', 'ASTRo.urdf');

% Computation of Coriolis vector will be delayed if true
delay_set = true;

load_sym = false;
if load_sym
    load_path = 'gen/sym';
    utils.init_path(load_path);
else
    load_path = [];
end
%%
closed_loop = true;


%% Set up system

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadSystem(robot, load_path, closed_loop);

bounds = opt.GetBounds(robot, [0, 0], closed_loop);

%% Load Nlp

nlp = opt.LoadProblem(system, bounds, load_path);
%%
compileObjective(nlp, [], [], export_path);


compileConstraint(nlp, [], [], export_path);
% compileConstraint(nlp, [], [], export_path);
%compileConstraint(nlp, [], {'y_position_DiagonalStance'
%    'd1y_position_DiagonalStance'
%    'position_output_dynamics'5.17
%    'y_position_ParallelStance'
%    'd1y_position_ParallelStance'}, export_path);

load_path = 'gen/sym';
utils.init_path(load_path);
system.saveExpression(load_path);

%% Get bounds

% you can update bounds without reloading the problem. It is much much faster!!!
bounds = opt.GetBounds(robot, [0.8, 0], closed_loop);

opt.updateVariableBounds(nlp, bounds);

%Update initial condition if use pre-existing gaits
%param = load('local/tmp_gait.mat');
my_gait = init_guess.get_initial_guess([0.8;0], 0.4, 0.03, 0.4, 15, robot, deg2rad(30));
param = load('local/tmp_gait.mat');
opt.updateInitCondition(nlp, my_gait);

%% Solve problem

[gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, sol, info);
% save('local/tmp_gait.mat', 'gait', 'sol', 'info', 'bounds');
% save('local/0_2_m_s_gait.mat', 'gait', 'sol', 'info', 'bounds');
save('local/0_8_m_s_gait.mat', 'gait', 'sol', 'info', 'bounds');
%% animation
my_gait_ext = utils.extend_gait(my_gait);
gait_ext = utils.extend_gait(gait);
anim = plot.LoadOptAnimator(robot,  gait_ext, 'UseExported', true,'SkipExporting',true);%, 'UseExported', false);

%%

%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt'); % 
checkVariables(nlp,sol,tol,'local/var_check.txt'); % 

checkCosts(nlp,sol,'local/cost_check.txt'); % 



%% you can also plot the states and torques w.r.t upper/lower bounds.
plot.plotOptStates(robot,nlp,gait);
plot.plotOptTorques(robot,nlp,gait);

%% You can even check the eigenvalues of the jacobian of the poincare return map!!!
% test_system = sys.LoadBMISystemHalf(robot, load_path);
test_system = sys.LoadSystem(robot, load_path);
H = eye(14);
H = H(4:end,:);
test_system_path = 'gen/sim';
utils.init_path(test_system_path);
% test_system.Gamma.Nodes.Domain{1}.VirtualConstraints.position.setSelectionMatrix(H);
% test_system.Gamma.Nodes.Domain{2}.VirtualConstraints.position.setSelectionMatrix(H);
%%
compile_path = 'gen/bmi';
test_system.compile(compile_path);
%%

cp_q_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x(3:5,:), 5);

full_aposition_1 = reshape([cp_q_1; reshape(gait(1).params.aposition, [], 6)], [], 1);

diag_stance_param = gait(1).params;

diag_stance_param.epsilon = 10;

% diag_stance_param.aposition = full_aposition_1;

cp_q_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x(3:5,:), 5);

full_aposition_2 = reshape([cp_q_2; reshape(gait(3).params.aposition, [], 6)], [], 1);

paral_stance_param = gait(3).params;

paral_stance_param.epsilon = 10;

% paral_stance_param.aposition = full_aposition_2;

diag_stance = test_system.Gamma.Nodes.Domain{1};
diag_stance.PreProcess = @sim.DiagonalStancePreProcess;
paral_stance = test_system.Gamma.Nodes.Domain{2};
paral_stance.PreProcess = @sim.ParallelStancePreProcess;

intermediaryJacobians = sens.getIntermediaryJacobians(test_system);

test_system = setVertexProperties(test_system, 'DiagonalStance', 'Param', diag_stance_param);
test_system = setVertexProperties(test_system, 'ParallelStance', 'Param', paral_stance_param);

x0 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];
logger = test_system.simulate(0, x0, [], [], 'NumCycle', 1);
flows = [logger.flow];

cp = cell(2,1);
cp{1} = struct();
t = flows(1).t;
x = [flows(1).states.x; flows(1).states.dx];
cp{1}.points = kin.bezierFit(t, x, 5);
cp{1}.ts = [t(1), t(end)];
cp{2} = struct();
t = flows(2).t;
x = [flows(2).states.x; flows(2).states.dx];
cp{2}.points = kin.bezierFit(t, x, 5);
cp{2}.ts = [t(1), t(end)];

%%
phi = sens.calcFlowJacobianVariation(x0, test_system, intermediaryJacobians, cp);
phi_fd = sens.calcFlowJacobian(x0, test_system);