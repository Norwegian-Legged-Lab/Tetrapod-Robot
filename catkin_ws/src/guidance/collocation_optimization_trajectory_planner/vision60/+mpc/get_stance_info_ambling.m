function [info] = get_stance_info_ambling()
%GET_STANCE_INFO Summary of this function goes here
%   Detailed explanation goes here
info.fl.starts = 0.5;
info.fl.durations = 0.5;
info.fr.starts = 0;
info.fr.durations = 0.5;
info.rl.starts = [0; 0.75];
info.rl.durations = [0.25; 0.25];
info.rr.starts = 0.25;
info.rr.durations = 0.5;
end

