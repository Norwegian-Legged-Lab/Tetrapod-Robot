function states = get_joint_position_states(bag)

    number_of_messages = bag.NumMessages;
    messages = readMessages(bag);
    
    time = table2array(bag.MessageList(:, 1));
    
    states = zeros(4, number_of_messages);
    states(1, :) = time';

    % [time, theta1, theta2, theta3]
    for i = 1:number_of_messages
        message = messages(i);
        joint_state_message = message{1, 1};
        states(2:4, i) = joint_state_message.Velocity;
    end
end