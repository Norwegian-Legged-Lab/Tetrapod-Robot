function PlotGroundSlope(system, x, y, res, all_four)
%PLOTGROUNDSLOPE Summary of this function goes here
%   Detailed explanation goes here

if nargin < 2 || isempty(x)
    x = [-1, 4];
end

if nargin < 3 || isempty(y)
    y = [-1, 1];
end

if nargin < 4 || isempty(res)
    res = 0.01;
end

if nargin < 5 || isempty(all_four)
    all_four = false;
end

domains = system.Gamma.Nodes.Domain;


if all_four
    n_nodes = height(domains);
else
    n_nodes = 1;
end


n = ceil(sqrt(n_nodes));

[X, Y] = meshgrid(x(1):res:x(2), y(1):res:y(2));
gridsize = size(X);
Z = zeros(gridsize);

eval_x = zeros(18,1);

for i = 1:n_nodes
    for j = 1:gridsize(1)
        for k = 1:gridsize(2)
            eval_x(1) = X(j,k);
            eval_x(2) = Y(j,k);
            eventfuncs = struct2array(domains{i}.EventFuncs);
            Z(j,k) = -eventfuncs(1).calcConstraint(eval_x);
        end
    end
    subplot(n, n, i);
    surf(X, Y, Z);
    title(['ground based on evaluation of ', eventfuncs(1).Name]);
end

end

