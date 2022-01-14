function [trussStructOut] = generateTrussStruct(nodeLocations, connectionsMatrix, weightNode)
%GENERATETRUSSSTRUCT Summary of this function goes here
%   Detailed explanation goes here
numNodes = size(nodeLocations,1);
numEdges = size(connectionsMatrix,1);
nodesArray(numNodes,1) = Nodes();
edgesArray(numEdges,1) = Edges();

for i = 1:numNodes
    [nodesArray(i).x]=(nodeLocations(i,1));
    [nodesArray(i).y]=(nodeLocations(i,2));
    [nodesArray(i).ID]=i;
end

for i = 1:numEdges
    edgesArray(i) = Edges([...
        nodesArray(connectionsMatrix(i,1)),...
        nodesArray(connectionsMatrix(i,2))]);
end

trussStructOut = trussStruct(edgesArray, nodesArray, weightNode);
end

