function [system] = LoadSystem_4doms(model, load_path)
%LOADSYSTSEEM Summary of this function goes here
%   Detailed explanation goes here
if nargin
    load_path = [];
end

trotStance1 = sys.domains.TrotStance1(model, load_path);

trotStance2 = sys.domains.TrotStance2(model, load_path);

%Create rigid impact class with switching betweeen feet? or just change the
%holonomic constraints
trotImpact1 = RigidImpact('TrotImpact1', trotStance1, 'swingFootHeight1'); %to trotStance2

trotImpact2 = RigidImpact('TrotImpact2', trotStance2, 'swingFootHeight2'); %to trotStance1


trotImpact1.addImpactConstraint(struct2array(trotStance2.HolonomicConstraints), load_path);

trotImpact2.addImpactConstraint(struct2array(trotStance1.HolonomicConstraints), load_path);

io_control = IOFeedback('IO');

system = HybridSystem('ASTRo');

system = addVertex(system, 'TrotStance1', 'Domain', trotStance1);%, 'Control', io_control);

system = addVertex(system, 'TrotStance2', 'Domain', trotStance2);%, 'Control', io_control);

srcs = {'TrotStance1', 'TrotStance2'};
tars = {'TrotStance2', 'TrotStance1'};

system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {trotImpact1, trotImpact2});
end

