function [ground_constraint] = GetGroundConstraint(domain, p_foot, name, type, attributes)
%GETGROUNDEXPR Summary of this function goes here
%   Detailed explanation goes here
vars = {domain.States.x};
full_name = [name type];

if strcmp(type, 'flat')
    ground_expr = 0;
    params = {};
else
    d = SymVariable('d', 1);
    a = SymVariable('a', 1);
    k = SymVariable('k', 1);
    params = {d, a, k};
    switch_factor = (tanh(k*(p_foot(1) - d)) + 1)/2;
    switch type
        case 'sloped'
            ground_expr = a*switch_factor*(p_foot(1) - d);
        case 'skewed'
            ground_expr = a*switch_factor*p_foot(2);
        case 'curved'
            ground_expr = a*switch_factor*(p_foot(1) - d).^2/2;
        case 'twisted'
            ground_expr = a*switch_factor*(p_foot(1) - d)*p_foot(2);
    end
end
ground_fun = SymFunction(['u_' full_name '_' domain.Name], p_foot(3) - ground_expr, vars, params);
auxdata = {{attributes.delay_dist, attributes.scaling, attributes.switch_hardness}};
ground_constraint = UnilateralConstraint(domain, ground_fun, full_name, 'x', 'AuxData', auxdata);