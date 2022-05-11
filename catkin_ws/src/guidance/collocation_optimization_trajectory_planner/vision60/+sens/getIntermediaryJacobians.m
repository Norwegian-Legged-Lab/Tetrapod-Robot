function [intermediaryJacobians] = getIntermediaryJacobians(system)
%GETINTERMEDIARYJACOBIANS Summary of this function goes here
%   Detailed explanation goes here
nodes = system.Gamma.Nodes;
edges = system.Gamma.Edges;
n_nodes = height(nodes);

intermediaryJacobians = cell(n_nodes, 1);
for i=1:n_nodes
    intermediaryJacobians{i} = struct();
    
    domain = nodes.Domain{i};
    
    nx = domain.numState;
    dname = domain.Name;
    q = domain.States.x;
    dq = domain.States.dx;

    Mmat = domain.Mmat;

    h_cstr = struct2array(domain.HolonomicConstraints);
    n_cstr = length(h_cstr);
    cdim = sum([h_cstr.Dimension]);

    Je = SymExpression(zeros(cdim,nx));
    Jedot = SymExpression(zeros(cdim, nx));

    idx = 1;
    for j = 1:n_cstr
        cstr = h_cstr(j);
        Jh = cstr.ConstrJac;
        dJh = cstr.ConstrJacDot;
        cstr_indices = idx:(idx + cstr.Dimension - 1);
        Je(cstr_indices, :) = Jh;
        Jedot(cstr_indices, :) = dJh;
        idx = idx + cstr.Dimension;
    end

    Jefun = SymFunction('Je', Je, {q, dq});
    Jedotfun = SymFunction('Jedot', Jedot, {q, dq});
    Fv = domain.Fvec{1};


    %%
    y = struct2array(domain.VirtualConstraints);

    ny = length(y);
    y_a = cell(ny, 1);
    y_d = cell(ny, 1);
    tau = cell(ny, 1);

    dim_y = sum([y.Dimension]);


    idx = 1;
    y_a_intrf = cell(size(y));
    y_d_intrf = cell(size(y));

    %%
    for j = 1:ny
        y_i = y(j);
        nfun = length(y_i.ActualFuncs);
        y_a_intrf{j} = cell(nfun,1);
        for k = 1:nfun
            y_a_intrf{j}{k} = sens.JacobianInterface(y_i.ActualFuncs{k}, dname);
        end
        nfun_d = length(y_i.DesiredFuncs);
        for k = 1:nfun_d
            y_d_intrf{j}{k} = sens.JacobianInterface(y_i.DesiredFuncs{k}, dname);
        end
    end
    
    switching_funs = struct2array(domain.EventFuncs);
    s = switching_funs(1);

    %%
    MmatIntrf = sens.JacobianInterface(Mmat, dname);
    JeIntrf = sens.JacobianInterface(Jefun, dname);
    JedotIntrf = sens.JacobianInterface(Jedotfun, dname);
    FvIntrf = sens.JacobianInterface(Fv, dname);
    SIntrf = sens.JacobianInterface(s.ConstrExpr, dname);
    
    intermediaryJacobians{i}.J_Mmat = MmatIntrf;
    intermediaryJacobians{i}.J_Fv = FvIntrf;
    intermediaryJacobians{i}.J_Je = JeIntrf;
    intermediaryJacobians{i}.J_Jedot = JedotIntrf;
    intermediaryJacobians{i}.J_y_a = y_a_intrf;
    intermediaryJacobians{i}.J_y_d = y_d_intrf;
    intermediaryJacobians{i}.J_s = SIntrf;
    
end

end

