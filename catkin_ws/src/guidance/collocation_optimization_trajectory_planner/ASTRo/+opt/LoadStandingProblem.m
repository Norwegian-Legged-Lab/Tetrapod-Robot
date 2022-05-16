function nlp = LoadStandingProblem(system, bounds, load_path)
    if nargin < 3
        load_path = [];
    end

    quadruple_stance = system.Gamma.Nodes.Domain{1};
    quadruple_stance.UserNlpConstraint = @opt.callback.QuadrupleStanceConstraints;

    num_grid.QuadrupleStance = 10;

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
