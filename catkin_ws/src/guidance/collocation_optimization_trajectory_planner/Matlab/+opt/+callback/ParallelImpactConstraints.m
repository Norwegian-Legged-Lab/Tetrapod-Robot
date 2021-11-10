function ParallelImpactConstraints(nlp, src, tar, bounds, varargin)
    plant = nlp.Plant;

    removeConstraint(nlp, 'tContDomain');

    plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});
end