clear;
clf;

vel_des = 0.4;
T_gait = 0.5;
z = 0.35;

l1 = 0.25;
l2 = 0.28;
l3 = 0.0461;

n = 500;

dx = vel_des*T_gait/2;
dz = 0.1;
%%
[fl_cs, rl_cs, fr_cs, rr_cs] = kin.GetBezierControlPoints(dx, dz, z);

[fl_js, rl_js, fr_js, rr_js] = kin.GetBezierControlPointsJointSpace(dx, dz, z, l1, l2, l3);
%%
cp_cs = {fl_cs, rl_cs, fr_cs, rr_cs};

cp_js = {fl_js, rl_js, fr_js, rr_js};
%%
space_names = {'cartesian space', 'joint space'};

leg_names = {'front left', 'rear left', 'front right', 'rear right'};



for i = 1:4
    curve_cs_cs{i} = kin.BezierCurve(n, cp_cs{i});
    curve_js_js{i} = kin.BezierCurve(n, cp_js{i});
    
    [curve_js_cs_x, curve_js_cs_z] = kin.PlanarLegForwardKinematics(curve_js_js{i}(1,:), curve_js_js{i}(2,:), l1, l2, l3);
    
    curve_js_cs{i} = [curve_js_cs_x'; curve_js_cs_z'];
    
    [curve_cs_js_1, curve_cs_js_2] = kin.PlanarLegInverseKinematics(curve_cs_cs{i}(1,:), curve_cs_cs{i}(3,:), l1, l2, l3);
    
    curve_cs_js{i} = [curve_cs_js_1'; curve_cs_js_2'];
    
    subplot(5,2,2*i - 1);
    
    title('curves plotted in cartesian space')
    hold on
    plot(curve_cs_cs{i}(1,:), curve_cs_cs{i}(3,:));
    plot(curve_js_cs{i}(1,:), curve_js_cs{i}(2,:));
    scatter(cp_cs{i}(1,:), cp_cs{i}(3,:));
    legend('bezier in cartesian space', 'bezier in joint space');
    
    subplot(5, 2, 2*i);
    
    title('curves plotted in joint space');
    hold on
    plot(curve_cs_js{i}(1,:), curve_cs_js{i}(2,:));
    plot(curve_js_js{i}(1,:), curve_js_js{i}(2,:));
    scatter(cp_js{i}(1,:), cp_js{i}(2,:));
    legend('bezier in cartesian space', 'bezier in joint space');
end
cp_cs_full = [cp_cs{1}, cp_cs{4}, cp_cs{3}, cp_cs{2}];

cp_js_full = [cp_js{1}, cp_js{4}, cp_js{3}, cp_js{2}];

curve_cs_cs_full = [curve_cs_cs{1}, curve_cs_cs{4}, curve_cs_cs{3}, curve_cs_cs{2}];
curve_js_cs_full = [curve_js_cs{1}, curve_js_cs{4}, curve_js_cs{3}, curve_js_cs{2}];
curve_js_js_full = [curve_js_js{1}, curve_js_js{4}, curve_js_js{3}, curve_js_js{2}];
curve_cs_js_full = [curve_cs_js{1}, curve_cs_js{4}, curve_cs_js{3}, curve_cs_js{2}];

subplot(5, 2, 9);

title('full cycles plotted in cartesian space');
hold on
plot(curve_cs_cs_full(1,:), curve_cs_cs_full(3,:));
plot(curve_js_cs_full(1,:), curve_js_cs_full(2,:));
scatter(cp_cs_full(1,:), cp_cs_full(3,:));
legend('bezier in cartesian space', 'bezier in joint space');

subplot(5, 2, 10);

title('full cycles plotted in joint space');
hold on
plot(curve_cs_js_full(1,:), curve_cs_js_full(2,:));
plot(curve_js_js_full(1,:), curve_js_js_full(2,:));
scatter(cp_js_full(1,:), cp_js_full(2,:));
legend('bezier in cartesian space', 'bezier in joint space');

