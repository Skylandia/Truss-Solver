function [trussArray] = prepTrussArray(numTrusses, leftMostPoint, rightMostPoint)
%PREPTRUSSARRAY Prepaires a truss array, makes number even if not by
%rounding up
%   Detailed explanation goes here
if mod(numTrusses,2) == 1
    numTrusses = numTrusses + 1;
end
trussArray(1:numTrusses) = trussStruct();
for i = 1:length(trussArray)
    trussArray(i) = randomTruss(leftMostPoint, rightMostPoint) ;
end
end

