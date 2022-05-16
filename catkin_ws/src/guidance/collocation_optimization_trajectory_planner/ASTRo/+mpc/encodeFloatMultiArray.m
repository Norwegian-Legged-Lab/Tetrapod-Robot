function [outArray] = encodeFloatMultiArray(inArray)
%ENCODE Summary of this function goes here
%   Detailed explanation goes here
[size_row, size_col] = size(inArray);
outArray = rosmessage('std_msgs/Float64MultiArray');
outArray.Layout.Dim(1) = rosmessage('std_msgs/MultiArrayDimension');
outArray.Layout.Dim(1).Size = size_row;
outArray.Layout.Dim(1).Stride = size_row*size_col;
outArray.Layout.Dim(2) = rosmessage('std_msgs/MultiArrayDimension');
outArray.Layout.Dim(2).Size = size_col;
outArray.Layout.Dim(2).Stride = size_col;
outArray.Data = reshape(inArray, [], 1);
end

