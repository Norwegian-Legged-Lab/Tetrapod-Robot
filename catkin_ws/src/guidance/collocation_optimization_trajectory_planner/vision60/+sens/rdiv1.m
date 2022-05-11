function [res] = rdiv1(obj1,obj2, orig_dims)
%RDIV1 Summary of this function goes here
%   Detailed explanation goes here
    n_vars = size(obj1,2);
    res = zeros(orig_dims(1)*size(obj2,1), n_vars);
    for i = 1:n_vars
        res(:,i) = reshape(reshape(obj1(:,i), orig_dims)/obj2, [], 1);
    end
end

