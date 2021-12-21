function DiagonalImpactConstraints(nlp, src, tar, bounds, varargin)
    plant = nlp.Plant;

    removeConstraint(nlp, 'tContDomain');

    plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

    removeConstraint(nlp, 'xDiscreteMapTrotImpact2');

    R = plant.R;
    x = plant.States.x;
    xn = plant.States.xn;
    x_diff = R*x - xn;
    x_map = SymFunction(['xPartialDiscreteMap' plant.Name], x_diff(7:end), {x,xn});

    addNodeConstraint(nlp, x_map, {'x', 'xn'}, 'first', 0, 0, 'Linear');
    %//TODO Check if the solution given in RightImpactConstraints.m in Atlas example is correct