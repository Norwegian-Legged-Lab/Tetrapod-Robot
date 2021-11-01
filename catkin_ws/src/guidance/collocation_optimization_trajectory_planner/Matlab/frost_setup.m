%% Setting up path
clear; close all; clc;
restoredefaultpath; matlabrc;

% specify the path to the FROST
frost_path  = '/home/melyso/frost-dev';
addpath(frost_path);
frost_addpath; % initialize FROST