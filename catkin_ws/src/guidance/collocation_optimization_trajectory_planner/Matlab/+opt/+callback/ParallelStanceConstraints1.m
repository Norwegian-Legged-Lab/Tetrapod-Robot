function ParallelStanceConstraints1(nlp, bounds, varargin)

    domain = nlp.Plant;

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
    [rr_foot_frame] = sys.frames.RrFoot(domain);
    
    opt.constraint.foot_clearance(nlp, bounds, rl_foot_frame, fl_foot_frame);

    % Swing toe position
    opt.constraint.step_distance(nlp, bounds, rr_foot_frame, rl_foot_frame);

    % Swing foot velocity
    opt.constraint.impact_velocity(nlp, bounds, rl_foot_frame, fl_foot_frame);

    opt.constraint.yaw_start(nlp, bounds);

    opt.constraint.average_velocity(nlp, bounds);

end