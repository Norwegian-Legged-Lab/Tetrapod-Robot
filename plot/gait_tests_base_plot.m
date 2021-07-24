%% Setup

run("setup.m");

% Simulation results for report % Base twist 2D motion [0.5, 0.0, 0.0]
path = "~/Tetrapod-Robot/bagfiles/gait_simulation_tests/";
test_case1 = "2021-07-24-12-22-13"; % Case 1: Kp = 25, Kd = 1
test_case2 = "2021-07-24-12-28-36"; % Case 2: Kp = 50, Kd = 2
test_case3 = "2021-07-24-12-32-06"; % Case 3: Kp = 75, Kd = 3
test_case4 = "2021-07-24-12-35-13"; % Case 4: Kp = 100, Kd = 4
test_case5 = "2021-07-24-12-39-53"; % Case 5: Kp = 200, Kd = 8


%% Extract ROSbag data
base_pose_bag1 = rosbag(path + "base_pose_" + test_case1 + ".bag");
base_pose_bag2 = rosbag(path + "base_pose_" + test_case2 + ".bag");
base_pose_bag3 = rosbag(path + "base_pose_" + test_case3 + ".bag");
base_pose_bag4 = rosbag(path + "base_pose_" + test_case4 + ".bag");
base_pose_bag5 = rosbag(path + "base_pose_" + test_case5 + ".bag");
base_pose_cmd_bag = rosbag(path + "base_pose_cmd_" + test_case1 + ".bag");

base_twist_bag1 = rosbag(path + "base_twist_" + test_case1 + ".bag");
base_twist_bag2 = rosbag(path + "base_twist_" + test_case2 + ".bag");
base_twist_bag3 = rosbag(path + "base_twist_" + test_case3 + ".bag");
base_twist_bag4 = rosbag(path + "base_twist_" + test_case4 + ".bag");
base_twist_bag5 = rosbag(path + "base_twist_" + test_case5 + ".bag");
base_twist_cmd_bag = rosbag(path + "base_twist_cmd_" + test_case1 + ".bag");


%% Initialize state vectors 
state_time = get_time_states(base_pose_bag1);
reference_time = get_time_states(base_pose_cmd_bag);

base_pose1 = get_base_pose(base_pose_bag1);
base_pose2 = get_base_pose(base_pose_bag2);
base_pose3 = get_base_pose(base_pose_bag3);
base_pose4 = get_base_pose(base_pose_bag4);
base_pose5 = get_base_pose(base_pose_bag5);
base_pose_cmd = get_base_pose(base_pose_cmd_bag);

base_twist1 = get_base_twist(base_twist_bag1);
base_twist2 = get_base_twist(base_twist_bag2);
base_twist3 = get_base_twist(base_twist_bag3);
base_twist4 = get_base_twist(base_twist_bag4);
base_twist5 = get_base_twist(base_twist_bag5);
base_twist_cmd = get_base_twist(base_twist_cmd_bag);


%% Remove time offset from the measurements so that time zero is when the first message of one time is received
time_offset = 0;

if(state_time(1, 1) < reference_time(1, 1))
    time_offset = state_time(1, 1);
else 
    time_offset = reference_time(1, 1);
end

state_time = state_time' - time_offset;

reference_time = reference_time' - time_offset;

%% Plot setup

% Limits
xlimit = [0, 1.2];
base_pos_ylimits = {[-0.3,0.3], [-0.3,0.3], [0.05,0.35]};
base_vel_ylimits = {[0.0,0.6], [-0.1,0.1], [-0.26,0.26]};
base_ori_ylimits = {[-5,5], [-5,5], [-5,5]};
base_ang_vel_ylimits = {[-70,70], [-50,40], [-5,5]};
base_2D_twist_ylimits = {[-1,1], [-1,1], [-100,100]};


base_pos_legends = ["$x_{fb", "$y_{fb", "$z_{fb"];
base_pos_ref_legends = ["$x_{fb, ref}$", "$y_{fb, ref}$", "$z_{fb, ref}$"];
base_pos_titles = ["\textbf{Floating base $x$ position response}", "\textbf{Floating base $y$ position response}", "\textbf{Floating base $z$ position response}"];
base_pos_ylabels = ["$x$-coordinate [m]", "$y$-coordinate [m]", "$z$-coordinate [m]"];

base_vel_legends = ["$\dot{x}_{fb", "$\dot{y}_{fb", "$\dot{z}_{fb"];
base_vel_ref_legends = ["$\dot{x}_{fb, ref}$", "$\dot{y}_{fb, ref}$", "$\dot{z}_{fb, ref}$"];
base_vel_titles = ["\textbf{Floating base $x$ velocity response}", "\textbf{Floating base $y$ velocity response}", "\textbf{Floating base $z$ velocity response}"];
base_vel_ylabels = ["$x$-velocity [m/s]", "$y$-velocity [m/s]", "$z$-velocity [m/s]"];

