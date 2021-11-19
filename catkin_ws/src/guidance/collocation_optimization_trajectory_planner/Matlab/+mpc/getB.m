function [B] = getB(r, m, I_w)
%GETB r is 3xn matrix with vectors from com to each foothold in world
%coordinates
%   Detailed explanation goes here
num_footholds = size(r,2);

B = zeros(12, 3*num_footholds);

for i = 1:num_footholds
    B(7:9, 3*(i - 1) + 1:3*i) = eye(3)/m;
    B(10:12, 3*(i - 1) + 1:3*i) = I_w\cross([r(:,i),r(:,i),r(:,i)],eye(3));
end

end

