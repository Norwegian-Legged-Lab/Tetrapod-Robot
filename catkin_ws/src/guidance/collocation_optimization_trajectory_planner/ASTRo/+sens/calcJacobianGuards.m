function [J_s] = calcJacobianGuards(flows,system)
%CALCJACOBIANGUARDS Summary of this function goes here
%   Detailed explanation goes here
n_flows = length(flows);
n_guards = height(system.Gamma.Edges);

J_s = cell(n_flows, 1);
for i = 1:n_flows
    cur_flow = flows(i);
    cur_edge = system.Gamma.Edges(mod(i - 1, n_guards) + 1,:);
    cur_node = system.Gamma.Nodes(mod(i - 1, n_guards) + 1,:);
    cur_guard = cur_edge.Guard{1};
    cur_guard_param = cur_edge.Param{1};
    
    x0 = [cur_flow.states.x(:,end); cur_flow.states.dx(:,end)];

    J_s{i} = sens.findiff(@(x) myDiscreteMap(cur_guard, cur_flow.t(end), x, cur_node, cur_guard_param), x0);
end

end

function [x] = myDiscreteMap(guard, t, x, node, param)
    [~, x] = guard.calcDiscreteMap(t, x, node, param);
end
