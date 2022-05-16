frost_setup;

export_path = 'gen/bmi'; % path to export compiled C++ and MEX files
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
% system = sys.LoadSystem(robot, load_path);
% system = sys.LoadReverseSystem(robot, load_path);

% system.compile(export_path);

param = load('local/tmp_gait.mat');

%% bmi/yalmip stuff
homestr = '/home/melyso';
addpath(genpath([homestr filesep 'yalmip']));
addpath(genpath([homestr filesep 'Penbmi2.1']));

addpath('gen/sens');
%%
gait = utils.extend_gait(param.gait);

% cp_q_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x(3:5,:), 5);
cp_q_1 = kin.bezierFit(gait(1).tspan, gait(1).states.x([3:5, 13:15, 10, 12, 7:9, 16:18],:), 5);
full_aposition_1 = reshape(cp_q_1, [], 1);

% full_aposition_1 = reshape([cp_q_1; reshape(gait(1).params.aposition, [], 6)], [], 1);

diag_stance_1_param = gait(1).params;

diag_stance_1_param.epsilon = 10;

diag_stance_1_param.aposition = full_aposition_1;

% cp_q_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x(3:5,:), 5);
% 
% full_aposition_2 = reshape([cp_q_2; reshape(gait(3).params.aposition, [], 6)], [], 1);

cp_q_2 = kin.bezierFit(gait(3).tspan, gait(3).states.x([3:5, 13:15, 16, 18, 7:9, 10:12],:), 5);
full_aposition_2 = reshape(cp_q_2, [], 1);


paral_stance_1_param = gait(3).params;

paral_stance_1_param.aposition = full_aposition_2;

paral_stance_1_param.epsilon = 10;

% cp_q_3 = kin.bezierFit(gait(5).tspan, gait(5).states.x(3:5,:), 5);
% 
% full_aposition_3 = reshape([cp_q_3; reshape(gait(5).params.aposition, [], 6)], [], 1);

cp_q_3 = kin.bezierFit(gait(5).tspan, gait(5).states.x([3:5, 7:9, 16, 18, 13:15, 10:12],:), 5);
full_aposition_3 = reshape(cp_q_3, [], 1);


diag_stance_2_param = gait(5).params;

diag_stance_2_param.aposition = full_aposition_3;

diag_stance_2_param.epsilon = 10;

% cp_q_4 = kin.bezierFit(gait(7).tspan, gait(7).states.x(3:5,:), 5);
% 
% full_aposition_4 = reshape([cp_q_4; reshape(gait(7).params.aposition, [], 6)], [], 1);

cp_q_4 = kin.bezierFit(gait(7).tspan, gait(7).states.x([3:5, 7:9, 10, 12, 13:15, 16:18],:), 5);
full_aposition_4 = reshape(cp_q_4, [], 1);


paral_stance_2_param = gait(7).params;

paral_stance_2_param.aposition = full_aposition_4;

paral_stance_2_param.epsilon = 10;

system = setVertexProperties(system, 'DiagonalStance', 'Param', diag_stance_1_param);

system = setVertexProperties(system, 'ParallelStance', 'Param', paral_stance_1_param);

system = setVertexProperties(system, 'DiagonalStance2', 'Param', diag_stance_2_param);

system = setVertexProperties(system, 'ParallelStance2', 'Param', paral_stance_2_param);

H = [zeros(11, 3), eye(11)];

diag_stance_1 = system.Gamma.Nodes.Domain{1};
diag_stance_1.PreProcess = @sim.DiagonalStancePreProcess;
diag_stance_1.VirtualConstraints.position.setSelectionMatrix(H);

paral_stance_1 = system.Gamma.Nodes.Domain{2};
paral_stance_1.PreProcess = @sim.ParallelStancePreProcess;
paral_stance_1.VirtualConstraints.position.setSelectionMatrix(H);

diag_stance_2 = system.Gamma.Nodes.Domain{3};
diag_stance_2.PreProcess = @sim.DiagonalStancePreProcess;
diag_stance_2.VirtualConstraints.position.setSelectionMatrix(H);

paral_stance_2 = system.Gamma.Nodes.Domain{4};
paral_stance_2.PreProcess = @sim.ParallelStancePreProcess;
paral_stance_2.VirtualConstraints.position.setSelectionMatrix(H);

%%

cp = cell(2,1);

cp{1} = struct();

t = gait(1).tspan;
x = [gait(1).states.x; gait(1).states.dx];

cp{1}.points = kin.bezierFit(t, x, 5);
cp{1}.ts = [t(1), t(end)];

cp{2} = struct();

t = gait(3).tspan;
x = [gait(3).states.x; gait(3).states.dx];

