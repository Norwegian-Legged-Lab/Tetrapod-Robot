%% Init

close all
clear
clc

run("setup.m");

bag_path = "~/Tetrapod-Robot/bagfiles/single_motor_torque_tests/";
figure_path = "~/Tetrapod-Robot/figures/single_motor_torque_tests";


number_of_motors = 1;

%% Set data timestamps (test cases correspond to the ones set in the report)

testcase1 = "2021-06-07-15-11-44";

testcase3 = "2021-06-07-15-37-11"; 

testcase4 = "2021-06-07-15-55-09";

testcase5 = "2021-06-07-18-03-32";

testcase6 = "2021-06-07-18-12-13"; 

testcase7 = "2021-06-07-18-17-17"; 

testcase8 = "2021-06-07-18-24-07"; 

testcase10 = "2021-06-07-18-47-21"; 

%% Extract ROSbag data
state_bag1 = rosbag(bag_path + "states_" + testcase1 + ".bag");
state_bag3 = rosbag(bag_path + "states_" + testcase3 + ".bag");
state_bag4 = rosbag(bag_path + "states_" + testcase4 + ".bag");
state_bag5 = rosbag(bag_path + "states_" + testcase5 + ".bag");
state_bag6 = rosbag(bag_path + "states_" + testcase6 + ".bag");
state_bag7 = rosbag(bag_path + "states_" + testcase7 + ".bag");
state_bag8 = rosbag(bag_path + "states_" + testcase8 + ".bag");
state_bag10 = rosbag(bag_path + "states_" + testcase10 + ".bag");
reference_bag = rosbag(bag_path + "references_" + testcase1 + ".bag");
reference_bag2 = rosbag(bag_path + "references_" + testcase8 + ".bag");


%% Initialize state vectors 
state_time = get_time_states(state_bag1);
state_time2 = get_time_states(state_bag8);

reference_time = get_time_states(reference_bag);
reference_time2 = get_time_states(reference_bag2);


joint_velocity1 = get_joint_velocity_states(state_bag1, number_of_motors);
joint_velocity3 = get_joint_velocity_states(state_bag3, number_of_motors);
joint_velocity4 = get_joint_velocity_states(state_bag4, number_of_motors);
joint_velocity5 = get_joint_velocity_states(state_bag5, number_of_motors);
joint_velocity6 = get_joint_velocity_states(state_bag6, number_of_motors);
joint_velocity7 = get_joint_velocity_states(state_bag7, number_of_motors);
joint_velocity8 = get_joint_velocity_states(state_bag8, number_of_motors);
joint_velocity10 = get_joint_velocity_states(state_bag10, number_of_motors);

joint_velocity_reference = get_joint_velocity_states(reference_bag, number_of_motors);
joint_velocity_reference2 = get_joint_velocity_states(reference_bag2, number_of_motors);

joint_torque1 = get_joint_effort_states(state_bag1, number_of_motors);
joint_torque3 = get_joint_effort_states(state_bag3, number_of_motors);
joint_torque4 = get_joint_effort_states(state_bag4, number_of_motors);
joint_torque5 = get_joint_effort_states(state_bag5, number_of_motors);
joint_torque6 = get_joint_effort_states(state_bag6, number_of_motors);
joint_torque7 = get_joint_effort_states(state_bag7, number_of_motors);
joint_torque8 = get_joint_effort_states(state_bag8, number_of_motors);
joint_torque10 = get_joint_effort_states(state_bag10, number_of_motors);

joint_torque_reference = get_joint_effort_states(reference_bag, number_of_motors);
joint_torque_reference2 = get_joint_effort_states(reference_bag2, number_of_motors);

%% Remove time offset from the measurements so that time zero is when the first message of one time is received
time_offset = 0;

if(state_time(1, 1) < reference_time(1, 1))
    time_offset = state_time(1, 1);
else 
    time_offset = reference_time(1, 1);
end

state_time = state_time' - time_offset;

reference_time = reference_time' - time_offset;


if(state_time2(1, 1) < reference_time2(1, 1))
    time_offset = state_time2(1, 1);
else 
    time_offset = reference_time2(1, 1);
end

state_time2 = state_time2' - time_offset;

%% Convert from rad to deg
joint_velocity1 = joint_velocity1*180.0/pi;
joint_velocity3 = joint_velocity3*180.0/pi;
joint_velocity4 = joint_velocity4*180.0/pi;
joint_velocity5 = joint_velocity5*180.0/pi;
joint_velocity6 = joint_velocity6*180.0/pi;
joint_velocity7 = joint_velocity7*180.0/pi;
joint_velocity8 = joint_velocity8*180.0/pi;
joint_velocity10 = joint_velocity10*180.0/pi;

%% Plot results

% Slicing index
si1 = 150;
si2 = 300;

figure('DefaultAxesFontSize',18)
set(gcf, 'Position',  [100, 100, 1600, 800])
colororder(newcolors)

% Joint Velocities
for i = 1:number_of_motors
    subplot(2, 1, 1)
    hold on
    grid on
%     e = plot(reference_time(1:si1), joint_velocity_reference(1:si1,i), ...
%           ...
%          "LineWidth", 2, ...
%          "LineStyle", '--', ...
%          "DisplayName", "$\omega_{ref}$");
%     a = plot(state_time(1:si1), joint_velocity1(1:si1,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_1$");
%     b = plot(state_time(1:si1), joint_velocity3(1:si1,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_3$");
    c = plot(state_time2(1:si2), joint_velocity4(1:si2,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_4$");
    d = plot(state_time2(1:si2), joint_velocity5(1:si2,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_5$");
    e = plot(state_time2(1:si2), joint_velocity6(1:si2,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_6$");
%     f = plot(state_time2(1:si2), joint_velocity7(1:si2,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_7$");
%     g = plot(state_time2(1:si2), joint_velocity8(1:si2,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_8$"); 
%     h = plot(state_time2(1:si2), joint_velocity10(1:si2,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_{10}$"); 
     

    %uistack(e, "top");
    title("Velocity response");
    %legend("$\tau$", "$\tau_{ref}$");
    legend('FontSize', 20);
    xlim([0.95, 1.3]);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angular Velocity [deg/s]", 'FontSize', 20);
    hold off
end

% Joint Torques
for i = 1:number_of_motors
    subplot(2, 1, 2)
    hold on
    grid on

%     a = plot(state_time(1:si1), joint_torque1(1:si1,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_1$");
%     b = plot(state_time(1:si1), joint_torque3(1:si1,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_3$");
    c = plot(state_time2(1:si2), joint_torque4(1:si2,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_4$");
    d = plot(state_time2(1:si2), joint_torque5(1:si2,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_5$"); 
    e = plot(state_time2(1:si2), joint_torque6(1:si2,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_6$"); 
%     f = plot(state_time2(1:si2), joint_torque7(1:si2,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_7$"); 
%     g = plot(state_time2(1:si2), joint_torque8(1:si2,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_8$"); 
%     h = plot(state_time2(1:si2), joint_torque10(1:si2,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_{10}$");
    i = plot(reference_time(1:si1), joint_torque_reference(1:si1,i), ...
          ...
         "LineWidth", 2, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", "$\tau_{ref}$");
     

    uistack(i, "top");
    title("Torque response");
    %legend("$\tau$", "$\tau_{ref}$");
    legend('FontSize', 20);
    xlim([0.95, 1.3]);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Torque [Nm]", 'FontSize', 20);
    hold off
end


%% Save figure

f = gcf;

filename = 'torque_test_case_4_5_6.pdf';

exportgraphics(f, filename)




