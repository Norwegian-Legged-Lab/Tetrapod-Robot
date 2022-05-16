
classdef solveMpcResponse < ros.Message
    %solveMpcResponse MATLAB implementation of convex_mpc_controller/solveMpcResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'convex_mpc_controller/solveMpcResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '71188c608e5be2f9e4024375eaafa50b' % The MD5 Checksum of the message definition
        PropertyList = { 'States' 'Inputs' 'T' 'Solved' } % List of non-constant message properties
        ROSPropertyList = { 'states' 'inputs' 't' 'solved' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.convex_mpc_controller.states' ...
            'ros.msggen.convex_mpc_controller.inputs' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        States
        Inputs
        T
        Solved
    end
    methods
        function set.States(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.states'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcResponse', 'States')
            obj.States = val;
        end
        function set.Inputs(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.convex_mpc_controller.inputs'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcResponse', 'Inputs')
            obj.Inputs = val;
        end
        function set.T(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcResponse', 'T');
            obj.T = double(val);
        end
        function set.Solved(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'solveMpcResponse', 'Solved');
            obj.Solved = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.convex_mpc_controller.solveMpcResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.convex_mpc_controller.solveMpcResponse(strObj);
        end
    end
end