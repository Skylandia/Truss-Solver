function [trussArray] = thanosArray(trussArray)
%THANOSARRAY Snaps half the trusses, then replaces them
%   Detailed explanation goes here
halfArrayLength = length(trussArray)/2;
for i = 1:(halfArrayLength)
    trussArray(halfArrayLength+i) = trussArray(i).mutateTruss(trussArray(1)); 
end

