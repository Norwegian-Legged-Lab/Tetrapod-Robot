
classdef inputs < ros.Message
    %inputs MATLAB implementation of convex_mpc_controller/inputs
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'convex_mpc_controller/inputs' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '62c3fb3c571d201bcb57b710d41fdaa8' % The MD5 Checksum of the message definition
        PropertyList = { 'Fl' 'Fr' 'Rl' 'Rr' } % List of non-constant message properties
        ROSPropertyList = { 'fl' 'fr' 'rl' 'rr' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.convex_mpc_controller.foot_input' ...
            'ros.msggen.convex_mpc_controller.foot_input' ...
            'ros.msggen.convex_mpc_controller.foot_input' ...
            'ros.msggen.convex_mpc_controller.foot_input' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Fl
        Fr
        Rl
        Rr
    end
    methods
        function set.Fl(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.foot_input'};
            validateattributes(val, validClasses, validAttributes, 'inputs', 'Fl')
            obj.Fl = val;
        end
        function set.Fr(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.foot_input'};
            validateattributes(val, validClasses, validAttributes, 'inputs', 'Fr')
            obj.Fr = val;
        end
        function set.Rl(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.foot_input'};
            validateattributes(val, validClasses, validAttributes, 'inputs', 'Rl')
            obj.Rl = val;
        end
        function set.Rr(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.foot_input'};
            validateattributes(val, validClasses, validAttributes, 'inputs', 'Rr')
            obj.Rr = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.convex_mpc_controller.inputs.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.convex_mpc_controller.inputs(strObj);
        end
    end
end
