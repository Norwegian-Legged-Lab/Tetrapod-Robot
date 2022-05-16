function plotSimPhasePortraitsOverview(system, logger, indices)
    
    
    
    domain = system.Gamma.Nodes.Domain{1};
    joint_names = {domain.Joints.Name};
    
    if nargin < 4
        indices = 3:length(domain.Joints);
    else
        if isempty(indices), return; end
    end
    
    t = [];
    x_sim = []; 
    dx_sim = []; 
    ddx_sim = [];
    
    for j=1:numel(logger)
        t = [t,logger(j).flow.t];
        
        x_sim = [x_sim,logger(j).flow.states.x];
        
        dx_sim = [dx_sim,logger(j).flow.states.dx];
        
        ddx_sim = [ddx_sim,logger(j).flow.states.ddx];
    end
    
    f = figure;clf;
    set(f, 'WindowStyle', 'docked');
    
    for i=indices
        subplot(4,4,i-2);
        %ax = [ax, subplot(1, 1, 1)]; %#ok<*AGROW>
        hold on;
        plot(x_sim(i,:), dx_sim(i,:), 'b');
        scatter(x_sim(i,1), dx_sim(i,1), 'r', 'filled');
        
        title([joint_names{i},'\_state']);
        
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
    end
    f.Name = 'Overview of phase portraits of limit cycles';
    
%     linkaxes(ax, 'x');
    
    
    
    
end