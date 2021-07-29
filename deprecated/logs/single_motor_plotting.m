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
%timestamp = "2021-06-07-18-24-07"; %12
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

% timestamp = "2021-06-18-21-12-37";
% %timestamp = "2021-06-18-21-15-48";
% %timestamp = "2021-06-18-21-18-16";
% timestamp = "2021-06-18-21-20-15";
% %timestamp = "2021-06-18-21-22-39";
% timestamp = "2021-06-18-21-25-16";
% timestamp = "2021-06-18-21-26-52";
% timestamp = "2021-06-18-21-29-38";
%timestamp = "2021-06-19-12-31-48";
%timestamp = "2021-06-19-14-27-59";

% Vel tests (Kp_vel, Ki_vel)
%timestamp = "2021-06-19-14-27-59"; % 50, 25
%timestamp = "2021-06-19-14-32-05"; % 50, 50
%timestamp = "2021-06-19-15-03-34"; % 50, 75

%timestamp = "2021-06-19-15-06-28"; % 100, 50
%timestamp = "2021-06-19-15-10-02"; % 100, 100 BAD (PAAL)
%timestamp = "2021-06-19-15-11-27"; % 100, 100
%timestamp = "2021-06-19-15-13-54"; % 100, 150

%timestamp = "2021-06-19-15-16-19"; % 150, 100

% Position tests (Kp_pos, Ki_pos)
POS_SETPOINT = 5;
%timestamp = "2021-06-19-15-32-31"; %5, 1
%timestamp = "2021-06-19-15-38-58"; %25, 10

%timestamp = "2021-06-19-16-35-16"; %10, 5
%timestamp = "2021-06-19-16-41-00"; %10, 10
%timestamp = "2021-06-19-16-43-47"; %10, 15

%timestamp = "2021-06-19-16-47-05"; %50, 25
%timestamp = "2021-06-19-16-52-37"; %50, 50
%timestamp = "2021-06-19-16-55-09"; %50, 75

%timestamp = "2021-06-19-16-58-56"; %100, 50
%timestamp = "2021-06-19-17-02-45"; %100, 100 First
%timestamp = "2021-06-19-17-07-12"; %75, 75 First
%timestamp = "2021-06-19-17-08-50"; %75, 75 Second
%timestamp = "2021-06-19-17-10-49"; %100, 100 Second
%timestamp = "2021-06-19-17-12-46"; %100, 100 Third
%timestamp = "2021-06-19-17-15-19"; %100, 50 Second
%timestamp = "2021-06-19-17-18-10"; %25, 25
%timestamp = "2021-06-19-17-21-43"; %80, 80
timestamp = "2021-06-19-17-23-55"; %100, 100 Fourth

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

%% Position step response data
index_found = false;
step_time_constant_index = 0;
i = 1;
while(~index_found)
    if(joint_pos_state(i) >= 0.63*POS_SETPOINT)
        step_time_constant_index = i;
        index_found = true;
    end
    i = i + 1;
end

index_found = false;
step_start_index = 0;
i = 1;
while(~index_found)
   if((i > 0.15*frequency) && (joint_pos_state(i)) > 0.3)
      step_start_index = i - 1;
      index_found = true;
   end
   i = i + 1;
end

pos_time_constant = (step_time_constant_index - step_start_index)/frequency;

%% Key values

mean_start = floor(frequency*0.5);
mean_end = ceil(frequency*0.9);

oscillation_start = floor(frequency*0.225);
oscillation_end = floor(frequency*0.50);

% Position 
joint_pos_std = std(joint_pos_state(mean_start:end));
joint_pos_offset = mean(joint_pos_state(mean_start:end)) - joint_pos_reference(end);

joint_pos_oscillation_std = std(joint_pos_state(oscillation_start:oscillation_end));
joint_pos_oscillation_offset = mean(joint_pos_state(oscillation_start:oscillation_end)) - joint_pos_reference(oscillation_end);

fprintf("Time constant: %f\n", pos_time_constant);

fprintf("Peak Pos: %f [deg]\n", max(joint_pos_state));
%fprintf("Standard deviation: %f [deg]\n", joint_pos_std);
%fprintf("Offset deviation: %f [deg]\n", joint_pos_offset);
%fprintf("Initial Step Standard deviation: %f [deg]\n", joint_pos_oscillation_std);
%fprintf("Initial Step Offset deviation: %f [deg]\n\n", joint_pos_oscillation_offset);


% Velocity

joint_vel_std = std(joint_vel_state(mean_start:end));
joint_vel_offset = mean(joint_vel_state(mean_start:end)) - joint_vel_reference(end);

