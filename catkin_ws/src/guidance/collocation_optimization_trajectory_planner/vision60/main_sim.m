frost_setup;

export_path = 'gen/sim'; % path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = utils.get_root_path();
urdf = fullfile(cur, 'urdf', 'vision60.urdf');

% Computation of Coriolis vector will be delayed if true
delay_set = true;

load_sym = false;

if load_sym
    load_path = 'gen/sym';
else
    load_path = [];
end

robot = sys.LoadModel(urdf, load_path, delay_set);

system = sys.LoadBMISystem(robot, load_path);

% system.compile(export_path);

param = load('local/0_2_m_s_opt_gait.mat');
theta_param = load('local/BMI_results_0_2_m_s_3.mat');

H = [zeros(11,3), eye(11)];

%% Test on full 4-domain system

gait = utils.extend_gait(param.gait);

cp_q_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x([4:6, 13:15, 10, 12, 7:9, 16:18],:), 5);
full_aposition_1 = reshape(cp_q_1, [], 1);

% cp_q_opt_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x(3:5,:), 5);
% 
% full_aposition_1 = reshape([cp_q_opt_1; reshape(gait(1).params.aposition, [], 6)], [], 1);

diag_stance_1_param = gait(1).params;

diag_stance_1_param.epsilon = 10;

diag_stance_1_param.aposition = full_aposition_1;

% cp_q_opt_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x(3:5,:), 5);
% 
% full_aposition_2 = reshape([cp_q_opt_2; reshape(gait(3).params.aposition, [], 6)], [], 1);

cp_q_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x([4:6, 13:15, 16, 18, 7:9, 10:12],:), 5);
full_aposition_2 = reshape(cp_q_2, [], 1);


paral_stance_1_param = gait(3).params;

paral_stance_1_param.aposition = full_aposition_2;

paral_stance_1_param.epsilon = 10;

% cp_q_opt_3 = kin.bezierFit(gait(5).tspan, gait(5).states.x(3:5,:), 5);
% 
% full_aposition_3 = reshape([cp_q_opt_3; reshape(gait(5).params.aposition, [], 6)], [], 1);

cp_q_3 = kin.bezierFit(gait(5).tspan, gait(5).states.x([4:6, 7:9, 16, 18, 13:15, 10:12],:), 5);
full_aposition_3 = reshape(cp_q_3, [], 1);


diag_stance_2_param = gait(5).params;

diag_stance_2_param.aposition = full_aposition_3;

diag_stance_2_param.epsilon = 10;

% cp_q_opt_4 = kin.bezierFit(gait(7).tspan, gait(7).states.x(3:5,:), 5);
% 
% full_aposition_4 = reshape([cp_q_opt_4; reshape(gait(7).params.aposition, [], 6)], [], 1);

cp_q_4 = kin.bezierFit(gait(7).tspan, gait(7).states.x([4:6, 7:9, 10, 12, 13:15, 16:18],:), 5);
full_aposition_4 = reshape(cp_q_4, [], 1);


paral_stance_2_param = gait(7).params;

paral_stance_2_param.aposition = full_aposition_4;

paral_stance_2_param.epsilon = 10;

system = setVertexProperties(system, 'DiagonalStance', 'Param', diag_stance_1_param);

system = setVertexProperties(system, 'ParallelStance', 'Param', paral_stance_1_param);

system = setVertexProperties(system, 'DiagonalStance2', 'Param', diag_stance_2_param);

system = setVertexProperties(system, 'ParallelStance2', 'Param', paral_stance_2_param);

diag_stance_1 = system.Gamma.Nodes.Domain{1};
diag_stance_1.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance_1 = system.Gamma.Nodes.Domain{2};
paral_stance_1.PreProcess = @sim.ParallelStancePreProcess;

diag_stance_2 = system.Gamma.Nodes.Domain{3};
diag_stance_2.PreProcess = @sim.DiagonalStancePreProcess;

paral_stance_2 = system.Gamma.Nodes.Domain{4};
paral_stance_2.PreProcess = @sim.ParallelStancePreProcess;


%%

system.Gamma.Nodes.Domain{1}.VirtualConstraints.position.setSelectionMatrix(H);
system.Gamma.Nodes.Domain{2}.VirtualConstraints.position.setSelectionMatrix(H);
system.Gamma.Nodes.Domain{3}.VirtualConstraints.position.setSelectionMatrix(H);
system.Gamma.Nodes.Domain{4}.VirtualConstraints.position.setSelectionMatrix(H);

theta_opt = theta_param.thetas(:,end);
n_theta = length(theta_opt);

H1 = reshape(theta_opt(1:n_theta/2), 11, 14);
H2 = reshape(theta_opt(n_theta/2+1:end), 11, 14);

S_y = diag([-1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, -1, 1, 1]);
H3 = H1*S_y;
H4 = H2*S_y;

system.Gamma.Nodes.Domain{1}.VirtualConstraints.position.setSelectionMatrix(H1);
system.Gamma.Nodes.Domain{2}.VirtualConstraints.position.setSelectionMatrix(H2);
system.Gamma.Nodes.Domain{3}.VirtualConstraints.position.setSelectionMatrix(H3);
system.Gamma.Nodes.Domain{4}.VirtualConstraints.position.setSelectionMatrix(H4);
%%
x0 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];

logger = system.simulate(0, x0, [], [], 'NumCycle', 100);

%% Animation

anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true, 'UseExported', false);

%% you can also plot the states and torques
plot.plotSimStates(system,logger);
plot.plotSimTorques(system,logger);
