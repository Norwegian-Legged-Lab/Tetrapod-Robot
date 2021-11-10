function nlp = updateVariableBounds(nlp, bounds)
    nlp.updateVariableBounds(bounds);

    nlp.Phase(1).Plant.UserNlpConstraint(nlp.Phase(1), bounds.DiagonalStance);
    nlp.Phase(3).Plant.UserNlpConstraint(nlp.Phase(3), bounds.ParallelStance);

    nlp.update();
end
