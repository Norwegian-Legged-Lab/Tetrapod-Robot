function swing_position(nlp, frame, boundary)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['swing_position_', frame.Name, '_', domain.Name], pos(3), {x});
    
%     if strcmp(boundary, 'first')
%         remaining = 'except-first';
%     end
%     if strcmp(boundary, 'last')
%         remaining = 'except-last';
%     end
    
%     addNodeConstraint(nlp, constraint_func, {'x'}, remaining, 0, 1);
    
    addNodeConstraint(nlp, constraint_func, {'x'}, boundary, 0, 0, 'Nonlinear');
end

