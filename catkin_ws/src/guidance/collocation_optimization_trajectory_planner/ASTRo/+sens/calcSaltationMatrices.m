function [Pr] = calcSaltationMatrices(end_states, system, intermediaryJacobians)
%CALCPROJECTIONMATRIX Summary of this function goes here
%   Detailed explanation goes here
nodes = system.Gamma.Nodes;

nx = length(nodes.Domain{1}.States.x);

n_nodes = height(nodes);
Pr = cell(n_nodes, 1);
I_e = eye(2*nx);

for i = 1:n_nodes
    t = end_states{i}.t;
    x = [end_states{i}.x; end_states{i}.dx];
    domain = nodes.Domain{i};
    controller = nodes.Control{i};
    params = nodes.Param{i};
    
    q = x(1:nx);
    dq = x(nx+1:end);

    f_cl = domain.calcDynamics(t, x, controller, params, []);
    J_s = intermediaryJacobians{i}.J_s.calcJacobian(q,dq);

    Pr{i} = I_e - f_cl*J_s/(J_s*f_cl);
end

