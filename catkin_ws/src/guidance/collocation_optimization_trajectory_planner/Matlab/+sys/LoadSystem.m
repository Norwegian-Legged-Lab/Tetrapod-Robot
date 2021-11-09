function [system] = LoadSystem(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

diagonalStance = sys.domains.diagonalStance(model, load_path);
parallelStance = sys.domains.parallelStance(model, load_path);

%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
diagonalImpact = RigidImpact('DiagonalImpact', diagonalStance, 'rearSwingFootHeight'); %to parallelStance

parallelImpact = RigidImpact('ParallelImpact', parallelStance, 'frontSwingFootHeight'); %to diagonalStance

diagonalImpact.addImpactConstraint(struct2array(parallelStance.HolonomicConstraints), load_path);

%switch feet labels here somehow
parallelImpact.addImpactConstraint(struct2array(diagonalStance.HolonomicConstraints), load_path);

io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'DiagonalStance', 'Domain', diagonalStance, 'Control', io_control);

system = addVertex(system, 'ParallelStance', 'Domain', parallelStance, 'Control', io_control);


srcs = {'DiagonalStance', 'ParallelStance'};
tars = {'ParallelStance', 'DiagonalStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {diagonalImpact, parallelImpact});
end

