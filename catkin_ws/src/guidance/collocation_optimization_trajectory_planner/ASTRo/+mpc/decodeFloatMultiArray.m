function [outArray] = decodeFloatMultiArray(inArray)
%DECODEFLOATMULTIARRAY Summary of this function goes here
%   Detailed explanation goes here
outArray = reshape(inArray.Data, inArray.Layout.Dim(1).Size, inArray.Layout.Dim(2).Size);
end

