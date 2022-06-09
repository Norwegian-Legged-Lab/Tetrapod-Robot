function [cp] = getTrajectoryControlPoints(x0, in_system, theta)
%GETTRAJECTORYCONTROLPOINTS Summary of this function goes here
%   Detailed explanation goes here
system = copy(in_system);

graph = system.Gamma;
n_nodes = height(graph.Nodes);

if nargin > 2
    n_outputs = 11;
    n_params = length(theta)/n_nodes;
    for i = 1:n_nodes
        idx = ((i-1)*n_params+1):(i*n_params);
        system.Gamma.Nodes.Domain{i}.VirtualConstraints.position.setSelectionMatrix(reshape(theta(idx), 11, []));
    end
end

logger = system.simulate(0, x0, [], [], 'NumCycle', 1);
flows = [logger.flow];

cp = cell(n_nodes,1);

for i = 1:n_nodes
    cp{i} = struct();

    t = flows(i).t;
    x = [flows(i).states.x; flows(i).states.dx];

    cp{i}.points = kin.bezierFit(t, x, 5);
    cp{i}.ts = [t(1), t(end)];
end
end

