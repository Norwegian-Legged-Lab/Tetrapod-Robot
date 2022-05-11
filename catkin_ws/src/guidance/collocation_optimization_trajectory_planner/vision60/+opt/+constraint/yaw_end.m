function yaw_end(nlp, bounds)
    domain = nlp.Plant;

    x = domain.States.x;
    yaw = x('BaseRotZ');
    yaw_fun = SymFunction(['yaw_',domain.Name], yaw, {x});
    addNodeConstraint(nlp, yaw_fun, {'x'}, 'last', ...
        bounds.constrBounds.yaw_initial.lb, ...
        bounds.constrBounds.yaw_initial.ub, 'Linear');
end