function time = get_time_states(bag)    

    time = table2array(bag.MessageList(:, 1));
    
    time = time';
end