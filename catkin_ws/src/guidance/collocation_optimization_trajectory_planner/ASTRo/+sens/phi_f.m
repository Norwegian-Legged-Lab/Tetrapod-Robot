function [phi_vec_dot] = phi_f(t, phi_vec, flow, domain, control, param)
%PHI_F Summary of this function goes here
%   Detailed explanation goes here
t_idx = find(flow.t <= t, 1, 'last');
t_last = flow.t(t_idx);

x_last = [flow.states.x(:,t_idx); flow.states.dx(:,t_idx)];

if t_last == t
    x_cur = x_last;
else
    ts = [t_last, t];
    [t_ode, x] = ode45(@(tau, y) domain.calcDynamics(tau, y, control, param, []), ts, x_last);
    
    x_cur = x(end,:)';
end    

J_cur = sens.findiff(@(y) domain.calcDynamics(t, y, control, param, []), x_cur);

phi = reshape(phi_vec, 36, 36);
phi_dot = J_cur*phi;
phi_vec_dot = reshape(phi_dot, [], 1);
end

