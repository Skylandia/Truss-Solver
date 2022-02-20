function [trussArray] = prepTrussArray2(numTrusses, leftMostPoint, rightMostPoint, loadZone, restrictedZoneArray)
%PREPTRUSSARRAY Prepaires a truss array, makes number even if not by
%rounding up
%   Detailed explanation goes here
if mod(numTrusses,2) == 1
    numTrusses = numTrusses + 1;
end
trussArray = cell(1,numTrusses);
parfor i = 1:length(trussArray)
    valid = false;
    while ~valid
        trussArray{i} = randTruss2(leftMostPoint, rightMostPoint, loadZone);
        valid = obj.validateEdgeLengths(0.150) && loadZone.isPossible(obj)...
            && all(cellfun(@(panic) isRestricted(panic,obj), restrictedZoneArray));
    end
end
end

