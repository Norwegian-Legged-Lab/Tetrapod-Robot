function bounds = GetBounds(model, speed)

    if nargin < 2
        speed = [0, 0];
    end

    model_bounds = model.getLimits();

    model_bounds.options.enforceVirtualConstraints = true;

    model_bounds.inputs.pqfixed.lb = zeros(3,1);
    model_bounds.inputs.pqfixed.ub = zeros(3,1);

    % feedback control gains for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;

    model_bounds.time.duration.lb = 0.2;
    model_bounds.time.duration.ub = 1;

    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 2;
    model_bounds.time.tf.lb = 0;
    model_bounds.time.tf.ub = 2;

    model_bounds.constrBounds.foot_clearance.lb = 0.06;
    model_bounds.constrBounds.foot_clearance.ub = 0.15;
    model_bounds.constrBounds.averageVelocity.lb = speed;
    model_bounds.constrBounds.averageVelocity.ub = speed;

    model_bounds.constrBounds.yaw_initial.lb = 0;
    model_bounds.constrBounds.yaw_initial.ub = 0;

    model_bounds.constrBounds.footVelocityBeginning.lb = [-0.2, -0.05, 0]';
    model_bounds.constrBounds.footVelocityBeginning.ub = [0.2, 0.05, 0.3]';
    model_bounds.constrBounds.footVelocityEnd.lb = [-0.1, -0.05, -0.5]';
    model_bounds.constrBounds.footVelocityEnd.ub = [0.4, 0.05, -0.0]';

    %Common Virtual Constraints

    model_bounds.params.aposition.lb = -100;
    model_bounds.params.aposition.ub = 100;
    model_bounds.params.pposition.lb = [0, 0];
    model_bounds.params.pposition.ub = [2, 2];
    
    % //TODO: Return to these and check if they're understood correctly
    model_bounds.params.pFlFoot.lb = [-10, -10, 0];
    model_bounds.params.pFlFoot.ub = [10, 10, 1];
    model_bounds.params.pFrFoot.lb = [-10, -10, 0];
    model_bounds.params.pFrFoot.ub = [10, 10, 1];
    model_bounds.params.pRlFoot.lb = [-10, -10, 0];
    model_bounds.params.pRlFoot.ub = [10, 10, 1];
    model_bounds.params.pRrFoot.lb = [-10, -10, 0];
    model_bounds.params.pRrFoot.ub = [10, 10, 1];

    % Boundary values for each domain

    bounds = struct();

    vx = speed(1);
    vy = speed(2);

    % Diagonal stance

    bounds.DiagonalStance = model_bounds;

    bounds.DiagonalStance.time.t0.lb = 0;
    bounds.DiagonalStance.time.t0.ub = 0;
    bounds.DiagonalStance.time.t0.x0 = 0;
    bounds.DiagonalStance.time.tf.x0 = 0.5;

    %//TODO: Check if z is defined upwards or downwards in the Atlas model
    bounds.DiagonalStance.inputs.ConstraintWrench.fFrFoot.lb = [-10000, -10000, 0]';
    bounds.DiagonalStance.inputs.ConstraintWrench.fFrFoot.ub = [10000, 10000, 10000]';
    
    bounds.DiagonalStance.inputs.ConstraintWrench.fRlFoot.lb = [-10000, -10000, 0]';
    bounds.DiagonalStance.inputs.ConstraintWrench.fRlFoot.ub = [10000, 10000, 10000]';

    bounds.DiagonalStance.constrBounds.stepWidth.lb = 0.3 + 0.5*vy - 0.01;
    bounds.DiagonalStance.constrBounds.stepWidth.ub = 0.3 + 1*vy + 0.01;
    bounds.DiagonalStance.constrBounds.stepLength.lb = 0.4*vx - 0.01;
    bounds.DiagonalStance.constrBounds.stepLength.ub = 1*vx + 0.01;

    %//TODO: Check that you understand what this refers to
    bounds.DiagonalStance.constrBounds.outputLimit.lb = [-1, -1, -0, -1, -1, -0]';
    bounds.DiagonalStance.constrBounds.outputLimit.ub = [1, 1, 0.5, 1, 1, 0.5]';

    bounds.DiagonalStance.params.pposition.x0 = [0, 0.5];

    % Impact from diagonal to parallel stance

    bounds.ParallelImpact.states.x = model_bounds.states.x;
    bounds.ParallelImpact.states.xn = model_bounds.states.x;
    bounds.ParallelImpact.states.dx = model_bounds.states.dx;
    bounds.ParallelImpact.states.dxn = model_bounds.states.dx;

    bounds.ParallelImpact.inputs = struct();
    bounds.ParallelImpact.inputs.ConstraintWrench.fFrFoot.lb = [-10000, -10000, 0]';
    bounds.ParallelImpact.inputs.ConstraintWrench.fFrFoot.ub = [10000, 10000, 10000]';

    bounds.ParallelImpact.params = struct();

    % Parallel stance

    bounds.ParallelStance = model_bounds;

    bounds.ParallelStance.time.t0.lb = 0;
    bounds.ParallelStance.time.t0.ub = 0;
    bounds.ParallelStance.time.t0.x0 = 0;
    bounds.ParallelStance.time.tf.x0 = 0.5;

    bounds.ParallelStance.params.pposition.x0 = [0,0.5];

    bounds.ParallelStance.inputs.ConstraintWrench.fFrFoot.lb = [-10000, -10000, 0];
    bounds.ParallelStance.inputs.ConstraintWrench.fFrFoot.ub = [10000, 10000, 10000];

    bounds.ParallelStance.inputs.ConstraintWrench.fRrFoot.lb = [-10000, -10000, 0];
    bounds.ParallelStance.inputs.ConstraintWrench.fRrFoot.ub = [10000, 10000, 10000];

    bounds.ParallelStance.constrBounds.stepWidth.lb = 0.3 + 0.5*vy - 0.01;
    bounds.ParallelStance.constrBounds.stepWidth.ub = 0.3 + 1*vy + 0.01;

    bounds.ParallelStance.constrBounds.stepLength.lb = 0.4*vx - 0.01;
    bounds.ParallelStance.constrBounds.stepLength.ub = 1*vx + 0.01;

    bounds.ParallelStance.constrBounds.outputLimit.lb = [-1, -1, -0, -1, -1, -0]';
    bounds.ParallelStance.constrBounds.outputLimit.ub = [1, 1, 0.5, 1, 1, 0.5]';

    % Impact from parallel stance to diagonal stance

    bounds.DiagonalImpact.states.x = model_bounds.states.x;
    bounds.DiagonalImpact.states.xn = model_bounds.states.x;
    bounds.DiagonalImpact.states.dx = model_bounds.states.dx;
    bounds.DiagonalImpact.states.dxn = model_bounds.states.dx;

    bounds.DiagonalImpact.inputs = struct();
    %//TODO: If stuff behaves strangely, check if perhaps these are applied not to relabeled states but pre-relabeling
    bounds.DiagonalImpact.inputs.ConstraintWrench.fFrFoot.lb = [-10000, -10000, 0]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fFrFoot.ub = [10000, 10000, 10000]';

    bounds.DiagonalImpact.inputs.ConstraintWrench.fRlFoot.lb = [-10000, -10000, 0]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fRlFoot.ub = [10000, 10000, 10000]';

    bounds.DiagonalImpact.params = struct();

end
