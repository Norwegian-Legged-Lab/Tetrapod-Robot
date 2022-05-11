function ParallelStanceConstraints(nlp, bounds, varargin)

    ip = inputParser;

    ip.addParameter('LoadPath', [], @ischar);
    ip.parse(varargin{:});

    domain = nlp.Plant;

    % Virtual constraints
   opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);

   opt.constraint.output_boundary_parallel(nlp, bounds);

    % Foot clearance

    [fl_foot_frame] = sys.frames.FlFoot(domain);
    [rl_foot_frame] = sys.frames.RlFoot(domain);
    
    opt.constraint.foot_clearance(nlp, bounds, fl_foot_frame, 'first');
%     opt.constraint.foot_clearance(nlp, bounds, rl_foot_frame, 'last');

    % Swing toe position
    opt.constraint.swing_position(nlp, rl_foot_frame, 'first');
%     opt.constraint.swing_position(nlp, fl_foot_frame, 'last');

    % experimental stance foot height constraints
    [fr_foot_frame] = sys.frames.FrFoot(domain);
    [rr_foot_frame] = sys.frames.RrFoot(domain);
    opt.constraint.swing_position(nlp, fr_foot_frame, 'first');
    opt.constraint.swing_position(nlp, rr_foot_frame, 'first');

    
    opt.constraint.step_distance(nlp, bounds);

    % Swing foot velocity
    opt.constraint.impact_velocity(nlp, bounds, fl_foot_frame);
    opt.constraint.initial_swing_velocity(nlp, bounds, rl_foot_frame);
%     opt.constraint.yaw_end(nlp, bounds);

    opt.constraint.average_velocity(nlp, bounds);

end