cp{2}.points = kin.bezierFit(t, x, 5);
cp{2}.ts = [t(1), t(end)];
%%
x0 = [gait(1).states.x(:,1); gait(1).states.dx(:,1)];


n_x = numel(x0);

n_theta = 2*numel(H);

% n_dtheta = 2*14*11;
n_dtheta = 2*3*11;

theta_idx = [1:n_dtheta/2, (numel(H)+1):(numel(H)+n_dtheta/2)];
% theta_idx = [1:(3*11), (numel(H)+1):(numel(H)+3*11)];


intermediaryJacobians = sens.getIntermediaryJacobians(system);

H = [zeros(11,3),eye(11)];
theta_0 = [reshape(H, [], 1); reshape(H,[],1)];

phi = sens.calcFlowJacobianVariation(x0, system, intermediaryJacobians, cp, theta_0);
% phi = sens.calcFlowJacobian(x0, system, theta_0);


tic
dphidtheta = sens.findiff(@(z) reshape(sens.calcFlowJacobianVariation(x0, system, intermediaryJacobians, cp, z), [], 1), theta_0, theta_idx);
toc
% tic
% dphidtheta = sens.findiff(@(z) reshape(sens.calcFlowJacobian(x0, system, z), [], 1), theta_0, theta_idx);
% toc


% param2 = load('local/dphidtheta.mat');
% dphidtheta = param2.dphidtheta;
%
% tic
% dphidtheta2 = sens.findiff(@(z) reshape(sens.calcFlowJacobian(x0, system, z), [], 1), theta_0);
% toc
%%
x_idx= [3:6, 7:18];

n_x_reduced = length(x_idx) + n_x/2;

dsdx = full(intermediaryJacobians{2}.J_s.calcJacobian(gait(3).states.x(:,end), gait(3).states.dx(:,end)));

I = eye(36);
% L = null([dsdx; I(1:2,:); I(6,:); I(19:20,:); I(24,:)]);
% L = null([dsdx; I(1:2,:); I(6,:)]); %consider derivative of x, y, yaw
L = null([dsdx; I(1:2,:)]); %consider derivative of x, y, yaw, as well as consider yaw

P = L';

dphi_interface = sens.JacobianInterface([], '');
dphi_interface.setValue(dphidtheta, [n_x, n_x]);
dphidtheta_cell = dphi_interface.getCellMat();
%%


A_i = cell(n_dtheta, 1);

A_0 = P*phi*L;

A0_max_eig = max(abs(eig(A_0)));

norms_A0 = A0_max_eig;
delta_thetas = 0;
times = 0;


iter = 1;
latest_time = nan;

lambda_w = 0.8;
threshold = 1;

w0 = 0.8;
w = w0;
ws = w0;

hold off;
subplot(2,2,1);
plot(norms_A0);
hold on;
plot(ones(size(norms_A0)), '--', 'Color', 'y')
plot(0.85*ones(size(norms_A0)), '--', 'Color', 'g')
title('Spectral radius')
subplot(2,2,2);
plot(times);
title('time per iteration [s]');
subplot(2,2,3)
plot(delta_thetas);
title('||\delta\theta||_2')
xlabel('#iterations');
subplot(2,2,4)
plot(w0*ones(size(ws)), '--', 'Color', 'g');
plot(ws);
title('Magnitue of weighting parameter w')
drawnow;
thetas = theta_0;


%%
outermost_tic = tic;

while A0_max_eig >= 0.80
outerTemp = tic;
for i = 1:n_dtheta
    A_i{i} = P*dphidtheta_cell{i}*L;
end
% Formulate BMI problem

n_W = n_x_reduced - 1;

yalmip('clear');

theta = sdpvar(n_dtheta, 1);

W = sdpvar(n_W, n_W);

mu = sdpvar(1, 1);
% gamma = sdpvar(1, 1);


obj = w*((mu - 1)^2) + theta'*theta;



M12 = A_0;

for i = 1:n_dtheta
    M12 = M12 + A_i{i}*theta(i);
end

M12 = M12*W;

