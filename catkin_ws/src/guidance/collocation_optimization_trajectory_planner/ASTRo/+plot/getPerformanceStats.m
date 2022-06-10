function [cot, tau_rms, tau_peak] = getPerformanceStats(system, logger)
%GETPERFORMANCESTATS Summary of this function goes here
%   Detailed explanation goes here
g = 9.81;

domain = system.Gamma.Nodes.Domain{1};

act_joint_idx = find(arrayfun(@(x)~isempty(x.Actuator),domain.Joints));

m = domain.getTotalMass();

t = [];
u_sim = [];
dq_joints_sim = [];

n_nodes = height(system.Gamma.Nodes);

for i = 1:numel(logger)
    domain = system.Gamma.Nodes.Domain{mod(i - 1, n_nodes) + 1};
    
    B_domain = double(domain.Gmap.Control.u);
    actuated_indices = find(~all(B_domain == 0, 2));
    
    t = [t, logger(i).flow.t];
    
    u_sim_domain = zeros(length(act_joint_idx), length(logger(i).flow.t));
    u_sim_domain(actuated_indices - min(act_joint_idx) + 1,:) = logger(i).flow.inputs.Control.u;
    u_sim = [u_sim, u_sim_domain];
    
    dq_joints_sim = [dq_joints_sim, logger(i).flow.states.dx(7:18,:)];
end

P_sim = abs(dq_joints_sim).*abs(u_sim);

E_sim = sum(P_sim(:,end-1).*diff(t), 'All');

d = vecnorm(logger(end).flow.states.x(1:3,end) - logger(1).flow.states.x(1:3,1));

%cost of transport
cot = E_sim/(m*g*d);

tau_peak = max(abs(u_sim), [], 2);

tau_rms = sqrt(mean(sum((u_sim(:,1:end-1).^2).*diff(t), 2)/(t(end)-t(1))));
end

