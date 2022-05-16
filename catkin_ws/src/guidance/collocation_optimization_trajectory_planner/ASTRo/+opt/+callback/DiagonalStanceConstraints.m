function DiagonalStanceConstraints(nlp, bounds, varargin)
    %DIAGONALSTANCECONSTRAINTS Summary of this function goes here
    %   Detailed explanation goes here

    ip = inputParser;

    ip.addParameter('LoadPath', [], @ischar);
    ip.parse(varargin{:});

    domain = nlp.Plant;

    % Virtual constraints
    if bounds.closed_loop
        opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);

        opt.constraint.output_boundary_diagonal(nlp, bounds);
    end
    % Foot clearance

    [rr_foot_frame] = sys.frames.RrFoot(domain);
    [fl_foot_frame] = sys.frames.FlFoot(domain);
    
    opt.constraint.foot_clearance(nlp, bounds, rr_foot_frame, 'first');
%     opt.constraint.foot_clearance(nlp, bounds, fl_foot_frame, 'last');
    % swing foot position
    
    opt.constraint.swing_position(nlp, fl_foot_frame, 'first');
%     opt.constraint.swing_position(nlp, rr_foot_frame, 'last');
    
    % experimental stance foot height constraints
    [fr_foot_frame] = sys.frames.FrFoot(domain);
    [rl_foot_frame] = sys.frames.RlFoot(domain);
    opt.constraint.swing_position(nlp, fr_foot_frame, 'first');
    opt.constraint.swing_position(nlp, rl_foot_frame, 'first');
    
    opt.constraint.step_distance(nlp, bounds);
    %//TODO: Make sure you completely understand how the implementation of these constraints dictate signs in the getBounds function
    % swing foot velocity
    opt.constraint.impact_velocity(nlp, bounds, rr_foot_frame);
    opt.constraint.initial_swing_velocity(nlp, bounds, fl_foot_frame);

    opt.constraint.yaw_start(nlp, bounds);

    opt.constraint.average_velocity(nlp, bounds);

end

