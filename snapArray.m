function [trussArray] = snapArray(trussArray, loadZone, restrictedZoneArray)
%THANOSARRAY Snaps half the trusses, then replaces them
%   Detailed explanation goes here
halfArrayLength = length(trussArray)/2;
lZone = parallel.pool.Constant(loadZone);
rArray = parallel.pool.Constant(restrictedZoneArray);
if ~iscell(trussArray)
    error("Not a cell array, use thanosTruss")
else
    outBoundArray = cell(1,halfArrayLength);
    parfor i = 1:(halfArrayLength)
        outBoundArray{i} = trussArray{i}.mutateTruss2(lZone.Value, rArray.Value);
    end
    trussArray(halfArrayLength+1:end) = outBoundArray;
end
