function [phi] = calcFlowJacobianVariation(x0, in_system, intermediaryJacobians, cp, theta)
%CALCFLOWJACOBIANVARIATION Summary of this function goes here
%   Detailed explanation goes here

system = copy(in_system);

nodes = system.Gamma.Nodes;
n_nodes = height(nodes);

n_x = 2*system.Gamma.Nodes.Domain{1}.numState;

if nargin > 3
    use_bezier = true;
else
    use_bezier = false;
end

if nargin > 4
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

phi0 = eye(n_x);

end_states = cell(1,n_nodes);

for i = 1:n_nodes
    end_states{i}.x = cp{i}.points(1:18,end);
    end_states{i}.dx = cp{i}.points(19:end,end);
    end_states{i}.t = diff(cp{i}.ts);
end
J_s_guard = sens.calcJacobianGuards(end_states, system);
Pr = sens.calcSaltationMatrices(end_states, system, intermediaryJacobians);

odeopts = odeset('AbsTol',5e-4, 'MaxStep', 1e-2, 'RelTol',2e-3);
phi_s = cell(n_nodes, 1);
if use_bezier
    for i = 1:n_nodes
        ts = cp{i}.ts;
        z0 = reshape(phi0, [], 1);
        [t, z] = ode113(@(tau, y) sens.F_aug(tau, y, nodes.Domain{i}, nodes.Control{i}, nodes.Param{i}, intermediaryJacobians{i}, cp{i}), ts, z0, odeopts);
        z_end = z(end,:)';
        phi_s{i} = reshape(z_end, n_x, n_x);
    end
else
    logger = system.simulate(0, x0, [], [], 'NumCycle', 1);
    flows = [logger.flow];
    for i = 1:n_nodes
        flow = flows(i);
        x0 = [flow.states.x(:,1); flow.states.dx(:,1)];
        ts = [flow.t(1), flow.t(end)];
        z0 = [x0; reshape(phi0, [], 1)];
        [t, z] = ode113(@(tau, y) sens.F_aug(tau, y, nodes.Domain{i}, nodes.Control{i}, nodes.Param{i}, intermediaryJacobians{i}), ts, z0, odeopts);
        z_end = z(end,:)';
        phi_s{i} = reshape(z_end((n_x+1):end), n_x, n_x);
    end
end

phi = eye(n_x);

for i = 1:n_nodes
    phi = Pr{i}*phi_s{i}*J_s_guard{(mod(i-2,n_nodes)+1)}*phi;
end
end
% phi = Pr{2}*phi_s{2}*J_s_guard{1}*Pr{1}*phi_s{1}*J_s_guard{2};