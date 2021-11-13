function [domain] = QuadrupleStance(model, load_path)
%QUADRUPLESTANCE Summary of this function goes here
%   Detailed explanation goes here

domain = copy(model);
domain.setName('QuadrupleStance');

if nargin < 2
    load_path = [];
end

[fl_foot, fl_fric_coef, fl_geometry] = sys.frames.FlFoot(model);
[fr_foot, fr_fric_coef, fr_geometry] = sys.frames.FrFoot(model);
[rl_foot, rl_fric_coef, rl_geometry] = sys.frames.RlFoot(model);
[rr_foot, rr_fric_coef, rr_geometry] = sys.frames.RrFoot(model);

fl_foot_contact = ToContactFrame(fl_foot, 'PointContactWithFriction');
fr_foot_contact = ToContactFrame(fr_foot, 'PointContactWithFriction');
rl_foot_contact = ToContactFrame(rl_foot, 'PointContactWithFriction');
rr_foot_contact = ToContactFrame(rr_foot, 'PointContactWithFriction');

domain = addContact(domain, fl_foot_contact, fl_fric_coef, fl_geometry);
domain = addContact(domain, fr_foot_contact, fr_fric_coef, fr_geometry);
domain = addContact(domain, rl_foot_contact, rl_fric_coef, rl_geometry);
domain = addContact(domain, rr_foot_contact, rr_fric_coef, rr_geometry);

fFlFoot = domain.Inputs.ConstraintWrench.fFlFoot;
fl_lift = UnilateralConstraint(domain, fFlFoot(3), 'flFootLift', 'fFlFoot');
domain = addEvent(domain, fl_lift);

fFrFoot = domain.Inputs.ConstraintWrench.fFrFoot;
fr_lift = UnilateralConstraint(domain, fFrFoot(3), 'frFootLift', 'fFrFoot');
domain = addEvent(domain, fr_lift);

fRlFoot = domain.Inputs.ConstraintWrench.fRlFoot;
rl_lift = UnilateralConstraint(domain, fRlFoot(3), 'rlFootLift', 'fRlFoot');
domain = addEvent(domain, rl_lift);

fRrFoot = domain.Inputs.ConstraintWrench.fRrFoot;
rr_lift = UnilateralConstraint(domain, fRrFoot(3), 'rrFootLift', 'fRrFoot');
domain = addEvent(domain, rr_lift);
%Add event to exit four-stance???

%% Add virtual constraints
%Consider whether to use state-based or time-based phase variable: There
%are some conflicting claims in papers published both by Caltech about
%whether one or the other is more robust
end

