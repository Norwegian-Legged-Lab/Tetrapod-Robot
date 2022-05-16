function [J_xdot] = jacobian_analytic(domain, control, param, x, dx, smaller_jacobians)

domain = node.Domain{1};
params = node.Param{1};

nx = domain.numState;

params = system.Gamma.Nodes.Param{1};

q = domain.States.x;
dq = domain.States.dx;
x = [q; dq];


M = domain.Mmat;
Fv = domain.Fvec{1};

h_cstr = struct2array(domain.HolonomicConstraints);
n_cstr = length(h_cstr);
cdim = sum([h_cstr.Dimension]);

Je = SymExpression(zeros(cdim,nx));
Jedot = SymExpression(zeros(cdim, nx));
%%
idx = 1;
for i = 1:n_cstr
    cstr = h_cstr(i);
    Jh = cstr.ConstrJac;
    dJh = cstr.ConstrJacDot;
    cstr_indices = idx:(idx + cstr.Dimension - 1);
    Je(cstr_indices, :) = Jh;
    Jedot(cstr_indices, :) = dJh;
    idx = idx + cstr.Dimension;
end

Be = domain.Gmap.Control.u;
Ie = SymExpression(eye(nx));

XiInv = Je*(M / transpose(Je));

vfc = [
    dq;
    M \ ((Ie-transpose(Je) * (XiInv \ (Je / M))) * (Fv) - transpose(Je) * (XiInv \ Jedot * dq))];

gfc = [
    SymExpression(zeros(size(Be)));
    M \ (Ie - transpose(Je)* (XiInv \ (Je / M))) * Be];

%% expression for control input

y = struct2array(domain.VirtualConstraints);

ny = length(y);
y_a = cell(ny, 1);
y_d = cell(ny, 1);
tau = cell(ny, 1);

dim_y = sum([y.Dimension]);

DLfy = SymExpression(zeros(dim_y, length(q)));
ddy = SymExpression(zeros(dim_y, 1));
mu = SymExpression(zeros(dim_y, 1));

idx = 1;
for i = 1:ny
    y_i = y(i);
    y_a{i} = y_i.ActualFuncs;
    
    output_param = y_i.OutputParamName;
    phase_param = y_i.PhaseParamName;
    
    a = params.(output_param);
    p = params.(phase_param);
    
    y_d{i} = y_i.DesiredFuncs;
    
    tau{i} = y_i.PhaseFuncs;
    
    control_param = ['k',y_i.Name];

    if isfield(params,control_param)
        K = params.(control_param);
        assert(length(K) == y_i.RelativeDegree,...
            'The expected length of the control gain parameter ''k'' is: %d\n', y_i.RelativeDegree);
    else
        if isfield(params, 'epsilon')
            ep = params.epsilon;
            K = SymExpression(ones(1, y_i.RelativeDegree));
            for l= 1:y_i.RelativeDegree
                K(l) = nchoosek(y_i.RelativeDegree,l-1)*ep^(y_i.RelativeDegree - l + 1); 
            end


        else
            error('The control gain %s has not been specified in the ''params'' argument.\n', control_param);
        end


    end
    
    y_indices = idx:(idx+y_i.Dimension-1);
    
    if strcmp(y_i.PhaseType, 'TimeBased')
        DLfy(y_indices, :) = y_a{i}{end};
        ddy(y_indices) = y_d{i}{end};
    else
        DLfy(y_indices,:) = y_a{i}{end} - y_d{i}{end};
    end
    for j=1:y_i.RelativeDegree
        mu(y_indices) = mu(y_indices) + K(j)*(y_a{i}{j} - y_d{i}{j});
    end
    
    idx = idx+y_i.Dimension;
end


A_mat = DLfy*gfc;

Lf_mat = DLfy*vfc;

if strcmp(y_i.PhaseType, 'TimeBased')
    u_ff = - A_mat \ (Lf_mat - ddy);
else
    u_ff = - A_mat \ Lf_mat;
end

u_fb = -A_mat \ mu;

u = u_ff + u_fb;

Gv_u = Be*u;


Gv = Gv_u; %Gv_ext = zeros (?)

lambda = -XiInv \ (Jedot * dq + Je * (M \ (Fv + Gv)));

Gv_c = transpose(Je)*lambda;

Gv = Gv + Gv_c;

xdot = [dq;
    M \ (Fv + Gv)];

J_xdot = xdot.jacobian(x);
end