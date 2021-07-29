%% Init

close all
clear
clc

run("setup.m");

bag_path = "~/Tetrapod-Robot/bagfiles/single_leg_tests/";
figure_path = "~/Tetrapod-Robot/figures/single_leg_tests";

number_of_motors = 3;

number_of_cases = 5;

leg_type = "front_left";
%% Set data timestamps (test cases correspond to the ones set in the report)

testcase1 = "2021-06-29-16-44-14"; % Gains (Kpp: 5, Kip: 5, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
testcase2 = "2021-06-29-16-35-30"; % Gains (Kpp: 10, Kip: 10, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
testcase3 = "2021-06-29-17-25-29"; % Gains (Kpp: 20, Kip: 20, Kpv: 30, Kiv: 30, Kpt: 50, Kit: 50)
testcase4 = "2021-06-29-17-30-44"; % Gains (Kpp: 20, Kip: 20, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) Similar response, but more oscillations
testcase5 = "2021-06-29-17-33-57"; % Gains (Kpp: 30, Kip: 30, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) Slightly better, even more oscillations
testcase6 = "2021-06-29-17-40-19"; % Gains (Kpp: 40, Kip: 40, Kpv: 50, Kiv: 50, Kpt: 100, Kit: 100) More oscillations, slightly better
testcase7 = "2021-06-29-17-45-20"; % Gains (Kpp: 40, Kip: 40, Kpv: 100, Kiv: 100, Kpt: 150, Kit: 150) Large oscillations
testcase8 = "2021-07-05-20-31-49"; % (Kpp: 30, Kip: 15, Kpv: 50, Kiv: 25, Kpt: 100, Kit: 50)


%% Extract ROSbag data
state_bag1 = rosbag(bag_path + "states_" + testcase1 + ".bag");
state_bag2 = rosbag(bag_path + "states_" + testcase2 + ".bag");
state_bag3 = rosbag(bag_path + "states_" + testcase3 + ".bag");
state_bag4 = rosbag(bag_path + "states_" + testcase4 + ".bag");
state_bag5 = rosbag(bag_path + "states_" + testcase5 + ".bag");
state_bag6 = rosbag(bag_path + "states_" + testcase6 + ".bag");
state_bag7 = rosbag(bag_path + "states_" + testcase7 + ".bag");
state_bag8 = rosbag(bag_path + "states_" + testcase8 + ".bag");

reference_bag = rosbag(bag_path + "references_" + testcase1 + ".bag");




%% Initialize state vectors 
state_time = get_time_states(state_bag1);

reference_time = get_time_states(reference_bag);

joint_position1 = get_joint_position_states(state_bag1, number_of_motors);
joint_position2 = get_joint_position_states(state_bag2, number_of_motors);
joint_position3 = get_joint_position_states(state_bag3, number_of_motors);
joint_position4 = get_joint_position_states(state_bag4, number_of_motors);
joint_position5 = get_joint_position_states(state_bag5, number_of_motors);
joint_position6 = get_joint_position_states(state_bag6, number_of_motors);
joint_position7 = get_joint_position_states(state_bag7, number_of_motors);
joint_position8 = get_joint_position_states(state_bag8, number_of_motors);

joint_position_reference = get_joint_position_states(reference_bag, number_of_motors);

joint_velocity1 = get_joint_velocity_states(state_bag1, number_of_motors);
joint_velocity2 = get_joint_velocity_states(state_bag2, number_of_motors);
joint_velocity3 = get_joint_velocity_states(state_bag3, number_of_motors);
joint_velocity4 = get_joint_velocity_states(state_bag4, number_of_motors);
joint_velocity5 = get_joint_velocity_states(state_bag5, number_of_motors);
joint_velocity6 = get_joint_velocity_states(state_bag6, number_of_motors);
joint_velocity7 = get_joint_velocity_states(state_bag7, number_of_motors);
joint_velocity8 = get_joint_velocity_states(state_bag8, number_of_motors);

joint_velocity_reference = get_joint_velocity_states(reference_bag, number_of_motors);

joint_torque1 = get_joint_effort_states(state_bag1, number_of_motors);
joint_torque2 = get_joint_effort_states(state_bag2, number_of_motors);
joint_torque3 = get_joint_effort_states(state_bag3, number_of_motors);
joint_torque4 = get_joint_effort_states(state_bag4, number_of_motors);
joint_torque5 = get_joint_effort_states(state_bag5, number_of_motors);
joint_torque6 = get_joint_effort_states(state_bag6, number_of_motors);
joint_torque7 = get_joint_effort_states(state_bag7, number_of_motors);
joint_torque8 = get_joint_effort_states(state_bag8, number_of_motors);

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

%% Calculate foot-point positions and velocities

N = length(state_time);

foot_position1 = zeros(N, 3);
foot_position2 = zeros(N, 3);
foot_position3 = zeros(N, 3);
foot_position4 = zeros(N, 3);
foot_position5 = zeros(N, 3);
foot_position6 = zeros(N, 3);
foot_position7 = zeros(N, 3);
foot_position8 = zeros(N, 3);

foot_position_reference = zeros(N, 3);

foot_velocity1 = zeros(N, 3);
foot_velocity2 = zeros(N, 3);
foot_velocity3 = zeros(N, 3);
foot_velocity4 = zeros(N, 3);
foot_velocity5 = zeros(N, 3);
foot_velocity6 = zeros(N, 3);
foot_velocity7 = zeros(N, 3);
foot_velocity8 = zeros(N, 3);

foot_velocity_reference = zeros(N, 3);

for i = 1:N
    foot_position1(i, :) = CalculateFootPosition(joint_position1(i, :), leg_type);
    foot_position2(i, :) = CalculateFootPosition(joint_position2(i, :), leg_type);
    foot_position3(i, :) = CalculateFootPosition(joint_position3(i, :), leg_type);
    foot_position4(i, :) = CalculateFootPosition(joint_position4(i, :), leg_type);
    foot_position5(i, :) = CalculateFootPosition(joint_position5(i, :), leg_type);
    foot_position6(i, :) = CalculateFootPosition(joint_position6(i, :), leg_type);
    foot_position7(i, :) = CalculateFootPosition(joint_position7(i, :), leg_type);
    foot_position8(i, :) = CalculateFootPosition(joint_position8(i, :), leg_type);
    foot_position_reference(i, :) = CalculateFootPosition(joint_position_reference(i, :), leg_type);
    
    foot_velocity1(i, :) = CalculateFootVelocity(joint_position1(i,:), joint_velocity1(i, :), leg_type);
    foot_velocity2(i, :) = CalculateFootVelocity(joint_position2(i,:), joint_velocity2(i, :), leg_type);
    foot_velocity3(i, :) = CalculateFootVelocity(joint_position3(i,:), joint_velocity3(i, :), leg_type);
    foot_velocity4(i, :) = CalculateFootVelocity(joint_position4(i,:), joint_velocity4(i, :), leg_type);
    foot_velocity5(i, :) = CalculateFootVelocity(joint_position5(i,:), joint_velocity5(i, :), leg_type);
    foot_velocity6(i, :) = CalculateFootVelocity(joint_position6(i,:), joint_velocity6(i, :), leg_type);
    foot_velocity7(i, :) = CalculateFootVelocity(joint_position7(i,:), joint_velocity7(i, :), leg_type);
    foot_velocity8(i, :) = CalculateFootVelocity(joint_position8(i,:), joint_velocity8(i, :), leg_type);

    foot_velocity_reference(i, :) = CalculateFootVelocity(joint_position_reference(i,:), joint_velocity_reference(i, :), leg_type);
end

%% Convert from rad to deg
joint_position1 = joint_position1*180.0/pi;
joint_position2 = joint_position2*180.0/pi;
joint_position3 = joint_position3*180.0/pi;
joint_position4 = joint_position4*180.0/pi;
joint_position5 = joint_position5*180.0/pi;
joint_position6 = joint_position6*180.0/pi;
joint_position7 = joint_position7*180.0/pi;
joint_position8 = joint_position8*180.0/pi;
joint_position_reference = joint_position_reference*180.0/pi;

joint_velocity1 = joint_velocity1*180.0/pi;
joint_velocity2 = joint_velocity2*180.0/pi;
joint_velocity3 = joint_velocity3*180.0/pi;
joint_velocity4 = joint_velocity4*180.0/pi;
joint_velocity5 = joint_velocity5*180.0/pi;
joint_velocity6 = joint_velocity6*180.0/pi;
joint_velocity7 = joint_velocity7*180.0/pi;
joint_velocity8 = joint_velocity8*180.0/pi;
joint_velocity_reference = joint_velocity_reference*180.0/pi;

%% Plot results

% Limits
xlimits = [];

pos_legends = ["$\theta_{h,y", "$\theta_{h,p", "$\theta_{k,p"];
pos_ref_legends = ["$\theta_{h,y, ref}$", "$\theta_{h,p, ref}$", "$\theta_{k,p, ref}$"];
pos_titles = ["\textbf{Hip Yaw Position response}", "\textbf{Hip Pitch Position response}", "\textbf{Knee Pitch Position response}"];

vel_legends = ["$\omega_{h,y", "$\omega_{h,p", "$\omega_{k,p"];
vel_ref_legends = ["$\omega_{h,y, ref}$", "$\omega_{h,p, ref}$", "$\omega_{k,p, ref}$"];
vel_titles = ["\textbf{Hip Yaw Velocity response}", "\textbf{Hip Pitch Velocity response}", "\textbf{Knee Pitch Velocity response}"];

tor_legends = ["$\tau_{h,y", "$\tau_{h,p", "$\tau_{k,p"];
tor_ref_legends = ["$\tau_{h,y, ref}$", "$\tau_{h,p, ref}$", "$\tau_{k,p, ref}$"];
tor_titles = ["\textbf{Hip Yaw Torque response}", "\textbf{Hip Pitch Torque response}", "\textbf{Knee Pitch Torque response}"];

foot_pos_legends = ["$x_{e", "$y_{e", "$z_{e"];
foot_pos_ref_legends = ["$x_{e, ref}$", "$y_{e, ref}$", "$z_{e, ref}$"];
foot_pos_titles = ["\textbf{Foot-point $x$ response}", "\textbf{Foot-point $y$ response}", "\textbf{Foot-point $z$ response}"];
foot_pos_ylabels = ["$x$-coordinate [m]", "$y$-coordinate [m]", "$z$-coordinate [m]"];

foot_vel_legends = ["$\dot{x}_{e", "$\dot{y}_{e", "$\dot{z}_{e"];
foot_vel_ref_legends = ["$\dot{x}_{e, ref}$", "$\dot{y}_{e, ref}$", "$\dot{z}_{e, ref}$"];
foot_vel_titles = ["\textbf{Foot-point $\dot{x}$ response}", "\textbf{Foot-point $\dot{y}$ response}", "\textbf{Foot-point $\dot{z}$ response}"];
foot_vel_ylabels = ["$x$-velocity [m/s]", "$y$-velocity [m/s]", "$z$-velocity [m/s]"];

%% Plot Joint States

% Joint Positions
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on
    

%     plot(state_time, joint_position1(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", pos_legends(i) + ",1}$");
%     
%     plot(state_time, joint_position2(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", pos_legends(i) + ",2}$");
%     
%     plot(state_time, joint_position3(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", pos_legends(i) + ",3}$");
%     
%     plot(state_time, joint_position4(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", pos_legends(i) + ",4}$");
%     
    plot(state_time, joint_position5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", pos_legends(i) + ",5}$");
%     
%     plot(state_time, joint_position6(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", pos_legends(i) + ",6}$");
%     
%     plot(state_time, joint_position7(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", pos_legends(i) + ",7}$");
%     
    plot(state_time, joint_position8(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", pos_legends(i) + ",8}$");
    
    
    a = plot(reference_time, joint_position_reference(:,i), ...
        ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", pos_ref_legends(i));
     

    uistack(a, "top");
    title(pos_titles(i), 'FontSize', 28);
    legend('FontSize', 28);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel("Angle [deg]", 'FontSize', 28);
    hold off
end

fig1 = gcf;

% Joint Velocities
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on

%     plot(state_time, joint_velocity1(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", vel_legends(i) + ",1}$");
%     
%     plot(state_time, joint_velocity2(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", vel_legends(i) + ",2}$");
%     
%     plot(state_time, joint_velocity3(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", vel_legends(i) + ",3}$");
%     
%     plot(state_time, joint_velocity4(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", vel_legends(i) + ",4}$");
%     
    plot(state_time, joint_velocity5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", vel_legends(i) + ",5}$");
%     
%     plot(state_time, joint_velocity6(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", vel_legends(i) + ",6}$");
%     
%     plot(state_time, joint_velocity7(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", vel_legends(i) + ",7}$");

    plot(state_time, joint_velocity8(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", vel_legends(i) + ",8}$");

    a = plot(reference_time, joint_velocity_reference(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", vel_ref_legends(i));
     

    uistack(a, "top");
    title(vel_titles(i), 'FontSize', 28);
    legend('FontSize', 28);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(["Angular Velocity"; "[deg/s]"], 'FontSize', 28);
    hold off
end

fig2 = gcf;

% Joint Torques
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on

%     plot(state_time, joint_torque1(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", tor_legends(i) + ",1}$");
%     
%     plot(state_time, joint_torque2(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", tor_legends(i) + ",2}$");
%     
%     plot(state_time, joint_torque3(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", tor_legends(i) + ",3}$");
%      
%     plot(state_time, joint_torque4(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", tor_legends(i) + ",4}$");
%     
    plot(state_time, joint_torque5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", tor_legends(i) + ",5}$");
%     
%     plot(state_time, joint_torque6(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", tor_legends(i) + ",6}$");
%     
%     plot(state_time, joint_torque7(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", tor_legends(i) + ",7}$");
% 
    plot(state_time, joint_torque8(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", tor_legends(i) + ",8}$");

%     a = plot(reference_time, joint_torque_reference(:,i), ...
%          "LineWidth", 5, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", tor_ref_legends(i));
     

    %uistack(a, "top");
    title(tor_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel("Torque [Nm]", 'FontSize', 28);
    hold off
end

fig3 = gcf;

%% Plot foot-states

% Foot-point Positions
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:3
    subplot(3, 1, i)
    hold on
    grid on
    

%     plot(state_time, foot_position1(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_pos_legends(i) + ",1}$");
%     
%     plot(state_time, foot_position2(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_pos_legends(i) + ",2}$");
%     
%     plot(state_time, foot_position3(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_pos_legends(i) + ",3}$");
% %     
%     plot(state_time, foot_position4(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_pos_legends(i) + ",4}$");
%     
    plot(state_time, foot_position5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", foot_pos_legends(i) + ",5}$");
%     
%     plot(state_time, foot_position6(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_pos_legends(i) + ",6}$");
%     
%     plot(state_time, foot_position7(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_pos_legends(i) + ",7}$");
%     
    plot(state_time, foot_position8(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", foot_pos_legends(i) + ",8}$");
    
    
    a = plot(reference_time, foot_position_reference(:,i), ...
        ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", foot_pos_ref_legends(i));
     

    uistack(a, "top");
    title(foot_pos_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(foot_pos_ylabels(i), 'FontSize', 28);
    hold off
end

fig4 = gcf;

% Foot-point Velocities
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(3, 1, i)
    hold on
    grid on
    
% 
%     plot(state_time, foot_velocity1(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",1}$");
%     
%     plot(state_time, foot_velocity2(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",2}$");
%     
%     plot(state_time, foot_velocity3(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",3}$");
    
%     plot(state_time, foot_velocity4(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",4}$");
%     
    plot(state_time, foot_velocity5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", foot_vel_legends(i) + ",5}$");
%     
%     plot(state_time, foot_velocity6(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",6}$");
%     
%     plot(state_time, foot_velocity7(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",7}$");
%     
    plot(state_time, foot_velocity8(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", foot_vel_legends(i) + ",8}$");
    
    
    a = plot(reference_time, foot_velocity_reference(:,i), ...
        ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", foot_vel_ref_legends(i));
     

    uistack(a, "top");
    title(foot_vel_titles(i), 'FontSize', 28);
    legend('FontSize', 28);
%     xlim(xlimits);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(foot_vel_ylabels(i), 'FontSize', 28);
    hold off
end

fig5 = gcf;

%% Plot 3D foot-point trajectory

% Foot-point 3D-position plot
figure('DefaultAxesFontSize',40)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

% plot3(foot_position1(:, 1), foot_position1(:, 2), foot_position1(:, 3), ...
%     "LineWidth", 5, ...
%     "DisplayName", "$\mathbf{r}_1 (t)$");
% 
% hold on
% grid on
% 
% plot3(foot_position2(:, 1), foot_position2(:, 2), foot_position2(:, 3), ...
%     "LineWidth", 5, ...
%     "DisplayName", "$\mathbf{r}_2 (t)$");
% 
% plot3(foot_position3(:, 1), foot_position3(:, 2), foot_position3(:, 3), ...
%     "LineWidth", 5, ...
%     "DisplayName", "$\mathbf{r}_3 (t)$");

% plot3(foot_position4(:, 1), foot_position4(:, 2), foot_position4(:, 3), ...
%     "LineWidth", 5, ...
%     "DisplayName", "$\mathbf{r}_4 (t)$");
% 
% hold on
% grid on
% 
plot3(foot_position5(:, 1), foot_position5(:, 2), foot_position5(:, 3), ...
    "LineWidth", 5, ...
    "DisplayName", "$\mathbf{r}_5 (t)$");
% 
% plot3(foot_position6(:, 1), foot_position6(:, 2), foot_position6(:, 3), ...
%     "LineWidth", 5, ...
%     "DisplayName", "$\mathbf{r}_6 (t)$");
% 
% plot3(foot_position7(:, 1), foot_position7(:, 2), foot_position7(:, 3), ...
%     "LineWidth", 5, ...
%     "DisplayName", "$\mathbf{r}_7 (t)$");

hold on
grid on

plot3(foot_position8(:, 1), foot_position8(:, 2), foot_position8(:, 3), ...
    "LineWidth", 5, ...
    "DisplayName", "$\mathbf{r}_8 (t)$");


a = plot3(foot_position_reference(:, 1), foot_position_reference(:, 2), foot_position_reference(:, 3), ...
    "LineWidth", 5, ...
    "LineStyle", ':', ...
    "Color", 'k', ...
    "DisplayName", "$\mathbf{r}_{ref}(t)$");

axis([-0.125 0.125 0.1 0.5 -0.36 -0.22]);
view(-57.5, 30);
xticks('auto');
yticks('auto');
uistack(a, "top");
title("\textbf{Foot-point 3D-trajectory response}", 'FontSize', 50);
legend('FontSize', 50);
xlabel(foot_pos_ylabels(1), 'FontSize', 50);
ylabel(foot_pos_ylabels(2), 'FontSize', 50);
zlabel(foot_pos_ylabels(3), 'FontSize', 50);
hold off

fig6 = gcf;



%% Save figure

filename1 = 'single_leg_joint_positions_test_case_5_8.pdf';
filename2 = 'single_leg_joint_velocities_test_case_5_8.pdf';
filename3 = 'single_leg_joint_torques_test_case_5_8.pdf';
filename4 = 'single_leg_foot_positions_test_case_5_8.pdf';
filename5 = 'single_leg_foot_velocities_test_case_5_8.pdf';
filename6 = 'single_leg_3D_trajectory_test_case_5_8.pdf';



% exportgraphics(fig1, filename1)
% exportgraphics(fig2, filename2)
% exportgraphics(fig3, filename3)
% exportgraphics(fig4, filename4)
% exportgraphics(fig5, filename5)
% exportgraphics(fig6, filename6)



