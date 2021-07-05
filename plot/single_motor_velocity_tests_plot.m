%% Init

close all
clear
clc

run("setup.m");

bag_path = "~/Tetrapod-Robot/bagfiles/single_motor_velocity_tests/";
figure_path = "~/Tetrapod-Robot/figures/single_motor_velocity_tests";


number_of_motors = 1;

%% Set data timestamps (test cases correspond to the ones set in the report)

testcase1 = "2021-06-19-14-27-59"; % 50, 25
testcase2 = "2021-06-19-14-32-05"; % 50, 50
testcase3 = "2021-06-19-15-03-34"; % 50, 75
testcase4 = "2021-06-19-15-06-28"; % 100, 50
testcase5 = "2021-06-19-15-11-27"; % 100, 100
testcase6 = "2021-06-19-15-13-54"; % 100, 150
testcase7 = "2021-06-19-15-16-19"; % 150, 100

%% Extract ROSbag data
state_bag1 = rosbag(bag_path + "states_" + testcase1 + ".bag");
state_bag2 = rosbag(bag_path + "states_" + testcase2 + ".bag");
state_bag3 = rosbag(bag_path + "states_" + testcase3 + ".bag");
state_bag4 = rosbag(bag_path + "states_" + testcase4 + ".bag");
state_bag5 = rosbag(bag_path + "states_" + testcase5 + ".bag");
state_bag6 = rosbag(bag_path + "states_" + testcase6 + ".bag");
state_bag7 = rosbag(bag_path + "states_" + testcase7 + ".bag");
reference_bag = rosbag(bag_path + "references_" + testcase1 + ".bag");


%% Initialize state vectors 
state_time = get_time_states(state_bag1);

reference_time = get_time_states(reference_bag);


joint_velocity1 = get_joint_velocity_states(state_bag1, number_of_motors);
joint_velocity2 = get_joint_velocity_states(state_bag2, number_of_motors);
joint_velocity3 = get_joint_velocity_states(state_bag3, number_of_motors);
joint_velocity4 = get_joint_velocity_states(state_bag4, number_of_motors);
joint_velocity5 = get_joint_velocity_states(state_bag5, number_of_motors);
joint_velocity6 = get_joint_velocity_states(state_bag6, number_of_motors);
joint_velocity7 = get_joint_velocity_states(state_bag7, number_of_motors);

joint_velocity_reference = get_joint_velocity_states(reference_bag, number_of_motors);

joint_torque1 = get_joint_effort_states(state_bag1, number_of_motors);
joint_torque2 = get_joint_effort_states(state_bag2, number_of_motors);
joint_torque3 = get_joint_effort_states(state_bag3, number_of_motors);
joint_torque4 = get_joint_effort_states(state_bag4, number_of_motors);
joint_torque5 = get_joint_effort_states(state_bag5, number_of_motors);
joint_torque6 = get_joint_effort_states(state_bag6, number_of_motors);
joint_torque7 = get_joint_effort_states(state_bag7, number_of_motors);

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


%% Convert from rad to deg
joint_velocity1 = joint_velocity1*180.0/pi;
joint_velocity2 = joint_velocity2*180.0/pi;
joint_velocity3 = joint_velocity3*180.0/pi;
joint_velocity4 = joint_velocity4*180.0/pi;
joint_velocity5 = joint_velocity5*180.0/pi;
joint_velocity6 = joint_velocity6*180.0/pi;
joint_velocity7 = joint_velocity7*180.0/pi;
joint_velocity_reference = joint_velocity_reference*180.0/pi;

%% Plot results

% Slicing index
si = 240;

figure('DefaultAxesFontSize',18)
set(gcf, 'Position',  [100, 100, 1600, 800])
colororder(newcolors)

% Joint Velocities
for i = 1:number_of_motors
    subplot(2, 1, 1)
    hold on
    grid on

    a = plot(state_time(1:si), joint_velocity1(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_1$");
    b = plot(state_time(1:si), joint_velocity2(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_2$");
    c = plot(state_time(1:si), joint_velocity3(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_3$");
%     d = plot(state_time(1:si), joint_velocity4(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_4$");
%     e = plot(state_time(1:si), joint_velocity5(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_5$");
%     f = plot(state_time(1:si), joint_velocity6(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_6$");
%     g = plot(state_time(1:si), joint_velocity7(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_7$");
    h = plot(reference_time(1:si), joint_velocity_reference(1:si,i), ...
          ...
         "LineWidth", 2, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", "$\omega_{ref}$");
     

    uistack(h, "top");
    title("Velocity response");
    legend('FontSize', 20);
    xlim([0.15, 0.6]);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angular Velocity [deg/s]", 'FontSize', 20);
    hold off
end

% Joint Torques
for i = 1:number_of_motors
    subplot(2, 1, 2)
    hold on
    grid on

    a = plot(state_time(1:si), joint_torque1(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_1$");
    b = plot(state_time(1:si), joint_torque2(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_2$");
    c = plot(state_time(1:si), joint_torque3(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_3$");
%     d = plot(state_time(1:si), joint_torque4(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_4$"); 
%     e = plot(state_time(1:si), joint_torque5(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_5$"); 
%     f = plot(state_time(1:si), joint_torque6(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_6$"); 
%     g = plot(state_time(1:si), joint_torque7(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_7$"); 
%     h = plot(reference_time(1:si), joint_torque_reference(1:si,i), ...
%           ...
%          "LineWidth", 2, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", "$\tau_{ref}$");
     

    uistack(i, "top");
    title("Torque response");
    %legend("$\tau$", "$\tau_{ref}$");
    legend('FontSize', 20);
    xlim([0.15, 0.6]);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Torque [Nm]", 'FontSize', 20);
    hold off
end


%% Save figure

fig = gcf;

filename = 'velocity_test_case_1_2_3.pdf';

% exportgraphics(fig, filename)




