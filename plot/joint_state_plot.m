%% Setup

run("setup.m");

path = "~/Tetrapod-Robot/bagfiles/ho_tests/";
%timestamp = "2021-07-15-09-54-39"; % Height test
%timestamp = "2021-07-15-10-51-57"; % Height & Orientation test
%timestamp = "2021-07-15-10-54-57"; % Height & Orientation test
% timestamp = "2021-07-16-14-36-24"; % Height test
% timestamp = "2021-07-19-15-38-21"; % Orientation test
% timestamp = "2021-07-19-15-58-18"; % Orientation test
timestamp = "2021-07-19-19-11-37"; % Height and orientation test


number_of_motors = 12;

%% Extract ROSbag data

joint_state_bag = rosbag(path + "joint_state_" + timestamp + ".bag");
joint_state_cmd_bag = rosbag(path + "joint_state_cmd_" + timestamp + ".bag");

%% Initialize state vectors 
state_time = get_time_states(joint_state_bag);
reference_time = get_time_states(joint_state_cmd_bag);

joint_pos_state = get_joint_position_states(joint_state_bag, number_of_motors);
joint_vel_state = get_joint_velocity_states(joint_state_bag, number_of_motors);
joint_tor_state = get_joint_effort_states(joint_state_bag, number_of_motors);


%joint_pos_reference = get_joint_position_states(joint_state_cmd_bag, number_of_motors);
%joint_vel_reference = get_joint_velocity_states(joint_state_cmd_bag, number_of_motors);
joint_tor_reference = get_joint_effort_states(joint_state_cmd_bag, number_of_motors);

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

pos_legends = ["$\theta_{h,y,fl}$", "$\theta_{h,p,fl}$", "$\theta_{k,p,fl}$" ...
               "$\theta_{h,y,fr}$", "$\theta_{h,p,fr}$", "$\theta_{k,p,fr}$" ...
               "$\theta_{h,y,rl}$", "$\theta_{h,p,rl}$", "$\theta_{k,p,rl}$" ...
               "$\theta_{h,y,rr}$", "$\theta_{h,p,rr}$", "$\theta_{k,p,rr}$"];
pos__ref_legends = ["$\theta_{h,y,fl,ref}$", "$\theta_{h,p,fl,ref}$", "$\theta_{k,p,fl,ref}$" ...
                    "$\theta_{h,y,fr,ref}$", "$\theta_{h,p,fr,ref}$", "$\theta_{k,p,fr,ref}$" ...
                    "$\theta_{h,y,rl,ref}$", "$\theta_{h,p,rl,ref}$", "$\theta_{k,p,rl,ref}$" ...
                    "$\theta_{h,y,rr,ref}$", "$\theta_{h,p,rr,ref}$", "$\theta_{k,p,rr,ref}$"];
pos_titles = ["\textbf{Hip Yaw Position response}", "\textbf{Hip Pitch Position response}", "\textbf{Knee Pitch Position response}"];

vel_legends = ["$\omega_{h,y,fl}$", "$\omega_{h,p,fl}$", "$\omega_{k,p,fl}$" ...
               "$\omega_{h,y,fr}$", "$\omega_{h,p,fr}$", "$\omega_{k,p,fr}$" ...
               "$\omega_{h,y,rl}$", "$\omega_{h,p,rl}$", "$\omega_{k,p,rl}$" ...
               "$\omega_{h,y,rr}$", "$\omega_{h,p,rr}$", "$\omega_{k,p,rr}$"];
vel__ref_legends = ["$\omega_{h,y,fl,ref}$", "$\omega_{h,p,fl,ref}$", "$\omega_{k,p,fl,ref}$" ...
                    "$\omega_{h,y,fr,ref}$", "$\omega_{h,p,fr,ref}$", "$\omega_{k,p,fr,ref}$" ...
                    "$\omega_{h,y,rl,ref}$", "$\omega_{h,p,rl,ref}$", "$\omega_{k,p,rl,ref}$" ...
                    "$\omega_{h,y,rr,ref}$", "$\omega_{h,p,rr,ref}$", "$\omega_{k,p,rr,ref}$"];
vel_titles = ["\textbf{Hip Yaw Velocity response}", "\textbf{Hip Pitch Velocity response}", "\textbf{Knee Pitch Velocity response}"];

