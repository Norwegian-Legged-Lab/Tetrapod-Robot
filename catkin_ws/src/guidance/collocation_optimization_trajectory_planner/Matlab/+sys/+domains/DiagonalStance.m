function [domain] = DiagonalStance(model, load_path)
%DIAGONALSTANCE Summary of this function goes here
%   Detailed explanation goes here
domain = copy(model);
domain.setName('DiagonalStance');

if nargin < 2
    load_path = [];
end


[fr_foot, fr_fric_coef, fr_geometry] = sys.frames.FrFoot(model);
[rl_foot, rl_fric_coef, rl_geometry] = sys.frames.RlFoot(model);

fr_foot_contact = ToContactFrame(fr_foot, 'PointContactWithFriction');
rl_foot_contact = ToContactFrame(rl_foot, 'PointContactWithFriction');

domain = addContact(domain, fr_foot_contact, fr_fric_coef, fr_geometry);
domain = addContact(domain, rl_foot_contact, rl_fric_coef, rl_geometry);

%Add event

fl_foot = sys.frames.FlFoot(model);
rr_foot = sys.frams.RrFoot(model);

p_rear_swing_foot = getCartesianPosition(domain, rr_foot);
p_front_swing_foot = getCartesianPosition(domain, fl_foot);
h_rnsf = UnilateralConstraint(domain, p_rear_swing_foot(3), 'rearSwingFootHeight', 'x');
domain = addEvent(domain, h_rnsf);

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

frontStanceHipYawFrame = domain.Joints(getJointIndices(domain, 'fr_hip_yaw'));
rearStanceHipYawFrame = domain.Joints(getJointIndices(domain, 'rl_hip_yaw'));

p_frontStanceHipYawFrame = getCartesianPosition(domain, frontStanceHipYawFrame);
p_rearStanceHipYawFrame = getCartesianPosition(domain, rearStanceHipYawFrame);


body = sys.frames.Body(model);
RPY_body = getRPY(domain, body);
p_body = getCartesianPosition(domain, body);

y_frontSwingFootX = p_front_swing_foot(1);
y_frontSwingFootY = p_front_swing_foot(2);
y_frontSwingFootZ = p_front_swing_foot(3);
y_rearSwingFootX = p_rear_swing_foot(1);
y_rearSwingFootY = p_rear_swing_foot(2);
y_rearSwingFootZ = p_rear_swing_foot(3);

y_baseY = p_body(2);
y_baseZ = p_body(3);

y_baseYaw = RPY_body(3);
y_stanceDiagonalSlope = p_frontStanceHipYawFrame(3) - p_rearStanceHipYawFrame(3); %I believe this captures the one rotational DOF apart from yaw?

ya_2 = [y_frontSwingFootX;
    y_frontSwingFootY;
    y_frontSwingFootZ;
    y_rearSwingFootX;
    y_rearSwingFootY;
    y_rearSwingFootZ;
    y_baseY;
    y_baseZ;
    y_baseYaw;
    y_stanceDiagonalSlope
];

y2_label = {'FrontSwingX', ...
    'FrontSwingY', ...
    'FrontSwingZ', ...
    'RearSwingX', ...
    'RearSwingY', ...
    'RearSwingZ', ...
    'BaseY', ...
    'BaseZ', ...
    'BaseYaw', ...
    'StanceDiagonalSlope'};

y2 = VirtualConstraint(domain, ya_2, 'position', 'DesiredType', 'Bezier', 'PolyDegree', 5,...
    'RelativeDegree', 2, 'OutputLabel', {y2_label}, 'PhaseType', 'TimeBased', ...
    'PhaseVariable', tau, 'PhaseParams', p, 'Holonomic', true, 'LoadPath', load_path);

domain = addVirtualConstraint(domain, y2);
end