base_ori_legends = ["$\phi", "$\theta", "$\psi"];
base_ori_ref_legends = ["$\phi_{ref}$", "$\theta_{ref}$", "$\psi_{ref}$"];
base_ori_titles = ["\textbf{Floating base roll response}", "\textbf{Floating base pitch response}", "\textbf{Floating base yaw response}"];
base_ori_ylabels = ["Angle [deg]", "Angle [deg]", "Angle [deg]"];

base_ang_vel_legends = ["$\dot{\phi}", "$\dot{\theta}", "$\dot{\psi}"]; 
base_ang_vel_ref_legends = ["$\dot{\phi}_{ref}$", "$\dot{\theta}_{ref}$", "$\dot{\psi}_{ref}$"];
base_ang_vel_titles = ["\textbf{Floating base roll-rate response}", "\textbf{Floating base pitch-rate response}", "\textbf{Floating base yaw-rate response}"];
base_ang_vel_ylabels = {["Angular Velocity"; "[deg/s]"], ["Angular Velocity"; "[deg/s]"], ["Angular Velocity"; "[deg/s]"]};

base_2D_twist_legends = ["$\dot{x}_{fb,", "$\dot{y}_{fb,", "$\dot{\psi}_{"];
base_2D_twist_ref_legends = ["$\dot{x}_{fb, ref}$", "$\dot{y}_{fb, ref}$", "$\dot{\psi}_{ref}$"];
base_2D_twist_titles = ["\textbf{Floating base $x$ velocity response}", "\textbf{Floating base $y$ velocity response}", "\textbf{Floating base yaw-rate response}"];
base_2D_twist_ylabels = {"$x$-velocity [m/s]", "$y$-velocity [m/s]", ["Angular Velocity"; "[deg/s]"]};



%% Plot base states

