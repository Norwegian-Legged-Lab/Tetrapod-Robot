function foot_clearance_trot(nlp, bounds, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    
    
    
    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_clearance_',frame.Name], pos(3), {x});
    
    % Foot Clearance Middle
    numNode = nlp.NumNode;
    addNodeConstraint(nlp, constraint_func, {'x'}, 'first', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, floor(numNode/2)+1, ...
        bounds.constrBounds.foot_clearance.lb, ...
        bounds.constrBounds.foot_clearance.ub,'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, 'last', 0, 0, 'Nonlinear');
end

