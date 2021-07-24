%% Setup

run("setup.m");

path = "~/Tetrapod-Robot/bagfiles/ho_tests/";
% timestamp = "2021-07-15-09-54-39"; % Height test
% timestamp = "2021-07-15-10-51-57"; % Height & Orientation test
% timestamp = "2021-07-15-10-54-57"; % Height & Orientation test
% timestamp = "2021-07-16-14-36-24"; % Height test
% timestamp = "2021-07-19-15-38-21"; % Orientation test used for video
% timestamp = "2021-07-19-15-58-18"; % Orientation test
% timestamp = "2021-07-19-19-11-37"; % Height and orientation test used for video
% timestamp = "2021-07-20-07-45-31"; % Height and orientation test (4xt)
% timestamp = "2021-07-20-08-07-53"; % Height, yaw, roll test (3xt)
timestamp = "2021-07-20-09-41-08"; % Height, yaw, roll test (3xt) used for video
% timestamp = "2021-07-21-15-31-44"; % Apply force test z35N
% timestamp = "2021-07-21-14-13-01"; % Apply force test z200N

% Simulation results for report % Base twist 2D motion [0.5, 0.0, 0.0]
path = "~/Tetrapod-Robot/bagfiles/gait_simulation_tests/";
timestamp = "2021-07-24-12-22-13"; % Case 1: Kp = 25, Kd = 1
timestamp = "2021-07-24-12-28-36"; % Case 2: Kp = 50, Kd = 2
timestamp = "2021-07-24-12-32-06"; % Case 3: Kp = 75, Kd = 3
timestamp = "2021-07-24-12-35-13"; % Case 4: Kp = 100, Kd = 4
timestamp = "2021-07-24-12-39-53"; % Case 5: Kp = 200, Kd = 8


%% Extract ROSbag data
base_pose_bag = rosbag(path + "base_pose_" + timestamp + ".bag");
base_pose_cmd_bag = rosbag(path + "base_pose_cmd_" + timestamp + ".bag");

base_twist_bag = rosbag(path + "base_twist_" + timestamp + ".bag");
base_twist_cmd_bag = rosbag(path + "base_twist_cmd_" + timestamp + ".bag");


%% Initialize state vectors 
state_time = get_time_states(base_pose_bag);
reference_time = get_time_states(base_pose_cmd_bag);

base_pose = get_base_pose(base_pose_bag);
base_pose_cmd = get_base_pose(base_pose_cmd_bag);

base_twist = get_base_twist(base_twist_bag);
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

%% Plot results

% Limits
xlimit = [0, 1.2];
base_pos_ylimits = {[-0.3,0.3], [-0.3,0.3], [0.05,0.35]};
base_vel_ylimits = {[-0.4,0.4], [-0.4,0.4], [-0.4,0.4]};
base_ori_ylimits = {[-40,40], [-10,10], [-20,20]};
base_ang_vel_ylimits = {[-100,100], [-100,100], [-100,100]};
base_2D_twist_ylimits = {[-1,1], [-1,1], [-100,100]};


base_pos_legends = ["$x_{fb}$", "$y_{fb}$", "$z_{fb}$"];
base_pos_ref_legends = ["$x_{fb, ref}$", "$y_{fb, ref}$", "$z_{fb, ref}$"];
base_pos_titles = ["\textbf{Floating base $x$ position response}", "\textbf{Floating base $y$ position response}", "\textbf{Floating base $z$ position response}"];
base_pos_ylabels = ["$x$-coordinate [m]", "$y$-coordinate [m]", "$z$-coordinate [m]"];

base_vel_legends = ["$\dot{x}_{fb}$", "$\dot{y}_{fb}$", "$\dot{z}_{fb}$"];
base_vel_ref_legends = ["$\dot{x}_{fb, ref}$", "$\dot{y}_{fb, ref}$", "$\dot{z}_{fb, ref}$"];
base_vel_titles = ["\textbf{Floating base $x$ velocity response}", "\textbf{Floating base $y$ velocity response}", "\textbf{Floating base $z$ velocity response}"];
base_vel_ylabels = ["$x$-velocity [m/s]", "$y$-velocity [m/s]", "$z$-velocity [m/s]"];

base_ori_legends = ["$\phi$", "$\theta$", "$\psi$"];
base_ori_ref_legends = ["$\phi_{ref}$", "$\theta_{ref}$", "$\psi_{ref}$"];
base_ori_titles = ["\textbf{Floating base roll response}", "\textbf{Floating base pitch response}", "\textbf{Floating base yaw response}"];
base_ori_ylabels = ["Angle [deg]", "Angle [deg]", "Angle [deg]"];

