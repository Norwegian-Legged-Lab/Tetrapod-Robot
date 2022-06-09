function [system] = LoadBMISystem(model, load_path, omit_actuators, ground_type, ground_attributes)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin < 2
    load_path = [];
end

if nargin < 3 || isempty(omit_actuators)
    omit_actuators = true;
end

if nargin < 4
    ground_type = [];
end

if nargin < 5
    ground_attributes = [];
end

closed_loop = true;

if omit_actuators
    omitted_actuator_idx_diag_1 = 5;
    omitted_actuator_idx_paral_1 = 11;
    omitted_actuator_idx_diag_2 = 11;
    omitted_actuator_idx_paral_2 = 5;
else
    omitted_actuator_idx_diag_1 = [];
    omitted_actuator_idx_paral_1 = [];
    omitted_actuator_idx_diag_2 = [];
    omitted_actuator_idx_paral_2 = [];
end

diagonalStance = sys.domains.DiagonalStanceBMI(model, load_path, closed_loop, omitted_actuator_idx_diag_1, ground_type, ground_attributes);
parallelStance = sys.domains.ParallelStanceBMI(model, load_path, closed_loop, omitted_actuator_idx_paral_1, ground_type, ground_attributes);

diagonalStance2 = sys.domains.DiagonalStance2BMI(model, load_path, closed_loop, omitted_actuator_idx_diag_2, ground_type, ground_attributes);
parallelStance2 = sys.domains.ParallelStance2BMI(model, load_path, closed_loop, omitted_actuator_idx_paral_2, ground_type, ground_attributes);


%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
parallelImpact = RigidImpact('ParallelImpact', diagonalStance, 'rearSwingFootHeight1'); %to parallelStance

diagonalImpact = RigidImpact('DiagonalImpact', parallelStance, 'frontSwingFootHeight2'); %to diagonalStance2

parallelImpact2 = RigidImpact('ParallelImpact2', diagonalStance2, 'rearSwingFootHeight3'); %to parallelStance2

diagonalImpact2 = RigidImpact('DiagonalImpact2', parallelStance2, 'frontSwingFootHeight4'); %to diagonalStance


parallelImpact.addImpactConstraint(struct2array(parallelStance.HolonomicConstraints), load_path);

diagonalImpact.addImpactConstraint(struct2array(diagonalStance2.HolonomicConstraints), load_path);

parallelImpact2.addImpactConstraint(struct2array(parallelStance2.HolonomicConstraints), load_path);

diagonalImpact2.addImpactConstraint(struct2array(diagonalStance.HolonomicConstraints), load_path);

io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'DiagonalStance', 'Domain', diagonalStance, 'Control', io_control);

system = addVertex(system, 'ParallelStance', 'Domain', parallelStance, 'Control', io_control);

system = addVertex(system, 'DiagonalStance2', 'Domain', diagonalStance2, 'Control', io_control);

system = addVertex(system, 'ParallelStance2', 'Domain', parallelStance2, 'Control', io_control);


srcs = {'DiagonalStance', 'ParallelStance', 'DiagonalStance2', 'ParallelStance2'};
tars = {'ParallelStance', 'DiagonalStance2', 'ParallelStance2', 'DiagonalStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {parallelImpact, diagonalImpact, parallelImpact2, diagonalImpact2});
end

