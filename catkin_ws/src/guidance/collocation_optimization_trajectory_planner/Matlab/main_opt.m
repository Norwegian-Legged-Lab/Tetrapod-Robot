% Main script

% Setting up path
frost_setup;

export_path = 'gen/opt'; %path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = '/home/melyso/Temporary_urdf_folder/ASTRo_urdf' % //TODO: fix better solution
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

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadSystem(robot, load_path);

bounds = opt.GetBounds(robot);

nlp = opt.LoadProblem(system, bounds, load_path);

compileObjective(nlp, [], [], export_path);


compileConstraint(nlp, [], [], export_path);

compileConstraint(nlp, [], {'y_position_DiagonalStance'
    'd1y_position_DiagonalStance'
    'position_output_dynamics'
    'y_position_ParallelStance'
    'd1y_position_ParallelStance'}, export_path);

load_path = 'gen/sym';
utils.init_path(load_path);
system.saveExpression(load_path);

bounds = opt.GetBounds(robot);
opt.updateVariableBounds(nlp, bounds);

%Update initial condition if use pre-existing gaits
%param = load('local/tmp_gait.mat');
%opt.updateInitCondition(nlp, param.gait);


[gait, sol, info] = opt.solve(nlp);

save('local/tmp_gait.mat', 'gait', 'sol', 'info', 'bounds');



