function [robot] = LoadModel(urdf_file, load_path, delay_set)
%LOADMODEL Constructs RobotLinks object for robot ASTRo
%   Detailed explanation goes here

if nargin < 2
    load_path = [];
end

if nargin < 1
    cur = utils.get_root_path();
    urdf = fullfile(cur,'urdf','ASTRo.urdf');
end

if nargin < 3
    delay_set = false;
end


base = get_base_dofs('floating');

limits = base.Limit;

[limits.lower] = deal(-0.6, -0.3, 0.15, -0.1, -0.5, -0.1);
[limits.upper] = deal(1.5, 0.3, 0.35, 0.1, 0.5, 0.1);
[limits.velocity] = deal(2, 0.2, 0.5, 0.5, 0.5, 0.5);
[limits.effort] = deal(0);

for i = 1:6
    base(i).Limit = limits(i);
end

robot = ASTRoModel(urdf_file, base);

if isempty(load_path)
    configureDynamics(robot, 'DelayCoriolisSet', delay_set, 'OmitCoriolisSet', true);
else
    loadDynamics(robot, load_path, delay_set, 'OmitCoriolisSet', true);
end

end

