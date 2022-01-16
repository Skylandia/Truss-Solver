function [trussArray] = prepTrussArray(numTrusses, leftMostPoint, rightMostPoint)
%PREPTRUSSARRAY Prepaires a truss array, makes number even if not by
%rounding up
%   Detailed explanation goes here
if mod(numTrusses,2) == 1
    numTrusses = numTrusses + 1;
end
trussArray(1:numTrusses) = trussStruct();
for i = 1:length(trussArray)
    valid = false;
    while ~valid
        trussArray(i) = randomTruss(leftMostPoint, rightMostPoint);
        valid = trussArray(i).validateEdgeLengths(0.150) && (trussArray(i).numNodes < 100);
    end
end
end

