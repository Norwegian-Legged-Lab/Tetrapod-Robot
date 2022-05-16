function DiagonalImpactConstraints(nlp, src, tar, bounds, varargin)
    plant = nlp.Plant;

    removeConstraint(nlp, 'tContDomain');
    
    
%     R = plant.R;
%     R(2, 2) = -1; %y-axis must be mirrored if nonzero
%     R(4,4) = -1; %roll must be mirrored if nonzero
%     R(6,6) = -1; %as must yaw
%     
%     joint_map_matrix = diag([-1, 1, 1]);
%     
%     joint_map_structure = [...
%         0, 0, 1, 0;
%         0, 0, 0, 1;
%         1, 0, 0, 0;
%         0, 1, 0, 0];
%     
%     R(7:18,7:18) = kron(joint_map_structure, joint_map_matrix);
%     
%     plant.R = R;
    
    plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

    removeConstraint(nlp, 'xDiscreteMapDiagonalImpact');

    x = plant.States.x;
    xn = plant.States.xn;
    
    dx = plant.States.dx;
    dxn = plant.States.dxn;
    
    
%     fFlFoot = plant.Inputs.ConstraintWrench.fFlFoot;
%     fRrFoot = plant.Inputs.ConstraintWrench.fRrFoot;
    
    R = plant.R;
    
    x_diff = R*x - xn;
    x_map = SymFunction(['xPartialDiscreteMap' plant.Name], [x_diff(3:4); x_diff(7:end)], {x,xn});
        
    addNodeConstraint(nlp, x_map, {'x', 'xn'}, 'first', 0, 0, 'Linear');
    
    dx_diff = R*dx - dxn;
    
%     removeConstraint(nlp, 'dxDiscreteMapDiagonalImpact');
%     addNodeConstraint(nlp, plant.dxMap, {'dx', 'xn', 'dxn', 'fFlFoot', 'fRrFoot'}, 'first', -5e-02, 5e-02, 'Linear');
    dx_map = SymFunction(['dxPartialDiscreteMap' plant.Name], dx_diff(1:6), {dx,dxn});


%     addNodeConstraint(nlp, dx_map, {'dx', 'dxn'}, 'first', 0, 0, 'Linear');
    
end