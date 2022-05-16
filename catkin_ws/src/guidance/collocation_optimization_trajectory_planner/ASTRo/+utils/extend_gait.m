function [gait_extended] = extend_gait(gait)
%EXTEND_GAIT Summary of this function goes here
%   Detailed explanation goes here

diag_phase_2 = struct();

diag_phase_2.tspan = gait(1).tspan + gait(3).tspan(end);

diag_phase_2.states = gait(1).states;

pose_relabeling = diag([1, -1, 1, -1, 1, -1]);
joint_relabeling = kron([0, 0, 1, 0; 0, 0, 0, 1; 1, 0, 0, 0; 0, 1, 0, 0], diag([-1, 1, 1]));

relabeling_matr = blkdiag(pose_relabeling, joint_relabeling);

state_diff = gait(3).states.x(:,end) - relabeling_matr*gait(1).states.x(:,1);

diag_phase_2.states.x = relabeling_matr*gait(1).states.x + state_diff;
diag_phase_2.states.dx = relabeling_matr*gait(1).states.dx;
diag_phase_2.states.ddx = relabeling_matr*gait(1).states.ddx;

% diag_phase_2.inputs.u = joint_relabeling*gait(1).inputs.u;
diag_phase_2.inputs.u = gait(1).inputs.u;


diag_phase_2.params = struct();

if isfield(gait(1).params, 'aposition')
    diag_phase_2.params.aposition = zeros(66,1);
%     % base roll
% %     diag_phase_roll_diff = gait(1).params.aposition(6) - pose_relabeling(4,4)*gait(1).params.aposition(1);
%     diag_phase_2.params.aposition(1:6) = pose_relabeling(4,4)*gait(1).params.aposition(1:6);
%     % base yaw
% %     diag_phase_yaw_diff = gait(1).params.aposition(12) - pose_relabeling(6,6)*gait(1).params.a
%     diag_phase_2.params.aposition(7:12) = pose_relabeling(6,6)*gait(1).params.aposition(7:12);
%     % front stance hip roll and pitch, i.e. front left hip roll and pitch
%     diag_phase_2.params.aposition(13:24) = reshape((joint_relabeling(1:2,7:8)*(reshape(gait(1).params.aposition(13:24), 6, [])'))', [], 1);
%     % front swing leg, i.e. front right leg
%     diag_phase_2.params.aposition(25:42) = reshape((joint_relabeling(7:9, 1:3)*(reshape(gait(1).params.aposition(25:42), 6, [])'))', [], 1);
%     % rear swing leg, i.e. rear left leg
%     diag_phase_2.params.aposition(43:60) = reshape((joint_relabeling(4:6, 10:12)*(reshape(gait(1).params.aposition(43:60), 6, [])'))', [], 1);
    
    param_relabeling_diag = blkdiag(joint_relabeling(1:3,7:9), joint_relabeling(10,4), joint_relabeling(12,6), ...
        joint_relabeling(7:9,1:3), joint_relabeling(4:6,10:12));
    
    diag_phase_2.params.aposition = reshape(param_relabeling_diag*reshape(gait(1).params.aposition, 11, []), [], 1);

    diag_phase_2.params.pposition = gait(1).params.pposition;
    
    diag_phase_2.params.pFlFoot = struct();
    diag_phase_2.params.pRrFoot = struct();
end


paral_phase_2 = struct();
paral_phase_2.tspan = gait(3).tspan + gait(3).tspan(end);

paral_phase_2.states = gait(3).states;

paral_phase_2.states.x = relabeling_matr*gait(3).states.x + state_diff;
paral_phase_2.states.dx = relabeling_matr*gait(3).states.dx;
paral_phase_2.states.ddx = relabeling_matr*gait(3).states.ddx;

% paral_phase_2.inputs.u = joint_relabeling*gait(3).inputs.u;
paral_phase_2.inputs.u = gait(3).inputs.u;


paral_phase_2.params = struct();

if isfield(gait(3).params, 'aposition')
    paral_phase_2.params.aposition = zeros(66,1);
%     % base pitch
%     paral_phase_2.params.aposition(1:6) = pose_relabeling(4,4)*gait(3).params.aposition(1:6);
%     % base yaw
%     paral_phase_2.params.aposition(7:12) = pose_relabeling(6,6)*gait(3).params.aposition(7:12);
%     % front stance hip roll and pitch, i.e. front left hip roll and pitch
%     paral_phase_2.params.aposition(13:24) = reshape((joint_relabeling(1:2, 7:8)*(reshape(gait(3).params.aposition(13:24), 6, [])'))', [], 1);
%     % front swing leg, i.e. front right leg
%     paral_phase_2.params.aposition(25:42) = reshape((joint_relabeling(7:9,1:3)*(reshape(gait(3).params.aposition(25:42), 6, [])'))', [], 1);
%     % rear swing leg, i.e. rear right leg
%     paral_phase_2.params.aposition(43:60) = reshape((joint_relabeling(10:12, 4:6)*(reshape(gait(3).params.aposition(43:60), 6, [])'))', [], 1);
    
%     %front right leg to front left leg
%     paral_phase_2.params.aposition(1:18) = reshape((joint_relabeling(1:3,7:9)*(reshape(gait(1).params.aposition(1:18), 6, [])'))', [], 1);
%     
%     %rear right leg to rear left leg hip roll
%     diag_phase_2.params.aposition(19:24) = joint_relabeling(4,10)*gait(1).params.aposition(19:24);
%     %rear right leg to rear left leg knee pitch
%     diag_phase_2.params.aposition(25:30) = joint_relabeling(6,12)*gait(1).params.aposition(25:30);
%     
%     %front left leg to front right leg
%     paral_phase_2.params.aposition(31:48) = reshape((joint_relabeling(7:9,1:3)*(reshape(gait(1).params.aposition(31:48), 6, [])'))', [], 1);
%     %rear left leg to rear right leg
%     paral_phase_2.params.aposition(49:66) = reshape((joint_relabeling(10:12,4:6)*(reshape(gait(1).params.aposition(49:66), 6, [])'))', [], 1);

    param_relabeling_paral = blkdiag(joint_relabeling(1:3,7:9), joint_relabeling(4,10), joint_relabeling(6,12), ...
        joint_relabeling(7:9,1:3), joint_relabeling(10:12,4:6));
    
    paral_phase_2.params.aposition = reshape(param_relabeling_paral*reshape(gait(3).params.aposition, 11, []), [], 1);

    paral_phase_2.params.pposition = gait(3).params.pposition;
    
    
    paral_phase_2.params.pFlFoot = struct();
    paral_phase_2.params.pRlFoot = struct();
end


gait_extended = [gait; diag_phase_2; gait(2); paral_phase_2; gait(4)];

end

