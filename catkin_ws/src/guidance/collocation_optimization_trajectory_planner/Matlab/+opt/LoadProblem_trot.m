function [nlp] = LoadProblem_trot(system, bounds, load_path)
%LOADPROBLEM Summary of this function goes here
%   Detailed explanation goes here
if nargin < 3
    load_path = [];
end

trot_stance_1 = system.Gamma.Nodes.Domain{1};

trot_stance_1.UserNlpConstraint = @opt.callback.TrotStanceConstraints1;

trot_impact_1 = system.Gamma.Edges.Guard{1};

trot_impact_1.UserNlpConstraint = @opt.callback.TrotImpactConstraints1;

trot_stance_2 = system.Gamma.Nodes.Domain{2};

trot_stance_2.UserNlpConstraint = @opt.callback.TrotStanceConstraints2;

trot_impact_2 = system.Gamma.Edges.Guard{2};

trot_impact_2.UserNlpConstraint = @opt.callback.TrotImpactConstraints2;

num_grid.TrotStance1 = 15;
num_grid.TrotStance2 = 15;

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

