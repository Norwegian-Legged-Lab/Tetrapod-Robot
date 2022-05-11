function [p, v, a] = BezierCurve(n, cp)
%BEZIERCURVE Summary of this function goes here
%   Detailed explanation goes here

[p, v, a] = kin.EvaluateBezier(linspace(0, 1, n), cp);
end

