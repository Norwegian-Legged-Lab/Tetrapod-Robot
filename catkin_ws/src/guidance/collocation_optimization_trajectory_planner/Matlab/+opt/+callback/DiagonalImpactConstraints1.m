function DiagonalImpactConstraints(nlp, src, tar, bounds, varargin)
    plant = nlp.Plant;

    removeConstraint(nlp, 'tContDomain');

    plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

    %//TODO Check if the solution given in RightImpactConstraints.m in Atlas example is correct