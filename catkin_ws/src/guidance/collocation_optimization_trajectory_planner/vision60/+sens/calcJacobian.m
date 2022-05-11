function [J_f] = calcJacobian(t, x, domain, controller, params, intermediary_jacobians)
%CALCJACOBIAN Summary of this function goes here
%   Detailed explanation goes here

% calculate all basic jacobians;

nx = domain.numState;

q = x(1:nx);
dq = x(nx+1:end);
dx_dx = eye(2*nx);
dq_dx = dx_dx(1:nx,:);
ddq_dx = dx_dx(nx+1:end, :);

Mmat = domain.calcMassMatrix(q);
Fv = domain.calcDriftVector(q, dq);

intermediary_jacobians.J_q = sens.JacobianInterface([],'');
intermediary_jacobians.J_q.setValue(dq_dx, size(q));
intermediary_jacobians.J_dq = sens.JacobianInterface([], '');
intermediary_jacobians.J_dq.setValue(ddq_dx, size(dq));

intermediary_jacobians.J_Mmat.calcJacobian(q, dq);
intermediary_jacobians.J_Fv.calcJacobian(q,dq);
intermediary_jacobians.J_Je.calcJacobian(q,dq);
intermediary_jacobians.J_Jedot.calcJacobian(q,dq);


%% holonomic constraints
h_cstr_name = fieldnames(domain.HolonomicConstraints);
if ~isempty(h_cstr_name)           % if holonomic constraints are defined
    h_cstr = struct2array(domain.HolonomicConstraints);
    n_cstr = length(h_cstr);
    % determine the total dimension of the holonomic constraints
    cdim = sum([h_cstr.Dimension]);
    % initialize the Jacobian matrix
    Je = zeros(cdim,nx);
    Jedot = zeros(cdim,nx);

    idx = 1;
    for i=1:n_cstr
        cstr = h_cstr(i);

        % calculate the Jacobian
        [Jh,dJh] = calcJacobian(cstr,q,dq);
        cstr_indices = idx:idx+cstr.Dimension-1;
        tol = 1e-2;
        if norm(Jh*dq) > tol
            warning('The holonomic constraint %s violated.', h_cstr_name{i});
        end            
        Je(cstr_indices,:) = Jh;
        Jedot(cstr_indices,:) = dJh; 
        idx = idx + cstr.Dimension;
    end 
else
    Je = [];
    Jedot = [];
end

XiInv = Je * (Mmat \ transpose(Je));

%control input

control_name = fieldnames(domain.Inputs.Control);

Be = feval(domain.Gmap.Control.(control_name{1}).Name,q);

Ie = eye(nx);

% compute vector fields
% f(x)
vfc = [
    dq;
    Mmat \ ((Ie-transpose(Je) * (XiInv \ (Je / Mmat))) * (Fv) - transpose(Je) * (XiInv \ Jedot * dq))];


% g(x)
gfc = [
    zeros(size(Be));
    Mmat \ (Ie - transpose(Je)* (XiInv \ (Je / Mmat))) * Be];

% compute control inputs
if ~isempty(controller)
u = calcControl(controller, t, x, vfc, gfc, domain, params, []);
else
u = zeros(size(Be,2),1);
end
Gv_u = Be*u;
obj.inputs_.Control.(control_name{1}) = u;




intermediary_jacobians.J_mu = sens.JacobianInterface([], '');
intermediary_jacobians.J_mu.setValue(zeros(0,2*nx), [0, 1]);

