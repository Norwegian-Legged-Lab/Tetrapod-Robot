function [nlp] = LoadProblem(system, bounds, load_path)
%LOADPROBLEM Summary of this function goes here
%   Detailed explanation goes here
if nargin < 3
    load_path = [];
end

diagonal_stance = system.Gamma.Nodes.Domain{1};

diagonal_stance.UserNlpConstraint = @opt.callback.DiagonalStanceConstraints;

parallel_stance = system.Gamma.Nodes.Domain{2};

parallel_stance.UserNlpConstraint = @opt.callback.ParallelStanceConstraints;

diagonal_impact = system.Gamma.Edges.Guard{1};

diagonal_impact.UserNlpConstraint = @opt.callback.DiagonalImpactConstraints;

parallel_impact = system.Gamma.Edges.Guard{2};

parallel_impact.UserNlpConstraint = @opt.callback.ParallelImpactConstraints;

num_grid.DiagonalStance = 15;
num_grid.ParallelStance = 15;

options = {'CollocationScheme','HermiteSimpson',...
    'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',false};

nlp = HybridTrajectoryOptimization('ASTRo_opt', system, num_grid, [], options{:});

if isempty(load_path)
    nlp.configure(bounds);
else
    nlp.configure(bounds, load_path);
end

opt.cots.Torques(nlp, system);

nlp.update;

end

