function [eul_intr] = extr2intr(eul_extr, seq)
%EXTR2INTR Summary of this function goes here
%   Detailed explanation goes here
eul_intr = quat2eul(eul2quat(flip(eul_extr), reverse(seq)), seq);
end

