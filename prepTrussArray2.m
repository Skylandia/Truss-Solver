function [trussArray] = prepTrussArray2(numTrusses, leftMostPoint, rightMostPoint, loadZone, restrictedZoneArray)
%PREPTRUSSARRAY Prepaires a truss array, makes number even if not by
%rounding up
%   Detailed explanation goes here
if mod(numTrusses,2) == 1
    numTrusses = numTrusses + 1;
end
trussArray = cell(1,numTrusses);
for i = 1:length(trussArray)
    valid = false;
    while ~valid
        tempTruss = randTruss2(leftMostPoint, rightMostPoint, loadZone);
        valid = tempTruss.validateEdgeLengths(0.150) && loadZone.isWeightNodeInZone(tempTruss)...
            && all(cellfun(@(panic) isRestricted(panic,tempTruss), restrictedZoneArray));
        trussArray{i} = tempTruss;
    end
end
end

