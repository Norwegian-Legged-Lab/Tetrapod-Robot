function [curve_cs, vel_cs, a_cs] = BezierCurveJointSpace(n, cp_cs, l1, l2, l3)
%BEZIERCURVEJOINTSPACE Summary of this function goes here
%   Detailed explanation goes here

[cp_js_1, cp_js_2] = kin.PlanarLegInverseKinematics(cp_cs(1,:), cp_cs(2,:), l1, l2, l3);
cp_js = [cp_js_1'; cp_js_2'];

[curve_js, vel_js, a_js] = kin.BezierCurve(n, cp_js);

[curve_cs_x, curve_cs_z] = kin.PlanarLegForwardKinematics(curve_js(1,:), curve_js(2,:), l1, l2, l3);
[vel_cs_x, vel_cs_z] = kin.PlanarLegForwardKinematics(vel_js(1,:), vel_js(2,:), l1, l2, l3);
[a_cs_x, a_cs_z] = kin.PlanarLegForwardKinematics(a_js(1,:), a_js(2,:), l1, l2, l3);

curve_cs = [curve_cs_x'; curve_cs_z'];
vel_cs = [vel_cs_x'; vel_cs_z'];
a_cs = [a_cs_x'; a_cs_z'];
end

