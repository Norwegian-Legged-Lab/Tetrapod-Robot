%% Initial clearing
close all
clear
clc

%% Set latex interpreter
set(groot, 'defaultAxesTickLabelInterpreter','latex'); 
set(groot, 'defaultLegendInterpreter','latex');
set(groot, 'defaultTextInterpreter','latex');

%% Set colors
newcolors = [55 75 105
             250 155 40
             130 170 140
             160 205 255
             100 160 255
             0 115 115
             55 95 100];
         
newcolors = newcolors/255;

% colororder(newcolors);
% 
% %close all;
% 
% % Test palette
% % Define coordinates
% x = linspace(0,10);
% y1 = sin(x);
% y2 = sin(x-0.5);
% y3 = sin(x-1);
% y4 = sin(x-1.5);
% y5 = sin(x-2.0);
% y6 = sin(x-2.5);
% y7 = sin(x-3.0);
% 
% 
% % Plot coordinates
% plot(x,y1,'LineWidth',2)
% hold on
% plot(x,y2,'LineWidth',2)
% plot(x,y3,'LineWidth',2)
% plot(x,y4,'LineWidth',2)
% plot(x,y5,'LineWidth',2)
% plot(x,y6,'LineWidth',2)
% plot(x,y7,'LineWidth',2)
% hold off