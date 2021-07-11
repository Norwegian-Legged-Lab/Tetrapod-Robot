%% Setup

run("setup.m");

path = "~/Tetrapod-Robot/catkin_ws/src/utilities/log_utils/bagfiles/";
timestamp = "2021-07-11-17-23-56";

%% Extract ROSbag data
base_pose_bag = rosbag(path + "base_pose_" + timestamp + ".bag");

%% Initialize state vectors 
state_time = get_time_states(base_pose_bag);

base_pose = get_base_pose(base_pose_bag);

%% Remove time offset from the measurements so that time zero is when the first message of one time is received
time_offset = state_time(1,1);

state_time = state_time' - time_offset;

%% Plot results

% Limits
xlimits = [];
foot_pos_legends = ["$x_{e", "$y_{e", "$z_{e"];
foot_pos_ref_legends = ["$x_{e, ref}$", "$y_{e, ref}$", "$z_{e, ref}$"];
foot_pos_titles = ["\textbf{Foot-point $x$ response}", "\textbf{Foot-point $y$ response}", "\textbf{Foot-point $z$ response}"];
foot_pos_ylabels = ["$x$-coordinate [m]", "$y$-coordinate [m]", "$z$-coordinate [m]"];

foot_vel_legends = ["$\dot{x}_{e", "$\dot{y}_{e", "$\dot{z}_{e"];
foot_vel_ref_legends = ["$\dot{x}_{e, ref}$", "$\dot{y}_{e, ref}$", "$\dot{z}_{e, ref}$"];
foot_vel_titles = ["\textbf{Foot-point $\dot{x}$ response}", "\textbf{Foot-point $\dot{y}$ response}", "\textbf{Foot-point $\dot{z}$ response}"];
foot_vel_ylabels = ["$x$-velocity [m/s]", "$y$-velocity [m/s]", "$z$-velocity [m/s]"];

%% Plot base states

% Foot-point Positions
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:3
    subplot(3, 1, i)
    hold on
    grid on
    

    plot(state_time, base_pose(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", foot_pos_legends(i) + ",1}$");
   
    
%     a = plot(reference_time, foot_position_reference(:,i), ...
%         ...
%          "LineWidth", 5, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", foot_pos_ref_legends(i));
%      

%     uistack(a, "top");
    title(foot_pos_titles(i), 'FontSize', 32);
    legend('FontSize', 28);
%     xlim(xlimits);
    ylim([-0.2,0.3]);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(foot_pos_ylabels(i), 'FontSize', 28);
    hold off
end

fig4 = gcf;

% Foot-point Velocities
% figure('DefaultAxesFontSize',28)
% set(gcf, 'Position',  [100, 100, 2400, 1200])
% colororder(newcolors)
% 
% for i = 1:number_of_motors
%     subplot(3, 1, i)
%     hold on
%     grid on
%     
% 
%     plot(state_time, foot_velocity1(:,i), ...
%         "LineWidth", 5, ...
%         "DisplayName", foot_vel_legends(i) + ",1}$");
%     
%    
%     a = plot(reference_time, foot_velocity_reference(:,i), ...
%         ...
%          "LineWidth", 5, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", foot_vel_ref_legends(i));
     

%     uistack(a, "top");
%     title(foot_vel_titles(i), 'FontSize', 28);
%     legend('FontSize', 28);
%     xlim(xlimits);
%     xlabel("Time [s]", 'FontSize', 28);
%     ylabel(foot_vel_ylabels(i), 'FontSize', 28);
%     hold off
% end

% fig5 = gcf;

%% Plot 3D foot-point trajectory

% Foot-point 3D-position plot
figure('DefaultAxesFontSize',40)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

plot3(base_pose(:, 1), base_pose(:, 2), base_pose(:, 3), ...
    "LineWidth", 5, ...
    "DisplayName", "$\mathbf{r}_1 (t)$");

hold on
grid on

% a = plot3(foot_position_reference(:, 1), foot_position_reference(:, 2), foot_position_reference(:, 3), ...
%     "LineWidth", 5, ...
%     "LineStyle", ':', ...
%     "Color", 'k', ...
%     "DisplayName", "$\mathbf{r}_{ref}(t)$");

a = plot3(0,0,0.3, ...
        "Marker", 'o', ...
        "MarkerEdgeColor",'k',...
        "MarkerFaceColor",'k',...
        "MarkerSize", 24, ...
        "DisplayName", "$\mathbf{r}_{ref}(t)$");


axis([-0.5 0.5 -0.5 0.5 0.1 0.35]);
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

% exportgraphics(fig1, filename1)
