%% Init

close all
clear
clc

run("setup.m");

bag_path = "~/Tetrapod-Robot/bagfiles/single_leg_tests/";
figure_path = "~/Tetrapod-Robot/figures/single_leg_tests";

number_of_motors = 3;

number_of_cases = 5;

%% Set data timestamps (test cases correspond to the ones set in the report)

testcase1 = "2021-06-29-16-44-14"; % Gains (Kpp: 5, Kip: 5, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
%testcase2 = "2021-06-29-16-35-30"; % Gains (Kpp: 10, Kip: 10, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
testcase3 = "2021-06-29-17-25-29"; % Gains (Kpp: 20, Kip: 20, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)

testcase4 = "2021-06-29-17-30-44"; % Gains (Kpp: 20, Kip: 20, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) Similar response, but more oscillations
testcase5 = "2021-06-29-17-33-57"; % Gains (Kpp: 30, Kip: 30, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) Slightly better, even more oscillations
testcase6 = "2021-06-29-17-40-19"; % Gains (Kpp: 30, Kip: 30, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) More oscillations, slightly better

testcase7 = "2021-06-29-17-45-20"; % Gains (Kpp: 40, Kip: 40, Kpv: 100, Kiv: 100, Kpt: 150, Kit: 150) Large oscillations

%timestamp = "2021-07-05-19-57-42"; % (Kpp: 50, Kip: 50, Kpv: 100, Kiv: 100, Kpt: 100, Kit: 100) Much torque oscillations

%timestamp = "2021-07-05-20-14-55"; % (Kpp: 7, Kip: 7, Kpv: 35, Kiv: 35, Kpt: 100, Kit: 100)

%timestamp = "2021-07-05-20-21-29"; % (Kpp: 25, Kip: 12, Kpv: 50, Kiv: 25, Kpt: 100, Kit: 50)

%timestamp = "2021-07-05-20-27-08"; % (Kpp: 50, Kip: 10, Kpv: 100, Kiv: 25, Kpt: 150, Kit: 50)

%timestamp = "2021-07-05-20-31-49"; % (Kpp: 30, Kip: 15, Kpv: 50, Kiv: 25, Kpt: 100, Kit: 50)


%% Extract ROSbag data
state_bag1 = rosbag(bag_path + "states_" + testcase1 + ".bag");
% state_bag2 = rosbag(bag_path + "states_" + testcase2 + ".bag");
state_bag3 = rosbag(bag_path + "states_" + testcase3 + ".bag");
state_bag4 = rosbag(bag_path + "states_" + testcase4 + ".bag");
state_bag5 = rosbag(bag_path + "states_" + testcase5 + ".bag");
state_bag6 = rosbag(bag_path + "states_" + testcase6 + ".bag");
state_bag7 = rosbag(bag_path + "states_" + testcase7 + ".bag");
% state_bag8 = rosbag(bag_path + "states_" + testcase8 + ".bag");
% state_bag9 = rosbag(bag_path + "states_" + testcase9 + ".bag");
reference_bag = rosbag(bag_path + "references_" + testcase1 + ".bag");




%% Initialize state vectors 
state_time = get_time_states(state_bag1);

reference_time = get_time_states(reference_bag);

joint_position1 = get_joint_position_states(state_bag1, number_of_motors);
% joint_position2 = get_joint_position_states(state_bag2, number_of_motors);
joint_position3 = get_joint_position_states(state_bag3, number_of_motors);
joint_position4 = get_joint_position_states(state_bag4, number_of_motors);
joint_position5 = get_joint_position_states(state_bag5, number_of_motors);
joint_position6 = get_joint_position_states(state_bag6, number_of_motors);
joint_position7 = get_joint_position_states(state_bag7, number_of_motors);
% joint_position8 = get_joint_position_states(state_bag8, number_of_motors);
% joint_position9 = get_joint_position_states(state_bag9, number_of_motors);

joint_position_reference = get_joint_position_states(reference_bag, number_of_motors);

joint_velocity1 = get_joint_velocity_states(state_bag1, number_of_motors);
% joint_velocity2 = get_joint_velocity_states(state_bag2, number_of_motors);
joint_velocity3 = get_joint_velocity_states(state_bag3, number_of_motors);
joint_velocity4 = get_joint_velocity_states(state_bag4, number_of_motors);
joint_velocity5 = get_joint_velocity_states(state_bag5, number_of_motors);
joint_velocity6 = get_joint_velocity_states(state_bag6, number_of_motors);
joint_velocity7 = get_joint_velocity_states(state_bag7, number_of_motors);
% joint_velocity8 = get_joint_velocity_states(state_bag8, number_of_motors);
% joint_velocity9 = get_joint_velocity_states(state_bag9, number_of_motors);

joint_velocity_reference = get_joint_velocity_states(reference_bag, number_of_motors);

joint_torque1 = get_joint_effort_states(state_bag1, number_of_motors);
% joint_torque2 = get_joint_effort_states(state_bag2, number_of_motors);
joint_torque3 = get_joint_effort_states(state_bag3, number_of_motors);
joint_torque4 = get_joint_effort_states(state_bag4, number_of_motors);
joint_torque5 = get_joint_effort_states(state_bag5, number_of_motors);
joint_torque6 = get_joint_effort_states(state_bag6, number_of_motors);
joint_torque7 = get_joint_effort_states(state_bag7, number_of_motors);
% joint_torque8 = get_joint_effort_states(state_bag8, number_of_motors);
% joint_torque9 = get_joint_effort_states(state_bag9, number_of_motors);

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
joint_position1 = joint_position1*180.0/pi;
% joint_position2 = joint_position2*180.0/pi;
joint_position3 = joint_position3*180.0/pi;
joint_position4 = joint_position4*180.0/pi;
joint_position5 = joint_position5*180.0/pi;
joint_position6 = joint_position6*180.0/pi;
joint_position7 = joint_position7*180.0/pi;
% joint_position8 = joint_position8*180.0/pi;
% joint_position9 = joint_position9*180.0/pi;
joint_position_reference = joint_position_reference*180.0/pi;

joint_velocity1 = joint_velocity1*180.0/pi;
% joint_velocity2 = joint_velocity2*180.0/pi;
joint_velocity3 = joint_velocity3*180.0/pi;
joint_velocity4 = joint_velocity4*180.0/pi;
joint_velocity5 = joint_velocity5*180.0/pi;
joint_velocity6 = joint_velocity6*180.0/pi;
joint_velocity7 = joint_velocity7*180.0/pi;
% joint_velocity8 = joint_velocity8*180.0/pi;
% joint_velocity9 = joint_velocity9*180.0/pi;
joint_velocity_reference = joint_velocity_reference*180.0/pi;

%% Plot results

% Limits
xlimits = [];

pos_legends = ["$\theta_{h,y", "$\theta_{h,p", "$\theta_{k,p"];
pos_ref_legends = ["$\theta_{h,y, ref}$", "$\theta_{h,p, ref}$", "$\theta_{k,p, ref}$"];
pos_titles = ["Hip Yaw Position response", "Hip Pitch Position response", "Knee Pitch Position response"];

vel_legends = ["$\omega_{h,y", "$\omega_{h,p", "$\omega_{k,p"];
vel_ref_legends = ["$\omega_{h,y, ref}$", "$\omega_{h,p, ref}$", "$\omega_{k,p, ref}$"];
vel_titles = ["Hip Yaw Velocity response", "Hip Pitch Velocity response", "Knee Pitch Velocity response"];

tor_legends = ["$\tau_{h,y", "$\tau_{h,p", "$\tau_{k,p"];
tor_ref_legends = ["$\tau_{h,y, ref}$", "$\tau_{h,p, ref}$", "$\tau_{k,p, ref}$"];
tor_titles = ["Hip Yaw Torque response", "Hip Pitch Torque response", "Knee Pitch Torque response"];


% Joint Positions
figure('DefaultAxesFontSize',18)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on
    

    plot(state_time, joint_position1(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", pos_legends(i) + ",1}$");
    
%     plot(state_time, joint_position2(:,i), ...
%         "LineWidth", 2, ...
%         "DisplayName", pos_legends(i) + ",2}$");
    
    plot(state_time, joint_position3(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", pos_legends(i) + ",3}$");
    
    plot(state_time, joint_position4(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", pos_legends(i) + ",4}$");
    
    plot(state_time, joint_position5(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", pos_legends(i) + ",5}$");
    
    plot(state_time, joint_position6(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", pos_legends(i) + ",6}$");
    
    plot(state_time, joint_position7(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", pos_legends(i) + ",7}$");
    
    
    a = plot(reference_time, joint_position_reference(:,i), ...
        ...
         "LineWidth", 2, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", pos_ref_legends(i));
     

    uistack(a, "top");
    title(pos_titles(i));
    legend('FontSize', 20);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angle [deg]", 'FontSize', 20);
    hold off
end

% Joint Velocities
figure('DefaultAxesFontSize',18)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on

    plot(state_time, joint_velocity1(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", vel_legends(i) + ",1}$");
    
%     plot(state_time, joint_velocity2(:,i), ...
%         "LineWidth", 2, ...
%         "DisplayName", vel_legends(i) + ",2}$");
    
    plot(state_time, joint_velocity3(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", vel_legends(i) + ",3}$");
    
    plot(state_time, joint_velocity4(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", vel_legends(i) + ",4}$");
    
    plot(state_time, joint_velocity5(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", vel_legends(i) + ",5}$");
    
    plot(state_time, joint_velocity6(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", vel_legends(i) + ",6}$");
    
    plot(state_time, joint_velocity7(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", vel_legends(i) + ",7}$");

    k = plot(reference_time, joint_velocity_reference(:,i), ...
         "LineWidth", 2, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", vel_ref_legends(i));
     

    uistack(k, "top");
    title(vel_titles(i));
    legend('FontSize', 20);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angular Velocity [deg/s]", 'FontSize', 20);
    hold off
end

% Joint Torques
figure('DefaultAxesFontSize',18)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on

    plot(state_time, joint_torque1(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", tor_legends(i) + ",1}$");
    
%     plot(state_time, joint_torque2(:,i), ...
%         "LineWidth", 2, ...
%         "DisplayName", tor_legends(i) + ",2}$");
    
    plot(state_time, joint_torque3(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", tor_legends(i) + ",3}$");
    
    plot(state_time, joint_torque4(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", tor_legends(i) + ",4}$");
    
    plot(state_time, joint_torque5(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", tor_legends(i) + ",5}$");
    
    plot(state_time, joint_torque6(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", tor_legends(i) + ",6}$");
    
    plot(state_time, joint_torque7(:,i), ...
        "LineWidth", 2, ...
        "DisplayName", tor_legends(i) + ",7}$");


%     k = plot(reference_time, joint_torque_reference(:,i), ...
%          "LineWidth", 2, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", tor_ref_legends(i));
     

    %uistack(k, "top");
    title(tor_titles(i));
    legend('FontSize', 20);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Torque [Nm]", 'FontSize', 20);
    hold off
end


%% Save figure

fig = gcf;

filename = 'position_test_case_2_5_9.pdf';

% exportgraphics(fig, filename)

