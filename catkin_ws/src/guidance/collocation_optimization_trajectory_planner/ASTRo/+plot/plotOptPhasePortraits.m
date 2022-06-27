function plotOptPhasePortraits(model, gait, indices)
    
    lw = 1.5;
    
    domain = model;
    joint_names = {domain.Joints.Name};
    
    if nargin < 5
        indices = 1:length(domain.Joints);
    else
        if isempty(indices), return; end
    end
    
    t_opt = [];
    x_opt = []; 
    dx_opt = []; 
    ddx_opt = [];
    
    num_domains = length(gait);
    
    gait_cont = gait(boolean(mod((1:num_domains),2)));
    
    states_opt = [gait_cont.states];
    t_opt = [gait_cont.tspan, gait_cont(end).tspan(end)+gait_cont(1).tspan(2)];

    x_opt = [states_opt.x, states_opt(1).x(:,1)];

    dx_opt = [states_opt.dx, states_opt(1).dx(:,1)];

    ddx_opt = [states_opt.ddx, states_opt(1).ddx(:,1)];

    
    ax = [];
    for i=indices
        f = figure;clf;
        set(f, 'WindowStyle', 'docked');
        ax = [ax, subplot(1, 1, 1)]; %#ok<*AGROW>
        plot(x_opt(i,:), dx_opt(i,:), 'Color', '#D95319', 'LineWidth', lw);
        
        title('Phase portrait of limit cycle');
        
%         ax = [ax, subplot(1, 2, 2)];
%         hold on;
%         plot(t, dx_sim(i,:), 'b');
%         title('Joint Velocity');
        
%         ax = [ax, subplot(3, 1, 3)];
%         hold on;
%         plot(t, ddx_sim(i,:), 'b');
%         
%         title('Joint Acceleration');
%         
%         
        f.Name = [joint_names{i},'_state'];
    end
    
%     linkaxes(ax, 'x');
    
    
    
    
end