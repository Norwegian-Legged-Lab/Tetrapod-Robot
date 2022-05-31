function bounds = GetBounds(model, speed, closed_loop)

    if nargin < 2
        speed = [0, 0];
    end
    
    if nargin < 3
        closed_loop = true;
    end
    
    tf_domain_ub = 0.15;
    tf_domain_lb = 0.01;
    tf_domain_x0 = 0.1;
    
    model_bounds = model.getLimits();
    
    model_bounds.closed_loop = closed_loop;
    
    model_bounds.states.ddx.lb(:) = -100;
    model_bounds.states.ddx.ub(:) = 100;
    
    hip_yaw_inner = deg2rad(0);
    hip_yaw_outer = deg2rad(60);
    
    hip_pitch_upper = -pi/4;
    hip_pitch_lower = pi/8;
    
    knee_pitch_inner = deg2rad(60); %60 degrees is minimal physically feasible
    knee_pitch_outer = pi;
    
    model_bounds.states.x.lb(7) = hip_yaw_inner;
    model_bounds.states.x.lb(8) = hip_pitch_upper;
    model_bounds.states.x.lb(9) = knee_pitch_inner;
    
    model_bounds.states.x.ub(7) = hip_yaw_outer;
    model_bounds.states.x.ub(8) = hip_pitch_lower;
    model_bounds.states.x.ub(9) = knee_pitch_outer;
    
    model_bounds.states.x.lb(10) = -hip_yaw_outer;
    model_bounds.states.x.lb(11) = hip_pitch_upper;
    model_bounds.states.x.lb(12) = knee_pitch_inner;
    
    model_bounds.states.x.ub(10) = -hip_yaw_inner;
    model_bounds.states.x.ub(11) = hip_pitch_lower;
    model_bounds.states.x.ub(12) = knee_pitch_outer;
    
    model_bounds.states.x.lb(13) = -hip_yaw_outer;
    model_bounds.states.x.lb(14) = hip_pitch_upper;
    model_bounds.states.x.lb(15) = knee_pitch_inner;
    
    model_bounds.states.x.ub(13) = -hip_yaw_inner;
    model_bounds.states.x.ub(14) = hip_pitch_lower;
    model_bounds.states.x.ub(15) = knee_pitch_outer;
    
    model_bounds.states.x.lb(16) = hip_yaw_inner;
    model_bounds.states.x.lb(17) = hip_pitch_upper;
    model_bounds.states.x.lb(18) = knee_pitch_inner;
    
    model_bounds.states.x.ub(16) = hip_yaw_outer;
    model_bounds.states.x.ub(17) = hip_pitch_lower;
    model_bounds.states.x.ub(18) = knee_pitch_outer;


    
    model_bounds.inputs.Control.u.lb = -500*ones(12,1);
    model_bounds.inputs.Control.u.ub = 500*ones(12,1);
    
    model_bounds.states.dx.lb(7:end) = -6;
    model_bounds.states.dx.ub(7:end) = 6;
    
    model_bounds.options.enforceVirtualConstraints = true;

    % feedback control gains for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;

    model_bounds.time.duration.lb = tf_domain_lb;
    model_bounds.time.duration.ub = tf_domain_ub;
    model_bounds.time.duration.x0 = tf_domain_x0;

    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 0;
    model_bounds.time.tf.lb = tf_domain_lb;
    model_bounds.time.tf.ub = tf_domain_ub;

    model_bounds.constrBounds.foot_clearance.lb = 0.02;
    model_bounds.constrBounds.foot_clearance.ub = 0.15;
    model_bounds.constrBounds.averageVelocity.lb = speed;
    model_bounds.constrBounds.averageVelocity.ub = speed;

    model_bounds.constrBounds.yaw_initial.lb = -0;
    model_bounds.constrBounds.yaw_initial.ub = 0;

    model_bounds.constrBounds.footVelocityBeginning.lb = [-0.1, -0.1, 0]';
    model_bounds.constrBounds.footVelocityBeginning.ub = [0.1, 0.1, 0.6]';
    model_bounds.constrBounds.footVelocityEnd.lb = [-0.1, -0.1, -2]';
    model_bounds.constrBounds.footVelocityEnd.ub = [0.2, 0.1, 0]';

    %Common Virtual Constraints

    model_bounds.params.aposition.lb = -100;
    model_bounds.params.aposition.ub = 100;
    model_bounds.params.pposition.lb = [0, 0];
    model_bounds.params.pposition.ub = [2, 2];
    
    pms = sys.GetExtraParams();
    
    body_nominal_pos = [-pms.hip_offset_x - pms.foot_offset_x, pms.hip_offset_y, 0];
    offset_vec = [0.2, 0.3, 0.1];
    % //TODO: Return to these and check if they're understood correctly
    model_bounds.params.pFlFoot.lb = body_nominal_pos + [(pms.hip_offset_x + pms.foot_offset_x), pms.hip_offset_y, 0] - offset_vec;
    model_bounds.params.pFlFoot.ub = body_nominal_pos + [(pms.hip_offset_x + pms.foot_offset_x), pms.hip_offset_y, 0] + offset_vec;
    model_bounds.params.pFrFoot.lb = [0, 0, 0] - offset_vec;
    model_bounds.params.pFrFoot.ub = [0, 0, 0] + offset_vec;%I guess the front right foot will determine the entire position of the robot?
    model_bounds.params.pRlFoot.lb = body_nominal_pos + [-(pms.hip_offset_x + pms.foot_offset_x), pms.hip_offset_y, 0] - offset_vec;
    model_bounds.params.pRlFoot.ub = body_nominal_pos + [-(pms.hip_offset_x + pms.foot_offset_x), pms.hip_offset_y, 0] + offset_vec;
    model_bounds.params.pRrFoot.lb = body_nominal_pos + [-(pms.hip_offset_x + pms.foot_offset_x), -pms.hip_offset_y, 0] - offset_vec;
    model_bounds.params.pRrFoot.ub = body_nominal_pos + [-(pms.hip_offset_x + pms.foot_offset_x), -pms.hip_offset_y, 0] + offset_vec;

    % Boundary values for each domain

    bounds = struct();

    vx = speed(1);
    vy = speed(2);

    % Diagonal stance

    bounds.DiagonalStance = model_bounds;

    bounds.DiagonalStance.time.t0.lb = 0;
    bounds.DiagonalStance.time.t0.ub = 0;
    bounds.DiagonalStance.time.t0.x0 = 0;
    bounds.DiagonalStance.time.tf.x0 = tf_domain_x0;

    %//TODO: Check if z is defined upwards or downwards in the Atlas model
    bounds.DiagonalStance.inputs.ConstraintWrench.fFrFoot.lb = [-1000, -1000, 0]';
    bounds.DiagonalStance.inputs.ConstraintWrench.fFrFoot.ub = [1000, 1000, 5000]';
    
    bounds.DiagonalStance.inputs.ConstraintWrench.fRlFoot.lb = [-1000, -1000, 0]';
    bounds.DiagonalStance.inputs.ConstraintWrench.fRlFoot.ub = [1000, 1000, 5000]';

    bounds.DiagonalStance.constrBounds.stepWidth.lb = 0.303 + 0.5*vy - 0.2;
    bounds.DiagonalStance.constrBounds.stepWidth.ub = 0.303 + 1*vy + 0.2;

    bounds.DiagonalStance.constrBounds.stepLength.front.lb = -1*vx - 0.01;
    bounds.DiagonalStance.constrBounds.stepLength.front.ub = -0.5*vx + 0.01;

    bounds.DiagonalStance.constrBounds.stepLength.rear.lb = -0.25*vx - 0.01;
    bounds.DiagonalStance.constrBounds.stepLength.rear.ub = 0.25*vx + 0.01;

    %//TODO: Check that you understand what this refers to
    bounds.DiagonalStance.constrBounds.outputLimit.lb = [-hip_yaw_outer, knee_pitch_inner, -hip_yaw_outer, knee_pitch_inner]';
    bounds.DiagonalStance.constrBounds.outputLimit.ub = [-hip_yaw_inner, knee_pitch_outer, -hip_yaw_inner, knee_pitch_outer]'; %base yaw and pitch/roll outputs as well as front stance hip roll and pitch

    bounds.DiagonalStance.params.pposition.x0 = [0, tf_domain_x0];

    % Impact from diagonal to parallel stance

    bounds.ParallelImpact.states.x = model_bounds.states.x;
    bounds.ParallelImpact.states.xn = model_bounds.states.x;
    bounds.ParallelImpact.states.dx = model_bounds.states.dx;
    bounds.ParallelImpact.states.dxn = model_bounds.states.dx;

    bounds.ParallelImpact.inputs = struct();
    bounds.ParallelImpact.inputs.ConstraintWrench.fFrFoot.lb = [-1000, -1000, 0]';
    bounds.ParallelImpact.inputs.ConstraintWrench.fFrFoot.ub = [1000, 1000, 5000]';

    bounds.ParallelImpact.inputs.ConstraintWrench.fRrFoot.lb = [-1000, -1000, 0]';
    bounds.ParallelImpact.inputs.ConstraintWrench.fRrFoot.ub = [1000, 1000, 5000]';

    bounds.ParallelImpact.params = struct();

    % Parallel stance

    bounds.ParallelStance = model_bounds;

    bounds.ParallelStance.time.t0.lb = 0;
    bounds.ParallelStance.time.t0.ub = 0;
    bounds.ParallelStance.time.t0.x0 = 0;
    bounds.ParallelStance.time.tf.x0 = tf_domain_x0;

    bounds.ParallelStance.params.pposition.x0 = [0, tf_domain_x0];

    bounds.ParallelStance.inputs.ConstraintWrench.fFrFoot.lb = [-1000, -1000, 0];
    bounds.ParallelStance.inputs.ConstraintWrench.fFrFoot.ub = [1000, 1000, 5000];

    bounds.ParallelStance.inputs.ConstraintWrench.fRrFoot.lb = [-1000, -1000, 0];
    bounds.ParallelStance.inputs.ConstraintWrench.fRrFoot.ub = [1000, 1000, 5000];

    bounds.ParallelStance.constrBounds.stepWidth.lb = 0.303 + 0.5*vy - 0.2;
    bounds.ParallelStance.constrBounds.stepWidth.ub = 0.303 + 1*vy + 0.2;

    bounds.ParallelStance.constrBounds.stepLength.front.lb = -0.25*vx - 0.01;
    bounds.ParallelStance.constrBounds.stepLength.front.ub = 0.25*vx + 0.01;

    bounds.ParallelStance.constrBounds.stepLength.rear.lb = -1*vx - 0.01;
    bounds.ParallelStance.constrBounds.stepLength.rear.ub = -0.5*vx + 0.01;

    bounds.ParallelStance.constrBounds.outputLimit.lb = [-hip_yaw_outer, knee_pitch_inner, hip_yaw_inner, knee_pitch_inner]';
    bounds.ParallelStance.constrBounds.outputLimit.ub = [-hip_yaw_inner, knee_pitch_outer, hip_yaw_outer, knee_pitch_outer]'; %base yaw and pitch/roll outputs as well as front stance hip roll and pitch

    % Impact from parallel stance to diagonal stance

    bounds.DiagonalImpact.states.x = model_bounds.states.x;
    bounds.DiagonalImpact.states.xn = model_bounds.states.x;
    bounds.DiagonalImpact.states.dx = model_bounds.states.dx;
    bounds.DiagonalImpact.states.dxn = model_bounds.states.dx;

    bounds.DiagonalImpact.inputs = struct();
    %//TODO: If stuff behaves strangely, check if perhaps these are applied not to relabeled states but pre-relabeling
    bounds.DiagonalImpact.inputs.ConstraintWrench.fFlFoot.lb = [-1000, -1000, 0]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fFlFoot.ub = [1000, 1000, 5000]';

    bounds.DiagonalImpact.inputs.ConstraintWrench.fRrFoot.lb = [-1000, -1000, 0]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fRrFoot.ub = [1000, 1000, 5000]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fFrFoot.lb = [-1000, -1000, 0]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fFrFoot.ub = [1000, 1000, 5000]';

    bounds.DiagonalImpact.inputs.ConstraintWrench.fRlFoot.lb = [-1000, -1000, 0]';
    bounds.DiagonalImpact.inputs.ConstraintWrench.fRlFoot.ub = [1000, 1000, 5000]';


    bounds.DiagonalImpact.params = struct();

%     bounds.DiagonalStance.inputs.Control.u.lb(5) = 0;
%     bounds.DiagonalStance.inputs.Control.u.ub(5) = 0;
%     
%     bounds.ParallelStance.inputs.Control.u.lb(11) = 0;
%     bounds.ParallelStance.inputs.Control.u.ub(11) = 0;


end

