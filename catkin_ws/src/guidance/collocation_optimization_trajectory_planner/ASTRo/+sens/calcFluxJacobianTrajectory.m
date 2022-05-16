function [J_s] = calcFluxJacobianTrajectory(flows, system, intermediary_jacobians)
%CALCALLJACOBIANS Summary of this function goes here
%   Detailed explanation goes here
n_flows = length(flows);
n_domains = height(system.Gamma.Nodes);

J_s = cell(4, 1);
J_s_fin = cell(4, 1);

for i = 1:n_flows
    cur_flow = flows(i);
    cur_flow_length = length(cur_flow.t);
    cur_node = system.Gamma.Nodes(mod(i-1, n_domains) + 1,:);
    cur_domain = cur_node.Domain{1};
    cur_control = cur_node.Control{1};
    cur_param = cur_node.Param{1};
    
    J = cell(cur_flow_length, 1);
    J_fin = cell(cur_flow_length, 1);
    for j = 1:cur_flow_length
        x0 = [cur_flow.states.x(:,j); cur_flow.states.dx(:,j)];
        J{j} = sens.calcJacobian(cur_flow.t(j), x0, cur_domain, cur_control, cur_param, intermediary_jacobians{i});
        J_fin{j} = sens.findiff(@(x) cur_domain.calcDynamics(cur_flow.t(j), x, cur_control, cur_param, []), x0);
    end
    J_s{i} = J;
    J_s_fin{i} = J_fin;
    disp(max(max(abs(cell2mat(J) - cell2mat(J_fin)))));
end


end
