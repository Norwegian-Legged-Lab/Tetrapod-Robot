function [d_flow_dx] = calcFlowJacobian(x0, system_in, theta)
%CALCFLOWJACOBIAN Summary of this function goes here
%   Detailed explanation goes here
system = copy(system_in);

n_x = 2*system.Gamma.Nodes.Domain{1}.numState;

h = 1e-6;
h_vecs = h*eye(n_x);

if nargin > 2
    n_nodes = height(system.Gamma.Nodes);
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

x0_p = x0 + h_vecs;
x0_m = x0 - h_vecs;

d_flow_dx = zeros(n_x);

logger = system.simulate(0, x0, [], [], 'NumCycle', 1);
flows = [logger.flow];

end_states = cell(1,length(flows));
for i = 1:length(flows)
    end_states{i}.x = flows(i).states.x(:,end);
    end_states{i}.dx = flows(i).states.dx(:,end);
    end_states{i}.t = flows(i).t(end) - flows(i).t(1);
end

J_s_guards = sens.calcJacobianGuards(end_states, system);

for i = 1:n_x
    logger_p = system.simulate(0, x0_p(:,i), [], [], 'NumCycle', 1);
    logger_m = system.simulate(0, x0_m(:,i),[], [], 'NumCycle', 1);

    flow_p_pre_impact = [logger_p(2).flow.states.x(:,end); logger_p(2).flow.states.dx(:,end)];
    flow_m_pre_impact = [logger_m(2).flow.states.x(:,end); logger_m(2).flow.states.dx(:,end)];

    d_flow_dx(:,i) = (flow_p_pre_impact - flow_m_pre_impact)/(2*h);
end
d_flow_dx = d_flow_dx*J_s_guards{end};

end

