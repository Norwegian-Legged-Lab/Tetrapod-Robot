function step_distance(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    [fl_foot_frame] = sys.frames.FlFoot(domain);
    [fr_foot_frame] = sys.frames.FrFoot(domain);
    [rl_foot_frame] = sys.frames.RlFoot(domain);
    [rr_foot_frame] = sys.frames.RrFoot(domain);
    
    fl_foot = getCartesianPosition(domain, fl_foot_frame);  
    fr_foot = getCartesianPosition(domain, fr_foot_frame);
    rl_foot = getCartesianPosition(domain, rl_foot_frame);  
    rr_foot = getCartesianPosition(domain, rr_foot_frame);

    constraint_front = tomatrix(fl_foot(1:2) - fr_foot(1:2));
    constraint_rear = tomatrix(rl_foot(1:2) - rr_foot(1:2));
    
    constraint_func_front = SymFunction(['step_distance_front_',domain.Name], constraint_front, {x});
    constraint_func_rear = SymFunction(['step_distance_rear_',domain.Name], constraint_rear, {x});
    

    lb_front = [bounds.constrBounds.stepLength.front.lb
        bounds.constrBounds.stepWidth.lb];
    ub_front = [bounds.constrBounds.stepLength.front.ub
        bounds.constrBounds.stepWidth.ub];
    lb_rear = [bounds.constrBounds.stepLength.rear.lb
        bounds.constrBounds.stepWidth.lb];
    ub_rear = [bounds.constrBounds.stepLength.rear.ub
        bounds.constrBounds.stepWidth.ub];

    
    addNodeConstraint(nlp, constraint_func_front, {'x'}, 'first', lb_front, ub_front, 'NonLinear');
    addNodeConstraint(nlp, constraint_func_rear, {'x'}, 'first', lb_rear, ub_rear, 'NonLinear');
    
    %must be removed
    %addNodeConstraint(nlp, constraint_func_front, {'x'}, 'last', lb_front, ub_front, 'NonLinear');
    %addNodeConstraint(nlp, constraint_func_rear, {'x'}, 'last', lb_rear, ub_rear, 'NonLinear');

    
end