tor_legends = ["$\tau_{h,y,fl}$", "$\tau_{h,p,fl}$", "$\tau_{k,p,fl}$" ...
               "$\tau_{h,y,fr}$", "$\tau_{h,p,fr}$", "$\tau_{k,p,fr}$" ...
               "$\tau_{h,y,rl}$", "$\tau_{h,p,rl}$", "$\tau_{k,p,rl}$" ...
               "$\tau_{h,y,rr}$", "$\tau_{h,p,rr}$", "$\tau_{k,p,rr}$"];
tor_ref_legends = ["$\tau_{h,y,fl,ref}$", "$\tau_{h,p,fl,ref}$", "$\tau_{k,p,fl,ref}$" ...
                    "$\tau_{h,y,fr,ref}$", "$\tau_{h,p,fr,ref}$", "$\tau_{k,p,fr,ref}$" ...
                    "$\tau_{h,y,rl,ref}$", "$\tau_{h,p,rl,ref}$", "$\tau_{k,p,rl,ref}$" ...
                    "$\tau_{h,y,rr,ref}$", "$\tau_{h,p,rr,ref}$", "$\tau_{k,p,rr,ref}$"];
tor_titles = ["\textbf{Hip Yaw Torque response}", "\textbf{Hip Pitch Torque response}", "\textbf{Knee Pitch Torque response}"];


%% Plot joint states

% Joint position
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    if mod(i,3) == 1
        subplot(3, 1, 1)
        title(pos_titles(1), 'FontSize', 28);
    elseif mod(i,3) == 2
        subplot(3, 1, 2)
        title(pos_titles(2), 'FontSize', 28);
    elseif mod(i,3) == 0
        subplot(3, 1, 3)
        title(pos_titles(3), 'FontSize', 28);        
    end
    hold on
    grid on
    
    plot(state_time, 180/pi * joint_pos_state(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", pos_legends(i));    
    
%     a = plot(reference_time, 180/pi * joint_pos_reference(:,i), ...
%         ...
%          "LineWidth", 5, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", pos_ref_legends(i));
     

%     uistack(a, "top");
    legend('FontSize', 28);
    xlim(xlimit);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel("Angle [deg]", 'FontSize', 28);
    hold off
end

fig1 = gcf;

% Joint velocity
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    if mod(i,3) == 1
        subplot(3, 1, 1)
        title(vel_titles(1), 'FontSize', 28);
    elseif mod(i,3) == 2
        subplot(3, 1, 2)
        title(vel_titles(2), 'FontSize', 28);
    elseif mod(i,3) == 0
        subplot(3, 1, 3)
        title(vel_titles(3), 'FontSize', 28);        
    end
    hold on
    grid on
    
    plot(state_time, 180/pi * joint_vel_state(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", vel_legends(i));    
    
%     a = plot(reference_time, 180/pi * joint_vel_reference(:,i), ...
%         ...
%          "LineWidth", 5, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", vel_ref_legends(i));
     

%     uistack(a, "top");
    legend('FontSize', 28);
    xlim(xlimit);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel(["Angular Velocity"; "[deg/s]"], 'FontSize', 28);
    hold off
end

fig2 = gcf;

% Joint torque
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)

for i = 1:number_of_motors
    if mod(i,3) == 1
        subplot(3, 1, 1)
        title(tor_titles(1), 'FontSize', 28);
    elseif mod(i,3) == 2
        subplot(3, 1, 2)
        title(tor_titles(2), 'FontSize', 28);
    elseif mod(i,3) == 0
        subplot(3, 1, 3)
        title(tor_titles(3), 'FontSize', 28);        
    end
    hold on
    grid on
    
    plot(state_time, joint_tor_state(:,i), ...
        "LineWidth", 5, ...
        "DisplayName", tor_legends(i));    
    
%     a = plot(reference_time, joint_tor_reference(:,i), ...
%         ...
%          "LineWidth", 5, ...
%          "LineStyle", '--', ...
%          "Color", 'k', ...
%          "DisplayName", tor_ref_legends(i));
     

%     uistack(a, "top");
    legend('FontSize', 28);
    xlim(xlimit);
    xlabel("Time [s]", 'FontSize', 28);
    ylabel("Torque [Nm]", 'FontSize', 28);
    hold off
end

fig3 = gcf;

%% Save figure

% filename1 = 'single_leg_joint_positions_test_case_5_8.pdf';
% filename2 = 'ho_roll_joint_vel.pdf';
filename3 = 'ho_height_and_roll_tor.pdf';

% exportgraphics(fig1, filename1)
% exportgraphics(fig2, filename2)
exportgraphics(fig3, filename3)
