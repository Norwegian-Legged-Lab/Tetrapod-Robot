classdef swing_controller
    %SWING_CONTROLLER Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        T
        t0
        p1
        p2
        h
        in_swing
        Kp
        Kd
        pos
        J
    end
    
    methods
        function obj = swing_controller(p1, p2, t0, T, h, Kp, Kd, pos, J)
            %SWING_CONTROLLER Construct an instance of this class
            %   Detailed explanation goes here
            obj.in_swing = true;
            obj.p1 = p1;
            obj.p2 = p2;
            obj.t0 = t0;
            obj.T = T;
            obj.h = h;
            obj.Kp = Kp;
            obj.Kd = Kd;
            obj.pos = pos;
            obj.J = J;
        end
        
        function ref = sine_interp(obj, t)
            %SINE_INTERP Summary of this function goes here
            %   Detailed explanation goes here
            tau = (t - obj.t0)/obj.T;
            if tau >= 1
                obj.in_swing = false;
            end
            
            xyzlin = obj.p1 + tau.*(obj.p2 - obj.p1);
            zsine = obj.h*sin(pi*tau);
            ref = xyzlin;
            ref(3,:) = ref(3,:) + zsine;
        end
        
        function vel_ref = sine_diff_interp(obj, t)
            tau = (t - obj.t0)/obj.T;
            if tau >= 1
                obj.in_swing = false;
            end
            
            xyzlin_diff = (obj.p2 - obj.p1)/obj.T;
            zsine_diff = obj.h*cos(pi*tau)/obj.T;
            vel_ref = xyzlin_diff;
            vel_ref(3,:) = vel_ref(3,:) + zsine_diff;
        end
        
        function u = control(obj, t, x_b, x_f, x_b_dot, x_f_dot)
            Jac = obj.J([x_b; x_f]);
            position = obj.pos([x_b; x_f]);
            vel = Jac*[x_b_dot; x_f_dot];
            u = Jac(:,7:9)\(obj.Kp*(obj.sine_interp(t) - position) + obj.Kd*(obj.sine_diff_interp(t) - vel));
        end
    end
end

