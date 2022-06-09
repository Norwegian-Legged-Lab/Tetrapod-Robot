function compileJacobiansDomain(domain, export_path)
%COMPILEJACOBIANSDOMAIN Summary of this function goes here
%   Detailed explanation goes here

if nargin < 2
    export_path = 'gen/sens';
end

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
for i = 1:n_cstr
    cstr = h_cstr(i);
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

DLfy = SymExpression(zeros(dim_y, length(q)));
ddy = SymExpression(zeros(dim_y, 1));
mu = SymExpression(zeros(dim_y, 1));

idx = 1;
y_a_intrf = cell(size(y));
y_d_intrf = cell(size(y));

%%
for i = 1:ny
    y_i = y(i);
    nfun = length(y_i.ActualFuncs);
    y_a_intrf{i} = cell(nfun,1);
    for j = 1:nfun
        y_a_intrf{i}{j} = sens.JacobianInterface(y_i.ActualFuncs{j}, dname, export_path);
        y_a_intrf{i}{j}.compileJacobian();
    end
    nfun_d = length(y_i.DesiredFuncs);
    for j = 1:nfun_d
        y_d_intrf{i}{j} = sens.JacobianInterface(y_i.DesiredFuncs{j}, dname, export_path);
        y_d_intrf{i}{j}.compileJacobian();
    end
end

switching_funs = struct2array(domain.EventFuncs);
s = switching_funs(1);


%%
MmatIntrf = sens.JacobianInterface(Mmat, dname, export_path);
JeIntrf = sens.JacobianInterface(Jefun, dname, export_path);
JedotIntrf = sens.JacobianInterface(Jedotfun, dname, export_path);
FvIntrf = sens.JacobianInterface(Fv, dname, export_path);
SIntrf = sens.JacobianInterface(s.ConstrExpr, dname, export_path);

MmatIntrf.compileJacobian();
JeIntrf.compileJacobian();
JedotIntrf.compileJacobian();
FvIntrf.compileJacobian();
SIntrf.compileJacobian();
end

