function [system] = LoadSimSystem(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

diagonalStance = sys.domains.DiagonalStance(model, load_path);
parallelStance = sys.domains.ParallelStance(model, load_path);

diagonalStance2 = sys.domains.DiagonalStance2(model, load_path);
parallelStance2 = sys.domains.ParallelStance2(model, load_path);


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

