function [stance_indices] = get_stance_indices(cycle_period, horizon, delta_t, t0, stance_info)
%GET_STANCE_INDICES Summary of this function goes here
%   Detailed explanation goes here
tau0 = mod(t0/cycle_period, 1);
delta_tau = delta_t/cycle_period;
ts = (t0:delta_t:(t0 + horizon));
num_steps = length(ts);

tau_s = mod([t0 - delta_t, ts]/cycle_period, 1);
stance_indices = struct();

stance_indices.fl.stance = is_stance('fl', tau_s, stance_info);
stance_indices.fr.stance = is_stance('fr', tau_s, stance_info);
stance_indices.rl.stance = is_stance('rl', tau_s, stance_info);
stance_indices.rr.stance = is_stance('rr', tau_s, stance_info);

stance_indices.fl.d_stance = diff(stance_indices.fl.stance);
stance_indices.fr.d_stance = diff(stance_indices.fr.stance);
stance_indices.rl.d_stance = diff(stance_indices.rl.stance);
stance_indices.rr.d_stance = diff(stance_indices.rr.stance);

stance_indices.fl.stance = stance_indices.fl.stance(2:end);
stance_indices.fr.stance = stance_indices.fr.stance(2:end);
stance_indices.rl.stance = stance_indices.rl.stance(2:end);
stance_indices.rr.stance = stance_indices.rr.stance(2:end);