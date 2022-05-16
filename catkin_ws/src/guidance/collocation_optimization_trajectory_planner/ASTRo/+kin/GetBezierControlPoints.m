function [fl, rl, fr, rr] = GetBezierControlPoints(dx, dz, z, x_offset, y_offset)
%GETBEZIERCONTROLPOINTS Summary of this function goes here
%   Detailed explanation goes here

if nargin < 4
    x_offset = 0;
end

if nargin < 5
    y_offset = 0;
end

vert_offset = [0; 0; -z];
offset_front = [x_offset; 0; 0];
offset_left = [0; y_offset; 0];

fl = [...
    -dx, -dx, -dx, -dx, -dx/2, 0;
    0, 0, 0, 0, 0, 0;
    0, 0, dz/2, dz, dz, dz] + vert_offset + offset_front + offset_left;

rl = [...
    0, dx/5, 2*dx/5, 3*dx/5, 4*dx/5, dx;
    0, 0, 0, 0, 0, 0;
    0, 0, 0, 0, 0, 0] + vert_offset + offset_front + offset_left;

fr = [...
    dx, 4*dx/5, 3*dx/5, 2*dx/5, dx/5, 0;
    0, 0, 0, 0, 0, 0;
    0, 0, 0, 0, 0, 0] + vert_offset + offset_front - offset_left;

rr = [...
    0, -dx/2, -dx, -dx, -dx, -dx;
    0, 0, 0, 0, 0, 0;
    dz, dz, dz, dz/2, 0, 0] + vert_offset + offset_front - offset_left;

end

