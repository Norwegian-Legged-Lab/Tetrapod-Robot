
function compileAnalyticJacobians(system, export_path)

if nargin < 2
    export_path = 'gen/sens'; % path to export compiled C++ and MEX files
end

utils.init_path(export_path);

graph = system.Gamma;
n_nodes = height(graph.Nodes);

for i =1:n_nodes
    domain = graph.Nodes.Domain{i};
    sens.compileJacobiansDomain(domain, export_path);
end
end