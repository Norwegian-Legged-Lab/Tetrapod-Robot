%% Setup

run("setup.m");

% Simulation results for report % Base twist 2D motion [0.5, 0.0, 0.0]
path = "~/Tetrapod-Robot/bagfiles/gait_simulation_tests/";
test_case1 = "2021-07-24-12-22-13"; % Case 1: Kp = 25, Kd = 1
test_case2 = "2021-07-24-12-28-36"; % Case 2: Kp = 50, Kd = 2
test_case3 = "2021-07-24-12-32-06"; % Case 3: Kp = 75, Kd = 3
test_case4 = "2021-07-24-12-35-13"; % Case 4: Kp = 100, Kd = 4
test_case5 = "2021-07-24-12-39-53"; % Case 5: Kp = 200, Kd = 8


number_of_motors = 12;

%% Extract ROSbag data
joint_state_bag1 = rosbag(path + "joint_state_" + test_case1 + ".bag");
joint_state_bag2 = rosbag(path + "joint_state_" + test_case2 + ".bag");
joint_state_bag3 = rosbag(path + "joint_state_" + test_case3 + ".bag");
joint_state_bag4 = rosbag(path + "joint_state_" + test_case4 + ".bag");
joint_state_bag5 = rosbag(path + "joint_state_" + test_case5 + ".bag");
joint_state_cmd_bag = rosbag(path + "joint_state_cmd_" + test_case1 + ".bag");

%% Initialize state vectors 
state_time = get_time_states(joint_state_bag1);

joint_pos_state1 = get_joint_position_states(joint_state_bag1, number_of_motors);
joint_vel_state1 = get_joint_velocity_states(joint_state_bag1, number_of_motors);
joint_tor_state1 = get_joint_effort_states(joint_state_bag1, number_of_motors);

joint_pos_state2 = get_joint_position_states(joint_state_bag2, number_of_motors);
joint_vel_state2 = get_joint_velocity_states(joint_state_bag2, number_of_motors);
joint_tor_state2 = get_joint_effort_states(joint_state_bag2, number_of_motors);

joint_pos_state3 = get_joint_position_states(joint_state_bag3, number_of_motors);
joint_vel_state3 = get_joint_velocity_states(joint_state_bag3, number_of_motors);
joint_tor_state3 = get_joint_effort_states(joint_state_bag3, number_of_motors);

joint_pos_state4 = get_joint_position_states(joint_state_bag4, number_of_motors);
joint_vel_state4 = get_joint_velocity_states(joint_state_bag4, number_of_motors);
joint_tor_state4 = get_joint_effort_states(joint_state_bag4, number_of_motors);

joint_pos_state5 = get_joint_position_states(joint_state_bag5, number_of_motors);
joint_vel_state5 = get_joint_velocity_states(joint_state_bag5, number_of_motors);
joint_tor_state5 = get_joint_effort_states(joint_state_bag5, number_of_motors);

reference_time = get_time_states(joint_state_cmd_bag);
joint_pos_reference = get_joint_position_states(joint_state_cmd_bag, number_of_motors);
joint_vel_reference = get_joint_velocity_states(joint_state_cmd_bag, number_of_motors);
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

%% Plot setup
% Limits
xlimit = [0, 1.2];
joint_pos_ylimits = {[-0.3,0.3], [-0.3,0.3], [0.05,0.35]};
joint_vel_ylimits = {[0.0,0.6], [-0.1,0.1], [-0.26,0.26]};
joint_tor_ylimits = {[-5,5], [-5,5], [-5,5]};


joint_pos_titles = ["\textbf{Front Left Hip Yaw Position response}", "\textbf{Front Left Hip Pitch Position response}", "\textbf{Front Left Knee Pitch position response}", ...
                    "\textbf{Front Right Hip Yaw Position response}", "\textbf{Front Right Hip Pitch Position response}", "\textbf{Front Right Knee Pitch position response}", ...
                    "\textbf{Rear Left Hip Yaw Position response}", "\textbf{Rear Left Hip Pitch Position response}", "\textbf{Rear Left Knee Pitch position response}", ...
                    "\textbf{Rear Right Hip Yaw Position response}", "\textbf{Rear Right Hip Pitch Position response}", "\textbf{Rear Right Knee Pitch position response}"];
                
joint_vel_titles = ["\textbf{Front Left Hip Yaw Velocity response}", "\textbf{Front Left Hip Pitch Velocity response}", "\textbf{Front Left Knee Pitch Velocity response}", ...
                    "\textbf{Front Right Hip Yaw Velocity response}", "\textbf{Front Right Hip Pitch Velocity response}", "\textbf{Front Right Knee Pitch Velocity response}", ...
                    "\textbf{Rear Left Hip Yaw Velocity response}", "\textbf{Rear Left Hip Pitch Velocity response}", "\textbf{Rear Left Knee Pitch Velocity response}", ...
                    "\textbf{Rear Right Hip Yaw Velocity response}", "\textbf{Rear Right Hip Pitch Velocity response}", "\textbf{Rear Right Knee Pitch Velocity response}"];
                
