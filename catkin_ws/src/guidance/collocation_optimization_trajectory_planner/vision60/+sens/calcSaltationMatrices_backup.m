function [Pr] = calcSaltationMatrices(flows, system, intermediaryJacobians)
%CALCPROJECTIONMATRIX Summary of this function goes here
%   Detailed explanation goes here
nodes = system.Gamma.Nodes;

nx = length(nodes.Domain{1}.States.x);

n_nodes = height(nodes);
Pr = cell(n_nodes, 1);
I_e = eye(2*nx);

for i = 1:n_nodes
    t = flows(i).t(end);
    x = [flows(i).states.x(:,end); flows(i).states.dx(:,end)];
    domain = nodes.Domain{i};
    controller = nodes.Control{i};
    params = nodes.Param{i};
    
    q = x(1:nx);
    dq = x(nx+1:end);

    f_cl = domain.calcDynamics(t - flows(i).t(1), x, controller, params, []);
    J_s = intermediaryJacobians{i}.J_s.calcJacobian(q,dq);

    Pr{i} = I_e - f_cl*J_s/(J_s*f_cl);
end

