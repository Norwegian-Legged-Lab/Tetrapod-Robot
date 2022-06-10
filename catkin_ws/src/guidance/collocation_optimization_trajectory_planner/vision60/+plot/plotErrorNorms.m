function [state_norm, state_dot_norm, full_state_norm, state_diff_norm, state_dot_diff_norm, full_state_diff_norm] = plotErrorNorms(logger, n_cycles, cycle_length, error_from_endpoint, q_idx, dq_idx)
%PLOTERRORNORMS Summary of this function goes here
%   Detailed explanation goes here

if nargin < 5 ||isempty(q_idx)
    q_idx = 3:18;
end

if nargin < 6 || isempty(dq_idx)
    dq_idx = 1:18;
end

if nargin < 4 || isempty(error_from_endpoint)
    error_from_endpoint = false;
end

if nargin < 3 || isempty(cycle_length)
    cycle_length = 2;
end

if nargin < 2 || isempty(n_cycles)
    n_cycles = length(logger)/cycle_length;
else
    n_cycles = min(n_cycles, length(logger)/cycle_length);
end

if error_from_endpoint
    idx = (n_cycles-1)*cycle_length + 1;
    fixedpoint_q = logger(idx).flow.states.x(q_idx,1);
    fixedpoint_dq = logger(idx).flow.states.dx(dq_idx,1);
    fixedpoint_x = [fixedpoint_q; fixedpoint_dq];
    q_str = 'q^{*}'; dq_str = '\dot{q}^{*}'; x_str = 'x^{*}';
else
    fixedpoint_q = logger(1).flow.states.x(q_idx,1);
    fixedpoint_dq = logger(1).flow.states.dx(dq_idx,1);
    fixedpoint_x = [fixedpoint_q; fixedpoint_dq];
    q_str = 'q_{0}'; dq_str = '\dot{q}_{0}'; x_str = 'x_{0}';

end

state_norm = zeros(1,n_cycles); state_dot_norm = zeros(1,n_cycles); full_state_norm = zeros(1,n_cycles);
state_diff_norm = zeros(1,n_cycles - 1); state_dot_diff_norm = zeros(1,n_cycles - 1); full_state_diff_norm = zeros(1,n_cycles - 1);

for i = 1:cycle_length:cycle_length*n_cycles
state_norm((i-1)/cycle_length+1) = vecnorm(logger(i).flow.states.x(q_idx,1) - fixedpoint_q);
state_dot_norm((i-1)/cycle_length+1) = vecnorm(logger(i).flow.states.dx(dq_idx,1) - fixedpoint_dq);
full_state_norm((i-1)/cycle_length+1) = vecnorm([logger(i).flow.states.x(q_idx,1);logger(i).flow.states.dx(dq_idx,1)]-fixedpoint_x);
end

for i = 1:cycle_length:cycle_length*(n_cycles-1)
state_diff_norm((i-1)/cycle_length+1) = vecnorm(logger(i+cycle_length).flow.states.x(q_idx,1) - logger(i).flow.states.x(q_idx,1));
state_dot_diff_norm((i-1)/cycle_length+1) = vecnorm(logger(i+cycle_length).flow.states.dx(dq_idx,1) - logger(i).flow.states.dx(dq_idx,1));
full_state_diff_norm((i-1)/cycle_length+1) = vecnorm([logger(i+cycle_length).flow.states.x(q_idx,1);logger(i+cycle_length).flow.states.dx(dq_idx,1)]-[logger(i).flow.states.x(q_idx,1);logger(i).flow.states.dx(dq_idx,1)]);
end
f = figure;

ax = [];

ax = [ax, subplot(3,2,1)];
plot(state_norm);
tit1 = title(['$$||P_q^{(n)}(x_0) - ', q_str ,'||$$']);
set(tit1, 'Interpreter', 'latex');

ax = [ax, subplot(3,2,3)];
plot(state_dot_norm);
tit2 = title(['$$||P_{\dot{q}}^{(n)}(x_0) - ', dq_str, '||$$']);
set(tit2, 'Interpreter', 'latex');

ax = [ax, subplot(3,2,5)];
plot(full_state_norm);
tit3 = title(['$$||P^{(n)}(x_0) - ', x_str, '||$$']);
set(tit3, 'Interpreter', 'latex');

ax = [ax, subplot(3,2,2)];
plot(state_diff_norm);
tit1 = title('$$||P_q^{(n+1)}(x_0) - P_q^{(n)}(x_0)||$$');
set(tit1, 'Interpreter', 'latex');

ax = [ax, subplot(3,2,4)];
plot(state_dot_diff_norm);
tit2 = title('$$||P_{\dot{q}}^{(n+1)}(x_0) - P_{\dot{q}}^{(n)}(x_0)||$$');
set(tit2, 'Interpreter', 'latex');

ax = [ax, subplot(3,2,6)];
plot(full_state_diff_norm);
tit3 = title('$$||P^{(n+1)}(x_0) - P^{(n)}(x_0)||$$'); set(tit3, 'Interpreter', 'latex');

linkaxes(ax, 'x');

end

