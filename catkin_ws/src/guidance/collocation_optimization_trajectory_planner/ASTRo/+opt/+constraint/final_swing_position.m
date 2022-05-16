function final_swing_position(nlp, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['final_swing_position_',domain.Name], pos(3), {x});
    
    addNodeConstraint(nlp, constraint_func, {'x'}, 'last', 0, 0, 'Nonlinear');
end

