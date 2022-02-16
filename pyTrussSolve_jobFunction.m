function [g,trussStruct] = pyTrussSolve_jobFunction(...
    nodeLocations,...
    connectionsMatrix,...
    weightNode,...
    safteyFactor,...
    maxCost...
    )
%pyTrussSolve_jobFunction Is what I really want to do but I can't do this
%as a task without googling more
%   Detailed explanation goes here

nodeLocations = pyString2Double(nodeLocations);
connectionsMatrix = pyString2Double(connectionsMatrix);
weightNode = pyString2Double(weightNode);
safteyFactor = pyString2Double(safteyFactor);
maxCost = pyString2Double(maxCost);

trussStruct = generateTrussStruct(nodeLocations, connectionsMatrix, weightNode);
trussStruct = trussStruct.optimiseTrussCapasity(safteyFactor, maxCost);
endNodes = trussStruct.endNodes;
nodes = [[trussStruct.nodesArray.x];[trussStruct.nodesArray.y]]';
g = generateTrussGraph2(nodes, endNodes);


end

