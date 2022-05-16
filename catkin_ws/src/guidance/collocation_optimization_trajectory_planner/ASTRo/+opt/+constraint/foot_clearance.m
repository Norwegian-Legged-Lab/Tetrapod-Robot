function foot_clearance(nlp, bounds, frame, boundary)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_clearance_', frame.Name, '_' ,domain.Name], pos(3), {x});
    
    % Foot Clearance imposed on the beginning of each domain
    addNodeConstraint(nlp, constraint_func, {'x'}, boundary, ...
        bounds.constrBounds.foot_clearance.lb, ...
        bounds.constrBounds.foot_clearance.ub,'Nonlinear');
end