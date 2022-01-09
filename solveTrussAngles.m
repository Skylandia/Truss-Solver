function [angleVector] = solveTrussAngles(trussGraph)
%solveTruss finds the force in each member
%   Presuming that all forces are entering/pointing towards each node, 
%   meaning that positive forces are in compression, and negative forces
%   are in tension. Presumes node 1 is a pin, and node end is a roller
%   supporting only on the y axis

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

angleVector = acosd(normalisedVectors(1,:))'

end