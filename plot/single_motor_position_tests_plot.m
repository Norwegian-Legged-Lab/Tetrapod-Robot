%% Init

close all
clear
clc

run("setup.m");

bag_path = "~/Tetrapod-Robot/bagfiles/single_motor_position_tests/";
figure_path = "~/Tetrapod-Robot/figures/single_motor_position_tests";


number_of_motors = 1;

%% Set data timestamps (test cases correspond to the ones set in the report)

testcase1 = "2021-06-19-16-35-16"; %10, 5
testcase2 = "2021-06-19-16-41-00"; %10, 10
testcase3 = "2021-06-19-16-43-47"; %10, 15
testcase4 = "2021-06-19-16-47-05"; %50, 25
testcase5 = "2021-06-19-16-52-37"; %50, 50
testcase6 = "2021-06-19-16-55-09"; %50, 75
testcase7 = "2021-06-19-17-07-12"; %75, 75 
testcase8 = "2021-06-19-16-58-56"; %100, 50
testcase9 = "2021-06-19-17-02-45"; %100, 100 


%% Extract ROSbag data
state_bag1 = rosbag(bag_path + "states_" + testcase1 + ".bag");
state_bag2 = rosbag(bag_path + "states_" + testcase2 + ".bag");
state_bag3 = rosbag(bag_path + "states_" + testcase3 + ".bag");
state_bag4 = rosbag(bag_path + "states_" + testcase4 + ".bag");
state_bag5 = rosbag(bag_path + "states_" + testcase5 + ".bag");
state_bag6 = rosbag(bag_path + "states_" + testcase6 + ".bag");
state_bag7 = rosbag(bag_path + "states_" + testcase7 + ".bag");
state_bag8 = rosbag(bag_path + "states_" + testcase8 + ".bag");
state_bag9 = rosbag(bag_path + "states_" + testcase9 + ".bag");
reference_bag = rosbag(bag_path + "references_" + testcase1 + ".bag");
reference_bag2 = rosbag(bag_path + "references_" + testcase2 + ".bag");
reference_bag3 = rosbag(bag_path + "references_" + testcase3 + ".bag");




%% Initialize state vectors 
state_time = get_time_states(state_bag1);
state_time2 = get_time_states(state_bag2);
state_time3 = get_time_states(state_bag3);

reference_time = get_time_states(reference_bag);
reference_time2 = get_time_states(reference_bag2);
reference_time3 = get_time_states(reference_bag3);


joint_position1 = get_joint_position_states(state_bag1, number_of_motors);
joint_position2 = get_joint_position_states(state_bag2, number_of_motors);
joint_position3 = get_joint_position_states(state_bag3, number_of_motors);
joint_position4 = get_joint_position_states(state_bag4, number_of_motors);
joint_position5 = get_joint_position_states(state_bag5, number_of_motors);
joint_position6 = get_joint_position_states(state_bag6, number_of_motors);
joint_position7 = get_joint_position_states(state_bag7, number_of_motors);
joint_position8 = get_joint_position_states(state_bag8, number_of_motors);
joint_position9 = get_joint_position_states(state_bag9, number_of_motors);

joint_position_reference = get_joint_position_states(reference_bag, number_of_motors);

joint_velocity1 = get_joint_velocity_states(state_bag1, number_of_motors);
joint_velocity2 = get_joint_velocity_states(state_bag2, number_of_motors);
joint_velocity3 = get_joint_velocity_states(state_bag3, number_of_motors);
joint_velocity4 = get_joint_velocity_states(state_bag4, number_of_motors);
joint_velocity5 = get_joint_velocity_states(state_bag5, number_of_motors);
joint_velocity6 = get_joint_velocity_states(state_bag6, number_of_motors);
joint_velocity7 = get_joint_velocity_states(state_bag7, number_of_motors);
joint_velocity8 = get_joint_velocity_states(state_bag8, number_of_motors);
joint_velocity9 = get_joint_velocity_states(state_bag9, number_of_motors);

joint_velocity_reference = get_joint_velocity_states(reference_bag, number_of_motors);

joint_torque1 = get_joint_effort_states(state_bag1, number_of_motors);
joint_torque2 = get_joint_effort_states(state_bag2, number_of_motors);
joint_torque3 = get_joint_effort_states(state_bag3, number_of_motors);
joint_torque4 = get_joint_effort_states(state_bag4, number_of_motors);
joint_torque5 = get_joint_effort_states(state_bag5, number_of_motors);
joint_torque6 = get_joint_effort_states(state_bag6, number_of_motors);
joint_torque7 = get_joint_effort_states(state_bag7, number_of_motors);
joint_torque8 = get_joint_effort_states(state_bag8, number_of_motors);
joint_torque9 = get_joint_effort_states(state_bag9, number_of_motors);

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

if(state_time2(1, 1) < reference_time2(1, 1))
    time_offset = state_time2(1, 1);
else 
    time_offset = reference_time2(1, 1);
end

state_time2 = state_time2' - time_offset;

reference_time2 = reference_time2' - time_offset;

if(state_time3(1, 1) < reference_time3(1, 1))
    time_offset = state_time3(1, 1);
