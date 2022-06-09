function [cp] = getTrajectoryControlPoints(x0, in_system, theta)
%GETTRAJECTORYCONTROLPOINTS Summary of this function goes here
%   Detailed explanation goes here
system = copy(in_system);

graph = system.Gamma;
n_nodes = height(graph.Nodes);

if nargin > 2
    n_theta = length(theta);
    idx = 0;
    S_y = diag([-1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, -1, 1, 1]);
    for i = 1:n_nodes
        H_size = size(system.Gamma.Nodes.Domain{i}.VirtualConstraints.position.SelectionMatrix);
        idx = (idx(end)+1):(idx(end)+prod(H_size));
        if idx(end) > n_theta % assume half system theta given
            H = reshape(theta((mod(idx - 1, n_theta)  + 1)), H_size)*S_y;
        else
            H = reshape(theta(idx), H_size);
        end
        system.Gamma.Nodes.Domain{i}.VirtualConstraints.position.setSelectionMatrix(H);
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

