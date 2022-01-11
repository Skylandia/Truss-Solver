function [nodeArray] = nodeTable2Nodes(nodeTable)
%NODETABLE2NODES Converts a nodeTable to an array of Nodes
%   Detailed explanation goes here
nodeArrayLength = size(nodeTable.x,1);
nodeArray(nodeArrayLength,1) = Nodes();
for i = 1:nodeArrayLength
    [nodeArray(i).x]=(nodeTable.x(i));
    [nodeArray(i).y]=(nodeTable.y(i));
    [nodeArray(i).ID]=(nodeTable.NodeID(i));
end
end

