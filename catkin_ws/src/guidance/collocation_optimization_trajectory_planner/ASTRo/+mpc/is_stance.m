function [stance_bool] = is_stance(leg_type, tau, stance_info)
%IS_STANCE Summary of this function goes here
%   Detailed explanation goes here
tau = mod(tau, 1);

switch leg_type
    case 'fl'
        stance_bool = any((tau >= stance_info.fl.starts) & (tau < stance_info.fl.starts + stance_info.fl.durations), 1);
    case 'fr'
        stance_bool = any((tau >= stance_info.fr.starts) & (tau < stance_info.fr.starts + stance_info.fr.durations), 1);
    case 'rl'
        stance_bool = any((tau >= stance_info.rl.starts) & (tau < stance_info.rl.starts + stance_info.rl.durations), 1);
    case 'rr'
        stance_bool = any((tau >= stance_info.rr.starts) & (tau < stance_info.rr.starts + stance_info.rr.durations), 1);
        
end

