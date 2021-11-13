% Main script

% Setting up path
frost_setup;

export_path = 'gen/opt'; %path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = '/home/melyso/Temporary_urdf_folder/ASTRo_urdf'; % //TODO: fix better solution
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

%% Set up system

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadSystem_4doms(robot, load_path);

bounds = opt.GetBounds_4doms(robot);

%% Load Nlp

nlp = opt.LoadProblem_4doms(system, bounds, load_path);
%%
compileObjective(nlp, [], [], export_path);


compileConstraint(nlp, [], [], export_path);

load_path = 'gen/sym';
utils.init_path(load_path);
system.saveExpression(load_path);

%Update initial condition if use pre-existing gaits
%param = load('local/tmp_gait.mat');
%opt.updateInitCondition(nlp, param.gait);

%% Solve problem

[gait, sol, info] = opt.solve(nlp);

save('local/tmp_gait.mat', 'gait', 'sol', 'info', 'bounds');

%% animation
%anim = plot.LoadOptAnimator(robot, gait);%,'SkipExporting',true, 'UseExported', false);

%%

%% you can check the violation of constraints/variables and the value of each cost function by calling the following functions.
tol = 1e-3;
checkConstraints(nlp,sol,tol,'local/constr_check.txt') % 
checkVariables(nlp,sol,tol,'local/var_check.txt') % 

checkCosts(nlp,sol,'local/cost_check.txt') % 



%% you can also plot the states and torques w.r.t upper/lower bounds.
plot.plotOptStates(robot,nlp,gait);
plot.plotOptTorques(robot,nlp,gait);


