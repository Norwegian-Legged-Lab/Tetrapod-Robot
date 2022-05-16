function [Jedot] = calcJedot(domain,x)
%CALCJE Summary of this function goes here
%   Detailed explanation goes here
nx = 18;
q = x(1:nx);
dq = x(nx+1:end);

h_cstr_name = fieldnames(domain.HolonomicConstraints);
if ~isempty(h_cstr_name)           % if holonomic constraints are defined
    h_cstr = struct2array(domain.HolonomicConstraints);
    n_cstr = length(h_cstr);
    % determine the total dimension of the holonomic constraints
    cdim = sum([h_cstr.Dimension]);
    % initialize the Jacobian matrix
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
        Jedot(cstr_indices,:) = dJh; 
        idx = idx + cstr.Dimension;
    end 
else
    Jedot = [];
end
end

