function [x] = receive2mpc(sub)
%RECEIVE2MPC Summary of this function goes here
%   Detailed explanation goes here
msg = sub.receive;
x = utils.gazebopose2mpcpose(reshape(msg.Data, [], 1));
end

