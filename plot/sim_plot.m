%% Setup

run("setup.m");

path = "~/Tetrapod-Robot/bagfiles/gait_simulation_tests/";
%timestamp = "2021-07-11-16-32-59";
timestamp = "2021-07-19-12-15-07"; % Kp = 100, Kd = 1
timestamp = "2021-07-19-12-48-19"; % Kp = 200, Kd = 5
%timestamp = "2021-07-22-15-53-30";
%timestamp = "2021-07-22-17-53-46";


% Simulation results for report % Base twist 2D motion [0.5, 0.0, 0.0]
path = "~/Tetrapod-Robot/bagfiles/gait_simulation_tests/";
timestamp = "2021-07-24-12-22-13"; % Case 1: Kp = 25, Kd = 1
timestamp = "2021-07-24-12-28-36"; % Case 2: Kp = 50, Kd = 2
timestamp = "2021-07-24-12-32-06"; % Case 3: Kp = 75, Kd = 3
timestamp = "2021-07-24-12-35-13"; % Case 4: Kp = 100, Kd = 4
timestamp = "2021-07-24-12-39-53"; % Case 5: Kp = 200, Kd = 8

% Other tests
%timestamp = "2021-07-24-16-09-49"; % p1=100, d1=5, p2=100, d2=5, p3=100, d3=1
%timestamp = "2021-07-24-16-13-33"; % p1=100, d1=5, p2=100, d2=2, p3=100, d3=1
%timestamp = "2021-07-24-17-14-47"; % p1=100, d1=5, p2=200, d2=5, p3=100, d3=1
%timestamp = "2021-07-24-17-19-47"; % p1=100, d1=5, p2=150, d2=3, p3=100, d3=1
%timestamp = "2021-07-24-17-23-01"; % p1=100, i1=0, d1=5, p2=150, i2=10, d2=3, p3=100, i3=0, d3=1
%timestamp = "2021-07-24-17-28-28"; % p1=100, i1=0, d1=5, p2=400, i2=10, d2=3, p3=100, i3=0, d3=1 Very good tracking values
timestamp = "2021-07-24-17-33-43"; % p1=300, i1=0, d1=5, p2=400, i2=10, d2=3, p3=100, i3=0, d3=1 Very good torques and great tracking USE THIS
%timestamp = "2021-07-24-17-37-04"; % p1=100, i1=0, d1=5, p2=400, i2=10, d2=3, p3=100, i3=0, d3=1

%path = "~/Tetrapod-Robot/bagfiles/gait_tests/";
%timestamp = "2021-07-22-21-35-46"; % First long trotting test
% Physical Tetrapod Standup and Tripping Tests
%path = "~/Tetrapod-Robot/bagfiles/gait_tests/";
path = "";
timestamp = "2021-07-26-15-44-40"; % Tripping test. Rear feet bend inwards after some time
timestamp = "2021-07-26-16-08-19"; % Tripping test. Behavior looked odd
timestamp = "2021-07-26-16-36-24"; % Pretty successful tripping for a long time. Small velocity commands were given
timestamp = "2021-07-26-16-43-48"; % Very good tripping test, some movement was completed.
timestamp = "2021-07-26-18-35-06"; % Attempted walking with crane. Crane was hindering motion
timestamp = "2021-07-26-18-51-23"; % Attempted walking. Robot slipped eventually

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
joint_pos_reference = get_joint_position_states(joint_state_cmd_bag, number_of_motors);
joint_vel_reference = get_joint_velocity_states(joint_state_cmd_bag, number_of_motors);
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

joint_pos_reference = joint_pos_reference*180.0/pi;
joint_vel_reference = joint_vel_reference*180.0/pi;

%% Plot results

% Slicing index
s_i = length(joint_pos_state);

% Joint positions
figure(1)
colororder(newcolors)
for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    a = plot(state_time(1:s_i), joint_pos_state(1:s_i,i), ...
             "LineWidth", 2, ...
             "DisplayName", "$\theta$");
    b = plot(reference_time(1:s_i), joint_pos_reference(1:s_i,i), ...
             "-r", ...
             "LineWidth", 2, ...
             "DisplayName", "$\theta_{ref}$");
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
    b = plot(reference_time(1:s_i), joint_vel_reference(1:s_i,i), ...
             "-r", ...
             "LineWidth", 2, ...
             "DisplayName", "$\omega_{ref}$");
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
    legend("$\tau$", "$\tau_{ref}$");
    %legend;
    xlabel("Time [s]");
    ylabel("Torque [Nm]");
    hold off