J_mu_i = copy(intermediary_jacobians.J_mu);

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
    n_yi = length(intermediary_jacobians.J_y_a{i});
    for j = 1:n_yi
        intermediary_jacobians.J_y_a{i}{j}.calcJacobian(q,dq);
        intermediary_jacobians.J_y_a{i}{j} = y_i.SelectionMatrix*intermediary_jacobians.J_y_a{i}{j};
    end

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
    
    J_mu_i.setValue(zeros(y_i.Dimension, length(x)), [y_i.Dimension, 1]);

    for j=1:y_i.RelativeDegree
        mu(y_indices) = mu(y_indices) + K(j)*(y_a{i}{j}-y_d{i}{j});
        J_mu_i = J_mu_i + K(j)*intermediary_jacobians.J_y_a{i}{j};
    end
    intermediary_jacobians.J_mu = intermediary_jacobians.J_mu.vcat(J_mu_i);
    % update the starting index for the next output
    idx = idx+y_i.Dimension;

end

A_mat = DLfy*gfc;
Lf_mat = DLfy*vfc;


% feedforward controller
if strcmp(y_i.PhaseType, 'TimeBased')
    u_ff = - A_mat \ (Lf_mat - ddy);
else
    u_ff = - A_mat \ Lf_mat;
end
% feedback controller
u_fb = -A_mat \ mu;

u = u_ff + u_fb;

%% Calculate constraint wrench of holonomic constraints

% Calculate constrained forces
Gv_c = zeros(nx,1);
if ~isempty(h_cstr_name)
    lambda = -XiInv \ (Jedot * dq + Je * (Mmat \ (Fv + Gv_u)));
    % the constrained wrench inputs
    Gv_c = transpose(Je)*lambda;

else
    hval = [];
end

Gv = Gv_u + Gv_c;

m = intermediary_jacobians.J_y_a{1}{end}.OriginalDimensions(2);
p = length(intermediary_jacobians.J_y_a);

counting_idx = zeros(1, sum([intermediary_jacobians.J_y_a{:}{end}.OriginalDimensions(1)]));
outer_idx = zeros(1, sum([intermediary_jacobians.J_y_a{:}{end}.OriginalDimensions(1)]));
sum_ni = 0;

for i = 1:p
    ni = intermediary_jacobians.J_y_a{i}{end}.OriginalDimensions(1);
    counting_idx((sum_ni+1):(sum_ni+ni)) = (1:ni) + sum_ni;
    outer_idx((sum_ni+1):(sum_ni+ni)) = ni*ones(1,ni);
    sum_ni = sum_ni + ni;
end

idx = kron(ones(1,m),counting_idx) + kron((1:m)-1, outer_idx);

J_DLfy = reshape([intermediary_jacobians.J_y_a{:}{end}.Value],[],length(x));

J_DLfy = J_DLfy(idx,:);

intermediary_jacobians.J_DLfy = sens.JacobianInterface([], '');

intermediary_jacobians.J_DLfy.setValue(J_DLfy, [dim_y, length(x)]);

intermediary_jacobians.J_MmatInv = -Mmat\(intermediary_jacobians.J_Mmat/Mmat);

%J_XiInv


