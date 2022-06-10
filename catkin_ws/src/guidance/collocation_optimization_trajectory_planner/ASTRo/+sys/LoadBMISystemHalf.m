function [system] = LoadBMISystemHalf(model, load_path, omit_actuators)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin < 2
    load_path = [];
end

if nargin < 3 || isempty(omit_actuators)
    omit_actuators = true;
end

if nargin < 4
    ground_type = 'flat';
end

if nargin < 5
    ground_attributes = [];
end

closed_loop = true;

if omit_actuators
    omitted_actuator_idx_diag_1 = 5;
    omitted_actuator_idx_paral_1 = 11;
else
    omitted_actuator_idx_diag_1 = [];
    omitted_actuator_idx_paral_1 = [];
end

diagonalStance = sys.domains.DiagonalStanceBMI(model, load_path, closed_loop, omitted_actuator_idx_diag_1, ground_type, ground_attributes);

parallelStance = sys.domains.ParallelStanceBMI(model, load_path, closed_loop, omitted_actuator_idx_paral_1, ground_type, ground_attributes);


%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
parallelImpact = RigidImpact('ParallelImpact', diagonalStance, 'rearSwingFootHeightflat'); %to parallelStance

diagonalImpact = RigidImpact('DiagonalImpact', parallelStance, 'frontSwingFootHeightflat'); %to diagonalStance2


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

diagonalImpact.addImpactConstraint(struct2array(diagonalStance.HolonomicConstraints), load_path);

io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'DiagonalStance', 'Domain', diagonalStance, 'Control', io_control);

system = addVertex(system, 'ParallelStance', 'Domain', parallelStance, 'Control', io_control);


srcs = {'DiagonalStance', 'ParallelStance'};
tars = {'ParallelStance', 'DiagonalStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {parallelImpact, diagonalImpact});
end

