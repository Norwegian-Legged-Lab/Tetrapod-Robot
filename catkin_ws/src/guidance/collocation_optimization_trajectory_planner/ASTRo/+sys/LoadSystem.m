function [system] = LoadSystem(model, load_path, closed_loop)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin < 2
    load_path = [];
end

if nargin < 3
    closed_loop = true;
end

diagonalStance = sys.domains.DiagonalStance(model, load_path, closed_loop);
parallelStance = sys.domains.ParallelStance(model, load_path, closed_loop);

%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
parallelImpact = RigidImpact('ParallelImpact', diagonalStance, 'rearSwingFootHeight1'); %to parallelStance

diagonalImpact = RigidImpact('DiagonalImpact', parallelStance, 'frontSwingFootHeight2'); %to diagonalStance

R = diagonalImpact.R;
R(2, 2) = -1; %y-axis must be mirrored if nonzero
R(4,4) = -1; %roll must be mirrored if nonzero
R(6,6) = -1; %as must yaw

joint_map_matrix = diag([-1, 1, 1]);

joint_map_structure = [...
    0, 0, 1, 0;
    0, 0, 0, 1;
    1, 0, 0, 0;
    0, 1, 0, 0];

R(7:18,7:18) = kron(joint_map_structure, joint_map_matrix);

diagonalImpact.R = R;

parallelImpact.addImpactConstraint(struct2array(parallelStance.HolonomicConstraints), load_path);
% parallelImpact.addImpactConstraint([parallelStance.HolonomicConstraints.RrFoot], load_path);

diagonalImpact.addImpactConstraint(struct2array(diagonalStance.HolonomicConstraints), load_path);
% diagonalImpact.configure(load_path);
% %the holonomic constraints on the diagonal impact must not be identical to
% %the first diagonal stance but rather the coming, imagined diagonal stance
% %in order to correspond to which feet hit the ground from the first
% %parallel stance to the first diagonal impact
[fl_foot, fl_fric_coef, fl_geometry] = sys.frames.FlFoot(model);
[rr_foot, rr_fric_coef, rr_geometry] = sys.frames.RrFoot(model);

fl_foot_contact = ToContactFrame(fl_foot, 'PointContactWithFriction');
rr_foot_contact = ToContactFrame(rr_foot, 'PointContactWithFriction');

diagonalStance_n = copy(model);

diagonalStance_n = addContact(diagonalStance_n, fl_foot_contact, fl_fric_coef, []);
diagonalStance_n = addContact(diagonalStance_n, rr_foot_contact, rr_fric_coef, []);

% diagonalImpact.addImpactConstraint(struct2array(diagonalStance_n.HolonomicConstraints), load_path);
% diagonalImpact.addImpactConstraint([diagonalStance_n.HolonomicConstraints.FlFoot], load_path);
io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

if closed_loop
    system = addVertex(system, 'DiagonalStance', 'Domain', diagonalStance, 'Control', io_control);

    system = addVertex(system, 'ParallelStance', 'Domain', parallelStance, 'Control', io_control);
else
    system = addVertex(system, 'DiagonalStance', 'Domain', diagonalStance);
    
    system = addVertex(system, 'ParallelStance', 'Domain', parallelStance);
end


srcs = {'DiagonalStance', 'ParallelStance'};
tars = {'ParallelStance', 'DiagonalStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {parallelImpact, diagonalImpact});
end

