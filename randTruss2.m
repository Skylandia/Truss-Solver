function [trussStruct] = randTruss2(...
    leftMostPoint, rightMostPoint, loadZone)
%RANDTRUSS2 Summary of this function goes here
%   Detailed explanation goes here
loadNodeLocation = loadZone.pointInZone;
[leftBaseNodeCount, leftNodeGap] = detGapAndCount(leftMostPoint,loadNodeLocation);
[rightBaseNodeCount, rightNodeGap] = detGapAndCount(loadNodeLocation,rightMostPoint);
leftTrussInterval = leftNodeGap * (loadNodeLocation - leftMostPoint) / norm(loadNodeLocation - leftMostPoint);
rightTrussInterval = rightNodeGap * (rightMostPoint - loadNodeLocation) / norm(rightMostPoint - loadNodeLocation);

baseNodeCount = leftBaseNodeCount + rightBaseNodeCount + 1;
%assemble node array
nodeArray = zeros(2*baseNodeCount-1, 2);
nodeArray(1:2*leftBaseNodeCount+1,:) = [leftMostPoint(1):leftTrussInterval(1)/2:loadNodeLocation(1);leftMostPoint(2):leftTrussInterval(2)/2:loadNodeLocation(2)]';
nodeArray(2*leftBaseNodeCount+1:end,:) = [loadNodeLocation(1):rightTrussInterval(1)/2:rightMostPoint(1);loadNodeLocation(2):rightTrussInterval(2)/2:rightMostPoint(2)]';
normLTI = [-leftTrussInterval(2),leftTrussInterval(1)] / norm(leftTrussInterval);
normRTI = [-rightTrussInterval(2),rightTrussInterval(1)] / norm(rightTrussInterval);
negOneorOne = (randi([0,1],'double') - 0.5) * 2;
nodeArray(2:2:2*leftBaseNodeCount,:) = nodeArray(2:2:2*leftBaseNodeCount,:) + normLTI .* (0.040 .* rand(leftBaseNodeCount, 1) + 0.050) .* negOneorOne;
nodeArray(2*leftBaseNodeCount+2:2:end,:) = nodeArray(2*leftBaseNodeCount+2:2:end,:) + normRTI .* (0.040 .* rand(rightBaseNodeCount, 1) + 0.050) .* negOneorOne;
%Makes trussGraph connection array
connectionsArray = zeros(4*baseNodeCount-5,2);
connectionsArray(1:(2*baseNodeCount-3),1) = 1:(2*baseNodeCount-3);
connectionsArray(1:(2*baseNodeCount-3),2) = 3:(2*baseNodeCount-1);
connectionsArray((2*baseNodeCount-2):end,1) = 1:(2*baseNodeCount-2);
connectionsArray((2*baseNodeCount-2):end,2) = 2:(2*baseNodeCount-1);
%Makes the nodes a *bit* more random
nodeArray(2:2*leftBaseNodeCount,:) = nodeArray(2:2*leftBaseNodeCount,:) + normrnd(0,0.00255,[2*leftBaseNodeCount-1,2]);
nodeArray(2*leftBaseNodeCount+2:end-1,:) = nodeArray(2*leftBaseNodeCount+2:end-1,:) + normrnd(0,0.00255,[2*rightBaseNodeCount-1,2]);
trussStruct = generateTrussStruct(nodeArray, connectionsArray, 2*leftBaseNodeCount+1);
end


function [baseNodeCount, nodeGap] = detGapAndCount(leftMostPoint,rightMostPoint)
baseNodeCount = -1;
trussLength = norm(rightMostPoint - leftMostPoint);
while (baseNodeCount < 3) || (baseNodeCount > 49)
    baseNodeCount = ceil(trussLength / normrnd(0.09,0.027));
end
nodeGap = trussLength / baseNodeCount;
end