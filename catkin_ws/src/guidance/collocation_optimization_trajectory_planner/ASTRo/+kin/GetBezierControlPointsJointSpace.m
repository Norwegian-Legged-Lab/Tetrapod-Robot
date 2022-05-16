function [cp_js] = GetBezierControlPointsJointSpace(dx, dz, z, l1, l2, l3, x_offset, y_offset, widening_angle)
%GETBEZIERCONTROLPOINTSJOINTSPACE Summary of this function goes here
%   Detailed explanation goes here

if nargin < 7
    x_offset = 0;
end

if nargin < 8
    y_offset = 0;
end

if nargin < 9
    widening_angle = 0;
end

[cp_cs_fl, cp_cs_rl, cp_cs_fr, cp_cs_rr] = kin.GetBezierControlPoints(dx, dz, z, x_offset, y_offset);

%note: although the cartesian planar control points correspond to x and z
%dimension (1 and 3) this plane is spanned by a combination of hip pitch
%and knee pitch (2 and 3) so that the zeroed out dimension, corresponding
%to y in cartesian coordinates, is actually the roll joint position, i.e. 1

[cp_js_fl_1, cp_js_fl_2] = kin.PlanarLegInverseKinematics(cp_cs_fl(1,:), cp_cs_fl(3,:), l1, l2, l3);
cp_js_fl = [widening_angle*ones(1, 6); cp_js_fl_1'; cp_js_fl_2'];

[cp_js_rl_1, cp_js_rl_2] = kin.PlanarLegInverseKinematics(cp_cs_rl(1,:), cp_cs_rl(3,:), l1, l2, l3);
cp_js_rl = [-widening_angle*ones(1, 6); cp_js_rl_1'; cp_js_rl_2'];

[cp_js_fr_1, cp_js_fr_2] = kin.PlanarLegInverseKinematics(cp_cs_fr(1,:), cp_cs_fr(3,:), l1, l2, l3);
cp_js_fr = [-widening_angle*ones(1, 6); cp_js_fr_1'; cp_js_fr_2'];

[cp_js_rr_1, cp_js_rr_2] = kin.PlanarLegInverseKinematics(cp_cs_rr(1,:), cp_cs_rr(3,:), l1, l2, l3);
cp_js_rr = [widening_angle*ones(1, 6); cp_js_rr_1'; cp_js_rr_2'];

cp_js = {cp_js_fl, cp_js_rl, cp_js_fr, cp_js_rr};
end