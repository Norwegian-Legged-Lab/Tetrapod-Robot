function [domain] = ParallelStance1(model, load_path)
%PARALLELSTANCE Summary of this function goes here
%   Detailed explanation goes here
domain = copy(model);
domain.setName('ParallelStance1');

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
h_fnsf = UnilateralConstraint(domain, p_front_swing_foot(3), 'frontSwingFootHeight1', 'x');
domain = addEvent(domain, h_fnsf);

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

frontStanceHipYawFrame = domain.Joints(getJointIndices(domain, 'fr_hip_yaw'));
rearStanceHipYawFrame = domain.Joints(getJointIndices(domain, 'rr_hip_yaw'));

p_frontStanceHipYawFrame = getCartesianPosition(domain, frontStanceHipYawFrame);
p_rearStanceHipYawFrame = getCartesianPosition(domain, rearStanceHipYawFrame);


body = sys.frames.Body(model);
RPY_body = getEulerAngles(domain, body);
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
y_stanceParallelSlope = p_frontStanceHipYawFrame(3) - p_rearStanceHipYawFrame(3); %I believe this captures the one rotational DOF apart from yaw?

ya_2 = [y_frontSwingFootX;
    y_frontSwingFootY;
    y_frontSwingFootZ;
    y_rearSwingFootX;
    y_rearSwingFootY;
    y_rearSwingFootZ;
    y_baseY;
    y_baseZ;
    y_baseYaw;
    y_stanceParallelSlope
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
    'StanceParallelSlope'};

y2 = VirtualConstraint(domain, ya_2, 'position', 'DesiredType', 'Bezier', 'PolyDegree', 5,...
    'RelativeDegree', 2, 'OutputLabel', {y2_label}, 'PhaseType', 'TimeBased', ...
    'PhaseVariable', tau, 'PhaseParams', p, 'Holonomic', true, 'LoadPath', load_path);

domain = addVirtualConstraint(domain, y2);
end

