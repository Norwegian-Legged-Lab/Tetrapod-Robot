close all
clear
clc

timestamp = "2021-05-26-17-44-21";

number_of_motors = 1;

%% Extract ROSbag data
state_bag = rosbag("states_" + timestamp + ".bag");
reference_bag = rosbag("references_" + timestamp + ".bag");

%% Initialize state vectors 
state_time = get_time_states(state_bag);
joint_pos_state = get_joint_position_states(state_bag, number_of_motors);
joint_vel_state = get_joint_velocity_states(state_bag, number_of_motors);
joint_torques = get_joint_effort_states(state_bag, number_of_motors);

reference_time = get_time_states(reference_bag);
joint_pos_reference = get_joint_position_states(reference_bag, number_of_motors);
joint_vel_reference = get_joint_velocity_states(reference_bag, number_of_motors);
joint_acc_reference = get_joint_effort_states(reference_bag, number_of_motors);

%% Remove time offset from the measurements so that time zero is when the first message of one time is received
time_offset = 0;

if(state_time(1, 1) < reference_time(1, 1))
    time_offset = state_time(1, 1);
else 
    time_offset = reference_time(1, 1);
end

state_time = state_time' - time_offset;

reference_time = reference_time' - time_offset;

%% Convert from rad to deg
joint_pos_state = joint_pos_state*180.0/pi;
joint_vel_state = joint_vel_state*180.0/pi;

joint_pos_reference = joint_pos_reference*180.0/pi;
joint_vel_reference = joint_vel_reference*180.0/pi;
joint_acc_reference = joint_acc_reference*180.0/pi;

%% Plot results

% Joint positions
figure(1)
hold on 
grid on
plot(reference_time, joint_pos_reference);
plot(state_time, joint_pos_state);
legend("\theta_{ref}", "\theta");
xlabel("time [s]");
ylabel("angle [deg]");
hold off

% Joint velocities
figure(2)
hold on 
grid on
plot(reference_time, joint_vel_reference);
plot(state_time, joint_vel_state);
legend("\omega_{ref}", "\omega");
xlabel("time [s]");
ylabel("angular rate [deg/s]");
hold off

% Joint Torques
figure(3)
hold on
grid on
plot(state_time, joint_torques);
legend("\tau");
xlabel("time [s]");
ylabel("torque [Nm]");
hold off


















