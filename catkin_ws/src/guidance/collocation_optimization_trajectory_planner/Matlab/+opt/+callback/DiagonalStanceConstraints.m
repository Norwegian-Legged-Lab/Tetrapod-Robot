function DiagonalStanceConstraints(nlp, bounds, varargin)
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
    opt.constraint.foot_clearance(nlp, bounds, fl_foot_frame, rr_foot_frame);

    % swing foot position
    opt.constraint.step_distance(nlp, bounds, fr_foot_frame, fl_foot_frame);
    %//TODO: Make sure you completely understand how the implementation of these constraints dictate signs in the getBounds function
    % swing foot velocity
    opt.constraint.impact_velocity(nlp, bounds, fl_foot_frame, rr_foot_frame);

    opt.constraint.yaw_start(nlp, bounds);

    opt.constraint.average_velocity(nlp, bounds);

end

