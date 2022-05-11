function [robot] = LoadModel(urdf_file, load_path, delay_set)
%LOADMODEL Constructs RobotLinks object for robot ASTRo
%   Detailed explanation goes here

if nargin < 2
    load_path = [];
end

if nargin < 1
    cur = utils.get_root_path();
    urdf_file = fullfile(cur,'urdf','vision60.urdf');
end

if nargin < 3
    delay_set = false;
end


base = get_base_dofs('floating');

limits = [base.Limit];

% [limits.lower] = deal(-0.7, -0.5, 0.2, -0.1, -0.3, -0.1);
% [limits.upper] = deal(0.7, 0.5, 0.4, 0.1, 0.3, 0.1);

param = sys.GetExtraParams;

base_pos_slack = 0.2;

[limits.lower] = deal(-param.hip_offset_x - base_pos_slack, param.hip_offset_y - base_pos_slack, 0.2, -0.3, -0.1, -0.3);
[limits.upper] = deal(-param.hip_offset_x + base_pos_slack, param.hip_offset_y + base_pos_slack, 0.5, 0.3, 0.1, 0.3);

[limits.velocity] = deal(4, 4, 4, 4, 4, 4);
[limits.effort] = deal(0);

for i = 1:6
    base(i).Limit = limits(i);
end

robot = vision60Model(urdf_file, base);

if isempty(load_path)
    configureDynamics(robot, 'DelayCoriolisSet', delay_set, 'OmitCoriolisSet', true);
else
    loadDynamics(robot, load_path, delay_set, {}, 'OmitCoriolisSet', true);
end

end

