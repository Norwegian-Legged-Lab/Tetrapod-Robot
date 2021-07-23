function foot_pos = CalculateFootPosition(joint_angles, leg_type)

    l1 = 0.130;
    l2 = 0.220;
    l3 = 0.279;

    t1 = joint_angles(1);
    t2 = joint_angles(2);
    t3 = joint_angles(3);
    
    foot_pos(1) = (l1 + l2*cos(t2) + l3*cos(t2 + t3))*cos(t1);
    foot_pos(2) = (l1 + l2*cos(t2) + l3*cos(t2 + t3))*sin(t1);
    foot_pos(3) = - l2*sin(t2) - l3*sin(t2 + t3);
    
    if((leg_type == "front_right") || (leg_type == "rear_left"))
        foot_pos(3) = - foot_pos(3);
    end
end