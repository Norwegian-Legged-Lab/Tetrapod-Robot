%% Setup

run("setup.m");

path = "~/Tetrapod-Robot/bagfiles/ho_tests/";
%timestamp = "2021-07-15-09-54-39"; % Height test
%timestamp = "2021-07-15-10-51-57"; % Height & Orientation test
%timestamp = "2021-07-15-10-54-57"; % Height & Orientation test
timestamp = "2021-07-16-14-16-28"; % Height test


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
xlimit = [5, 25];
base_pos_ylimits = {[-0.3,0.3], [-0.3,0.3], [0.05,0.35]};
base_ori_ylimits = {[-40,40], [-10,10], [-10,10]};
base_vel_ylimits = {[-0.2,0.2], [-0.2,0.2], [-0.2,0.2]};



base_pos_legends = ["$x_{fb}$", "$y_{fb}$", "$z_{fb}$"];
base_pos_ref_legends = ["$x_{fb, ref}$", "$y_{fb, ref}$", "$z_{fb, ref}$"];
base_pos_titles = ["\textbf{Floating base $x$ position response}", "\textbf{Floating base $y$ position response}", "\textbf{Floating base $z$ position response}"];
base_pos_ylabels = ["$x$-coordinate [m]", "$y$-coordinate [m]", "$z$-coordinate [m]"];

base_ori_legends = ["$\phi$", "$\theta$", "$\psi$"];
base_ori_ref_legends = ["$\phi_{ref}$", "$\theta_{ref}$", "$\psi_{ref}$"];
base_ori_titles = ["\textbf{Floating base roll response}", "\textbf{Floating base pitch response}", "\textbf{Floating base yaw response}"];
base_ori_ylabels = ["Angle [deg]", "Angle [deg]", "Angle [deg]"];

base_vel_legends = ["$\dot{x}_{fb}$", "$\dot{y}_{fb}$", "$\dot{z}_{fb}$"];
base_vel_ref_legends = ["$\dot{x}_{fb, ref}$", "$\dot{y}_{fb, ref}$", "$\dot{z}_{fb, ref}$"];
base_vel_titles = ["\textbf{Floating base $x$ velocity response}", "\textbf{Floating base $y$ velocity response}", "\textbf{Floating base $z$ velocity response}"];
base_vel_ylabels = ["$x$-velocity [m/s]", "$y$-velocity [m/s]", "$z$-velocity [m/s]"];



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

fig2 = gcf;

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
    
    a = plot(reference_time, base_twist_cmd(:,i), ...
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

fig3 = gcf;


%% Save figure

filename1 = 'ho_height_pos.pdf';
filename2 = 'ho_height_ori.pdf';
filename3 = 'ho_height_vel.pdf';

% 
% exportgraphics(fig1, filename1)
% exportgraphics(fig2, filename2)
% exportgraphics(fig3, filename3)

