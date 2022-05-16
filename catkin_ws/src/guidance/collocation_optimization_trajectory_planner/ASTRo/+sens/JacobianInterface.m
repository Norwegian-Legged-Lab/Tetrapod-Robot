classdef JacobianInterface < handle
    %JACOBIANINTERFACE Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        OriginalFunctionName;
        Function;
        Value;
        OriginalDimensions;
        Path;
        Type;
        DomainName;
        Name;
    end
    
    methods
        function obj = JacobianInterface(fun, domain_name)
            %JACOBIANINTERFACE Construct an instance of this class
            %   Detailed explanation goes here
            obj.DomainName = domain_name;
            
            if ~isempty(fun)
                obj.OriginalFunctionName = fun.Name;
                obj.Name = strcat(obj.OriginalFunctionName, '_', obj.DomainName);
                obj.OriginalDimensions = size(fun);
                if obj.OriginalDimensions(2) ~= 1
                    fun_reshaped = SymExpression(zeros(obj.OriginalDimensions(1)*obj.OriginalDimensions(2), 1));

                    for i = 1:obj.OriginalDimensions(2)
                        fun_reshaped((obj.OriginalDimensions(1)*(i-1)+1):(obj.OriginalDimensions(1)*(i)),1) = fun(:,i);
                    end
                    obj.Function = SymFunction(obj.Name, fun_reshaped, fun.Vars);
                else
                    obj.Function = SymFunction(obj.Name, fun, fun.Vars);
                end

                if size(fun.Vars, 2) == 2
                    obj.Type = 'SecondOrder';
                else
                    obj.Type = 'FirstOrder';
                end
            end    
            obj.Value = [];
            obj.Path = 'gen/sens';

        end
        
        function obj = setValue(obj, value, originalDimensions)
            obj.Value = value;
            obj.OriginalDimensions = originalDimensions;
        end
        
        function compileJacobian(obj)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            obj.Function.exportJacobian(obj.Path);
        end
        
        function res = calcJacobian(obj, x, dx)
            sparsityName = strcat('Js_', obj.Name);
            valueName = strcat('J_', obj.Name);
            sparsity = feval(sparsityName, 0);

            if strcmp(obj.Type, 'SecondOrder')
                val = feval(valueName, x, dx);
            else
                val = feval(valueName, x);
            end
            if ~isempty(val)
                obj.Value = sparse(sparsity(:,1), sparsity(:,2), val, obj.OriginalDimensions(1)*obj.OriginalDimensions(2), 36);
            else
                obj.Value = zeros(obj.OriginalDimensions(1)*obj.OriginalDimensions(2), 36);
            end
            res = obj.Value;
        end
        
        function res = getPartial(obj, var)
            res = reshape(obj.Value(:, var), obj.OriginalDimensions(1), obj.OriginalDimensions(2));
        end
        
        function res = getColumnJacobian(obj, col_idx)
            assert((col_idx>=1 && col_idx<=obj.OriginalDimensions(2)));
            idx = ((col_idx-1)*obj.OriginalDimensions(1)+1):(col_idx*obj.OriginalDimensions(1));
            res = obj.Value(idx,:);
        end
        
        function res = getRowTransposedJacobian(obj, row_idx)
            assert((row_idx>=1 && row_idx<=obj.OriginalDimensions(1)));
            
            idx = (1:18:(obj.OriginalDimensions(1)*obj.OriginalDimensions(2))) + (row_idx - 1);
            res = obj.Value(idx,:);
        end
        
        function res = mtimes(obj1, obj2)
            if isa(obj1, 'sens.JacobianInterface')
                assert(all(obj1.OriginalDimensions(2) == size(obj2,1)) || isscalar(obj2));
                resVal = sens.prod1(obj1.Value, obj2, obj1.OriginalDimensions);
                if isscalar(obj2)
                    resDim = obj1.OriginalDimensions;
                else
                    resDim = [obj1.OriginalDimensions(1), size(obj2,2)];
                end
            elseif isa(obj2, 'sens.JacobianInterface')
                assert(all(size(obj1,2) == obj2.OriginalDimensions(1)) || isscalar(obj1));
                resVal = sens.prod2(obj1, obj2.Value, obj2.OriginalDimensions);
                if isscalar(obj1)
                    resDim = obj2.OriginalDimensions;
                else
                    resDim = [size(obj1,1), obj2.OriginalDimensions(2)];
                end
            end
            res = sens.JacobianInterface([], '');
            res.setValue(resVal, resDim);
        end            
        
        function res = mrdivide(obj1, obj2)
            if isa(obj1, 'sens.JacobianInterface')
                assert(all(obj1.OriginalDimensions(2) == size(obj2,2)) || isscalar(obj2));
                resVal = sens.rdiv1(obj1.Value, obj2, obj1.OriginalDimensions);
                resDim = [obj1.OriginalDimensions(1), size(obj2,1)];
                
            elseif isa(obj2, 'sens.JacobianInterface')
                assert(all(size(obj1,2) == obj2.OriginalDimensions(2)) || isscalar(obj1));
                resVal = sens.rdiv2(obj1, obj2.Value, obj2.OriginalDimensions);
                resDim = [size(obj1,1), obj2.OriginalDimensions(1)];
            end
            res = sens.JacobianInterface([], '');
            res.setValue(resVal, resDim);
        end
        
        function res = mldivide(obj1, obj2)
            if isa(obj1, 'sens.JacobianInterface')
                assert(all(obj1.OriginalDimensions(1) == size(obj2,1)) || isscalar(obj2));
                resVal = sens.ldiv1(obj1.Value, obj2, obj1.OriginalDimensions);
                resDim = [obj1.OriginalDimensions(2), size(obj2,2)];
                
            elseif isa(obj2, 'sens.JacobianInterface')
                assert(all(size(obj1,1) == obj2.OriginalDimensions(1)) || isscalar(obj1));
                resVal = sens.ldiv2(obj1, obj2.Value, obj2.OriginalDimensions);
                resDim = [size(obj1,2), obj2.OriginalDimensions(2)];
            end
            res = sens.JacobianInterface([], '');
            res.setValue(resVal, resDim);
        end
        
        function res = plus(obj1, obj2)
            assert(isa(obj1, 'sens.JacobianInterface') && isa(obj2, 'sens.JacobianInterface'));
            assert(all(obj1.OriginalDimensions == obj2.OriginalDimensions));
            res = sens.JacobianInterface([], '');
            res.setValue(obj1.Value + obj2.Value, obj1.OriginalDimensions);
        end
        
        function res = minus(obj1, obj2)
            assert(isa(obj1, 'sens.JacobianInterface') && isa(obj2, 'sens.JacobianInterface'));
            assert(all(obj1.OriginalDimensions == obj2.OriginalDimensions));
            res = sens.JacobianInterface([], '');
            res.setValue(obj1.Value - obj2.Value, obj1.OriginalDimensions);
        end

        function res = ctranspose(obj)
            n_var = size(obj.Value, 2);
            resVal = zeros(size(obj.Value));
            for i = 1:n_var
                resVal(:,i) = reshape(ctranspose(reshape(obj.Value(:,i), obj.OriginalDimensions)), [], 1);
            end
            resDim = [obj.OriginalDimensions(2), obj.OriginalDimensions(1)];
            res = sens.JacobianInterface([], '');
            res.setValue(resVal, resDim);
        end
        
        function res = uminus(obj)
            res = copy(obj);
            res.Value = -res.Value;
        end
        
        function res = vcat(obj1, obj2)
            assert(isa(obj2, 'sens.JacobianInterface'));
            assert(obj1.OriginalDimensions(2) == obj2.OriginalDimensions(2));
            
            if obj1.OriginalDimensions(1) == 0
                res = obj2;
            elseif obj2.OriginalDimensions(1) == 0
                res = obj1;
            else            
                M1 = [speye(obj1.OriginalDimensions(1)); sparse(obj2.OriginalDimensions(1), obj1.OriginalDimensions(1))];
                M2 = [sparse(obj1.OriginalDimensions(1), obj2.OriginalDimensions(1)); speye(obj2.OriginalDimensions(1))];            
                res = M1*obj1 + M2*obj2;
            end
        end
        
        function cp = copy(obj)
            cp = sens.JacobianInterface([], obj.DomainName);
            cp.OriginalFunctionName = obj.OriginalFunctionName;
            cp.Function = obj.Function;
            cp.Value = obj.Value;
            cp.OriginalDimensions = obj.OriginalDimensions;
            cp.Path = obj.Path;
            cp.Type = obj.Type;
            cp.DomainName = obj.DomainName;
            cp.Name = obj.Name;
        end
        
        function c = getCellMat(obj)
            nx = size(obj.Value, 2);
            c = cell(nx, 1);
            for i = 1:nx
                c{i} = reshape(obj.Value(:,i), obj.OriginalDimensions);
            end
        end
                
    end
end

