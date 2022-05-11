function [d_flow_dx] = calcFlowJacobian(x0, system_in, theta)
%CALCFLOWJACOBIAN Summary of this function goes here
%   Detailed explanation goes here
system = copy(system_in);

h = 1e-3;
h_vecs = h*eye(36);

if nargin > 2
    n_nodes = height(system.Gamma.Nodes);
    theta1 = theta(1:11*14);
    theta2 = theta(11*14+1:end);
%     H = cell(2,1);
    H = cell(4,1);
    H{1} = reshape(theta1, 11, 14);
    H{2} = reshape(theta2, 11,14);
    

%     S_y_1 = [zeros(6,5), eye(6); eye(5), zeros(5,6)];
%     S_y_1 = [zeros(6,5), diag([-1, 1, 1, -1, 1, 1]); diag([-1, 1, 1, -1, 1]), zeros(5,6)];
    S_y_1 = diag([-1, 1, 1, -1, 1, -1, 1, 1, -1, 1, 1]);
%     S_y_2 = [eye(3), zeros(3,11); zeros(5,3), zeros(5,6), eye(5); zeros(6,3), eye(6), zeros(6,5)];
    joint_relabeling = kron([0, 0, 1, 0; 0, 0, 0, 1; 1, 0, 0, 0; 0, 1, 0, 0], diag([-1, 1, 1]));
    param_relabeling_diag = blkdiag(joint_relabeling(1:3,7:9), joint_relabeling(10,4), joint_relabeling(12,6), ...
        joint_relabeling(7:9,1:3), joint_relabeling(4:6,10:12));
    param_relabeling_paral = blkdiag(joint_relabeling(1:3,7:9), joint_relabeling(4,10), joint_relabeling(6,12), ...
        joint_relabeling(7:9,1:3), joint_relabeling(10:12,4:6));



%     H{3} = S_y_1*H{1}*S_y_2;
%     H{4} = S_y_1'*H{2}*S_y_2';
    H{3} = H{1};
    H{4} = H{2};
%     H{3}(:,1:3) = -H{3}(:,1:3);
%     H{4}(:,1:3) = -H{4}(:,1:3);
    H{3}(:,1:3) = S_y_1*H{3}(:,1:3);
    H{4}(:,1:3) = S_y_1*H{4}(:,1:3);
    H{3}(:,2) = -H{3}(:,2);
    H{4}(:,2) = -H{4}(:,2);
%     for i = 1:n_nodes/2
    for i = 1:n_nodes
        system.Gamma.Nodes.Domain{i}.VirtualConstraints.position.setSelectionMatrix(H{i});
    end
end


x0(1:2) = [0;0];

x0_p = x0 + h_vecs;
x0_m = x0 - h_vecs;

d_flow_dx = zeros(36);

node = system.Gamma.Nodes(4,:);
guard = system.Gamma.Edges.Guard{4};
guard_param = system.Gamma.Edges.Param{4};

logger = system.simulate(0, x0, [], [], 'NumCycle', 1);
flow_pre_impact = [logger(4).flow.states.x(:,end); logger(4).flow.states.dx(:,end)];
t_pre_impact = logger(4).flow.t(end);
[t, flow] = guard.calcDiscreteMap(t_pre_impact, flow_pre_impact, node, guard_param);

domain = system.Gamma.Nodes.Domain{1};
controller = system.Gamma.Nodes.Control{1};
params = system.Gamma.Nodes.Param{1};

flows = [logger.flow];

J_s_guards = sens.calcJacobianGuards(flows, system);
S_x = sens.getSymmetryMatrices([1,1]);
for i = 1:36
    logger_p = system.simulate(0, x0_p(:,i), [], [], 'NumCycle', 1);
    logger_m = system.simulate(0, x0_m(:,i),[], [], 'NumCycle', 1);
    flow_p_pre_impact = [logger_p(4).flow.states.x(:,end); logger_p(4).flow.states.dx(:,end)];
%     flow_p_pre_impact = [logger_p(2).flow.states.x(:,end); logger_p(2).flow.states.dx(:,end)];
    t_p_pre_impact = logger_p(4).flow.t(end);
%     t_p_pre_impact = logger_p(2).flow.t(end);
%     
    flow_m_pre_impact = [logger_m(4).flow.states.x(:,end); logger_m(4).flow.states.dx(:,end)];
%     flow_m_pre_impact = [logger_m(2).flow.states.x(:,end); logger_m(2).flow.states.dx(:,end)];
    t_m_pre_impact = logger_m(4).flow.t(end);
%     t_m_pre_impact = logger_m(2).flow.t(end);
%     
%     [t_p, flow_p] = guard.calcDiscreteMap(t_p_pre_impact, flow_p_pre_impact, node, guard_param);
%     [t_m, flow_m] = guard.calcDiscreteMap(t_m_pre_impact, flow_m_pre_impact, node, guard_param);
%     flow_p = [logger_p(1).flow.states.x(:,end); logger_p(1).flow.states.dx(:,end)];
%     flow_m = [logger_m(1).flow.states.x(:,end); logger_m(1).flow.states.dx(:,end)];
%     d_flow_dx(:,i) = (flow_p - flow_m)/(2*h);
%     ts = [logger(1).flow.t(1), logger(1).flow.t(end)];
%     [~, x_p] = ode45(@(tau,z) domain.calcDynamics(tau, z, controller, params, []), ts, x0_p(:,i));
%     [~, x_m] = ode45(@(tau,z) domain.calcDynamics(tau, z, controller, params, []), ts, x0_m(:,i));
%     sol_p = domain.simulate(ts(1), x0_p(:,i), ts(2), controller, params);
%     sol_m = domain.simulate(ts(1), x0_m(:,i), ts(2), controller, params);
%     flow_p = x_p(end,:)';
%     flow_m = x_m(end,:)';
    d_flow_dx(:,i) = (flow_p_pre_impact - flow_m_pre_impact)/(2*h);
end
d_flow_dx = d_flow_dx*J_s_guards{4};
% d_flow_dx = d_flow_dx*J_s_guards{4}*S_x;

end