intermediary_jacobians.J_XiInv = intermediary_jacobians.J_Je*(Mmat\(Je')) + Je*intermediary_jacobians.J_MmatInv*(Je') + Je*(Mmat\(intermediary_jacobians.J_Je'));

intermediary_jacobians.J_XiInvInv = -XiInv\(intermediary_jacobians.J_XiInv/XiInv);
%%
% vfc derivative

T2 = (intermediary_jacobians.J_Je')/XiInv + (Je')*intermediary_jacobians.J_XiInvInv;

T3 = intermediary_jacobians.J_Je*(Mmat\Fv) + Je*intermediary_jacobians.J_MmatInv*Fv + (Je/Mmat)*intermediary_jacobians.J_Fv + intermediary_jacobians.J_Jedot*dq + Jedot*intermediary_jacobians.J_dq;
%%
T4 = intermediary_jacobians.J_Fv - T2*(Je*(Mmat\Fv) + Jedot*dq) - (Je')*(XiInv\T3);

J_vfc_under = Mmat\T4 + intermediary_jacobians.J_MmatInv*(Fv - Je'*(XiInv\(Je*(Mmat\Fv) + Jedot*dq)));
J_vfc = [intermediary_jacobians.J_dq.getColumnJacobian(1); J_vfc_under.getColumnJacobian(1)];

intermediary_jacobians.J_vfc = sens.JacobianInterface([], '');
intermediary_jacobians.J_vfc.setValue(J_vfc, [J_vfc_under.OriginalDimensions(1) + intermediary_jacobians.J_dq.OriginalDimensions(1), J_vfc_under.OriginalDimensions(2)]);

% gfc derivative

T1 = (intermediary_jacobians.J_Je')*(XiInv\(Je/Mmat)) + (Je')*intermediary_jacobians.J_XiInvInv*Je/Mmat + (Je')*(XiInv\(intermediary_jacobians.J_Je/Mmat)) + (Je')*(XiInv\(Je*intermediary_jacobians.J_MmatInv));

mmatDim = size(Mmat,1);

J_gfc_under = intermediary_jacobians.J_MmatInv*(eye(mmatDim) - (Je')*(XiInv\(Je/Mmat)))*Be - Mmat\(T1*Be);

d_be_dx = sens.JacobianInterface([], '');
d_be_dx.setValue(zeros(numel(Be),nx*2), size(Be));

intermediary_jacobians.J_gfc = d_be_dx.vcat(J_gfc_under);


intermediary_jacobians.J_Lfmat = intermediary_jacobians.J_DLfy*vfc + DLfy*intermediary_jacobians.J_vfc;

intermediary_jacobians.J_Amat = intermediary_jacobians.J_DLfy*gfc + DLfy*intermediary_jacobians.J_gfc;

% A_matLinv = pinv(A_mat);
% 
% intermediary_jacobians.J_AmatLInv = -A_matLinv*intermediary_jacobians.J_Amat*A_matLinv ...
%     + A_matLinv*A_matLinv'*(intermediary_jacobians.J_Amat')*(eye(size(A_mat,1)) - A_mat*A_matLinv) ...
%     + (eye(size(A_mat,2)) - A_matLinv*A_mat)*(intermediary_jacobians.J_Amat')*(A_matLinv'*A_matLinv);

intermediary_jacobians.J_AmatInv = -A_mat\intermediary_jacobians.J_Amat/A_mat;

intermediary_jacobians.J_u_ff = -intermediary_jacobians.J_AmatInv*(Lf_mat - ddy) - A_mat\intermediary_jacobians.J_Lfmat;

intermediary_jacobians.J_u_fb = -intermediary_jacobians.J_AmatInv*mu - A_mat\(intermediary_jacobians.J_mu);

intermediary_jacobians.J_Gv_u = Be*(intermediary_jacobians.J_u_ff + intermediary_jacobians.J_u_fb);

% J_lambda
T1 = intermediary_jacobians.J_Je/Mmat + Je*intermediary_jacobians.J_MmatInv;
T2 = intermediary_jacobians.J_Jedot*dq + Jedot*intermediary_jacobians.J_dq + T1*(Fv + Gv_u) + Je*(Mmat\(intermediary_jacobians.J_Fv + intermediary_jacobians.J_Gv_u));

intermediary_jacobians.J_lambda = -intermediary_jacobians.J_XiInvInv*(Jedot*dq + Je*(Mmat\(Fv + Gv_u))) - XiInv\T2;

%J_Gv_c
intermediary_jacobians.J_Gv_c = (intermediary_jacobians.J_Je')*lambda + Je'*intermediary_jacobians.J_lambda;

%J_Gv
intermediary_jacobians.J_Gv = intermediary_jacobians.J_Gv_u + intermediary_jacobians.J_Gv_c;

J_f_under = intermediary_jacobians.J_MmatInv*(Fv + Gv) + Mmat\(intermediary_jacobians.J_Fv + intermediary_jacobians.J_Gv);

J_f = [intermediary_jacobians.J_dq.getColumnJacobian(1); J_f_under.getColumnJacobian(1)];
end

