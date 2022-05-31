function [phi] = calcFlowJacobianVariation(x0, in_system, intermediaryJacobians, cp, theta)
%CALCFLOWJACOBIANVARIATION Summary of this function goes here
%   Detailed explanation goes here

system = copy(in_system);

nodes = system.Gamma.Nodes;
n_nodes = height(nodes);
edges = system.Gamma.Edges;
if nargin > 3
    use_bezier = true;
else
    use_bezier = false;
end


if nargin > 4
    theta1 = theta(1:11*14);
    theta2 = theta(((11*14)+1):end);
    
    H = cell(2,1);
    H{1} = reshape(theta1, 11, 14);
    H{2} = reshape(theta2, 11,14);
    
    for i = 1:n_nodes
        system.Gamma.Nodes.Domain{i}.VirtualConstraints.position.setSelectionMatrix(H{i});
    end
end

phi0 = eye(36);
S_x = sens.getSymmetryMatrices([1,1]);

end_states = cell(1,n_nodes);
logger = system.simulate(0, x0, [], [], 'NumCycle', 1);
flows = [logger.flow];
for i = 1:length(flows)
    end_states{i}.x = flows(i).states.x(:,end);
    end_states{i}.dx = flows(i).states.dx(:,end);
    end_states{i}.t = flows(i).t(end) - flows(i).t(1);
end

% for i = 1:n_nodes
%     end_states{i}.x = cp{i}.points(1:18,end);
%     end_states{i}.dx = cp{i}.points(19:end,end);
%     end_states{i}.t = diff(cp{i}.ts);
% end
J_s_guard = sens.calcJacobianGuards(end_states, system);
% J_s_guard = {J_s_guard{4}, J_s_guard{1}, J_s_guard{2}, J_s_guard{3}};

Pr = sens.calcSaltationMatrices(end_states, system, intermediaryJacobians);
% odeopts = odeset('MaxStep', 1e-2,'RelTol',1e-3,'AbsTol',1e-4);
odeopts = odeset('AbsTol',5e-4, 'MaxStep', 1e-2, 'RelTol',2e-3);
phi_s = cell(n_nodes/2, 1);
if use_bezier
    for i = 1:n_nodes
        ts = cp{i}.ts;
        z0 = reshape(phi0, [], 1);
        [t, z] = ode113(@(tau, y) sens.F_aug(tau, y, nodes.Domain{i}, nodes.Control{i}, nodes.Param{i}, intermediaryJacobians{i}, cp{i}), ts, z0, odeopts);
        z_end = z(end,:)';
        phi_s{i} = reshape(z_end, 36, 36);
    end
else
    logger = system.simulate(0, x0, [], [], 'NumCycle', 1);
    flows = [logger.flow];
    for i = 1:n_nodes/2
        flow = flows(i);
        x0 = [flow.states.x(:,1); flow.states.dx(:,1)];
        ts = [flow.t(1), flow.t(end)];
        z0 = [x0; reshape(phi0, [], 1)];
        [t, z] = ode113(@(tau, y) sens.F_aug(tau, y, nodes.Domain{i}, nodes.Control{i}, nodes.Param{i}, intermediaryJacobians{i}), ts, z0, odeopts);
        z_end = z(end,:)';
        phi_s{i} = reshape(z_end(37:end), 36, 36);
    end
end    
% phi = Pr{1}*phi_s{1}*J_s_guard{1}*Pr{4}*phi_s{2}*J_s_guard{2};
phi = Pr{2}*phi_s{2}*J_s_guard{1}*Pr{1}*phi_s{1}*S_x*J_s_guard{2};
% for i = 1:n_flows/2
%     phi = Pr{i}*phi_s{i}*J_s_guard{i}*phi;
% end
% J_s_cont = sens.calcFluxJacobianTrajectory(flows, system, intermediaryJacobians);
% J_s_guard = sens.calcJacobianGuards(flows, system);
% 
% for i = 1:n_flows
%     phis = sens.heun(flows(i), J_s_cont{i}, phi);
%     phi = phis{end};
%     phi = J_s_guard{i}*phi;
%     
% end

