function [eul_extr] = intr2extr(eul_intr, seq)
%INTR2EXTR Summary of this function goes here
%   Detailed explanation goes here
eul_extr = flip(quat2eul(eul2quat(eul_intr, seq), reverse(seq)));
end