M = [W, M12;
    M12', (1 - mu)*W];
% N = [eye(n_dtheta), theta;
%     theta', gamma];

constr = [M >= 0, mu >= 1e-4];
% solve problem
opts = sdpsettings('solver', 'penbmi', 'penbmi.NWT_SYS_MODE', 0, 'penbmi.PREC_TYPE', 0, 'penbmi.DENSE', 0, 'penbmi.PRECISION', 1e-4, 'penbmi.PRECISION_2', 1e-2);%, 'penbmi.NWT_SYS_MODE', 2)
sol = optimize(constr, obj, opts);

delta_theta = value(theta);
new_theta = theta_0;
new_theta(theta_idx) = new_theta(theta_idx) + delta_theta;

phi = sens.calcFlowJacobianVariation(x0, system, intermediaryJacobians, cp, new_theta);
% phi = sens.calcFlowJacobian(x0, system, new_theta);

new_A0 = P*phi*L;
if max(abs(eig(new_A0))) >= threshold*A0_max_eig
    %try again with smaller w (penalizes big delta xi more)
    w = min(lambda_w*w, w0);
    continue;
end

ws = [ws, w];

if max(abs(eig(new_A0))) < A0_max_eig/threshold
    w = w/lambda_w;
end


theta_0 = new_theta;
thetas = [thetas, theta_0];

A_0 = new_A0;
A0_max_eig = max(abs(eig(A_0)));
norms_A0 = [norms_A0, A0_max_eig];

delta_thetas = [delta_thetas, norm(delta_theta)];
latest_time = toc(outerTemp);
times = [times, latest_time];

hold off;
subplot(2,2,1);
plot(norms_A0);
hold on;
plot(ones(size(norms_A0)), '--', 'Color', 'y')
plot(0.80*ones(size(norms_A0)), '--', 'Color', 'g')
title('Spectral radius')
subplot(2,2,2);
plot(times);
title('time per iteration [s]');
subplot(2,2,3)
plot(delta_thetas);
title('||\delta\theta||_2')
xlabel('#iterations');
subplot(2,2,4)
plot(w0*ones(size(ws)), '--', 'Color', 'g');
plot(ws);
title('Magnitue of weighting parameter w')
drawnow;
thetas = theta_0;

innerTemp = tic;
dphidtheta = sens.findiff(@(z) reshape(sens.calcFlowJacobianVariation(x0, system, intermediaryJacobians, cp, z), [], 1), theta_0, theta_idx);
% dphidtheta = sens.findiff(@(z) reshape(sens.calcFlowJacobian(x0, system, z), [], 1), theta_0, theta_idx);
toc(innerTemp)
%
dphi_interface.setValue(dphidtheta, [n_x, n_x]);
dphidtheta_cell = dphi_interface.getCellMat();
%

A_i = cell(n_dtheta, 1);

%A_0 = P*phi([x_idx, n_x/2 + x_idx], [x_idx, n_x/2 + x_idx])*L;

iter = iter + 1;
end

final_time = toc(outermost_tic);

%%
system.Gamma.Nodes.Domain{1}.VirtualConstraints.position.setSelectionMatrix(H);
system.Gamma.Nodes.Domain{2}.VirtualConstraints.position.setSelectionMatrix(H);
system.Gamma.Nodes.Domain{3}.VirtualConstraints.position.setSelectionMatrix(H);
system.Gamma.Nodes.Domain{4}.VirtualConstraints.position.setSelectionMatrix(H);

H1 = reshape(theta_0(1:n_theta/2), 11, 14);
H2 = reshape(theta_0(n_theta/2+1:end), 11, 14);
S_y_1 = [zeros(6,5), eye(6); eye(5), zeros(5,6)];
S_y_2 = [eye(3), zeros(3,11); zeros(5,3), zeros(5,6), eye(5); zeros(6,3), eye(6), zeros(6,5)];
S_y_1 = diag([-1, 1, 1, -1, 1, -1, 1, 1, -1, 1, 1]);
% H3 = S_y_1*H1*S_y_2;
% H4 = S_y_1'*H2*S_y_2';

H3 = S_y_1*H1;
H4 = S_y_1*H2;

H3(:,1:3) = S_y_1*H1(:,1:3);
H4(:,1:3) = S_y_1*H2(:,1:3);

H3(:,2) = -H3(:,2);
H4(:,2) = -H4(:,2);

system.Gamma.Nodes.Domain{1}.VirtualConstraints.position.setSelectionMatrix(H1);
system.Gamma.Nodes.Domain{2}.VirtualConstraints.position.setSelectionMatrix(H2);
system.Gamma.Nodes.Domain{3}.VirtualConstraints.position.setSelectionMatrix(H3);
system.Gamma.Nodes.Domain{4}.VirtualConstraints.position.setSelectionMatrix(H4);
%%
logger = system.simulate(0, x0, [], [], 'NumCycle', 500);

%% Animation

anim = plot.LoadSimAnimator(robot, logger, 'SkipExporting',true, 'UseExported', false);

%% you can also plot the states and torques
plot.plotSimStates(system,logger);
plot.plotSimTorques(system,logger);

%%
plot.plotSimPhasePortraits(system, logger(13:end));