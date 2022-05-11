function [domain] = ParallelStance2(model, load_path)
%PARALLELSTANCE Summary of this function goes here
%   Detailed explanation goes here
domain = copy(model);
domain.setName('ParallelStance2');

u = domain.Inputs.Control.u;
domain.removeInput('Control', 'u');
Be = [zeros(6,12); eye(12)];
Be = [Be(:,1:4), Be(:, 6:end)];
u = SymVariable('u', [11, 1]);

% Be(11, 5) = 0;

domain.addInput('Control', 'u', u, Be);


if nargin < 2
    load_path = [];
end


[fl_foot, fl_fric_coef, fl_geometry] = sys.frames.FlFoot(model);
[rl_foot, rl_fric_coef, rl_geometry] = sys.frames.RlFoot(model);

fl_foot_contact = ToContactFrame(fl_foot, 'PointContactWithFriction');
rl_foot_contact = ToContactFrame(rl_foot, 'PointContactWithFriction');

domain = addContact(domain, fl_foot_contact, fl_fric_coef, fl_geometry); %Point contact, no geometry is necessary
domain = addContact(domain, rl_foot_contact, rl_fric_coef, rl_geometry); %Point contact, no geometry is necessary

%Add event

fr_foot = sys.frames.FrFoot(model);
rr_foot = sys.frames.RrFoot(model);

% p_rear_swing_foot = getCartesianPosition(domain, rr_foot);
p_front_swing_foot = getCartesianPosition(domain, fr_foot);
h_fnsf = UnilateralConstraint(domain, p_front_swing_foot(3), 'frontSwingFootHeight4', 'x');
% h_rnsf = UnilateralConstraint(domain, p_rear_swing_foot(3), 'rearSwingFootHeight4', 'x');
domain = addEvent(domain, h_fnsf);
% domain = addEvent(domain, h_rnsf);

%% Add virtual constraints
%Consider whether to use state-based or time-based phase variable: There
%are some conflicting claims in papers published both by Caltech about
%whether one or the other is more robust

x = domain.States.x;
dx = domain.States.dx;

%Time-based phase variable
t = SymVariable('t');
p = SymVariable('p', [2, 1]);
tau = (t - p(1))/(p(2) - p(1));

y_bh = x(3);

y_br = x(4);
y_bp = x(5);
y_by = x(6);

y_fshr = x(7);
y_fshp = x(8);
y_fskp = x(9);

y_rshr = x(10);
y_rshp = x(11);
y_rskp = x(12);

y_fnshr = x(13);
y_fnshp = x(14);
y_fnskp = x(15);

y_rnshr = x(16);
y_rnshp = x(17);
y_rnskp = x(18);

ya_2 = [
%     y_bh;
%     y_br;
%     y_bp;
%     y_by;
    y_fshr;
    y_fshp;
    y_fskp;
    y_rshr;
    y_rskp;
    y_fnshr;
    y_fnshp;
    y_fnskp;
    y_rnshr;
    y_rnshp;
    y_rnskp];

y2_label = {
%     'BaseYaw', ...
%     'BaseHeight', ...
%     'BaseRoll', ...
%     'BasePitch', ...
    'FrontStanceHipRoll', ...
    'FrontStanceHipPitch', ...
    'FrontStanceKneePitch', ...
    'RearStanceHipRoll', ...
    'RearStanceKneePitch',...
    'FrontSwingHipRoll', ...
    'FrontSwingHipPitch', ...
    'FrontSwingKneePitch', ...
    'RearSwingHipRoll', ...
    'RearSwingHipPitch', ...
    'RearSwingKneePitch'};

y2 = VirtualConstraint(domain, ya_2, 'position', 'DesiredType', 'Bezier', 'PolyDegree', 5,...
    'RelativeDegree', 2, 'OutputLabel', {y2_label}, 'PhaseType', 'TimeBased', ...
    'PhaseVariable', tau, 'PhaseParams', p, 'Holonomic', true, 'LoadPath', load_path);

domain = addVirtualConstraint(domain, y2);
end

