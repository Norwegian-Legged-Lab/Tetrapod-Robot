function [ground_expr] = GetGroundExpr(p_foot, type, attributes)
%GETGROUNDEXPR Summary of this function goes here
%   Detailed explanation goes here
switch type
    case 'flat'
        ground_expr = 0;
    case 'sloped'
        switch_factor = (tanh(attributes.switch_hardness*(p_foot(1) - attributes.delay_dist)) + 1)/2;
        ground_expr = attributes.scaling*switch_factor*p_foot(1);
    case 'skewed'
        switch_factor = (tanh(attributes.switch_hardness*(p_foot(1) - attributes.delay_dist)) + 1)/2;
        ground_expr = attributes.scaling*switch_factor*p_foot(2);
    case 'curved'
        switch_factor = (tanh(attributes.switch_hardness*(p_foot(1) - attributes.delay_dist)) + 1)/2;
        ground_expr = attributes.scaling*switch_factor*(p_foot(1) - attributes.delay_dist).^2/2;
    case 'twisted'
        switch_factor = (tanh(attributes.switch_hardness*(p_foot(1) - attributes.delay_dist)) + 1)/2;
        ground_expr = attributes.scaling*switch_factor*(p_foot(1) - attributes.delay_dist)*p_foot(2);
end

