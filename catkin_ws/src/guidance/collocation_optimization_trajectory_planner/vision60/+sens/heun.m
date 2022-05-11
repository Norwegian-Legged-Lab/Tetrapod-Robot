function [phi] = heun(flow, J, phi_0)
%HEUN Summary of this function goes here
%   Detailed explanation goes here
length_flow = length(flow.t);
phi = cell(length_flow, 1);
phi{1} = phi_0;

h_s = diff(flow.t);

n_vars = size(flow.states.x, 1)*2;

for i = 2:length_flow
    h = h_s(i-1);
    
    M1 = (eye(n_vars) - (h/2)*J{i});
    M2 = (eye(n_vars) + (h/2)*J{i-1});
    phi{i} = M1\M2*phi{i-1};
end
end

