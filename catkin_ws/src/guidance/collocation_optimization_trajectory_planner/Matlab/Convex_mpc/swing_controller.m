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
    end
    
    methods
        function obj = swing_controller(p1, p2, t0, T, h)
            %SWING_CONTROLLER Construct an instance of this class
            %   Detailed explanation goes here
            obj.in_swing = true;
            obj.p1 = p1;
            obj.p2 = p2;
            obj.t0 = t0;
            obj.T = T;
            obj.h = h;
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
    end
end

