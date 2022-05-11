function [res] = ldiv2(obj1, obj2, orig_dims)
%LDIV2 Summary of this function goes here
%   Detailed explanation goes here
    n_vars = size(obj2,2);
%     res1 = zeros(size(obj1,1)*orig_dims(2), n_vars);
%     for i = 1:n_vars
%         res1(:,i) = reshape(obj1\reshape(obj2(:,i), orig_dims), [], 1);
%     end
    res = reshape(obj1\(reshape(obj2,orig_dims(1), [])), [], n_vars);
end

