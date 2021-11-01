function [robot] = LoadModel(urdf_file, delay_set)
%LOADMODEL Summary of this function goes here
%   Detailed explanation goes here
base = get_base_dofs('floating');

limits = base.Limit;

[limits.lower] = deal(
end

