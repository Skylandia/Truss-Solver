function [normalisedVectors] = normaliseTrussVectors(trussEndnodes)
%normaliseTrussVectors Normalises an array of 2D Vectors
%   Hope no one reads this
normalisedVectors = trussEndnodes * 0;
for i = 1:length(normalisedVectors)
    tempVector_1 = [trussGraph.Nodes.x(trussEndnodes(1,i));...
        trussGraph.Nodes.y(trussEndnodes(1,i))];
    tempVector_2 = [trussGraph.Nodes.x(trussEndnodes(2,i));...
        trussGraph.Nodes.y(trussEndnodes(2,i))];
    normalisedVectors(:,i) = tempVector_1 - tempVector_2;
end
end