joint_tor_titles = ["\textbf{Front Left Hip Yaw Torque response}", "\textbf{Front Left Hip Pitch Torque response}", "\textbf{Front Left Knee Pitch Torque response}", ...
                    "\textbf{Front Right Hip Yaw Torque response}", "\textbf{Front Right Hip Pitch Torque response}", "\textbf{Front Right Knee Pitch Torque response}", ...
                    "\textbf{Rear Left Hip Yaw Torque response}", "\textbf{Rear Left Hip Pitch Torque response}", "\textbf{Rear Left Knee Pitch Torque response}", ...
                    "\textbf{Rear Right Hip Yaw Torque response}", "\textbf{Rear Right Hip Pitch Torque response}", "\textbf{Rear Right Knee Pitch Torque response}"];
                    



%% Plot results

% Joint positions
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 3200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    plot(state_time, 180/pi * joint_pos_state1(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\theta_{1}$");
     
    plot(state_time, 180/pi * joint_pos_state2(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\theta_{2}$");
     
    plot(state_time, 180/pi * joint_pos_state3(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\theta_{3}$");
     
    plot(state_time, 180/pi * joint_pos_state4(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\theta_{4}$"); 
     
    plot(state_time, 180/pi * joint_pos_state5(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\theta_{5}$");  
     
    a = plot(reference_time, 180/pi * joint_pos_reference(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", "$\theta_{ref}$");
     
    uistack(a, "top");
    title(joint_pos_titles(i), 'FontSize', 22);
    legend('FontSize', 20);
    xlim(xlimit);
%     ylim(joint_pos_ylimits{i});
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angle [deg]", 'FontSize', 20);
    hold off
end

fig1 = gcf;

% Joint velocities
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 3200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    plot(state_time, 180/pi * joint_vel_state1(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\omega_{1}$");
     
    plot(state_time, 180/pi * joint_vel_state2(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\omega_{2}$");
     
    plot(state_time, 180/pi * joint_vel_state3(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\omega_{3}$");
     
    plot(state_time, 180/pi * joint_vel_state4(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\omega_{4}$"); 
     
    plot(state_time, 180/pi * joint_vel_state5(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\omega_{5}$");  
     
    a = plot(reference_time, 180/pi * joint_vel_reference(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", "$\omega_{ref}$");
     
    uistack(a, "top");
    title(joint_vel_titles(i), 'FontSize', 22);
    legend('FontSize', 20);
    xlim(xlimit);
%     ylim(joint_vel_ylimits{i});
    xlabel("Time [s]", 'FontSize', 20);
    ylabel(["Angular Velocity"; "[deg/s]"], 'FontSize', 20);
    hold off
end

fig2 = gcf;

% Joint Torques
figure('DefaultAxesFontSize',28)
set(gcf, 'Position',  [100, 100, 2400, 3200])
colororder(newcolors)

for i = 1:number_of_motors
    subplot(4, 3, i)
    hold on
    grid on
    plot(state_time, joint_tor_state1(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\tau_{1}$");
     
    plot(state_time, joint_tor_state2(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\tau_{2}$");
     
    plot(state_time, joint_tor_state3(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\tau_{3}$");
     
    plot(state_time, joint_tor_state4(:,i), ...
         "LineWidth", 5, ...
         "DisplayName", "$\tau_{4}$"); 
     
%     plot(state_time, joint_tor_state5(:,i), ...
%          "LineWidth", 5, ...
%          "DisplayName", "$\tau_{5}$");  
     
    a = plot(reference_time, joint_tor_reference(:,i), ...
         "LineWidth", 5, ...
         "LineStyle", '--', ...
         "Color", 'k', ...
         "DisplayName", "$\tau_{ref}$");
     
    uistack(a, "top");
    title(joint_tor_titles(i), 'FontSize', 22);
    legend('FontSize', 20);
    xlim(xlimit);
%     ylim(joint_tor_ylimits{i});
    xlabel("Time [s]", 'FontSize', 20);
    ylabel("Angle [deg]", 'FontSize', 20);
    hold off
end

fig3 = gcf;

%% Save figure

filename1 = 'gait_simulation_all_cases_joint_pos_new_config.pdf';
filename2 = 'gait_simulation_all_cases_joint_vel_new_config.pdf';
filename3 = 'gait_simulation_all_cases_joint_tor_new_config.pdf';


% exportgraphics(fig1, filename1)
% exportgraphics(fig2, filename2)
% exportgraphics(fig3, filename3)

