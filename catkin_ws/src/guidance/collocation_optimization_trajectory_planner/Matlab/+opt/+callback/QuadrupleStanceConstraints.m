function QuadrupleStanceConstraints(nlp, bounds, varargin)
    ip = inputParser;
    ip.addParameter('LoadPath', [], @ischar);
    ip.parse(varargin{:});

    domain = nlp.Plant;

    [fl_foot_frame] = sys.frames.FlFoot(domain);
    [fr_foot_frame] = sys.frames.FrFoot(domain);
    [rl_foot_frame] = sys.frames.RrFoot(domain);
    [rr_foot_frame] = sys.frames.RrFoot(domain);

    opt.constraint.step_distance(nlp,bounds, fl_foot_frame, fr_foot_frame);
    opt.constraint.step_distance(nlp,bounds, rl_foot_frame, rr_foot_frame);
    
    opt.constraint.yaw_start(nlp,bounds);
end