joint_vel_oscillation_std = std(joint_vel_state(oscillation_start:oscillation_end));
joint_vel_oscillation_offset = mean(joint_vel_state(oscillation_start:oscillation_end)) - joint_vel_reference(oscillation_end);

fprintf("Peak Vel: %f [deg/s]\n", max(joint_vel_state));
%fprintf("Initial Step Standard deviation: %f [deg/s]\n", joint_vel_oscillation_std);
%fprintf("Standard deviation: %f [deg/s]\n", joint_vel_std);
%fprintf("Offset deviation: %f [deg/s]\n", joint_vel_offset);
%fprintf("Initial Step Offset deviation: %f [deg/s]\n\n", joint_vel_oscillation_offset);

% Torque

joint_torque_std = std(joint_torque(mean_start:end));
joint_torque_offset = mean(joint_torque(mean_start:end)) - joint_torque_reference(end);

joint_torque_oscillation_std = std(joint_torque(oscillation_start:oscillation_end));
joint_torque_oscillation_offset = mean(joint_torque(oscillation_start:oscillation_end)) - joint_torque_reference(oscillation_end);

fprintf("Peak Torque: %f [Nm]\n", max(joint_torque));
%fprintf("Standard deviation: %f [Nm]\n", joint_torque_std);
%fprintf("Offset deviation: %f [Nm]\n", joint_torque_offset);
%fprintf("Initial Step Standard deviation: %f [Nm]\n", joint_torque_oscillation_std);
%fprintf("Initial Step Offset deviation: %f [Nm]\n\n", joint_torque_oscillation_offset);

%% Plot results

% % Joint positions
% figure(1)
% hold on 
% grid on
% plot(reference_time, joint_pos_reference);
% plot(state_time, joint_pos_state);
% legend("\theta_{ref}", "\theta");
% xlabel("time [s]");
% ylabel("angle [deg]");
% hold off
% 
% % Joint velocities
% figure()
% hold on 
% grid on
% plot(reference_time, joint_vel_reference);
% plot(state_time, joint_vel_state);
% legend("\omega_{ref}", "\omega");
% xlabel("time [s]");
% ylabel("angular rate [deg/s]");
% hold off
% 
% % Joint Torques
% figure()
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


figure()
subplot(3, 1, 1);
hold on 
grid on
plot(reference_time, joint_pos_reference);
plot(state_time, joint_pos_state);
legend("\theta_{ref}", "\theta");
xlabel("time [s]");
ylabel("angle [deg]");
hold off

subplot(3, 1, 2);
hold on 
grid on
plot(reference_time, joint_vel_reference);
plot(state_time, joint_vel_state);
legend("\omega_{ref}", "\omega");
xlabel("time [s]");
ylabel("angular rate [deg/s]");
hold off

subplot(3, 1, 3);
hold on
grid on
plot(reference_time, joint_torque_reference);
plot(state_time, joint_torque);
legend("\tau_{ref}", "\tau");
xlabel("time [s]");
ylabel("torque [Nm]");
hold off



% figure(4)
% hold on 
% grid on
% plot(state_time, joint_vel_state);
% plot(state_time, joint_torque);
% legend("\omega", "\tau");
% xlabel("time [s]");
% hold off

% step_start = floor(frequency);
% step_end = ceil(frequency*1.05);
% 
% step_start = floor(0.2*frequency);
% step_end = ceil(0.2*frequency + frequency*0.05);

% figure(5)
% hold on
% grid on
% plot(reference_time(step_start:step_end), joint_torque_reference(step_start:step_end));
% plot(state_time(step_start:step_end), joint_torque(step_start:step_end));
% legend("\tau_{ref}", "\tau");
% xlabel("time [s]");
% ylabel("torque [Nm]");
% hold off


% mean_start = floor(frequency*1.1);
% mean_end = ceil(frequency*1.4);
% 
% torque_std = std(joint_torque(mean_start:mean_end));
% torque_offset = mean(joint_torque(mean_start:mean_end)) - joint_torque_reference(end);
% 
% fprintf("Peak Torque: %f [Nm]\n", max(joint_torque));
% fprintf("Standard deviation: %f [Nm]\n", torque_std);
% fprintf("Offset deviation: %f [Nm]\n", torque_offset);

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

% subplot(3, 1, 3);
% hold on
% grid on
% plot(reference_time(step_start:step_end), joint_torque_reference(step_start:step_end));
% plot(state_time(step_start:step_end), joint_torque(step_start:step_end));
% legend("\tau_{ref}", "\tau");
% xlabel("time [s]");
% ylabel("torque [Nm]");
% hold off

