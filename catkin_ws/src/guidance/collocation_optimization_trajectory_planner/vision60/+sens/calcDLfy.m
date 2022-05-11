function [DLfy] = calcDLfy(domain, params, t, x)
%CALCDLFY Summary of this function goes here
%   Detailed explanation goes here
nx = 18;
q = x(1:nx);
dq = x(nx+1:end);

y = struct2array(domain.VirtualConstraints);
ny = length(y);
y_a = cell(ny,1);
y_d = cell(ny,1);
tau = cell(ny,1);

dim_y = sum([y.Dimension]);
DLfy = zeros(dim_y, length(x));
ddy = zeros(dim_y, 1);
mu = zeros(dim_y, 1);
idx = 1;

for i = 1:ny
    y_i = y(i);

    offset_param = y_i.OffsetParamName;
    if y_i.hasOffset
        offset = params.(offset_param);
        y_a{i} = calcActual(y_i, q, dq, offset);
    else
        y_a{i} = calcActual(y_i, q, dq);
    end
    % extract the parameter values

    output_param = y_i.OutputParamName; % desired output parameters
    phase_param  = y_i.PhaseParamName;  % phase variable parameters


    if isfield(params,output_param)
        a = params.(output_param);
    else
        error('The parameter %s has not been specified in the ''params'' argument.\n', output_param);
    end

    if y_i.hasPhaseParam
        if isfield(params,phase_param)
            p = params.(phase_param);
        else
            error('The parameter %s has not been specified in the ''params'' argument.\n', phase_param);
        end
    else
        p = [];
    end
    % calculate the desired outputs
    y_d{i} = calcDesired(y_i, t, q, dq, a, p);
    % calculate the phase variable
    tau{i} = calcPhaseVariable(y_i, t, q, dq, p);


    control_param = ['k',y_i.Name];
    if isfield(params,control_param)
        K = params.(control_param);
        assert(length(K) == y_i.RelativeDegree,...
            'The expected length of the control gain parameter ''k'' is: %d\n', y_i.RelativeDegree);
    else
        if isfield(params, 'epsilon')
            ep = params.epsilon;
            K = ones(1, y_i.RelativeDegree);
            for l= 1:y_i.RelativeDegree
                K(l) = nchoosek(y_i.RelativeDegree,l-1)*ep^(y_i.RelativeDegree - l + 1); 
            end


        else
            error('The control gain %s has not been specified in the ''params'' argument.\n', control_param);
        end
    end

    % stack the partial derivatives of all outputs
    y_indices = idx:idx+y_i.Dimension-1;

    if strcmp(y_i.PhaseType, 'TimeBased')
        DLfy(y_indices,:) = y_a{i}{end};
        ddy(y_indices) = y_d{i}{end};
    else
        DLfy(y_indices,:) = y_a{i}{end} - y_d{i}{end};
    end
    
    for j=1:y_i.RelativeDegree
        mu(y_indices) = mu(y_indices) + K(j)*(y_a{i}{j}-y_d{i}{j});
    end
    % update the starting index for the next output
    idx = idx+y_i.Dimension;

end
end

