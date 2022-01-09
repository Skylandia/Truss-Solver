function [trussGraph] = solveTrussMembers(trussGraph)
%solveTrussMembers finds the lengh of each member
%   finds the lenghs of the members in order of how they are inputed from
%   the truss graph, outputed into a truss graph

%preps some vector stuff
trussEndnodes = trussGraph.Edges.EndNodes';
normalisedVectors = trussEndnodes * 0;
for i = 1:length(normalisedVectors)
    tempVector_1 = [trussGraph.Nodes.x(trussEndnodes(1,i));...
        trussGraph.Nodes.y(trussEndnodes(1,i))];
    tempVector_2 = [trussGraph.Nodes.x(trussEndnodes(2,i));...
        trussGraph.Nodes.y(trussEndnodes(2,i))];
    normalisedVectors(:,i) = (tempVector_1 - tempVector_2)./norm(tempVector_1 - tempVector_2);
end

memberLengths = zeros(length(trussEndnodes),1);
for i = 1:length(normalisedVectors)
    tempVector_1 = [trussGraph.Nodes.x(trussEndnodes(1,i));...
        trussGraph.Nodes.y(trussEndnodes(1,i))];
    tempVector_2 = [trussGraph.Nodes.x(trussEndnodes(2,i));...
        trussGraph.Nodes.y(trussEndnodes(2,i))];
    memberLengths(i,:) = norm(tempVector_1 - tempVector_2);
end

end