base_ang_vel_legends = ["$\dot{\phi}$", "$\dot{\theta}$", "$\dot{\psi}$"]; 
base_ang_vel_ref_legends = ["$\dot{\phi}_{ref}$", "$\dot{\theta}_{ref}$", "$\dot{\psi}_{ref}$"];
base_ang_vel_titles = ["\textbf{Floating base roll-rate response}", "\textbf{Floating base pitch-rate response}", "\textbf{Floating base yaw-rate response}"];
base_ang_vel_ylabels = {["Angular Velocity"; "[deg/s]"], ["Angular Velocity"; "[deg/s]"], ["Angular Velocity"; "[deg/s]"]};

base_2D_twist_legends = ["$\dot{x}_{fb}$", "$\dot{y}_{fb}$", "$\dot{\psi}$"];
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
    

    plot(state_time, base_pose(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_pos_legends(i));
    
    a = plot(reference_time, base_pose_cmd(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_pos_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_pos_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
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
    

    plot(state_time(1:length(base_twist)), base_twist(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", base_vel_legends(i));
    
    a = plot(reference_time(1:length(base_twist_cmd)), base_twist_cmd(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_vel_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_vel_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
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
    

    plot(state_time, 180/pi * base_pose(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ori_legends(i));
    
    a = plot(reference_time, 180/pi * base_pose_cmd(:,i + 3), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_ori_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_ori_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
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
    

    plot(state_time(1:length(base_twist)), 180/pi * base_twist(:,i + 3), ...
        "LineWidth", 5, ...
        "DisplayName", base_ang_vel_legends(i));
    
    a = plot(reference_time, 180/pi * base_twist_cmd(:,i + 3), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", base_ang_vel_ref_legends(i));    
   
   

    uistack(a, "top");
    title(base_ang_vel_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
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

plot(state_time(1:length(base_twist)), base_twist(:,1), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(1));
    
a = plot(reference_time(1:length(base_twist_cmd)), base_twist_cmd(:,1), ...
      "LineWidth", 5, ...
      "LineStyle", '--', ...
      "Color", 'k', ...
      "DisplayName", base_2D_twist_ref_legends(1));  
  
uistack(a, "top");
title(base_2D_twist_titles(1), 'FontSize', 32);
legend('FontSize', 28);
xlim(xlimit);
ylim(base_2D_twist_ylimits{1});
xlabel("Time [s]", 'FontSize', 28);
ylabel(base_2D_twist_ylabels{1}, 'FontSize', 28);
hold off

subplot(3, 1, 2)
hold on
grid on

plot(state_time(1:length(base_twist)), base_twist(:,2), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(2));
    
a = plot(reference_time(1:length(base_twist_cmd)), base_twist_cmd(:,2), ...
      "LineWidth", 5, ...
      "LineStyle", '--', ...
      "Color", 'k', ...
      "DisplayName", base_2D_twist_ref_legends(2));  
  
uistack(a, "top");
title(base_2D_twist_titles(2), 'FontSize', 32);
legend('FontSize', 28);
xlim(xlimit);
ylim(base_2D_twist_ylimits{2});
xlabel("Time [s]", 'FontSize', 28);
ylabel(base_2D_twist_ylabels{2}, 'FontSize', 28);
hold off

subplot(3, 1, 3)
hold on
grid on

plot(state_time(1:length(base_twist)),180/pi * base_twist(:,6), ...
     "LineWidth", 5, ...
     "DisplayName", base_2D_twist_legends(3));
    
a = plot(reference_time(1:length(base_twist_cmd)), 180/pi * base_twist_cmd(:,6), ...
      "LineWidth", 5, ...
      "LineStyle", '--', ...
      "Color", 'k', ...
      "DisplayName", base_2D_twist_ref_legends(3));  
  
uistack(a, "top");
title(base_2D_twist_titles(3), 'FontSize', 32);
legend('FontSize', 28);
xlim(xlimit);
ylim(base_2D_twist_ylimits{3});
xlabel("Time [s]", 'FontSize', 28);
ylabel(base_2D_twist_ylabels{3}, 'FontSize', 28);
hold off

fig5 = gcf;

%% Save figure

filename1 = 'ho_force_z200N_pos.pdf';
filename2 = 'ho_force_z200N_vel.pdf';
filename3 = 'ho_force_z200N_ori.pdf';
filename4 = 'ho_force_z200N_ang_vel.pdf';
filename5 = 'ho_force_z200N_2D_twist.pdf';


% exportgraphics(fig1, filename1)
% exportgraphics(fig2, filename2)
% exportgraphics(fig3, filename3)
% exportgraphics(fig4, filename4)
% exportgraphics(fig5, filename5)


%% Calculate Key Parameters

% Calculate twist command rmse
lin_twist_command_rmse = rms(base_twist_cmd(:, 1:3) - base_twist(:, 1:3))
ang_twist_command_rmse = rms(base_twist_cmd(:, 4:6)*180/pi - base_twist(:, 4:6)*180/pi)
