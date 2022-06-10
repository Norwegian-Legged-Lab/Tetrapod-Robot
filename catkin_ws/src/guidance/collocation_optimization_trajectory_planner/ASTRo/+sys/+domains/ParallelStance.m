function [domain] = ParallelStance(model, load_path, closed_loop, omitted_actuator_idx)
%PARALLELSTANCE Summary of this function goes here
%   Detailed explanation goes here
domain = copy(model);
domain.setName('ParallelStance');

if nargin < 3
    closed_loop = true;
end

if nargin < 4
    omit_actuator = false;
else
    omit_actuator = true;
end

if omit_actuator
    % Alter the actuation mapping to avoid closed chain by removing rear stance
    % hip pitch actuation
    u = domain.Inputs.Control.u;
    domain.removeInput('Control', 'u');
    Be = [zeros(6,12); eye(12)];
    Be = [Be(:,1:(omitted_actuator_idx-1)), Be(:, (omitted_actuator_idx+1):end)];
    u = SymVariable('u', [11,1]);
    % Be(11, 5) = 0;
    Be = SymExpression(Be);

    domain.addInput('Control', 'u', u, Be);
end

if nargin < 2
    load_path = [];
end


[fr_foot, fr_fric_coef, fr_geometry] = sys.frames.FrFoot(model);
[rr_foot, rr_fric_coef, rr_geometry] = sys.frames.RrFoot(model);

fr_foot_contact = ToContactFrame(fr_foot, 'PointContactWithFriction');
rr_foot_contact = ToContactFrame(rr_foot, 'PointContactWithFriction');

domain = addContact(domain, fr_foot_contact, fr_fric_coef, fr_geometry); %Point contact, no geometry is necessary
domain = addContact(domain, rr_foot_contact, rr_fric_coef, rr_geometry); %Point contact, no geometry is necessary

%Add event

fl_foot = sys.frames.FlFoot(model);
rl_foot = sys.frames.RlFoot(model);

p_rear_swing_foot = getCartesianPosition(domain, rl_foot);
p_front_swing_foot = getCartesianPosition(domain, fl_foot);
h_fnsf = UnilateralConstraint(domain, p_front_swing_foot(3), 'frontSwingFootHeight2', 'x');
h_rnsf = UnilateralConstraint(domain, p_rear_swing_foot(3), 'rearSwingFootHeight2', 'x');
domain = addEvent(domain, h_fnsf);
domain = addEvent(domain, h_rnsf);

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

y_fshr = x(13);
y_fshp = x(14);
y_fskp = x(15);

y_fnshr = x(7);
y_fnshp = x(8);
y_fnskp = x(9);

y_rnshr = x(10);
y_rnshp = x(11);
y_rnskp = x(12);

y_rshr = x(16);
y_rshp = x(17);
y_rskp = x(18);

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

if closed_loop
    domain = addVirtualConstraint(domain, y2);
end

end
