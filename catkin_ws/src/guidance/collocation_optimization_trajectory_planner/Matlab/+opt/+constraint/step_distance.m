function step_distance(nlp, bounds, stance_frame, swing_frame)
    %constraints for step length and step width

    domain = nlp.Plant;
    x = domain.States.x;

    [fl_foot_frame] = sys.frames.FlFoot(domain);
    [fr_foot_frame] = sys.frames.FrFoot(domain);

    stance_foot = getCartesianPosition(domain, stance_frame);
    swing_foot = getCartesianPosition(domain, swing_frame);

    constraint = tomatrix(stance_foot(1:2) - swing_foot(1:2));
    constraint_func = SymFunction(['step_distance_',domain.Name], constraint, {x});
    lb = [bounds.constrBounds.stepLength.lb,...
        bounds.constrBounds.stepWidth.lb];
    ub = [bounds.constrBounds.stepLength.ub,...
        bounds.constrBounds.stepWidth.ub];
    addNodeConstraint(nlp, constraint_func, {'x'}, 'first', lb, ub, 'NonLinear');
end