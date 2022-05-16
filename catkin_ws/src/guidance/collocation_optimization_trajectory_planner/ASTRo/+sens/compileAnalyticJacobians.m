frost_setup;

export_path = 'gen/bmi'; % path to export compiled C++ and MEX files
utils.init_path(export_path);

cur = utils.get_root_path();
urdf = fullfile(cur, 'urdf', 'ASTRo.urdf');

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

%%
graph = system.Gamma;
n_nodes = height(graph.Nodes);

for i =1:n_nodes
    domain = graph.Nodes.Domain{i};
    sens.compileJacobiansDomain(domain);
end
