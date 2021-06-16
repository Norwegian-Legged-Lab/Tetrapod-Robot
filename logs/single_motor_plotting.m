close all
clear
clc

%timestamp = "2021-06-07-13-51-18";
%timestamp = "2021-06-07-13-55-08"; % 1 Nm (kp=50, ki=20)
%timestamp = "2021-06-07-14-06-36"; % 5 Nm (kp=50, ki=20)
%timestamp = "2021-06-07-14-24-22"; %10 Nm (kp=50, ki=20)
%timestamp = "2021-06-07-14-28-57";  %15 Nm (kp=50, ki=20)

%timestamp = "2021-06-07-15-11-44"; %1
%timestamp = "2021-06-07-15-19-17"; %2
%timestamp = "2021-06-07-15-29-49"; %3
%timestamp = "2021-06-07-15-37-11"; %4
%timestamp = "2021-06-07-15-40-35"; %5

%timestamp = "2021-06-07-15-55-09"; %6
%timestamp = "2021-06-07-17-42-50"; %7
%timestamp = "2021-06-07-18-03-32"; %8
%timestamp = "2021-06-07-18-12-13"; %9

%timestamp = "2021-06-07-18-17-17"; %10

%timestamp = "2021-06-07-18-21-04"; %11
timestamp = "2021-06-07-18-24-07"; %12
%timestamp = "2021-06-07-18-27-55"; %13
%timestamp = "2021-06-07-18-27-55"; %14
%timestamp = "2021-06-07-18-32-06"; %15
%timestamp = "2021-06-07-18-38-59"; %16

%timestamp = "2021-06-07-18-43-01"; %17

%timestamp = "2021-06-07-18-49-39"; % 18 200/200
%timestamp = "2021-06-07-18-47-21"; % 18 200/200

%timestamp = "2021-06-07-18-56-23"; % 19

%timestamp = "2021-06-07-18-59-18"; % 20
%timestamp = "2021-06-07-19-01-57"; % 21
%timestamp = "2021-06-07-19-04-52"; % 22

%timestamp = "2021-06-07-15-50-50";

number_of_motors = 1;

%% Extract ROSbag data
state_bag = rosbag("states_" + timestamp + ".bag");
reference_bag = rosbag("references_" + timestamp + ".bag");

%% Initialize state vectors 
state_time = get_time_states(state_bag);
joint_pos_state = get_joint_position_states(state_bag, number_of_motors);
joint_vel_state = get_joint_velocity_states(state_bag, number_of_motors);%timestamp = "2021-06-07-15-40-35"; %5
joint_torque = get_joint_effort_states(state_bag, number_of_motors);

reference_time = get_time_states(reference_bag);
joint_pos_reference = get_joint_position_states(reference_bag, number_of_motors);
joint_vel_reference = get_joint_velocity_states(reference_bag, number_of_motors);
joint_torque_reference = get_joint_effort_states(reference_bag, number_of_motors);

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

joint_pos_reference = joint_pos_reference*180.0/pi;
joint_vel_reference = joint_vel_reference*180.0/pi;

%% Plot results

% Joint positions
% figure(1)
% hold on 
% grid on
% plot(reference_time, joint_pos_reference);
% plot(state_time, joint_pos_state);
% legend("\theta_{ref}", "\theta");
% xlabel("time [s]");
% ylabel("angle [deg]");
% hold off

% Joint velocities
% figure(2)
% hold on 
% grid on
% plot(reference_time, joint_vel_reference);
% plot(state_time, joint_vel_state);
% legend("\omega_{ref}", "\omega");
% xlabel("time [s]");
% ylabel("angular rate [deg/s]");
% hold off

% Joint Torques
% figure(3)
% hold on
% grid on
% %plot(reference_time, joint_torque_reference*1200/26.88);
% %plot(state_time, joint_torque*1200/26.88);
% plot(reference_time, joint_torque_reference);
% plot(state_time, joint_torque);
% legend("\tau_{ref}", "\tau");
% xlabel("time [s]");
% %ylabel("torque current");
% ylabel("torque [Nm]");
% hold off

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
torque_offset = mean(joint_torque(mean_start:mean_end)) - joint_torque_reference(end);

fprintf("Peak Torque: %f [Nm]\n", max(joint_torque));
fprintf("Standard deviation: %f [Nm]\n", torque_std);
fprintf("Offset deviation: %f [Nm]\n", torque_offset);

plot_start = floor(frequency*0.95);

figure(6)
subplot(3, 1, 1);
hold on 
grid on
plot(reference_time(plot_start:end), joint_vel_reference(plot_start:end));
plot(state_time(plot_start:end), joint_vel_state(plot_start:end));
legend("\omega_{ref}", "\omega");
xlabel("time [s]");
ylabel("angular rate [deg/s]");
hold off

subplot(3, 1, 2);
hold on
grid on
plot(reference_time(plot_start:end), joint_torque_reference(plot_start:end));
plot(state_time(plot_start:end), joint_torque(plot_start:end));
legend("\tau_{ref}", "\tau");
xlabel("time [s]");
ylabel("torque [Nm]");
hold off

subplot(3, 1, 3);
hold on
grid on
plot(reference_time(step_start:step_end), joint_torque_reference(step_start:step_end));
plot(state_time(step_start:step_end), joint_torque(step_start:step_end));
legend("\tau_{ref}", "\tau");
xlabel("time [s]");
ylabel("torque [Nm]");
hold off

