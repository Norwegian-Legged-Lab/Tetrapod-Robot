function foot_clearance(nlp, bounds, ascending_frame, descending_frame)
    % constraints for swing foot clearance

    domain = nlp.Plant;
    x = domain.States.x;


    ascending_pos = getCartesianPosition(domain, ascending_frame);

    descending_pos = getCartesianPosition(domain, descending_frame);

    ascending_constraint_func = SymFunction(['foot_clearance_',ascending_frame.Name,domain.Name], ascending_pos(3), {x});

    descending_constraint_func = SymFunction(['foot_clearance_',descending_frame.Name,domain.Name], descending_pos(3), {x});

    % Foot Clearance Middle

    numNode = nlp.NumNode;
    % Foot Clearance beginning

    addNodeConstraint(nlp, ascending_constraint_func, {'x'}, 'first', 0, 0, 'Nonlinear');

    addNodeConstraint(nlp, descending_constraint_func, {'x'}, 'first',...
        bounds.constrBounds.foot_clearance.lb,...
        bounds.constrBounds.foot_clearance.ub, 'NonLinear');
    
    % Foot Clearance end

    addNodeConstraint(nlp, ascending_constraint_func, {'x'}, 'last',...
        bounds.constrBounds.foot_clearance.lb,...
        bounds.constrBounds.foot_clearance.ub, 'NonLinear');
    addNodeConstraint(nlp, descending_constraint_func, {'x'}, 'last', 0, 0, 'NonLinear');
end