% Floating base position
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:3
    subplot(3, 1, i)
    hold on
    grid on
    

    plot(state_time, base_pose1(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_pos_legends(i) + ",1}$");
    
    plot(state_time, base_pose2(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_pos_legends(i) + ",2}$");
    
    plot(state_time, base_pose3(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_pos_legends(i) + ",3}$");
    
    plot(state_time, base_pose4(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_pos_legends(i) + ",4}$");
    
    plot(state_time, base_pose5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_pos_legends(i) + ",5}$");
    
    a = plot(reference_time, base_pose_cmd(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_pos_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_pos_titles(i), 'FontSize', 32);
    legend('FontSize', 20);
    xlim(xlimit);
    ylim(base_pos_ylimits{i});
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(base_pos_ylabels(i), 'FontSize', 28);
    hold off
end

fig1 = gcf;

% Floating base velocity
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:3
    subplot(3, 1, i)
    hold on
    grid on
    

    plot(state_time(1:length(base_twist1)), base_twist1(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_vel_legends(i) + ",1}$");
    
    plot(state_time(1:length(base_twist2)), base_twist2(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_vel_legends(i) + ",2}$");
    
    plot(state_time(1:length(base_twist3)), base_twist3(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_vel_legends(i) + ",3}$");
    
    plot(state_time(1:length(base_twist4)), base_twist4(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_vel_legends(i) + ",4}$");
    
    plot(state_time(1:length(base_twist5)), base_twist5(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_vel_legends(i) + ",5}$");
    
    a = plot(reference_time(1:length(base_twist_cmd)), base_twist_cmd(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_vel_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_vel_titles(i), 'FontSize', 32);
    legend('FontSize', 20);
    xlim(xlimit);
    ylim(base_vel_ylimits{i});
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(base_vel_ylabels(i), 'FontSize', 28);
    hold off
end

fig2 = gcf;

% Floating base orientation
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:3
    subplot(3, 1, i)
    hold on
    grid on
    

    plot(state_time, 180/pi * base_pose1(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ori_legends(i) + "_{1}$");
    
    plot(state_time, 180/pi * base_pose2(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ori_legends(i) + "_{2}$");
    
    plot(state_time, 180/pi * base_pose3(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ori_legends(i) + "_{3}$");
    
    plot(state_time, 180/pi * base_pose4(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ori_legends(i) + "_{4}$");
    
    plot(state_time, 180/pi * base_pose5(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ori_legends(i) + "_{5}$");
    
    a = plot(reference_time, 180/pi * base_pose_cmd(:,i + 3), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_ori_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_ori_titles(i), 'FontSize', 32);
    legend('FontSize', 20);
    xlim(xlimit);
    ylim(base_ori_ylimits{i});
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(base_ori_ylabels(i), 'FontSize', 28);
    hold off
end

fig3 = gcf;

% Floating base angular rates
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:3
    subplot(3, 1, i)
    hold on
    grid on
    

    plot(state_time(1:length(base_twist1)), 180/pi * base_twist1(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ang_vel_legends(i) + "_{1}$");
    
    plot(state_time(1:length(base_twist2)), 180/pi * base_twist2(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ang_vel_legends(i) + "_{2}$");
    
    plot(state_time(1:length(base_twist3)), 180/pi * base_twist3(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ang_vel_legends(i) + "_{3}$");
    
    plot(state_time(1:length(base_twist4)), 180/pi * base_twist4(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ang_vel_legends(i) + "_{4}$");
    
    plot(state_time(1:length(base_twist5)), 180/pi * base_twist5(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ang_vel_legends(i) + "_{5}$");
    
    a = plot(reference_time, 180/pi * base_twist_cmd(:,i + 3), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_ang_vel_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_ang_vel_titles(i), 'FontSize', 32);
    legend('FontSize', 20);
    xlim(xlimit);
    ylim(base_ang_vel_ylimits{i});
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(base_ang_vel_ylabels{i}, 'FontSize', 28);
    hold off
end

fig4 = gcf;

%% 2D twist plot

% Floating base angular rates
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

subplot(3, 1, 1)
hold on
grid on

plot(state_time(1:length(base_twist1)), base_twist1(:,1), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(1) + "1}$");
 
plot(state_time(1:length(base_twist2)), base_twist2(:,1), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(1) + "2}$");
 
plot(state_time(1:length(base_twist2)), base_twist3(:,1), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(1) + "3}$");
 
plot(state_time(1:length(base_twist2)), base_twist4(:,1), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(1) + "4}$");
 
plot(state_time(1:length(base_twist2)), base_twist5(:,1), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(1) + "5}$");
    
a = plot(reference_time(1:length(base_twist_cmd)), base_twist_cmd(:,1), ...
      "LineWidth", 5, ...
      "LineStyle", '--', ...
      "Color", 'k', ...
      "DisplayName", base_2D_twist_ref_legends(1));  
  
uistack(a, "top");
title(base_2D_twist_titles(1), 'FontSize', 32);
legend('FontSize', 20);
xlim(xlimit);
ylim(base_2D_twist_ylimits{1});
xlabel("Time [s]", 'FontSize', 28);
ylabel(base_2D_twist_ylabels{1}, 'FontSize', 28);
hold off

subplot(3, 1, 2)
hold on
grid on

plot(state_time(1:length(base_twist1)), base_twist1(:,2), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(2) + "1}$");
 
plot(state_time(1:length(base_twist2)), base_twist2(:,2), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(2) + "2}$");
 
plot(state_time(1:length(base_twist2)), base_twist3(:,2), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(2) + "3}$");
 
plot(state_time(1:length(base_twist2)), base_twist4(:,2), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(2) + "4}$");
 
plot(state_time(1:length(base_twist2)), base_twist5(:,2), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(2) + "5}$");
    
a = plot(reference_time(1:length(base_twist_cmd)), base_twist_cmd(:,2), ...
      "LineWidth", 5, ...
      "LineStyle", '--', ...
      "Color", 'k', ...
      "DisplayName", base_2D_twist_ref_legends(2));  
  
uistack(a, "top");
title(base_2D_twist_titles(2), 'FontSize', 32);
legend('FontSize', 20);
xlim(xlimit);
ylim(base_2D_twist_ylimits{2});
xlabel("Time [s]", 'FontSize', 28);
ylabel(base_2D_twist_ylabels{2}, 'FontSize', 28);
hold off

subplot(3, 1, 3)
hold on
grid on

plot(state_time(1:length(base_twist1)), 180/pi * base_twist1(:,6), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(3) + "1}$");
 
plot(state_time(1:length(base_twist2)), 180/pi * base_twist2(:,6), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(3) + "2}$");
 
plot(state_time(1:length(base_twist2)), 180/pi * base_twist3(:,6), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(3) + "3}$");
 
plot(state_time(1:length(base_twist2)), 180/pi * base_twist4(:,6), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(3) + "4}$");
 
plot(state_time(1:length(base_twist2)), 180/pi * base_twist5(:,6), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(3) + "5}$");
    
a = plot(reference_time(1:length(base_twist_cmd)), 180/pi * base_twist_cmd(:,6), ...
      "LineWidth", 5, ...
      "LineStyle", '--', ...
      "Color", 'k', ...
      "DisplayName", base_2D_twist_ref_legends(3));  
  
uistack(a, "top");
title(base_2D_twist_titles(3), 'FontSize', 32);
legend('FontSize', 20);
xlim(xlimit);
ylim(base_2D_twist_ylimits{3});
xlabel("Time [s]", 'FontSize', 28);
ylabel(base_2D_twist_ylabels{3}, 'FontSize', 28);
hold off

fig5 = gcf;

%% Save figure

filename1 = 'gait_simulation_all_cases_pos.pdf';
filename2 = 'gait_simulation_all_cases_vel.pdf';
filename3 = 'gait_simulation_all_cases_ori.pdf';
filename4 = 'gait_simulation_all_cases_ang_vel.pdf';
filename5 = 'gait_simulation_all_cases_2D_twist.pdf';


% exportgraphics(fig1, filename1)
exportgraphics(fig2, filename2)
exportgraphics(fig3, filename3)
exportgraphics(fig4, filename4)
% exportgraphics(fig5, filename5)


%% Calculate Key Parameters

% Calculate twist command rmse
lin_twist_command_rmse = rms(base_twist_cmd(:, 1:3) - base_twist(:, 1:3))
ang_twist_command_rmse = rms(base_twist_cmd(:, 4:6)*180/pi - base_twist(:, 4:6)*180/pi)