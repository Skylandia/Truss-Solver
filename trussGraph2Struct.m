function [trussStructOut] = trussGraph2Struct(trussGraph)
%TRUSSGRAPH2STRUCT Converts trussGraph to trussStruct
%   Detailed explanation goes here
edgeTable = trussGraph.Edges;
nodeArray = nodeTable2Nodes(trussGraph.Nodes);
edgesArrayLength = size(edgeTable.EndNodes,1);
edgesArray(edgesArrayLength,1) = Edges();
for i = 1:edgesArrayLength
    edgesArray(i) = Edges([...
        nodeArray(edgeTable.EndNodes(i,1)),...
        nodeArray(edgeTable.EndNodes(i,2))]);
end
trussStructOut = trussStruct(edgesArray, nodeArray);
end
