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
[rr_foot, rr_fric_coef, rr_geometry] = sys.frams.RrFoot(model);

fl_foot_contact = ToContactFrame(fl_foot, 'PointContactWithFriction');
fr_foot_contact = ToContactFrame(fr_foot, 'PointContactWithFriction');
rl_foot_contact = ToContactFrame(rl_foot, 'PointContactWithFriction');
rr_foot_contact = ToContactFrame(rr_foot, 'PointContactWithFriction');

domain = addContact(domain, fl_foot_contact, fl_fric_coef, fl_geometry);
domain = addContact(domain, fr_foot_contact, fr_fric_coef, fr_geometry);
domain = addContact(domain, rl_foot_contact, rl_fric_coef, rl_geometry);
domain = addContact(domain, rr_foot_contact, rr_fric_coef, rr_geometry);

%Add event to exit four-stance???

%% Add virtual constraints
%Consider whether to use state-based or time-based phase variable: There
%are some conflicting claims in papers published both by Caltech about
%whether one or the other is more robust

x = domain.states.x;
dx = domain.states.dx;

%Time-based phase variable
t = SymVariable('t');
p = SymVariable('p', [2, 1]);
tau = (t - p(1))/(p(2) - p(1));

%relative degree 2 outputs:
body = sys.frames.Body(model);
rpy_body = getRPY(model, body);
p_body = getCartesianPosition(model, body);


% As we have 4x3=12 holonomic constraints and one nonholonomic virtual
% constraint (forward speed), we have 5 linearly independent virtual holonomic constraints to
% set

y_br = rpy_body(1);
y_bp = rpy_body(2);
y_by = rpy_body(3);
y_bs = rpy_body(2);
y_bh = p_body(3);




end