else 
    time_offset = reference_time3(1, 1);
end

state_time3 = state_time3' - time_offset;

reference_time3 = reference_time3' - time_offset;

%% Convert from rad to deg
joint_position1 = joint_position1*180.0/pi;
joint_position2 = joint_position2*180.0/pi;
joint_position3 = joint_position3*180.0/pi;
joint_position4 = joint_position4*180.0/pi;
joint_position5 = joint_position5*180.0/pi;
joint_position6 = joint_position6*180.0/pi;
joint_position7 = joint_position7*180.0/pi;
joint_position8 = joint_position8*180.0/pi;
joint_position9 = joint_position9*180.0/pi;
joint_position_reference = joint_position_reference*180.0/pi;

joint_velocity1 = joint_velocity1*180.0/pi;
joint_velocity2 = joint_velocity2*180.0/pi;
joint_velocity3 = joint_velocity3*180.0/pi;
joint_velocity4 = joint_velocity4*180.0/pi;
joint_velocity5 = joint_velocity5*180.0/pi;
joint_velocity6 = joint_velocity6*180.0/pi;
joint_velocity7 = joint_velocity7*180.0/pi;
joint_velocity8 = joint_velocity8*180.0/pi;
joint_velocity9 = joint_velocity9*180.0/pi;
joint_velocity_reference = joint_velocity_reference*180.0/pi;

%% Plot results

% Slicing index
si = 240;

% Limits
xlimits = [0.15, 0.6];

figure('DefaultAxesFontSize',18)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

% Joint Positions
for i = 1:number_of_motors
    subplot(3, 1, 1)
    hold on
    grid on

    a = plot(state_time(1:si), joint_position1(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\theta_1$");
%     b = plot(state_time2(1:si), joint_position2(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\theta_2$");
%     c = plot(state_time3(1:si), joint_position3(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\theta_3$");
%     d = plot(state_time(1:si), joint_position4(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\theta_4$");
    e = plot(state_time(1:si), joint_position5(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\theta_5$");
%     f = plot(state_time(1:si), joint_position6(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\theta_6$");
%     g = plot(state_time(1:si), joint_position7(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\theta_7$");
%     h = plot(state_time(1:si), joint_position8(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\theta_8$");
    j = plot(state_time(1:si), joint_position9(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\theta_9$");
    k = plot(reference_time(1:si), joint_position_reference(1:si,i), ...
          ...
         "LineWidth", 2, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", "$\theta_{ref}$");
     

    uistack(k, "top");
    title("Position response");
    legend('FontSize', 20);
    xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angle [deg]", 'FontSize', 20);
    hold off
end

% Joint Velocities
for i = 1:number_of_motors
    subplot(3, 1, 2)
    hold on
    grid on

    a = plot(state_time(1:si), joint_velocity1(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_1$");
%     b = plot(state_time(1:si), joint_velocity2(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_2$");
%     c = plot(state_time(1:si), joint_velocity3(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_3$");
%     d = plot(state_time(1:si), joint_velocity4(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_4$");
    e = plot(state_time(1:si), joint_velocity5(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_5$");
%     f = plot(state_time(1:si), joint_velocity6(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_6$");
%     g = plot(state_time(1:si), joint_velocity7(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_7$");
%     h = plot(state_time(1:si), joint_velocity8(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\omega_8$");
    j = plot(state_time(1:si), joint_velocity9(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\omega_9$");
%     k = plot(reference_time(1:si), joint_velocity_reference(1:si,i), ...
%           ...
%          "LineWidth", 2, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", "$\omega_{ref}$");
%      

    %uistack(k, "top");
    title("Velocity response");
    legend('FontSize', 20);
    xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angular Velocity [deg/s]", 'FontSize', 20);
    hold off
end

% Joint Torques
for i = 1:number_of_motors
    subplot(3, 1, 3)
    hold on
    grid on

%     a = plot(state_time(1:si), joint_torque1(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_1$");
    b = plot(state_time(1:si), joint_torque2(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_2$");
%     c = plot(state_time(1:si), joint_torque3(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_3$");
%     d = plot(state_time(1:si), joint_torque4(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_4$"); 
    e = plot(state_time(1:si), joint_torque5(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_5$"); 
%     f = plot(state_time(1:si), joint_torque6(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_6$"); 
%     g = plot(state_time(1:si), joint_torque7(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_7$"); 
%     h = plot(state_time(1:si), joint_torque8(1:si,i), ...
%          "LineWidth", 2, ...
%          "DisplayName", "$\tau_8$"); 
    j = plot(state_time(1:si), joint_torque9(1:si,i), ...
         "LineWidth", 2, ...
         "DisplayName", "$\tau_9$"); 
%     k = plot(reference_time(1:si), joint_torque_reference(1:si,i), ...
%           ...
%          "LineWidth", 2, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", "$\tau_{ref}$");
     

    %uistack(k, "top");
    title("Torque response");
    legend('FontSize', 20);
    xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Torque [Nm]", 'FontSize', 20);
    hold off
end


%% Save figure

fig = gcf;

filename = 'position_test_case_2_5_9.pdf';

exportgraphics(fig, filename)




