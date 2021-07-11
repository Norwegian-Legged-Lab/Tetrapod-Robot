%% Init

close all
clear
clc

run("setup.m");

data_path = "~/Tetrapod-Robot/data/torque-current/";

%% Load data

weight = load(data_path + "weight.txt");
current = load(data_path + "current.txt");
torque_current = load(data_path + "torque-current.txt");

%% Define parameters

g = 9.81;
arm_length = 0.93;

%% Convert weight from [g] to [kg]

weight = weight*(10^(-3));

%% Calculate torques

torque = weight * g * arm_length;

%% Interpolation

xq = torque_current(1):1.0:torque_current(end);

linCoeff = polyfit(torque_current, torque, 1);

xFit = linspace(torque_current(1), torque_current(end), 100);

yFit = polyval(linCoeff, xFit);

%% Plot
figure('DefaultAxesFontSize',40)
set(gcf, 'Position',  [100, 100, 2400, 1200])
colororder(newcolors)
hold on
grid on

plot(torque_current, torque, ...
    "LineWidth", 5, ...
    "DisplayName", "$\tau$");

plot(xFit, yFit, ...
    "LineWidth", 5, ...
    "LineStyle", "-", ...
    "DisplayName", "$\tau_{interpolated}$");

% uistack(a, "top");
title("\textbf{Torque-Current Relationship}", 'FontSize', 28);
legend('FontSize', 28);
% xlim(xlimits);
xlabel("Torque-Current", 'FontSize', 28);
ylabel("Torque [Nm]", 'FontSize', 28);
hold off

fig = gcf;

filename = 'single_motor_torque_current_relationship.pdf';

exportgraphics(fig, filename)
