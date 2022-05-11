function bounds = GetStandingBounds(model)

    model_bounds = model.getLimits();

    model_bounds.time.duration.lb = 0.5;
    model_bounds.time.duration.ub = 2;

    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 2;
    model_bounds.time.tf.lb = 0;
    model_bounds.time.tf.ub = 2;

    model_bounds.constrBounds.foot_clearance.lb = 0.06;
    model_bounds.constrBounds.foot_clearance.ub = 0.15;

    model_bounds.constrBounds.yaw_initial.lb = 0;
    model_bounds.constrBounds.yaw_initial.ub = 0;

        
    %%% Common Virtual Constraints
    model_bounds.params.aposition.lb = -100; % bezier coefficient for virtual constraints "position"
    model_bounds.params.aposition.ub = 100;
    model_bounds.params.pposition.lb = [0, 0]; % phase paramaters for virtual constraints "position"
    model_bounds.params.pposition.ub = [2, 2];

    model_bounds.params.pFlFoot.lb = [-10, -10, 0];
    model_bounds.params.pFlFoot.ub = [10, 10, 0];

    model_bounds.params.pFrFoot.lb = [-10, -10, 0];
    model_bounds.params.pFrFoot.ub = [10, 10, 0];

    model_bounds.params.pRlFoot.lb = [-10, -10, 0];
    model_bounds.params.pRlFoot.ub = [10, 10, 0];

    model_bounds.params.pRrFoot.lb = [-10, -10, 0];
    model_bounds.params.pRrFoot.ub = [10, 10, 0];

    bounds = struct();

    bounds.QuadrupleStance = model_bounds;
    %% some common boundary values are defined here
    
    bounds.QuadrupleStance.time.t0.lb = 0;
    bounds.QuadrupleStance.time.t0.ub = 0;
    bounds.QuadrupleStance.time.t0.x0 = 0;
    bounds.QuadrupleStance.time.tf.x0 = 0.5;

    bounds.QuadrupleStance.inputs.ConstraintWrench.fFlFoot.lb = [-10000,-10000,0];
    bounds.QuadrupleStance.inputs.ConstraintWrench.fFlFoot.ub = [10000,10000,10000];

    bounds.QuadrupleStance.inputs.ConstraintWrench.fFrFoot.lb = [-10000,-10000,0];
    bounds.QuadrupleStance.inputs.ConstraintWrench.fFrFoot.ub = [10000,10000,10000];

    bounds.QuadrupleStance.inputs.ConstraintWrench.fRlFoot.lb = [-10000,-10000,0];
    bounds.QuadrupleStance.inputs.ConstraintWrench.fRlFoot.ub = [10000,10000,10000];

    bounds.QuadrupleStance.inputs.ConstraintWrench.fRrFoot.lb = [-10000,-10000,0];
    bounds.QuadrupleStance.inputs.ConstraintWrench.fRrFoot.ub = [10000,10000,10000];

    bounds.QuadrupleStance.constrBounds.stepWidth.lb = 0.3-0.01;
    bounds.QuadrupleStance.constrBounds.stepWidth.ub = 0.3+0.01;
    bounds.QuadrupleStance.constrBounds.stepLength.ub =  + 0.01;
    bounds.QuadrupleStance.constrBounds.stepLength.lb =  - 0.01;


    bounds.QuadrupleStance.constrBounds.outputLimit.lb = [-0.2,-0.1,-0.2,0,0,0]';
    bounds.QuadrupleStance.constrBounds.outputLimit.ub = [0.2,0.2,0.05,0,0,0]'; 
end

