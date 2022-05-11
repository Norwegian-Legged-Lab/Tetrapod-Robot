function res = prod1(obj1, obj2, orig_dims)%#codegen
    n_vars = size(obj1,2);
    res = zeros(orig_dims(1)*size(obj2,2), n_vars);
    for i = 1:n_vars
        res(:,i) = reshape(reshape(obj1(:,i), orig_dims)*obj2, [], 1);
    end
%     res = reshape(reshape(obj1', [], orig_dims(2))*obj2, n_vars, [])';
end
