close all
clear
clc

%% Extract ROSbag data
reference_position_bag = rosbag('2021-04-26-14-46-51.bag');
reference_velocity_bag = rosbag('2021-04-26-14-46-51.bag');
system_bag = rosbag('2021-04-26-14-46-51.bag');

%% Initialize state vectors 
reference_position = get_joint_position_states(reference_position_bag);
reference_velocity = get_joint_velocity_states(reference_velocity_bag);

system_position = get_joint_position_states(system_bag);
system_velocity = get_joint_velocity_states(system_bag);

%% Remove time offset from the measurements so that time zero is when the first message of one time is received
time_offset = 0;
if((reference_position(1, 1) < reference_velocity(1, 1)) && (reference_position(1, 1) < system_position(1, 1)))
    time_offset = reference_position(1, 1);
elseif(reference_velocity(1, 1) < system_position(1, 1))
    time_offset = reference_velocity(1, 1);
else
    time_offset = system_position(1, 1);
end

reference_position(1, :) = reference_position(1, :) - time_offset;
reference_velocity(1, :) = reference_velocity(1, :) - time_offset;
system_position(1, :) = system_position(1, :) - time_offset;
system_velocity(1, :) = system_velocity(1, :) - time_offset;

%% Convert from rad to deg
reference_position(2:4, :) = reference_position(2:4, :)*180.0/pi;
reference_velocity(2:4, :) = reference_velocity(2:4, :)*180.0/pi;
system_position(2:4, :) = system_position(2:4, :)*180.0/pi;
system_velocity(2:4, :) = system_velocity(2:4, :)*180.0/pi;

%% Plot results

% Joint positions
figure(1)

subplot(3, 1, 1)
hold on 
grid on
plot(reference_position(1, :)', reference_position(2, :)');
plot(system_position(1, :)', system_position(2, :)');
legend("\theta_{hy, ref}", "\theta_{hy}");
%xlabel("time [s]");
%ylabel("angle [deg]");
hold off

subplot(3, 1, 2)
hold on 
grid on
plot(reference_position(1, :)', reference_position(3, :)');
plot(system_position(1, :)', system_position(3, :)');
legend("\theta_{hp, ref}", "\theta_{hp}");
%xlabel("time [s]");
ylabel("angle [deg]");
hold off

subplot(3, 1, 3)
hold on 
grid on
plot(reference_position(1, :)', reference_position(4, :)');
plot(system_position(1, :)', system_position(4, :)');
legend("\theta_{kp, ref}", "\theta_{kp}");
xlabel("time [s]");
%ylabel("angle [deg]");
hold off

% Joint velocities
figure(2)

subplot(3, 1, 1)
hold on 
grid on
plot(reference_position(1, :)', reference_position(2, :)');
plot(system_position(1, :)', system_position(2, :)');
legend("\omega_{hy, ref}", "\omega_{hy}");
%xlabel("time [s]");
%ylabel("angular rate [deg/s]");
hold off

subplot(3, 1, 2)
hold on 
grid on
plot(reference_position(1, :)', reference_position(3, :)');
plot(system_position(1, :)', system_position(3, :)');
legend("\omega_{hp, ref}", "\omega_{hp}");
%xlabel("time [s]");
ylabel("angular rate [deg/s]");
hold off

subplot(3, 1, 3)
hold on 
grid on
plot(reference_position(1, :)', reference_position(4, :)');
plot(system_position(1, :)', system_position(4, :)');
legend("\omega_{kp, ref}", "\omega_{kp}");
xlabel("time [s]");
%ylabel("angular rate [deg/s]");
hold off


















