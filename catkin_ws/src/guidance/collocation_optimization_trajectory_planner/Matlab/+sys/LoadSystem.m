function [system] = LoadSystem(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

diagonalStance = sys.domains.DiagonalStance(model, load_path);
parallelStance = sys.domains.ParallelStance(model, load_path);

%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
parallelImpact = RigidImpact('ParallelImpact', diagonalStance, 'rearSwingFootHeight'); %to parallelStance

diagonalImpact = RigidImpact('DiagonalImpact', parallelStance, 'frontSwingFootHeight'); %to diagonalStance

%mirror relabeling for edge back to initial domain

R = diagonalImpact.R;

R(2,2) = -R(2,2);

R(4,4) = -R(4,4);

R(6,6) = -R(6,6);

R(7:12,7:12) = [zeros(3), -eye(3); -eye(3), zeros(3)];

R(13:18, 13:18) = [zeros(3), -eye(3); -eye(3), zeros(3)];

diagonalImpact.R = R;

parallelImpact.addImpactConstraint(struct2array(parallelStance.HolonomicConstraints), load_path);

%diagonalImpact.addImpactConstraint(struct2array(diagonalStance.HolonomicConstraints), load_path);
diagonalImpact.configure();
io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'DiagonalStance', 'Domain', diagonalStance, 'Control', io_control);

system = addVertex(system, 'ParallelStance', 'Domain', parallelStance, 'Control', io_control);


srcs = {'DiagonalStance', 'ParallelStance'};
tars = {'ParallelStance', 'DiagonalStance'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {parallelImpact, diagonalImpact});
end

