function [fl, rl, fr, rr] = GetBezierControlPoints(dx, dz, z)
%GETBEZIERCONTROLPOINTS Summary of this function goes here
%   Detailed explanation goes here

vert_offset = [0; 0; -z];

fl = [...
    -dx, -dx, -dx, -dx, -dx/2, 0;
    0, 0, 0, 0, 0, 0;
    0, 0, dz/2, dz, dz, dz] + vert_offset;

rl = [...
    0, -dx/5, -2*dx/5, -3*dx/5, -4*dx/5, -dx;
    0, 0, 0, 0, 0, 0;
    0, 0, 0, 0, 0, 0] + vert_offset;

fr = [...
    dx, 4*dx/5, 3*dx/5, 2*dx/5, dx/5, 0;
    0, 0, 0, 0, 0, 0;
    0, 0, 0, 0, 0, 0] + vert_offset;

rr = [...
    0, dx/2, dx, dx, dx, dx;
    0, 0, 0, 0, 0, 0;
    dz, dz, dz, dz/2, 0, 0] + vert_offset;

end

