function [cp_js_diag, cp_js_paral] = GetBezierControlPointsJointSpace(dx, dz, z, l1, l2, l3, x_offset, y_offset, widening_angle)
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

[cp_cs_diag, cp_cs_paral] = kin.GetBezierControlPoints(dx, dz, z, x_offset, y_offset);

%note: although the cartesian planar control points correspond to x and z
%dimension (1 and 3) this plane is spanned by a combination of hip pitch
%and knee pitch (2 and 3) so that the zeroed out dimension, corresponding
%to y in cartesian coordinates, is actually the roll joint position, i.e. 1

[cp_js_fl_diag_1, cp_js_fl_diag_2] = kin.PlanarLegInverseKinematics(cp_cs_diag.fl(1,:), cp_cs_diag.fl(3,:), l1, l2, l3);
cp_js_fl_diag = [widening_angle*ones(1, 6); cp_js_fl_diag_1'; cp_js_fl_diag_2'];

[cp_js_fl_paral_1, cp_js_fl_paral_2] = kin.PlanarLegInverseKinematics(cp_cs_paral.fl(1,:), cp_cs_paral.fl(3,:), l1, l2, l3);
cp_js_fl_paral = [widening_angle*ones(1, 6); cp_js_fl_paral_1'; cp_js_fl_paral_2'];

[cp_js_rl_diag_1, cp_js_rl_diag_2] = kin.PlanarLegInverseKinematics(cp_cs_diag.rl(1,:), cp_cs_diag.rl(3,:), l1, l2, l3);
cp_js_rl_diag = [-widening_angle*ones(1, 6); cp_js_rl_diag_1'; cp_js_rl_diag_2'];

[cp_js_rl_paral_1, cp_js_rl_paral_2] = kin.PlanarLegInverseKinematics(cp_cs_paral.rl(1,:), cp_cs_paral.rl(3,:), l1, l2, l3);
cp_js_rl_paral = [-widening_angle*ones(1, 6); cp_js_rl_paral_1'; cp_js_rl_paral_2'];

[cp_js_fr_diag_1, cp_js_fr_diag_2] = kin.PlanarLegInverseKinematics(cp_cs_diag.fr(1,:), cp_cs_diag.fr(3,:), l1, l2, l3);
cp_js_fr_diag = [-widening_angle*ones(1, 6); cp_js_fr_diag_1'; cp_js_fr_diag_2'];

[cp_js_fr_paral_1, cp_js_fr_paral_2] = kin.PlanarLegInverseKinematics(cp_cs_paral.fr(1,:), cp_cs_paral.fr(3,:), l1, l2, l3);
cp_js_fr_paral = [-widening_angle*ones(1, 6); cp_js_fr_paral_1'; cp_js_fr_paral_2'];

[cp_js_rr_diag_1, cp_js_rr_diag_2] = kin.PlanarLegInverseKinematics(cp_cs_diag.rr(1,:), cp_cs_diag.rr(3,:), l1, l2, l3);
cp_js_rr_diag = [widening_angle*ones(1, 6); cp_js_rr_diag_1'; cp_js_rr_diag_2'];

[cp_js_rr_paral_1, cp_js_rr_paral_2] = kin.PlanarLegInverseKinematics(cp_cs_paral.rr(1,:), cp_cs_paral.rr(3,:), l1, l2, l3);
cp_js_rr_paral = [widening_angle*ones(1, 6); cp_js_rr_paral_1'; cp_js_rr_paral_2'];


cp_js_diag = {cp_js_fl_diag, cp_js_rl_diag, cp_js_fr_diag, cp_js_rr_diag};
cp_js_paral = {cp_js_fl_paral, cp_js_rl_paral, cp_js_fr_paral, cp_js_rr_paral};
end