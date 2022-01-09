function [trussGraph] = generateTrussGraph(nodeLocations, connectionsMatrix)
%generateTrussGraph Makes a graph that acts as a truss
%   generateTrussGraph takes in a , m * 2 matrix of all the nodes locations
%   in the format of [x_1, y_1; x_2, y_2 ... ] and n * 2 matrix
%   repersenting all the connections
%   Outputs a modified graph object with a nodes table with a colunm 
%   reserved for showing the number of sticks at a joint, and a edge table 
%   with cols reserved for type of beam, and saftey factor   
NodeTable = table(...
    nodeLocations(:,1),...
    nodeLocations(:,2),...
    (1:length(nodeLocations))',...
    ones(length(nodeLocations),1),... %preps number of sticks on joints
    'VariableNames',{'x','y','NodeID','Joint Thickness'}...
    );
EdgeTable = table(...
    connectionsMatrix,...
    (repelem({'Type 1 * 1'},length(connectionsMatrix)))',... % preps beam type column
    ones(length(connectionsMatrix),1),... % preps saftey factor columb
    ones(length(connectionsMatrix),1),... % preps force in memerber factor columb
    ones(length(connectionsMatrix),1),... % preps member lenght columb
    'VariableNames',{'EndNodes', 'Beam type', 'Safety Factor',...
    'Force in member','Member Length'});
trussGraph = graph(EdgeTable,NodeTable);

% calculate lengths
[c,~]=size(connectionsMatrix);
nodesY = trussGraph.Nodes.y;
nodesX = trussGraph.Nodes.x;
EndNodes = trussGraph.Edges.EndNodes;
lenArray=zeros(c,1);
parfor i=1:c
    temp=EndNodes(i,:)
    tempNodesY = nodesY;
    tempNodesX = nodesX;
    y=tempNodesY(temp(1,1))-tempNodesY(temp(1,2));
    x=tempNodesX(temp(1,1))-tempNodesX(temp(1,2));
    lenArray(i)=norm([x;y]);
end
trussGraph.Edges.("Member Length") = lenArray(1:end);

end