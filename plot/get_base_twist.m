function states = get_base_twist(bag)

    number_of_messages = bag.NumMessages;
    messages = readMessages(bag);
    
    states = zeros(6, number_of_messages);

    % [time, x, y, z, roll, pitch, yaw]
    for i = 1:number_of_messages
        message = messages(i);
        base_twist_message = message{1, 1};
        states(:, i) = base_twist_message.Data;
    end
    
    states = states';
end