function initial_swing_velocity(nlp, bounds, frame)
    % constraints for impact velocities
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    
    pos = getCartesianPosition(domain, frame);  
    J_pos = jacobian(pos, x);
    vel = J_pos * dx;
    constraint_func = SymFunction(['initial_swing_velocity_',frame.Name, '_', domain.Name], vel, {x, dx});
    
    % start swing foot velocity
    % (Make sure foot goes upward)
    lb = bounds.constrBounds.footVelocityBeginning.lb;
    ub = bounds.constrBounds.footVelocityBeginning.ub;
    addNodeConstraint(nlp, constraint_func, {'x','dx'}, 'first', lb, ub, 'NonLinear');
    
end