end

%% Calculating Key Parameters

% Calculate vectors containing joint position errors for all four legs
hy_joint_pos_errors = [(joint_pos_reference(:, 1) - joint_pos_state(:, 1))', (joint_pos_reference(:, 4) - joint_pos_state(:, 4))', (joint_pos_reference(:, 7) - joint_pos_state(:, 7))', (joint_pos_reference(:, 10) - joint_pos_state(:, 10))'];
hp_joint_pos_errors = [(joint_pos_reference(:, 2) - joint_pos_state(:, 2))', (joint_pos_reference(:, 5) - joint_pos_state(:, 5))', (joint_pos_reference(:, 8) - joint_pos_state(:, 8))', (joint_pos_reference(:, 11) - joint_pos_state(:, 11))'];
kp_joint_pos_errors = [(joint_pos_reference(:, 3) - joint_pos_state(:, 3))', (joint_pos_reference(:, 6) - joint_pos_state(:, 6))', (joint_pos_reference(:, 9) - joint_pos_state(:, 9))', (joint_pos_reference(:, 12) - joint_pos_state(:, 12))'];

% Calculate vectors containing joint velocity errors for all four legs
hy_joint_vel_errors = [(joint_vel_reference(:, 1) - joint_vel_state(:, 1))', (joint_vel_reference(:, 4) - joint_vel_state(:, 4))', (joint_vel_reference(:, 7) - joint_vel_state(:, 7))', (joint_vel_reference(:, 10) - joint_vel_state(:, 10))'];
hp_joint_vel_errors = [(joint_vel_reference(:, 2) - joint_vel_state(:, 2))', (joint_vel_reference(:, 5) - joint_vel_state(:, 5))', (joint_vel_reference(:, 8) - joint_vel_state(:, 8))', (joint_vel_reference(:, 11) - joint_vel_state(:, 11))'];
kp_joint_vel_errors = [(joint_vel_reference(:, 3) - joint_vel_state(:, 3))', (joint_vel_reference(:, 6) - joint_vel_state(:, 6))', (joint_vel_reference(:, 9) - joint_vel_state(:, 9))', (joint_vel_reference(:, 12) - joint_vel_state(:, 12))'];

% Concatenate vectors containing joint torques
hy_torques = [joint_torque(:, 1)', joint_torque(:, 4)', joint_torque(:, 7)', joint_torque(:, 10)'];
hp_torques = [joint_torque(:, 2)', joint_torque(:, 5)', joint_torque(:, 8)', joint_torque(:, 11)'];
kp_torques = [joint_torque(:, 3)', joint_torque(:, 6)', joint_torque(:, 9)', joint_torque(:, 12)'];

% Calculate joint position rmse values
hy_joint_pos_rmse = rms(hy_joint_pos_errors);
hp_joint_pos_rmse = rms(hp_joint_pos_errors);
kp_joint_pos_rmse = rms(kp_joint_pos_errors);

% Calculate joint velocity rmse values
hy_joint_vel_rmse = rms(hy_joint_vel_errors);
hp_joint_vel_rmse = rms(hp_joint_vel_errors);
kp_joint_vel_rmse = rms(kp_joint_vel_errors);

% Calculate mean joint torques 
hy_torque_mean = mean(abs(hy_torques));
hp_torque_mean = mean(abs(hp_torques));
kp_torque_mean = mean(abs(kp_torques));

fprintf("$theta_{hy}$: %f\t$theta_{hp}$: %f\t$theta_{kp}$: %f\n", hy_joint_pos_rmse, hp_joint_pos_rmse, kp_joint_pos_rmse);
fprintf("$omega_{hy}$: %f\t$omega_{hp}$: %f\t$omega_{kp}$: %f\n", hy_joint_vel_rmse, hp_joint_vel_rmse, kp_joint_vel_rmse);
fprintf("$tau_{hy}$: %f\t$tau_{hp}$: %f\t$tau_{kp}: %f$\n", hy_torque_mean, hp_torque_mean, kp_torque_mean);

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

%fprintf("Peak Torque: %f [Nm]\n", max(joint_torque));
%fprintf("Standard deviation: %f [Nm]\n", torque_std);
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

%% Plotting foot positions
N = length(joint_pos_state);

