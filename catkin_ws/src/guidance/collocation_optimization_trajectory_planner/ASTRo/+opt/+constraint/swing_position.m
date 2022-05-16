function swing_position(nlp, frame, boundary)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['swing_position_', frame.Name, '_', domain.Name], pos(3), {x});
    
    addNodeConstraint(nlp, constraint_func, {'x'}, boundary, 0, 0, 'Nonlinear');
end

