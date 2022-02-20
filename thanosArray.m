function [trussArray] = thanosArray(trussArray)
%THANOSARRAY Snaps half the trusses, then replaces them
%   Detailed explanation goes here
halfArrayLength = length(trussArray)/2;

if ~iscell(trussArray)
    for i = 1:(halfArrayLength)
        trussArray(halfArrayLength+i) = trussArray(i).mutateTruss(trussArray(1));
    end
else
    error("This is a cell array you muppet, use snapArray")
end

