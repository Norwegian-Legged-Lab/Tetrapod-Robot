function plotSimTorques(system, logger, indices)
    
    domain = system.Gamma.Nodes.Domain{1};
    act_joint_idx = find(arrayfun(@(x)~isempty(x.Actuator),domain.Joints));
    
    if nargin < 3
        indices = act_joint_idx;
    else
        if isempty(indices), return; end
    end
    
    joint_names = {domain.Joints.Name};
    
    t = [];
    u_sim = [];
    
    n_nodes = height(system.Gamma.Nodes);
    
    for j=1:numel(logger)
        domain = system.Gamma.Nodes.Domain{mod(j - 1, n_nodes) + 1};
        B_domain = double(domain.Gmap.Control.u);
        actuated_indices = find(~all(B_domain == 0, 2));
        t = [t,logger(j).flow.t];
        u_sim_domain = zeros(length(act_joint_idx), length(logger(j).flow.t));
        u_sim_domain(actuated_indices - min(act_joint_idx) + 1,:) = logger(j).flow.inputs.Control.u;
        u_sim = [u_sim, u_sim_domain];
    end
    
    
    ax = [];
    for i=1:length(indices)
        idx = indices(i);
        if ~ismember(idx,act_joint_idx)
            continue;
        end
        f = figure;clf;
        set(f, 'WindowStyle', 'docked');
        %         f.Position = [680 558 560 420];
        ax = [ax, axes(f)]; %#ok<LAXES,*AGROW>
        hold on;
        plot(t, u_sim(i,:), 'b');
        
        title('Torque');
        
        
        
        
        f.Name = [joint_names{idx},'_torque'];
    end
    
    linkaxes(ax, 'x');
    
    
    
    
end