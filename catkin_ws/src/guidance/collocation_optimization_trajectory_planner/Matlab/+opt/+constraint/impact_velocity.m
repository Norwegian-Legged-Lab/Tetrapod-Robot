function impact_velocity(nlp, bounds, ascending_frame, descending_frame)
    % Constraints for impact velocities

    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;

    ascending_pos = getCartesianPosition(domain, ascending_frame);
    
    descending_pos = getCartesianPosition(domain, descending_frame);


    J_ascending_pos = jacobian(ascending_pos, x);
    J_descending_pos = jacobian(descending_pos, x);

    ascending_vel = J_ascending_pos * dx;
    descending_vel = J_descending_pos * dx;

    ascending_constraint_func = SymFunction(['impact_velocity_',frame.Name,domain.Name], ascending_vel, {x, dx});
    descending_constraint_func = SymFunction(['impact_velocity_',frame.Name,domain.Name], descending_vel, {x, dx});

    % Impact descending swing foot velocity
    % (Foot goes downward and slightly backward)

    lb = bounds.constrBounds.footVelocityEnd.lb;
    ub = bounds.constrBounds.footVelocityEnd.ub;
    addNodeConstraint(nlp, descending_constraint_func, {'x', 'dx'}, 'last', lb, ub, 'NonLinear');

    % Start ascending swing foot velocity

    lb = bounds.constrBounds.footVelocityBeginning.lb;
    ub = bounds.constrBounds.footVelocityBeginning.ub;
    addNodeConstraint(nlp, ascending_constraint_func, {'x', 'dx'}, 'first', lb, ub, 'Nonlinear');
end