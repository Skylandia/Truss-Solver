function [trussStruct] = randTruss2(...
    leftMostPoint, rightMostPoint, loadZone)
%RANDTRUSS2 Summary of this function goes here
%   Detailed explanation goes here
loadNodeLocation = loadZone.pointInZone;
[leftBaseNodeCount, leftNodeGap] = detGapAndCount(leftMostPoint,loadNodeLocation);
[rightBaseNodeCount, rightNodeGap] = detGapAndCount(loadNodeLocation,rightMostPoint);
leftTrussInterval = leftNodeGap * (leftMostPoint - loadNodeLocation) / norm(leftMostPoint - loadNodeLocation);
rightTrussInterval = rightNodeGap * (loadNodeLocation - rightMostPoint) / norm(loadNodeLocation - rightMostPoint);

baseNodeCount = leftBaseNodeCount + rightBaseNodeCount;
%assemble node array
nodeArray = zeros(2*baseNodeCount-1, 2);
nodeArray(2:2:leftBaseNodeCount-1,:) = leftMostPoint
end


function [baseNodeCount, nodeGap] = detGapAndCount(leftMostPoint,rightMostPoint)
baseNodeCount = -1;
trussLength = norm(rightMostPoint - leftMostPoint);
while (baseNodeCount < 3) || (baseNodeCount > 49)
    baseNodeCount = ceil(trussLength / normrnd(0.09,0.027));
end
nodeGap = trussLength / baseNodeCount;
end