fl_foot_pos_ref = zeros(N, 3);
fl_foot_vel_ref = zeros(N, 3);
fl_foot_pos_state = zeros(N, 3);
fl_foot_vel_state = zeros(N, 3);

fr_foot_pos_ref = zeros(N, 3);
fr_foot_vel_ref = zeros(N, 3);
fr_foot_pos_state = zeros(N, 3);
fr_foot_vel_state = zeros(N, 3);

rl_foot_pos_ref = zeros(N, 3);
rl_foot_vel_ref = zeros(N, 3);
rl_foot_pos_state = zeros(N, 3);
rl_foot_vel_state = zeros(N, 3);

rr_foot_pos_ref = zeros(N, 3);
rr_foot_vel_ref = zeros(N, 3);
rr_foot_pos_state = zeros(N, 3);
rr_foot_vel_state = zeros(N, 3);

for i = 1:N
    fl_foot_pos_ref(i, :) = CalculateFootPosition(joint_pos_reference(i, 1:3)*pi/180.0, "front_left");
    fl_foot_vel_ref(i, :) = CalculateFootVelocity(joint_pos_reference(i, 1:3)*pi/180, joint_vel_reference(i, 1:3)*pi/180, "front_left");
    fl_foot_pos_state(i, :) = CalculateFootPosition(joint_pos_state(i, 1:3)*pi/180, "front_left");
    fl_foot_vel_state(i, :) = CalculateFootVelocity(joint_pos_state(i, 1:3)*pi/180, joint_vel_state(i, 1:3)*pi/180, "front_left");
    
    fr_foot_pos_ref(i, :) = CalculateFootPosition(joint_pos_reference(i, 4:6)*pi/180.0, "front_right");
    fr_foot_vel_ref(i, :) = CalculateFootVelocity(joint_pos_reference(i, 4:6)*pi/180, joint_vel_reference(i, 4:6)*pi/180, "front_right");
    fr_foot_pos_state(i, :) = CalculateFootPosition(joint_pos_state(i, 4:6)*pi/180, "front_right");
    fr_foot_vel_state(i, :) = CalculateFootVelocity(joint_pos_state(i, 4:6)*pi/180, joint_vel_state(i, 4:6)*pi/180, "front_right");

    rl_foot_pos_ref(i, :) = CalculateFootPosition(joint_pos_reference(i, 7:9)*pi/180.0, "rear_left");
    rl_foot_vel_ref(i, :) = CalculateFootVelocity(joint_pos_reference(i, 7:9)*pi/180, joint_vel_reference(i, 7:9)*pi/180, "rear_left");
    rl_foot_pos_state(i, :) = CalculateFootPosition(joint_pos_state(i, 7:9)*pi/180, "rear_left");
    rl_foot_vel_state(i, :) = CalculateFootVelocity(joint_pos_state(i, 7:9)*pi/180, joint_vel_state(i, 7:9)*pi/180, "rear_left");
    
    rr_foot_pos_ref(i, :) = CalculateFootPosition(joint_pos_reference(i, 10:12)*pi/180.0, "rear_right");
    rr_foot_vel_ref(i, :) = CalculateFootVelocity(joint_pos_reference(i, 10:12)*pi/180, joint_vel_reference(i, 10:12)*pi/180, "rear_right");
    rr_foot_pos_state(i, :) = CalculateFootPosition(joint_pos_state(i, 10:12)*pi/180, "rear_right");
    rr_foot_vel_state(i, :) = CalculateFootVelocity(joint_pos_state(i, 10:12)*pi/180, joint_vel_state(i, 10:12)*pi/180, "rear_right");
end

% figure(7)
% 
% subplot(2, 3, 1)
% hold on
% grid on
% plot(reference_time, fl_foot_pos_ref(:, 1));
% plot(state_time, fl_foot_pos_state(:, 1));
% 
% subplot(2, 3, 2)
% hold on
% grid on
% plot(reference_time, fl_foot_pos_ref(:, 2));
% plot(state_time, fl_foot_pos_state(:, 2));
% 
% subplot(2, 3, 3)
% hold on
% grid on
% plot(reference_time, fl_foot_pos_ref(:, 3));
% plot(state_time, fl_foot_pos_state(:, 3));
% 
% subplot(2, 3, 4)
% hold on
% grid on
% plot(reference_time, fl_foot_vel_ref(:, 1));
% plot(state_time, fl_foot_vel_state(:, 1));
% 
% subplot(2, 3, 5)
% hold on
% grid on
% plot(reference_time, fl_foot_vel_ref(:, 2));
% plot(state_time, fl_foot_vel_state(:, 2));
% 
% subplot(2, 3, 6)
% hold on
% grid on
% plot(reference_time, fl_foot_vel_ref(:, 3));
% plot(state_time, fl_foot_vel_state(:, 3));
% 
% sgtitle('Front Left Foot');

