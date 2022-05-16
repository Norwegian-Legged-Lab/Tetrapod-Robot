function [system] = LoadBMISystem(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

closed_loop = true;

omitted_actuator_idx_diag_1 = 5;
omitted_actuator_idx_paral_1 = 11;
omitted_actuator_idx_diag_2 = 11;
omitted_actuator_idx_paral_2 = 5;

diagonalStance = sys.domains.DiagonalStanceBMI(model, load_path, closed_loop, omitted_actuator_idx_diag_1);
parallelStance = sys.domains.ParallelStanceBMI(model, load_path, closed_loop, omitted_actuator_idx_paral_1);

diagonalStance2 = sys.domains.DiagonalStance2BMI(model, load_path, closed_loop, omitted_actuator_idx_diag_2);
parallelStance2 = sys.domains.ParallelStance2BMI(model, load_path, closed_loop, omitted_actuator_idx_paral_2);


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

