function [res] = ldiv1(obj1, obj2, orig_dims)
%LDIV1 Summary of this function goes here
%   Detailed explanation goes here
    n_vars = size(obj1,2);
    res = zeros(orig_dims(2)*size(obj2,2), n_vars);
    for i = 1:n_vars
        res(:,i) = reshape(reshape(obj1(:,i), orig_dims)\obj2, [], 1);
    end
end

