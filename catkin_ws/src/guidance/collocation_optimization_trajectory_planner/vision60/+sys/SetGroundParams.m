function [ground_type, ground_attributes] = SetGroundParams(ground_type, ground_attributes)
%SETGROUNDPARAMS Summary of this function goes here
%   Detailed explanation goes here
valid_grounds = {'flat', 'sloped', 'skewed', 'curved', 'twisted'};

if ~(isstring(ground_type) || ischar(ground_type)) || ~any(strcmp(valid_grounds, ground_type))
    error('DiagonalStanceBMI: variable ground_type does not have a valid value');
end
if ~isfield(ground_attributes, 'delay_dist')
    ground_attributes.delay_dist = 2;
end
if ~isfield(ground_attributes, 'scaling')
    ground_attributes.scaling = 0.003;
end
if ~isfield(ground_attributes, 'switch_hardness')
    ground_attributes.switch_hardness = 100;
end
end

