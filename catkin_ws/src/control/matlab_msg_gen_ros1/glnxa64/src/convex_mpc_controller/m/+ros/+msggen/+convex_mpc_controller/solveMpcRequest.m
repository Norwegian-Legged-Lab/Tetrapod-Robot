
classdef solveMpcRequest < ros.Message
    %solveMpcRequest MATLAB implementation of convex_mpc_controller/solveMpcRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'convex_mpc_controller/solveMpcRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '9f174717bb0ee4edf6ef0a4cca80bd32' % The MD5 Checksum of the message definition
        PropertyList = { 'InitStancePos' 'X0' 'T0' 'VelDes' 'YawRateDes' } % List of non-constant message properties
        ROSPropertyList = { 'init_stance_pos' 'x0' 't0' 'vel_des' 'yaw_rate_des' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.convex_mpc_controller.init_pos' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        InitStancePos
        X0
        T0
        VelDes
        YawRateDes
    end
    methods
        function set.InitStancePos(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.init_pos'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcRequest', 'InitStancePos')
            obj.InitStancePos = val;
        end
        function set.X0(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 12};
            validateattributes(val, validClasses, validAttributes, 'solveMpcRequest', 'X0');
            obj.X0 = double(val);
        end
        function set.T0(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcRequest', 'T0');
            obj.T0 = double(val);
        end
        function set.VelDes(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 2};
            validateattributes(val, validClasses, validAttributes, 'solveMpcRequest', 'VelDes');
            obj.VelDes = double(val);
        end
        function set.YawRateDes(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcRequest', 'YawRateDes');
            obj.YawRateDes = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.convex_mpc_controller.solveMpcRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.convex_mpc_controller.solveMpcRequest(strObj);
        end
    end
end
