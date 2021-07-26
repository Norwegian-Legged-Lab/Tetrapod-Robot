close all
clear
clc

timestamp = "2021-07-11-13-25-11";

data_bag = rosbag("trajectory_" + timestamp + ".bag");

time = get_time_states(data_bag);
pos = get_joint_position_states(data_bag, 1);
vel = get_joint_velocity_states(data_bag, 1);
acc = get_joint_effort_states(data_bag, 1);

% pos(1) = 0;
% for i = 2:length(pos)
%    pos(i) = pos(i - 1) + vel(i - 1) * (time(i) - time(i - 1));
% end
time_raw = time';
time = time' - time(1, 1);

dt = (time(end) - time(1))/(length(time) - 1);

time(1) = 0;

for i = 2:length(time)
    time(i) = time(i - 1) + dt;
end

figure(1)
hold on
grid on
plot(time, pos);
legend("Pos");
hold off

figure(2)
hold on
grid on
plot(time, vel);
legend("Vel");
hold off

figure(3)
hold on
grid on
plot(time, acc);
legend("Acc");
hold off