% figure(8)
% 
% subplot(2, 3, 1)
% hold on
% grid on
% plot(reference_time, fr_foot_pos_ref(:, 1));
% plot(state_time, fr_foot_pos_state(:, 1));
% 
% subplot(2, 3, 2)
% hold on
% grid on
% plot(reference_time, fr_foot_pos_ref(:, 2));
% plot(state_time, fr_foot_pos_state(:, 2));
% 
% subplot(2, 3, 3)
% hold on
% grid on
% plot(reference_time, fr_foot_pos_ref(:, 3));
% plot(state_time, fr_foot_pos_state(:, 3));
% 
% subplot(2, 3, 4)
% hold on
% grid on
% plot(reference_time, fr_foot_vel_ref(:, 1));
% plot(state_time, fr_foot_vel_state(:, 1));
% 
% subplot(2, 3, 5)
% hold on
% grid on
% plot(reference_time, fr_foot_vel_ref(:, 2));
% plot(state_time, fr_foot_vel_state(:, 2));
% 
% subplot(2, 3, 6)
% hold on
% grid on
% plot(reference_time, fr_foot_vel_ref(:, 3));
% plot(state_time, fr_foot_vel_state(:, 3));
% 
% sgtitle('Front Right Foot');

% figure(9)
% 
% subplot(2, 3, 1)
% hold on
% grid on
% plot(reference_time, rl_foot_pos_ref(:, 1));
% plot(state_time, rl_foot_pos_state(:, 1));
% 
% subplot(2, 3, 2)
% hold on
% grid on
% plot(reference_time, rl_foot_pos_ref(:, 2));
% plot(state_time, rl_foot_pos_state(:, 2));
% 
% subplot(2, 3, 3)
% hold on
% grid on
% plot(reference_time, rl_foot_pos_ref(:, 3));
% plot(state_time, rl_foot_pos_state(:, 3));
% 
% subplot(2, 3, 4)
% hold on
% grid on
% plot(reference_time, rl_foot_vel_ref(:, 1));
% plot(state_time, rl_foot_vel_state(:, 1));
% 
% subplot(2, 3, 5)
% hold on
% grid on
% plot(reference_time, rl_foot_vel_ref(:, 2));
% plot(state_time, rl_foot_vel_state(:, 2));
% 
% subplot(2, 3, 6)
% hold on
% grid on
% plot(reference_time, rl_foot_vel_ref(:, 3));
% plot(state_time, rl_foot_vel_state(:, 3));
% 
% sgtitle('Rear Left Foot');

% figure(10)
% 
% subplot(2, 3, 1)
% hold on
% grid on
% plot(reference_time, rr_foot_pos_ref(:, 1));
% plot(state_time, rr_foot_pos_state(:, 1));
% 
% subplot(2, 3, 2)
% hold on
% grid on
% plot(reference_time, rr_foot_pos_ref(:, 2));
% plot(state_time, rr_foot_pos_state(:, 2));
% 
% subplot(2, 3, 3)
% hold on
% grid on
% plot(reference_time, rr_foot_pos_ref(:, 3));
% plot(state_time, rr_foot_pos_state(:, 3));
% 
% subplot(2, 3, 4)
% hold on
% grid on
% plot(reference_time, rr_foot_vel_ref(:, 1));
% plot(state_time, rr_foot_vel_state(:, 1));
% 
% subplot(2, 3, 5)
% hold on
% grid on
% plot(reference_time, rr_foot_vel_ref(:, 2));
% plot(state_time, rr_foot_vel_state(:, 2));
% 
% subplot(2, 3, 6)
% hold on
% grid on
% plot(reference_time, rr_foot_vel_ref(:, 3));
% plot(state_time, rr_foot_vel_state(:, 3));
% 
% sgtitle('Rear Right Foot');

% figure(11)
% hold on
% grid on
% plot(reference_time, fl_foot_pos_ref(:, 1));
% plot(reference_time, fl_foot_pos_ref(:, 3));
% plot(reference_time, fl_foot_vel_ref(:, 1));
% plot(reference_time, fl_foot_vel_ref(:, 2));


