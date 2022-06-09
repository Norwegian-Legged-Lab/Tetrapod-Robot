function [domain] = DiagonalStanceBMI(model, load_path, closed_loop, omitted_actuator_idx, ground_type, ground_attributes)
%DIAGONALSTANCE Summary of this function goes here
%   Detailed explanation goes here
domain = copy(model);
domain.setName('DiagonalStance');

if nargin < 3 || isempty(closed_loop)
    closed_loop = true;
end

if nargin < 4 || isempty(omitted_actuator_idx)
    omit_actuator = false;
else
    omit_actuator = true;
end

if nargin < 6 || isempty(ground_attributes)
    ground_attributes = struct();
end

if nargin < 5 || isempty(ground_type)
    ground_type = 'flat';
else
    [ground_type, ground_attributes] = sys.SetGroundParams(ground_type, ground_attributes);
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
[rl_foot, rl_fric_coef, rl_geometry] = sys.frames.RlFoot(model);

fr_foot_contact = ToContactFrame(fr_foot, 'PointContactWithFriction');
rl_foot_contact = ToContactFrame(rl_foot, 'PointContactWithFriction');

domain = addContact(domain, fr_foot_contact, fr_fric_coef, []); %Point contact, no geometry is necessary
domain = addContact(domain, rl_foot_contact, rl_fric_coef, []); %Point contact, no geometry is necessary

%Add event for ground contact

rr_foot = sys.frames.RrFoot(model);

p_rear_swing_foot = getCartesianPosition(domain, rr_foot);

ground_expr = sys.GetGroundExpr(p_rear_swing_foot, ground_type, ground_attributes);

h_rnsf = UnilateralConstraint(domain, p_rear_swing_foot(3) - ground_expr, 'rearSwingFootHeight1', 'x');
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

y_rshr = x(10);
y_rshp = x(11);
y_rskp = x(12);

y_rnshr = x(16);
y_rnshp = x(17);
y_rnskp = x(18);

ya_2 = [
%     y_bh;
    y_br;
    y_bp;
    y_by;
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
%     'BaseHeight', ...
    'BaseRoll', ...
    'BasePitch', ...
    'BaseYaw', ...
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

