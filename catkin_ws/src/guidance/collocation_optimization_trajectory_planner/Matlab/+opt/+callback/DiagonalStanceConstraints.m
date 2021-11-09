function DiagonalStanceConstraints(nlp, bounds, varargin)
%DIAGONALSTANCECONSTRAINTS Summary of this function goes here
%   Detailed explanation goes here
domain = nlp.Plant;

ip = inputParser;

ip.addParameter('LoadPath', [], @ischar);
ip.parse(varargin{:});

end

