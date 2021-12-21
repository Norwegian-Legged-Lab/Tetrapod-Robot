function [system] = LoadSystem_4doms(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

diagonalStance1 = sys.domains.DiagonalStance1(model, load_path);
parallelStance1 = sys.domains.ParallelStance1(model, load_path);

diagonalStance2 = sys.domains.DiagonalStance2(model, load_path);
parallelStance2 = sys.domains.ParallelStance2(model, load_path);

%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
parallelImpact1 = RigidImpact('ParallelImpact1', diagonalStance1, 'rearSwingFootHeight1'); %to parallelStance1

diagonalImpact1 = RigidImpact('DiagonalImpact1', parallelStance1, 'frontSwingFootHeight1'); %to diagonalStance2

parallelImpact2 = RigidImpact('ParallelImpact2', diagonalStance2, 'rearSwingFootHeight2'); %to parallelStance2

diagonalImpact2 = RigidImpact('DiagonalImpact2', parallelStance2, 'frontSwingFootHeight2'); %to diagonalStance1


parallelImpact1.addImpactConstraint(struct2array(parallelStance1.HolonomicConstraints), load_path);

diagonalImpact1.addImpactConstraint(struct2array(diagonalStance2.HolonomicConstraints), load_path);

parallelImpact2.addImpactConstraint(struct2array(parallelStance2.HolonomicConstraints), load_path);

diagonalImpact2.addImpactConstraint(struct2array(diagonalStance1.HolonomicConstraints), load_path);

io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'DiagonalStance1', 'Domain', diagonalStance1);%, 'Control', io_control);

system = addVertex(system, 'ParallelStance1', 'Domain', parallelStance1);%, 'Control', io_control);

system = addVertex(system, 'DiagonalStance2', 'Domain', diagonalStance2);%, 'Control', io_control);

system = addVertex(system, 'ParallelStance2', 'Domain', parallelStance2);%, 'Control', io_control);


srcs = {'DiagonalStance1', 'ParallelStance1', 'DiagonalStance2', 'ParallelStance2'};
tars = {'ParallelStance1', 'DiagonalStance2', 'ParallelStance2', 'DiagonalStance1'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {parallelImpact1, diagonalImpact1, parallelImpact2, diagonalImpact2});
end

