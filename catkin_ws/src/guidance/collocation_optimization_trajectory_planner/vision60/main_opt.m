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
urdf = fullfile(cur, 'urdf', 'vision60.urdf');

% Computation of Coriolis vector will be delayed if true
delay_set = true;

load_sym = false;
if load_sym
    load_path = 'gen/sym';
    utils.init_path(load_path);
else
    load_path = [];
end

%% Set up system

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadSystem(robot, load_path);

bounds = opt.GetBounds(robot);

%% Load Nlp

nlp = opt.LoadProblem(system, bounds, load_path);
%%
compileObjective(nlp, [], [], export_path);


compileConstraint(nlp, [], [], export_path);
% compileConstraint(nlp, [], [], export_path);
%compileConstraint(nlp, [], {'y_position_DiagonalStance'
%    'd1y_position_DiagonalStance'
%    'position_output_dynamics'
%    'y_position_ParallelStance'
%    'd1y_position_ParallelStance'}, export_path);

load_path = 'gen/sym';
utils.init_path(load_path);
system.saveExpression(load_path);

%% Get bounds

% you can update bounds without reloading the problem. It is much much faster!!!
bounds = opt.GetBounds(robot, [0, 0]);

opt.updateVariableBounds(nlp, bounds);

%Update initial condition if use pre-existing gaits
%param = load('local/tmp_gait.mat');
my_gait = init_guess.get_initial_guess([0;0], 0.4, 0.08, 0.6, 15, robot);
param = load('local/tmp_gait.mat');
opt.updateInitCondition(nlp, my_gait);

%% Solve problem

[gait, sol, info] = opt.solve(nlp);
% [gait, sol, info] = opt.solve(nlp, param.sol, param.info);
save('local/tmp_gait.mat', 'gait', 'sol', 'info', 'bounds');


%% animation
my_gait_ext = utils.extend_gait(my_gait);
% gait_ext = utils.extend_gait(gait);
anim = plot.LoadOptAnimator(robot, gait_ext, 'UseExported', true);%,'SkipExporting',true, 'UseExported', false);

%%

%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt') % 
checkVariables(nlp,sol,tol,'local/var_check.txt') % 

checkCosts(nlp,sol,'local/cost_check.txt') % 



%% you can also plot the states and torques w.r.t upper/lower bounds.
plot.plotOptStates(robot,nlp,gait);
plot.plotOptTorques(robot,nlp,gait);


