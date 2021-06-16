function states = get_joint_position_states(bag, number_of_motors)

    number_of_messages = bag.NumMessages;
    messages = readMessages(bag);
    
    states = zeros(number_of_motors, number_of_messages);

    % [time, theta1, theta2, theta3]
    for i = 1:number_of_messages
        message = messages(i);
        joint_state_message = message{1, 1};
        states(:, i) = joint_state_message.Position;
    end
    
    states = states';
end