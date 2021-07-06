%% Setup

run("setup.m");

path = "~/Tetrapod-Robot/catkin_ws/src/utilities/log_utils/bagfiles/";
timestamp = "2021-06-14-12-07-08";

number_of_motors = 12;

%% Extract ROSbag data
joint_state_bag = rosbag(path + "joint_state_" + timestamp + ".bag");
joint_state_cmd_bag = rosbag(path + "joint_state_cmd_" + timestamp + ".bag");

%% Initialize state vectors 
state_time = get_time_states(joint_state_bag);
joint_pos_state = get_joint_position_states(joint_state_bag, number_of_motors);
joint_vel_state = get_joint_velocity_states(joint_state_bag, number_of_motors);
joint_torque = get_joint_effort_states(joint_state_bag, number_of_motors);

reference_time = get_time_states(joint_state_cmd_bag);
%joint_pos_reference = get_joint_position_states(joint_state_cmd_bag, number_of_motors);
%joint_vel_reference = get_joint_velocity_states(joint_state_cmd_bag, number_of_motors);
joint_torque_reference = get_joint_effort_states(joint_state_cmd_bag, number_of_motors);

%% Remove time offset from the measurements so that time zero is when the first message of one time is received
time_offset = 0;

if(state_time(1, 1) < reference_time(1, 1))
    time_offset = state_time(1, 1);
else 
    time_offset = reference_time(1, 1);
end

state_time = state_time' - time_offset;

reference_time = reference_time' - time_offset;

%% Get frequency
frequency = length(state_time)/(state_time(end) - state_time(1)); 
frequency = floor(frequency);

%% Convert from rad to deg
joint_pos_state = joint_pos_state*180.0/pi;
joint_vel_state = joint_vel_state*180.0/pi;

% joint_pos_reference = joint_pos_reference*180.0/pi;
% joint_vel_reference = joint_vel_reference*180.0/pi;

%% Plot results

% Slicing index
s_i = 300;

% Joint positions
figure(1)
colororder(newcolors)
for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    a = plot(state_time(1:s_i), joint_torque(1:s_i,i), ...
             "LineWidth", 2, ...
             "DisplayName", "$\theta$");
%     b = plot(reference_time(1:s_i), joint_pos_reference(1:s_i,i), ...
%              "-r", ...
%              "LineWidth", 2, ...
%              "DisplayName", "$\theta_{ref}$");
    uistack(a, "top");
    title("Motor: " + i);
    legend;
    xlabel("Time [s]");
    ylabel("Angle [deg]");
    hold off
end


% Joint velocities
figure(2)
colororder(newcolors)
for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    a = plot(state_time(1:s_i), joint_vel_state(1:s_i,i), ...
            "LineWidth", 2, ...
            "DisplayName", "$\omega$");
%     b = plot(reference_time(1:s_i), joint_vel_reference(1:s_i,i), ...
%              "-r", ...
%              "LineWidth", 2, ...
%              "DisplayName", "$\omega_{ref}$");
    uistack(a, "top");
    title("Motor: " + i);

    legend;
    xlabel("Time [s]");
    ylabel("Angular Rate [deg/s]");
    hold off
end

% Joint Torques
figure(3)
colororder(newcolors)
for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    a = plot(state_time(1:s_i), joint_torque(1:s_i,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau$");
    b = plot(reference_time(1:s_i), joint_torque_reference(1:s_i,i), ...
          ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_{ref}$");
    uistack(a, "top");
    title("Motor: " + i);
    %legend("$\tau$", "$\tau_{ref}$");
    legend;
    xlabel("Time [s]");
    ylabel("Torque [Nm]");
    hold off
end





% figure(4)
% hold on 
% grid on
% plot(state_time, joint_vel_state);
% plot(state_time, joint_torque);
% legend("\omega", "\tau");
% xlabel("time [s]");
% hold off

step_start = floor(frequency);
step_end = ceil(frequency*1.05);

% figure(5)
% hold on
% grid on
% plot(reference_time(step_start:step_end), joint_torque_reference(step_start:step_end));
% plot(state_time(step_start:step_end), joint_torque(step_start:step_end));
% legend("\tau_{ref}", "\tau");
% xlabel("time [s]");
% ylabel("torque [Nm]");
% hold off


mean_start = floor(frequency*1.1);
mean_end = ceil(frequency*1.4);

torque_std = std(joint_torque(mean_start:mean_end));
%torque_offset = mean(joint_torque(mean_start:mean_end)) - joint_torque_reference(end);

fprintf("Peak Torque: %f [Nm]\n", max(joint_torque));
fprintf("Standard deviation: %f [Nm]\n", torque_std);
%fprintf("Offset deviation: %f [Nm]\n", torque_offset);

% plot_start = floor(frequency*0.95);
% 
% figure(6)
% subplot(3, 1, 1);
% hold on 
% grid on
% plot(reference_time(plot_start:end), joint_vel_reference(plot_start:end));
% plot(state_time(plot_start:end), joint_vel_state(plot_start:end));
% legend("\omega_{ref}", "\omega");
% xlabel("time [s]");
% ylabel("angular rate [deg/s]");
% hold off
% 
% subplot(3, 1, 2);
% hold on
% grid on
% plot(reference_time(plot_start:end), joint_torque_reference(plot_start:end));
% plot(state_time(plot_start:end), joint_torque(plot_start:end));
% legend("\tau_{ref}", "\tau");
% xlabel("time [s]");
% ylabel("torque [Nm]");
% hold off
% 
% subplot(3, 1, 3);
% hold on
% grid on
% plot(reference_time(step_start:step_end), joint_torque_reference(step_start:step_end));
% plot(state_time(step_start:step_end), joint_torque(step_start:step_end));
% legend("\tau_{ref}", "\tau");
% xlabel("time [s]");
% ylabel("torque [Nm]");
% hold off

