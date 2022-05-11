function [system] = LoadReverseSystem(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

diagonalStance = sys.domains.DiagonalStance2(model, load_path);
parallelStance = sys.domains.ParallelStance2(model, load_path);

%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
parallelImpact = RigidImpact('ParallelImpact2', diagonalStance, 'rearSwingFootHeight3'); %to parallelStance

diagonalImpact = RigidImpact('DiagonalImpact2', parallelStance, 'frontSwingFootHeight4'); %to diagonalStance

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

io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'DiagonalStance2', 'Domain', diagonalStance, 'Control', io_control);

system = addVertex(system, 'ParallelStance2', 'Domain', parallelStance, 'Control', io_control);


srcs = {'DiagonalStance2', 'ParallelStance2'};
tars = {'ParallelStance2', 'DiagonalStance2'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {parallelImpact, diagonalImpact});
end

