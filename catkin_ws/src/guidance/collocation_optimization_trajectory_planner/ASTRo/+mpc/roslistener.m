classdef roslistener < handle
    %ROSLISTENER Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        gen_coord_sub
        gen_vel_sub
        gen_coord
        gen_vel
    end
    
    methods
        function obj = roslistener()
            %ROSLISTENER Construct an instance of this class
            %   Detailed explanation goes here
            obj.gen_coord_sub = rossubscriber('/my_robot/gen_coord', 'std_msgs/Float64MultiArray');
            obj.gen_vel_sub = rossubscriber('/my_robot/gen_vel', 'std_msgs/Float64MultiArray');
        end
        
        function gen_coord_callback(obj, src, msg)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            obj.gen_coord = msg.Data;
        end
        
        function gen_vel_callback(obj, src, msg)
            obj.gen_vel = msg.Data;
        end
    end
end

