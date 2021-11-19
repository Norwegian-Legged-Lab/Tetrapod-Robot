function [A_ineq, b_ineq, A_eq, b_eq] = getProblemMatrices(horizon, delta_t, cycle_period, vel_des, yaw_rate_des, x0, t0, init_stance_pos, r_b_fl_b, mu)
%GETBIGA Summary of this function goes here
%   Detailed explanation goes here
stance_indices = get_stance_indices(cycle_period, horizon, delta_t, t0);

yaw_des = x0(6) + (0:delta_t:horizon)*yaw_rate_des;

body_xy_positions = get_body_xy_positions(x0(1:2), yaw_yes, vel_des, delta_t);

r_ws = get_r_ws(stance_indices, body_xy_positions, yaw_des, vel_des, init_stance_pos, x0(3), r_b_fl_b, cycle_period);

ts = t0 + 0:delta_t:horizon;

num_steps = length(ts)

n_states = 12;

num_forces_per_leg = 3;

num_legs = 4*num_steps;

num_input_vars = num_forces_per_leg*num_legs;

A_states = zeros((num_steps - 1)*n_states, num_steps*n_states);
A_inputs = zeros((num_steps - 1)*n_states, num_input_vars);

g_vec = [zeros(6,1); 0; 0; -9.81; 0; 0; 0]*delta_t;

b_sys = repmat(g_vec, length(ts), 1);

legs_traversed = 0;

feet = {'fl', 'fr', 'rl' 'rr'};

% Create matrix to force all non-stance feet to contribute with zero forces
feet_indices = reshape([stance_indices.fl.stance; stance_indices.fr.stance; stance_indices.rl.stance; stance_indices.rr.stance], 1, []);

D = kron(diag(feet_indices), eye(3));

D = D(~all(D == 0, 1), :);
b_D = zeros(size(D,1), 1);

for i = 1:num_steps - 1
    r = zeros(3,4);
    for f = 1:length(feet)
        if stance_indices.(feet{f}).stance(i)
            r(:,f) = r_ws.(feet{f})(:,i);
        end
    end
    
    [A, B] = systemMatrices(m, I_b, yaw_des(i), r);
    
    A_states((i - 1)*n_states + 1:i*n_states, (i - 1)*n_states + 1:i*n_states) = -(eye(12) + delta_t*A);
    A_states((i - 1)*n_states + 1:i*n_states, i*n_states + 1:(i + 1)*n_states) = eye(12);
    A_inputs((i - 1)*n_states + 1:i*n_states, 12*(i - 1) + 1: 12*i) = delta_t*B;
end

A_eq = [A_states, A_inputs; zeros(size(D,1), size(A_states,2)), D];
b_eq = [b_sys; b_D];

f_min = 0;
f_max = 1e4;

b_forces = [f_min; f_max; zeros(4,1)];
A_forces = [0, 0, -1;
            0, 0, 1;
            1, 0, -mu;
            -1, 0, -mu;
            0, 1, -mu;
            0, -1, -mu];
A_ineq = kron(eye(num_legs), A_forces);
b_ineq = repmat(b_forces, num_legs, 1);