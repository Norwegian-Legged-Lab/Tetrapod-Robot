function [theta_1, theta_2] = PlanarLegInverseKinematics(x, z, l1, l2, l3)
%PLANARLEGINVERSEKINEMATICS Summary of this function goes here
%   Detailed explanation goes here

x = reshape(x, [], 1);

z = reshape(z, [], 1);

l2_prime = vecnorm([l2, l3]);

c_2_prime = (l1^2 + l2_prime^2 - x.^2 - z.^2)/(2*l1*l2_prime);

theta_2_prime = acos(c_2_prime);
 
theta_2 = theta_2_prime - atan2(l3, l2);

theta_1 = -asin(l2_prime./vecnorm([x'; z'])'.*sin(theta_2_prime)) + atan2(-z, -x);

if ~isreal([theta_1, theta_2])
    theta_1 = nan;
    theta_2 = nan;
end

theta_1 = wrapToPi(theta_1);

theta_2 = wrapToPi(theta_2);

if all(~isnan([theta_1, theta_2]))
    [x_reconstr, z_reconstr] = kin.PlanarLegForwardKinematics(theta_1, theta_2, l1, l2, l3);
    
    if any(abs([x_reconstr, z_reconstr] - [x, z]) >= 1e-8)
        theta_1 = nan;
        
        theta_2 = nan;
    end
end
        
end

