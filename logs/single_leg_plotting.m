close all
clear
clc

% timestamp = "2021-06-23-11-05-59"; % Rate: 50, k_pos: 3, k_vel: 10, k_tor: 20 
% timestamp = "2021-06-23-11-20-28"; % Rate: 200, k_pos: 3, k_vel: 10, k_tor: 20 
% %timestamp = "2021-06-23-11-25-17"; % Rate: 200, k_pos: 10, k_vel: 25, k_tor: 50 
% 
% %timestamp = "2021-06-25-15-28-17"; % Subtract Coriolis - Torque Control
% %timestamp = "2021-06-25-16-12-37"; % Add Coriolis - Torque Control
% %timestamp = "2021-06-25-16-18-42"; % Add Coriolis - Position control
% 
% timestamp = "2021-06-27-15-05-57"; % Position control
% timestamp = "2021-06-27-15-15-18"; % Torque P = 100, D = 20
% timestamp = "2021-06-27-15-17-59"; % Torque P1 = 100, D1 = 20, P2 = 200, D2 = 50, P3 = 200, D3 = 50
% %timestamp = "2021-06-27-15-20-56"; % Torque P1 = 100, D1 = 20, P2 = 400, D2 = 100, P3 = 500, D3 = 200
% %timestamp = "2021-06-27-15-35-14"; % Position control
% 
% % Stance tests
% % Simple trajectories
% timestamp = "2021-06-28-18-05-02"; % Position P = 150, D = 10 
% timestamp = "2021-06-28-18-08-37"; % Position P = 100, D = 10 // Pretty similar
% timestamp = "2021-06-28-18-11-06"; % Position P = 100, D = 20 // A lot of oscillations
% timestamp = "2021-06-28-18-13-45"; % Position P = 100, D = 5 // Les oscillations, similar errors
% timestamp = "2021-06-28-18-21-33"; % Position P = 100, D = 2, D1 = 5 
% 
% % Smooth trajectories
% timestamp = "2021-06-28-18-31-06"; % Position P = 100, D = 2 // Velocity profiles for pitch joint were much better. Yaw was slightly worse
% 
% % Smooth trajectories - Torque Control
% timestamp = "2021-06-28-19-03-02"; % P = 100, D = 10
% timestamp = "2021-06-28-19-11-38"; % P = 100, D = 2
% timestamp = "2021-06-28-19-15-26"; % P = 100, D = 5
% 
% % Simulator - Swing Leg - Position - 200, 2
% timestamp = "2021-06-29-09-48-29"; % (Kp: 200, 100, 100), (Kd: 2, 2, 2)
% timestamp = "2021-06-29-09-52-53"; % (Kp: 200, 100, 100), (Kd: 5, 5, 5)
% timestamp = "2021-06-29-09-56-50"; % (Kp: 100, 50, 50), (Kd: 2, 2, 2)
% timestamp = "2021-06-29-09-59-15"; % (Kp: 200, 200, 200), (Kd: 2, 2, 2)
% timestamp = "2021-06-29-10-01-41"; % (Kp: 200, 200, 200), (Kd: 2, 2, 2), (Period: 0.25) 
% %timestamp = "2021-06-29-10-46-48"; % (Kp: 200, 200, 200), (Kd: 2, 2, 2), (Period: 0.25) 
% %timestamp = "2021-06-29-10-52-18"; % (Kp: 100, 100, 100), (Kd: 2, 2, 2), (Period: 0.25) 
% %timestamp = "2021-06-29-10-59-37"; % (Kp: 100, 100, 100), (Kd: 2, 2, 2), (Period: 0.25) 
% timestamp = "2021-06-29-11-03-18"; % (Kp: 200, 100, 100), (Kd: 2, 2, 2), (Period: 0.25) 
% timestamp = "2021-06-29-11-04-54"; % (Kp: 200, 100, 100), (Kd: 0.1, 0.1, 0.1), (Period: 0.25) 
% timestamp = "2021-06-29-11-06-32"; % (Kp: 200, 100, 100), (Kd: 1, 1, 1), (Period: 0.25) 
% timestamp = "2021-06-29-11-08-08"; % (Kp: 200, 100, 50), (Kd: 1, 1, 1), (Period: 0.25) % Really nice
% timestamp = "2021-06-29-11-11-18"; % (Kp: 200, 50, 50), (Kd: 1, 1, 1), (Period: 0.25) % Worse
% timestamp = "2021-06-29-11-12-51"; % (Kp: 200, 100, 50), (Kd: 1, 2, 1), (Period: 0.25) % Really nice. No Torque spikes
% timestamp = "2021-06-29-11-14-49"; % (Kp: 200, 100, 50), (Kd: 5, 2, 1), (Period: 0.25) % A lot worse
% timestamp = "2021-06-29-11-16-24"; % (Kp: 150, 100, 50), (Kd: 5, 2, 1), (Period: 0.25) % Several torque spikes
% timestamp = "2021-06-29-11-18-04"; % (Kp: 150, 100, 50), (Kd: 3, 2, 1), (Period: 0.25) % Still not good. Several torque spikes
% timestamp = "2021-06-29-11-19-32"; % (Kp: 150, 100, 50), (Kd: 1, 2, 1), (Period: 0.25) % Really nice. No torque spikes
% 
% timestamp = "2021-06-29-11-24-07"; % (Kp: 150, 100, 50), (Kd: 1, 2, 1), (Period: 0.25) % Really nice. No torque spikes
% 
% % Real tests
% timestamp = "2021-06-29-11-41-45"; % Phase period 3.0
% timestamp = "2021-06-29-11-44-47"; % Phase period 1.0
% timestamp = "2021-06-29-11-46-57"; % Phase period 0.5


