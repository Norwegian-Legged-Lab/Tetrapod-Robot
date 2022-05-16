function ParallelImpactConstraints(nlp, src, tar, bounds, varargin)
    plant = nlp.Plant;

    removeConstraint(nlp, 'tContDomain');
    
    plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

%     removeConstraint(nlp, 'dxDiscreteMapParallelImpact');
    R = plant.R;
    dx = plant.States.dx;
    dxn = plant.States.dxn;
    x = plant.States.x;
    xn = plant.States.xn;
    
    removeConstraint(nlp, 'xDiscreteMapParallelImpact');
    x_diff = R*x - xn;
    x_map = SymFunction(['xPartialDiscreteMap' plant.Name], [x_diff(1:5); x_diff(6:end)], {x,xn});
    addNodeConstraint(nlp, x_map, {'x', 'xn'}, 'first', 0, 0, 'Linear');

    dx_diff = R*dx - dxn;

    dx_map = SymFunction(['dxPartialDiscreteMap' plant.Name], dx_diff(1:6), {dx,dxn});
    
%     addNodeConstraint(nlp, plant.dxMap, {'dx', 'xn', 'dxn', 'fFrFoot', 'fRrFoot'}, 'first', 0, 0, 'Linear');
%     addNodeConstraint(nlp, dx_map, {'dx', 'dxn'}, 'first', 0, 0, 'Linear');

end