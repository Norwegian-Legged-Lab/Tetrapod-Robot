function DiagonalStanceConstraints1(nlp, bounds, varargin)
    %DIAGONALSTANCECONSTRAINTS Summary of this function goes here
    %   Detailed explanation goes here
    domain = nlp.Plant;

    ip = inputParser;

    ip.addParameter('LoadPath', [], @ischar);
    ip.parse(varargin{:});

    domain = nlp.Plant;

    % Virtual constraints
    opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);

    opt.constraint.output_boundary_diagonal(nlp, bounds);

    % Foot clearance

    [fl_foot_frame] = sys.frames.FlFoot(domain);
    [fr_foot_frame] = sys.frames.FrFoot(domain);
    [rr_foot_frame] = sys.frames.RrFoot(domain);
    [rl_foot_frame] = sys.frames.RlFoot(domain);
    opt.constraint.foot_clearance_trot(nlp, bounds, fr_foot_frame);
    opt.constraint.foot_clearance_trot(nlp, bounds, rl_foot_frame);

    % swing foot position
    opt.constraint.step_distance(nlp, bounds, fl_foot_frame, fr_foot_frame);
    opt.constraint.step_distance(nlp, bounds, rr_foot_frame, rl_foot_frame);
    %//TODO: Make sure you completely understand how the implementation of these constraints dictate signs in the getBounds function
    % swing foot velocity
    opt.constraint.impact_velocity_trot(nlp, bounds, fr_foot_frame);
    opt.constraint.impact_velocity_trot(nlp, bounds, rl_foot_frame);
    
    opt.constraint.yaw_start(nlp, bounds);

    opt.constraint.average_velocity(nlp, bounds);

end

