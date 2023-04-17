function [trussStructOut] = randomTruss(leftMostPoint,rightMostPoint)
%RANDOMTRUSS Generates a random truss
%   Detailed explanation goes here
baseNodeCount = -1;
trussLength = norm(rightMostPoint - leftMostPoint);
while (baseNodeCount < 7) || (baseNodeCount > 15)
    baseNodeCount = ceil(normrnd(11, 2)); % switched to hardcoded mean; change this if trusslength changes
end
nodeGap = trussLength / baseNodeCount;
weightNode = randi([0,1]) + baseNodeCount;
    
%assemble node array
nodeArray = zeros(2*baseNodeCount-1, 2);
%chooses a height between 0.050m and 0.090m
nodeArray(2:2:end-1,2) = 0.040 .* rand(baseNodeCount-1, 1) + 0.050;
nodeArray(3:2:end-2,2) = 0.020 .* rand(baseNodeCount-2, 1) - 0.010;
nodeArray(2:end-1,1) = (nodeGap / 2) * (2:(2*baseNodeCount-2))';
nodeArray(1,:) = leftMostPoint;
nodeArray(end,:) = rightMostPoint;
%Makes trussGraph connection array
connectionsArray = zeros(4*baseNodeCount-5, 2);
connectionsArray(1:(2*baseNodeCount-3), 1) = 1:(2*baseNodeCount-3);
connectionsArray(1:(2*baseNodeCount-3), 2) = 3:(2*baseNodeCount-1);
connectionsArray((2*baseNodeCount-2):end, 1) = 1:(2*baseNodeCount-2);
connectionsArray((2*baseNodeCount-2):end, 2) = 2:(2*baseNodeCount-1);

trussStructOut = generateTrussStruct(nodeArray, connectionsArray, weightNode);
end

