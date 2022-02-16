function [double] = pyString2Double(charArray)
%PYSTRING2DOUBLE Summary of this function goes here
%   Detailed explanation goes here
if charArray(1) == '['
    charArray = charArray(2:end-1);
end
charArray = split(charArray, ";");
charArray = split(charArray, ",");
double = str2double(charArray);
end

