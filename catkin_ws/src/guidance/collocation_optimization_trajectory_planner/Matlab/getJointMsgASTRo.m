function [msg] = getJointMsgASTRo()
%GETJOINTMSGASTRO Summary of this function goes here
%   Detailed explanation goes here
msg = rosmessage('sensor_msgs/JointState');
msg.Name = {'fl_hip_yaw', 'fl_hip_pitch', 'fl_knee_pitch',...
        'fr_hip_yaw', 'fr_hip_pitch', 'fr_knee_pitch',...
        'rl_hip_yaw', 'rl_hip_pitch', 'rl_knee_pitch',...
        'rr_hip_yaw', 'rr_hip_pitch', 'rr_knee_pitch'};
end

