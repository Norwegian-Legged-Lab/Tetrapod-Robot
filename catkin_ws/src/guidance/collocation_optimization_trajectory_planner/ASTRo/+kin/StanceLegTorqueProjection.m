function [tau] = StanceLegTorqueProjection(p_js, f, l1, l2, l3)
%STANCELEGTORQUEPROJECTION Summary of this function goes here
%   Detailed explanation goes here
tau = zeros(3, size(p_js, 2));

for i=1:size(tau,2)
    c1 = cos(p_js(2, i));
    s1 = sin(p_js(2, i));
    c12 = cos(p_js(2,i) - p_js(3,i));
    s12 = sin(p_js(2,i) - p_js(3,i));
    J = [l1*s1 - l2*s12 + l3*c12, l2*s12 - l3*c12;
        -l1*c1 + l2*c12 + l3*s12, -l2*c12 - l3*s12];
    tau(2:3,i) = J.'*[f(1,i);f(3,i)];
end


end

