function bounds = GetBounds_trot(model, speed)

    if nargin < 2
        speed = [0, 0];
    end

    model_bounds = model.getLimits();

    outer_hip_yaw_limit = deg2rad(30);
    inner_hip_yaw_limit = deg2rad(0);
    upper_hip_pitch_limit = deg2rad(10);
    lower_hip_pitch_limit = deg2rad(60);
    upper_knee_pitch_limit = deg2rad(5);
    lower_knee_pitch_limit = deg2rad(75);

    model_bounds.states.x.lb(7:end) = [-inner_hip_yaw_limit; -upper_hip_pitch_limit; -upper_knee_pitch_limit
        -outer_hip_yaw_limit; -lower_hip_pitch_limit; -lower_knee_pitch_limit
        -outer_hip_yaw_limit; -lower_hip_pitch_limit; -lower_knee_pitch_limit
        -inner_hip_yaw_limit; -upper_hip_pitch_limit; -upper_knee_pitch_limit];
    
    model_bounds.states.x.ub(7:end) = [outer_hip_yaw_limit; lower_hip_pitch_limit; lower_knee_pitch_limit
        inner_hip_yaw_limit; upper_hip_pitch_limit; upper_knee_pitch_limit
        inner_hip_yaw_limit; upper_hip_pitch_limit; upper_knee_pitch_limit
        outer_hip_yaw_limit; lower_hip_pitch_limit; lower_knee_pitch_limit];
    
    model_bounds.options.enforceVirtualConstraints = true;

    model_bounds.inputs.pqfixed.lb = zeros(3,1);
    model_bounds.inputs.pqfixed.ub = zeros(3,1);

    % feedback control gains for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;

    model_bounds.time.duration.lb = 0.5;
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

    % Trot stance 1

    bounds.TrotStance = model_bounds;

    bounds.TrotStance.time.t0.lb = 0;
    bounds.TrotStance.time.t0.ub = 0;
    bounds.TrotStance.time.t0.x0 = 0;
    bounds.TrotStance.time.tf.x0 = 0.5;
    bounds.TrotStance.time.tf.lb = 0.1;
    %//TODO: Check if z is defined upwards or downwards in the Atlas model

    bounds.TrotStance.constrBounds.stepWidth.lb = 0.3 + 0.5*vy - 0.01;
    bounds.TrotStance.constrBounds.stepWidth.ub = 0.3 + 1*vy + 0.01;
    bounds.TrotStance.constrBounds.stepLength.lb = 0.4*vx - 0.01;
    bounds.TrotStance.constrBounds.stepLength.ub = 1*vx + 0.01;

    %//TODO: Check that you understand what this refers to
    bounds.TrotStance.constrBounds.outputLimit.lb = [-1, -1, -0, -1, -1, -0]';
    bounds.TrotStance.constrBounds.outputLimit.ub = [1, 1, 0.5, 1, 1, 0.5]';

    bounds.TrotStance.params.pposition.x0 = [0, 0.5];
    
    bounds.TrotStance1 = bounds.TrotStance;
    bounds.TrotStance2 = bounds.TrotStance;

    
    bounds.TrotStance1.inputs.ConstraintWrench.fFrFoot.lb = [-10000, -10000, 0]';
    bounds.TrotStance1.inputs.ConstraintWrench.fFrFoot.ub = [10000, 10000, 10000]';
    
    bounds.TrotStance1.inputs.ConstraintWrench.fRlFoot.lb = [-10000, -10000, 0]';
    bounds.TrotStance1.inputs.ConstraintWrench.fRlFoot.ub = [10000, 10000, 10000]';

    bounds.TrotStance2.inputs.ConstraintWrench.fFlFoot.lb = [-10000, -10000, 0]';
    bounds.TrotStance2.inputs.ConstraintWrench.fFlFoot.ub = [10000, 10000, 10000]';
    
    bounds.TrotStance2.inputs.ConstraintWrench.fRrFoot.lb = [-10000, -10000, 0]';
    bounds.TrotStance2.inputs.ConstraintWrench.fRrFoot.ub = [10000, 10000, 10000]';

    %Trot impacts

    bounds.TrotImpact.states.x = model_bounds.states.x;
    bounds.TrotImpact.states.xn = model_bounds.states.x;
    bounds.TrotImpact.states.dx = model_bounds.states.dx;
    bounds.TrotImpact.states.dxn = model_bounds.states.dx;

    bounds.TrotImpact.inputs = struct();

    bounds.TrotImpact.params = struct();

    bounds.TrotImpact1 = bounds.TrotImpact;
    bounds.TrotImpact2 = bounds.TrotImpact;
    
    bounds.TrotImpact1.inputs.ConstraintWrench.fFlFoot.lb = [-10000, -10000, 0]';
    bounds.TrotImpact1.inputs.ConstraintWrench.fFlFoot.ub = [10000, 10000, 10000]';

    bounds.TrotImpact1.inputs.ConstraintWrench.fRrFoot.lb = [-10000, -10000, 0]';
    bounds.TrotImpact1.inputs.ConstraintWrench.fRrFoot.ub = [10000, 10000, 10000]';

    bounds.TrotImpact2.inputs.ConstraintWrench.fFrFoot.lb = [-10000, -10000, 0]';
    bounds.TrotImpact2.inputs.ConstraintWrench.fFrFoot.ub = [10000, 10000, 10000]';

    bounds.TrotImpact2.inputs.ConstraintWrench.fRlFoot.lb = [-10000, -10000, 0]';
    bounds.TrotImpact2.inputs.ConstraintWrench.fRlFoot.ub = [10000, 10000, 10000]';


end