%% Report Physical Single Leg Fixed Base
% timestamp = "2021-06-29-16-44-14"; % Gains (Kpp: 5, Kip: 5, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
%timestamp = "2021-06-29-16-35-30"; % Gains (Kpp: 10, Kip: 10, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
%timestamp = "2021-06-29-17-25-29"; % Gains (Kpp: 20, Kip: 20, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)

%timestamp = "2021-06-29-17-30-44"; % Gains (Kpp: 20, Kip: 20, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) Similar response, but more oscillations
timestamp = "2021-06-29-17-33-57"; % Gains (Kpp: 30, Kip: 30, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) Slightly better, even more oscillations
%timestamp = "2021-06-29-17-40-19"; % Gains (Kpp: 40, Kip: 40, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) More oscillations, slightly better

% timestamp = "2021-06-29-17-45-20"; % Gains (Kpp: 40, Kip: 40, Kpv: 100, Kiv: 100, Kpt: 150, Kit: 150) Large oscillations

%timestamp = "2021-07-05-19-57-42"; % (Kpp: 50, Kip: 50, Kpv: 100, Kiv: 100, Kpt: 100, Kit: 100) Much torque oscillations

%timestamp = "2021-07-05-20-14-55"; % (Kpp: 7, Kip: 7, Kpv: 35, Kiv: 35, Kpt: 100, Kit: 100)

%timestamp = "2021-07-05-20-21-29"; % (Kpp: 25, Kip: 12, Kpv: 50, Kiv: 25, Kpt: 100, Kit: 50)

%timestamp = "2021-07-05-20-27-08"; % (Kpp: 50, Kip: 10, Kpv: 100, Kiv: 25, Kpt: 150, Kit: 50)

% timestamp = "2021-07-05-20-31-49"; % (Kpp: 30, Kip: 15, Kpv: 50, Kiv: 25, Kpt: 100, Kit: 50)

%% Script start

plot_ref = true;

number_of_motors = 3;

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

%% Calculate foot position and velocities

N = length(state_time);

foot_pos_state = zeros(N, 3);

foot_pos_ref = zeros(N, 3);

foot_vel_state = zeros(N, 3);

foot_vel_ref = zeros(N, 3);

for i = 1:N
    foot_pos_state(i, :) = CalculateFootPosition(joint_pos_state(i, :));
    foot_pos_ref(i, :) = CalculateFootPosition(joint_pos_reference(i, :));
    
    foot_vel_state(i, :) = CalculateFootVelocity(joint_pos_state(i, :), joint_vel_state(i, :));
    foot_vel_ref(i, :) = CalculateFootVelocity(joint_pos_reference(i, :), joint_vel_reference(i, :));
end

%% Convert from rad to deg
joint_pos_state = joint_pos_state*180.0/pi;
joint_vel_state = joint_vel_state*180.0/pi;

joint_pos_reference = joint_pos_reference*180.0/pi;
joint_vel_reference = joint_vel_reference*180.0/pi;

%% Plot results

% % Joint positions
% figure(1)
% 
% subplot(3, 1, 1)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_pos_reference(:, 1));
% end
% plot(state_time, joint_pos_state(:, 1));
% legend("$\theta_{hy, ref}$", "$\theta_{hy}$");
% %xlabel("time [s]");
% %ylabel("angle [deg]");
% hold off
% 
% subplot(3, 1, 2)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_pos_reference(:, 2));
% end
% plot(state_time, joint_pos_state(:, 2));
% legend("$\theta_{hp, ref}$", "$\theta_{hp}$");
% %xlabel("time [s]");
% ylabel("angle [deg]");
% hold off
% 
% subplot(3, 1, 3)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_pos_reference(:, 3));
% end
% plot(state_time, joint_pos_state(:, 3));
% legend("$\theta_{kp, ref}$", "$\theta_{kp}$");
% xlabel("time [s]");
% %ylabel("angle [deg]");
% hold off
% 
% % % Joint velocities
% figure(2)
% 
% subplot(3, 1, 1)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_vel_reference(:, 1));
% end
% plot(state_time, joint_vel_state(:, 1));
% legend("$\omega_{hy, ref}$", "$\omega_{hy}$");
% hold off
% 
% subplot(3, 1, 2)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_vel_reference(:, 2));
% end
% plot(state_time, joint_vel_state(:, 2)');
% legend("$\omega_{hp, ref}$", "$\omega_{hp}$");
% ylabel("angular rate [deg/s]");
% hold off
% 
% subplot(3, 1, 3)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_vel_reference(:, 3));
% end
% plot(state_time, joint_vel_state(:, 3)');
% legend("$\omega_{kp, ref}$", "$\omega_{kp}$");
% xlabel("time [s]");
% hold off
% % 
% % % Joint Torques
% figure(3)
% 
% subplot(3, 1, 1)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_torque_reference(:, 1));
% end
% plot(state_time, joint_torques(:, 1));
% legend("$\tau_{hy, ref}$", "$\tau_{hy}$");
% hold off
% 
% subplot(3, 1, 2)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_torque_reference(:, 2));
% end
% plot(state_time, joint_torques(:, 2)');
% legend("$\tau_{hp, ref}$", "$\tau_{hp}$");
% ylabel("torque [Nm]");
% hold off
% 
% subplot(3, 1, 3)
% hold on 
% grid on
% if(plot_ref)
%     plot(reference_time, joint_torque_reference(:, 3));
% end
% plot(state_time, joint_torques(:, 3)');
% legend("$\tau_{kp, ref}$", "$\tau_{kp}$");
% xlabel("time [s]");
% hold off

% Foot position 
figure(4)

subplot(3, 1, 1)
hold on 
grid on
plot(reference_time, foot_pos_ref(:, 1));
plot(state_time, foot_pos_state(:, 1));
legend("$x_{ref}$", "$x$");
hold off

subplot(3, 1, 2)
hold on 
grid on
plot(reference_time, foot_pos_ref(:, 2));
plot(state_time, foot_pos_state(:, 2));
legend("$y_{ref}$", "$y$");
ylabel("Pos [m]");
hold off

subplot(3, 1, 3)
hold on 
grid on
plot(reference_time, foot_pos_ref(:, 3));
plot(state_time, foot_pos_state(:, 3));
legend("$z_{ref}$", "$z$");
xlabel("time [s]");
hold off

% Foot velocity 
figure(5)

subplot(3, 1, 1)
hold on 
grid on
plot(reference_time, foot_vel_ref(:, 1));
plot(state_time, foot_vel_state(:, 1));
legend("$x_{d, ref}$", "$x_d$");
hold off

subplot(3, 1, 2)
hold on 
grid on
plot(reference_time, foot_vel_ref(:, 2));
plot(state_time, foot_vel_state(:, 2));
legend("$y_{d, ref}$", "$y_d$");
ylabel("Vel [m/s]");
hold off

subplot(3, 1, 3)
hold on 
grid on
plot(reference_time, foot_vel_ref(:, 3));
plot(state_time, foot_vel_state(:, 3));
legend("$z_{d, ref}$", "$z_d$");
xlabel("time [s]");
hold off

% Foot position 3D plot

figure(6)
plot3(foot_pos_ref(:, 1), foot_pos_ref(:, 2), foot_pos_ref(:, 3));
hold on
grid on
plot3(foot_pos_state(:, 1), foot_pos_state(:, 2), foot_pos_state(:, 3));
axis([-0.5 .5 -0.5 0.5 -0.5 0.5]);
legend("$p(t)_{ref}$", "$p(t)$");
xlabel("$x [m]$");
ylabel("$y [m]$");
zlabel("$z [m]$");
hold off


% Key data
joint_pos_errors = rms(joint_pos_reference - joint_pos_state);

joint_vel_errors = rms(joint_vel_reference - joint_vel_state);

foot_pos_errors = rms(foot_pos_ref - foot_pos_state);

foot_vel_errors = rms(foot_vel_ref - foot_vel_state);

fprintf("Errors:\n");
fprintf("Joint pos - hy: %f\thp: %f\tkp: %f\n", joint_pos_errors(1), joint_pos_errors(2), joint_pos_errors(3));
fprintf("Joint vel - hy: %f\thp: %f\tkp: %f\n", joint_vel_errors(1), joint_vel_errors(2), joint_vel_errors(3));
fprintf("Foot pos - x: %f\ty: %f\tz: %f\n", foot_pos_errors(1), foot_pos_errors(2), foot_pos_errors(3));
fprintf("Foot vel - x: %f\ty: %f\tz: %f\n", foot_vel_errors(1), foot_vel_errors(2), foot_vel_errors(3));





