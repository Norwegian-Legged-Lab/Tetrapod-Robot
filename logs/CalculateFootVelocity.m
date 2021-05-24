function foot_vel = CalculateFootVelocity(joint_angles, joint_velocities)
    
    l1 = 0.130;
    l2 = 0.220;
    l3 = 0.279;
    
    t1 = joint_angles(1);
    t2 = joint_angles(2);
    t3 = joint_angles(3);
    
    J = zeros(3, 3);
    
    J(1, 1) = (l1 + l2*cos(t2) + l3*cos(t2 + t3))*(-sin(t1));
    J(2, 1) = (l1 + l2*cos(t2) + l3*cos(t2 + t3))*cos(t1);
    J(3, 1) = 0;
    
    J(1, 2) = (-l2*sin(t2) - l3*sin(t2 + t3))*cos(t1);
    J(2, 2) = (-l2*sin(t2) - l3*sin(t2 + t3))*sin(t1);
    J(3, 2) = -l2*cos(t2) - l3*cos(t2 + t3);
    
    J(1, 3) = -l3*sin(t2 + t3)*cos(t1);
    J(2, 3) = -l3*sin(t2 + t3)*sin(t1);
    J(3, 3) = -l3*cos(t2 + t3);
    
    foot_vel = J*joint_velocities;
    
end