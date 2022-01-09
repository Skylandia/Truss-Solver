function [trussGraphOut] = trussTest(nodeLocations, connectionsMatrix, weightLocation, maxCost, safteyFactor)
%trussTest Tests truss, calculates stuff ect.
%   Does my assignment for me

narginchk(4,5)

trussGraph = generateTrussGraph(nodeLocations, connectionsMatrix);
isPossible = true;
maxLoad = 1;

while isPossible
    trussGraph = TensionCalculator2(trussGraph,maxLoad,weightLocation);
    if nargin == 5
        trussGraph = findMemberType2(trussGraph, safteyFactor);
    else
        trussGraph = findMemberType2(trussGraph); 
    end
    trussGraph = nodeThiccnessFinder(trussGraph);
    [tempCost, isPossible] = generateCost(trussGraph, maxCost);
    if min(trussGraph.Edges.("Safety Factor")) < 1 || ~isPossible
        isPossible = 0;
        break
    end
    tempLoad = maxLoad;
    trussGraphOut = trussGraph;
    totalCost = tempCost;
    maxLoad = min(trussGraph.Edges.("Safety Factor"))*maxLoad;
end

fprintf("Total cost of one half of the truss is $%d\n",totalCost/2)
fprintf("The total cost of the bridge is $%d, the Max cost is $%d\nMax Load= %.2f N\n",...
    totalCost,maxCost, (tempLoad*min(trussGraphOut.Edges.("Safety Factor")))*2)
plotImageGraph(trussGraphOut)
cur_plot = gca;
cur_plot.YDir = 'normal';
end