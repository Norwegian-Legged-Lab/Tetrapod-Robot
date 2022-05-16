
classdef states < ros.Message
    %states MATLAB implementation of collocation_optimization_trajectory_planner/states
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'collocation_optimization_trajectory_planner/states' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '337cdfb238a75377b0884d1c8a7ba82f' % The MD5 Checksum of the message definition
        PropertyList = { 'X' 'Dx' } % List of non-constant message properties
        ROSPropertyList = { 'x' 'dx' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Float64MultiArray' ...
            'ros.msggen.std_msgs.Float64MultiArray' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        X
        Dx
    end
    methods
        function set.X(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Float64MultiArray'};
            validateattributes(val, validClasses, validAttributes, 'states', 'X')
            obj.X = val;
        end
        function set.Dx(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Float64MultiArray'};
            validateattributes(val, validClasses, validAttributes, 'states', 'Dx')
            obj.Dx = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.collocation_optimization_trajectory_planner.states.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.collocation_optimization_trajectory_planner.states(strObj);
        end
    end
end