classdef mpc_solver
    %MPC_SOLVER Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        delta_t
        horizon
        cycle_period
        m
        I_b
        mu
        stance_info
        r_body_to_fl_ref
        tk
        n_steps
        ref_cost
        force_cost
    end
    
    methods
        function obj = mpc_solver(m, I_b, mu, r_body_to_fl_ref, delta_t, horizon, cycle_period, ref_cost, force_cost, stance_info)
            %MPC_SOLVER Construct an instance of this class
            %   Detailed explanation goes here
            obj.m = m;
            obj.I_b = I_b;
            obj.delta_t = delta_t;
            obj.horizon = horizon;
            obj.cycle_period = cycle_period;
            obj.r_body_to_fl_ref = r_body_to_fl_ref;
            obj.mu = mu;
            obj.ref_cost = ref_cost;
            obj.force_cost = force_cost;
            if nargin < 10
                obj.stance_info = get_stance_info_ambling();
            else
                obj.stance_info = stance_info;
            end
            obj.tk = 0:obj.delta_t:obj.horizon;
            obj.n_steps = length(obj.tk);
        end
        
        function stance_indices = getStanceIndices(obj, t0)
            %GET_STANCE_INDICES Summary of this function goes here
            %   Detailed explanation goes here
            ts = (t0:obj.delta_t:(t0 + obj.horizon));

            tau_s = mod([t0 - obj.delta_t, ts]/obj.cycle_period, 1);
            stance_indices = struct();

            stance_indices.fl.stance = is_stance('fl', tau_s, obj.stance_info);
            stance_indices.fr.stance = is_stance('fr', tau_s, obj.stance_info);
            stance_indices.rl.stance = is_stance('rl', tau_s, obj.stance_info);
            stance_indices.rr.stance = is_stance('rr', tau_s, obj.stance_info);

            stance_indices.fl.d_stance = diff(stance_indices.fl.stance);
            stance_indices.fr.d_stance = diff(stance_indices.fr.stance);
            stance_indices.rl.d_stance = diff(stance_indices.rl.stance);
            stance_indices.rr.d_stance = diff(stance_indices.rr.stance);

            stance_indices.fl.stance = stance_indices.fl.stance(2:end);
            stance_indices.fr.stance = stance_indices.fr.stance(2:end);
            stance_indices.rl.stance = stance_indices.rl.stance(2:end);
            stance_indices.rr.stance = stance_indices.rr.stance(2:end);
        end
        
        function B = getB(obj, r, I_w)
            %GETB r is 3xn matrix with vectors from com to each foothold in world
            %coordinates
            %   Detailed explanation goes here
            num_footholds = size(r,2);

            B = zeros(12, 3*num_footholds);

            for i = 1:num_footholds
                B(7:9, 3*(i - 1) + 1:3*i) = eye(3)/obj.m;
                B(10:12, 3*(i - 1) + 1:3*i) = I_w\cross([r(:,i),r(:,i),r(:,i)],eye(3));
            end
        end
        
        function [A, B] = getSystemMatrices(obj, yaw, r)
            R = eul2rotm([yaw, 0, 0], 'zyx');
            I_w = R*obj.I_b*R.';

            B = obj.getB(r, I_w);

            A = zeros(12);
            A(1:3, 7:9) = eye(3);
            A(4:6,10:12) = R;
        end
        
        function [r_w] = getNewStanceVector(obj, b_height, v_des, stance_time, yaw, foot)
            %GET_R_VECTOR Summary of this function goes here
            %   Detailed explanation goes here
            switch foot
                case 'fl'
                    r_base_shoulder = obj.r_body_to_fl_ref + [0.1; 0; 0];
                case 'fr'
                    r_base_shoulder = obj.r_body_to_fl_ref + [0.1; 0; 0];
                    r_base_shoulder(2) = -r_base_shoulder(2);
                case 'rl'
                    r_base_shoulder = obj.r_body_to_fl_ref + [0.1; 0; 0];
                    r_base_shoulder(1) = -r_base_shoulder(1);
                case 'rr'
                    r_base_shoulder = obj.r_body_to_fl_ref + [0.1; 0; 0];
                    r_base_shoulder(1:2) = -r_base_shoulder(1:2);
            end

            r_b = [r_base_shoulder(1:2) + v_des*stance_time/2; -b_height];
            r_w = eul2rotm([yaw, 0, 0], 'zyx')*r_b;
        end
        
        function [stances] = getStanceVectors(obj, stance_indices, body_xy_positions, yaw_des, vel_des, init_stance_pos, b_height)
            %GET_R_WS Summary of this function goes here
            %   Detailed explanation goes here

            fields = {'fl', 'fr', 'rl', 'rr'};

            for i = 1:length(fields)
                f = fields{i};

                stances.(f) = zeros(3, obj.n_steps);

                if stance_indices.(f).stance(1)
                    if isfield(init_stance_pos, f)
                        stances.(f)(:,1) = init_stance_pos.(f);
                    else
                        stances.(f)(:,1) = obj.getNewStanceVector(b_height, vel_des, sum(obj.stance_info.(f).durations)*obj.cycle_period, yaw_des(1), f);
                    end
                end

                for j = 2:obj.n_steps
                    if stance_indices.(f).stance(j) %if foot is stance foot
                        if stance_indices.(f).d_stance(j) %if foot is landing
                            stances.(f)(:, j) = obj.getNewStanceVector(b_height, vel_des, sum(obj.stance_info.(f).durations)*obj.cycle_period, yaw_des(j), f);
                        else %if foot was already on the ground, relative in world changes by the displacement of the body in world
                            stances.(f)(:, j) = stances.(f)(:, j-1) - [(body_xy_positions(:,j) - body_xy_positions(:, j-1)); 0];
                        end
                    end
                end
            end
        end
        
        function [bodyXYPositions] = getBodyXYPositions(obj, p0, yaw_des, vel_des)
            %GET_BODY_POSITIONS Summary of this function goes here
            %   Detailed explanation goes here
            bodyXYPositions = zeros(2, obj.n_steps);
            bodyXYPositions(:,1) = p0;
            for i = 2:obj.n_steps
                vel_rot = eul2rotm([yaw_des(i - 1), 0, 0], 'zyx')*[vel_des*obj.delta_t;0];
                bodyXYPositions(:,i) = bodyXYPositions(:, i-1) + vel_rot(1:2);
            end
        end
        
        function [bodyXYVelocities] = getBodyXYVelocities(obj, yaw_des, vel_des)
            bodyXYVelocities = zeros(2, obj.n_steps);
            for i = 1:obj.n_steps
                vel_rot = eul2rotm([yaw_des(i), 0, 0], 'zyx')*[vel_des; 0];
                bodyXYVelocities(:,i) = vel_rot(1:2);
            end
        end
        
        function [A_ineq, b_ineq, A_eq, b_eq] = getConstraintMatrices(obj, vel_des, yaw_rate_des, x0, t0, stance_vectors)
            %GETBIGA Summary of this function goes here
            %   Detailed explanation goes here
            stance_indices = obj.getStanceIndices(t0);

            yaw_des = x0(6) + obj.tk*yaw_rate_des;

            ts = t0 + obj.tk;

            n_states = 12;

            num_forces_per_leg = 3;

            num_legs = 4*obj.n_steps;

            num_input_vars = num_forces_per_leg*num_legs;

            A_states = zeros((obj.n_steps- 1)*n_states, obj.n_steps*n_states);
            A_inputs = zeros((obj.n_steps - 1)*n_states, num_input_vars);

            g_vec = [zeros(6,1); 0; 0; -9.81; 0; 0; 0]*obj.delta_t;

            b_sys = repmat(g_vec, obj.n_steps - 1, 1);

            feet = {'fl', 'fr', 'rl' 'rr'};

            % Create matrix to force all non-stance feet to contribute with zero forces
            feet_indices = reshape([stance_indices.fl.stance; stance_indices.fr.stance; stance_indices.rl.stance; stance_indices.rr.stance], 1, []);

            D = kron(diag(~feet_indices), eye(3));

            D = D(~all(D == 0, 1), :);
            b_D = zeros(size(D,1), 1);

            for i = 1:obj.n_steps - 1
                r = zeros(3,4);
                for f = 1:length(feet)
                    if stance_indices.(feet{f}).stance(i)
                        r(:,f) = stance_vectors.(feet{f})(:,i);
                    end
                end

                [A, B] = obj.getSystemMatrices(yaw_des(i), r);

                A_states((i - 1)*n_states + 1:i*n_states, (i - 1)*n_states + 1:i*n_states) = -(eye(12) + obj.delta_t*A);
                A_states((i - 1)*n_states + 1:i*n_states, i*n_states + 1:(i + 1)*n_states) = eye(12);
                A_inputs((i - 1)*n_states + 1:i*n_states, 12*(i - 1) + 1: 12*i) = -obj.delta_t*B;
            end

            A_eq = [A_states, A_inputs; zeros(size(D,1), size(A_states,2)), D];
            b_eq = [b_sys; b_D];

            f_min = 0;
            f_max = 1e4;

            b_forces = [f_min; f_max; zeros(4,1)];
            A_forces = [0, 0, -1;
                        0, 0, 1;
                        1, 0, -obj.mu;
                        -1, 0, -obj.mu;
                        0, 1, -obj.mu;
                        0, -1, -obj.mu];
            b_ineq = repmat(b_forces, num_legs, 1);
            A_ineq = [zeros(size(b_ineq,1), n_states*obj.n_steps), kron(eye(num_legs), A_forces)];

        end
        
        function [H, f] = getCostMatrices(obj, reference_traj)
            H1 = obj.ref_cost*eye(12*obj.n_steps);
            H2 = obj.force_cost*eye(12*obj.n_steps);
            f1 = -obj.ref_cost*reference_traj;
            H = blkdiag(H1, H2);
            f = [f1; zeros(12*obj.n_steps, 1)];
        end
        
        function reference_traj = generateReferenceTrajectory(obj, x0, vel_des, yaw_rate_des)
            yaw_des = x0(6) + (0:obj.delta_t:obj.horizon)*yaw_rate_des;
            
            init_body_xy_pos = obj.getBodyXYPositions(x0(1:2), yaw_des, vel_des);
            
            reference_traj = zeros(12, length(yaw_des));
            reference_traj(1:6,:) = repmat(x0(1:6), 1, length(yaw_des));
            reference_traj(1:2,:) = init_body_xy_pos;
            reference_traj(4:5,:) = zeros(2,length(yaw_des));
            reference_traj(6,:) = yaw_des;
            reference_traj(7,:) = vel_des(1);
            reference_traj(8,:) = vel_des(2);
            reference_traj(12,:) = yaw_rate_des;
            reference_traj = reshape(reference_traj, [], 1);
        end
        
        function [lb, ub] = getProblemBounds(obj, x0, vel_des, yaw_rate_des)
            xf = x0 + abs([ones(2,1)*norm(vel_des)*obj.horizon; zeros(3,1); yaw_rate_des*obj.horizon; ones(2,1)*norm(vel_des) + ones(2,1); ones(3,1); 0]);
            
            xmin = x0 - xf - ones(12,1);
            xmax = x0 + xf + ones(12,1);
            f_min = [-1e4; -1e4; 0];
            f_max = [1e4; 1e4; 1e4];
            
            lb = [repmat(xmin, obj.n_steps, 1); repmat(f_min, 4*obj.n_steps, 1)];
            ub = [repmat(xmax, obj.n_steps, 1); repmat(f_max, 4*obj.n_steps, 1)];
            lb(1:12) = x0;
            ub(1:12) = x0;
        end
            

        function sol = solve(obj, x0, t0, init_stance_pos, vel_des, yaw_rate_des)            
            reference_traj = obj.generateReferenceTrajectory(x0, vel_des, yaw_rate_des);
            
            yaw_des = x0(6) + obj.tk*yaw_rate_des;

            body_xy_positions = obj.getBodyXYPositions(x0(1:2), yaw_des, vel_des);

            stance_indices = obj.getStanceIndices(t0);

            stance_vectors = obj.getStanceVectors(stance_indices, body_xy_positions, yaw_des, vel_des, init_stance_pos, x0(3));

            [A_ineq, b_ineq, A_eq, b_eq] = obj.getConstraintMatrices(vel_des, yaw_rate_des, x0, t0, stance_vectors);
            
            [lb, ub] = obj.getProblemBounds(x0, vel_des, yaw_rate_des);
            
            [H, f] = obj.getCostMatrices(reference_traj);
            H_sparse = sparse(H);
            A_ineq_sparse = sparse(A_ineq);
            A_eq_sparse = sparse(A_eq);
            t1 = tic;
            x = quadprog(H_sparse, f, A_ineq_sparse, b_ineq, A_eq_sparse, b_eq, lb, ub);
            toc(t1)
            sol = obj.get_solution(x, stance_vectors, t0);
        end
        
        function sol = get_solution(obj, x, stance_vectors, t0)
            states = reshape(x(1:12*obj.n_steps), 12, []);
            t = t0 + obj.tk;
            sol.states.x = states(1:6,:);
            sol.states.dx = states(7:end,:);
            inputs = reshape(x(12*obj.n_steps + 1:end,:), 12, []);
            sol.inputs.fl.forces = inputs(1:3,:);
            sol.inputs.fr.forces = inputs(4:6,:);
            sol.inputs.rl.forces = inputs(7:9,:);
            sol.inputs.rr.forces = inputs(10:12,:);
            stance_indices = get_stance_indices(obj.cycle_period, obj.horizon, obj.delta_t, t0, obj.stance_info);
            sol.inputs.fl.stance_indices = stance_indices.fl;
            sol.inputs.fr.stance_indices = stance_indices.fr;
            sol.inputs.rl.stance_indices = stance_indices.rl;
            sol.inputs.rr.stance_indices = stance_indices.rr;
            sol.inputs.fl.stance_vectors = stance_vectors.fl;
            sol.inputs.fr.stance_vectors = stance_vectors.fr;
            sol.inputs.rl.stance_vectors = stance_vectors.rl;
            sol.inputs.rr.stance_vectors = stance_vectors.rr;
            sol.t = t;
        end 
    end
end

