function [nlp] = LoadProblem(system, bounds, load_path)
%LOADPROBLEM Summary of this function goes here
%   Detailed explanation goes here
if nargin < 3
    load_path = [];
end

diagonal_stance_1 = system.Gamma.Nodes.Domain{1};

diagonal_stance_1.UserNlpConstraint = @opt.callback.DiagonalStanceConstraints1;

parallel_stance_1 = system.Gamma.Nodes.Domain{2};

parallel_stance_1.UserNlpConstraint = @opt.callback.ParallelStanceConstraints1;

diagonal_impact_1 = system.Gamma.Edges.Guard{1};

diagonal_impact_1.UserNlpConstraint = @opt.callback.DiagonalImpactConstraints;

parallel_impact_1 = system.Gamma.Edges.Guard{2};

parallel_impact_1.UserNlpConstraint = @opt.callback.ParallelImpactConstraints;

diagonal_stance_2 = system.Gamma.Nodes.Domain{3};

diagonal_stance_2.UserNlpConstraint = @opt.callback.DiagonalStanceConstraints2;

parallel_stance_2 = system.Gamma.Nodes.Domain{4};

parallel_stance_2.UserNlpConstraint = @opt.callback.ParallelStanceConstraints2;

diagonal_impact_2 = system.Gamma.Edges.Guard{3};

diagonal_impact_2.UserNlpConstraint = @opt.callback.DiagonalImpactConstraints;

parallel_impact_2 = system.Gamma.Edges.Guard{4};

parallel_impact_2.UserNlpConstraint = @opt.callback.ParallelImpactConstraints;

num_grid.DiagonalStance1 = 15;
num_grid.ParallelStance1 = 15;
num_grid.DiagonalStance2 = 15;
num_grid.ParallelStance2 = 15;

options = {'CollocationScheme','HermiteSimpson',...
    'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',false};

nlp = HybridTrajectoryOptimization('ASTRo_opt', system, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, 'LoadPath', load_path);
end

opt.cost.Torques(nlp, system);

nlp.update;

end

