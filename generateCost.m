function [totalCost, isPossible] = generateCost(trussGraph, MaxCost)
%Generates cost of the truss given Beam types
%   Input trussGraph and Max cost
%   isPossible will return 1 if possible and 0 if not
totalCost=0;
%Calculating total cost of the nodes
[~, ~, ~, member_table]= generateTrussTables();
isPossible=true;
for i =1:length(trussGraph.Nodes.("Joint Thickness"))
    if trussGraph.Nodes.("Joint Thickness")(i)<=5
        totalCost=totalCost+150;
    elseif trussGraph.Nodes.("Joint Thickness")(i)<=7
        totalCost=totalCost+300;
    else
        isPossible=false;
        fprintf("node %d has too many members on the joint", i)
    end
end
% Total cost of the member types
for i=1:length(trussGraph.Edges.("Beam type"))
    typeIndx=find(contains(member_table.("Member Type"),trussGraph.Edges.("Beam type")(i)));
    if trussGraph.Edges.("Member Length")(i)<= 0.09
        totalCost=totalCost+member_table.("<= 90mm long")(typeIndx);
    else
        totalCost=totalCost+member_table.("> 90mm long")(typeIndx);
    end
end
totalCost=totalCost*2;
%if still possible 
if isPossible
    isPossible = totalCost<=MaxCost;
end
end