 function [trussGraphOut] = nodeThiccnessFinder(trussGraph)
%nodeThiccnessFinder does stuff to find what balt to use
%   https://scryfall.com/card/sok/84/one-with-nothing
[compressionTable, tensionTable, ~, ~] = generateTrussTables();

% % Old nodeThiccnessFinder Benchmark: 0.449s per call
% for i = 1:length(trussGraph.Nodes.NodeID)
%     nodesICareAboutRightNow = trussGraph.Edges(any(trussGraph.Edges.EndNodes == i, 2),:);
%     trussGraph.Nodes.("Joint Thickness")(i) = 0;
%     for j = 1:length(nodesICareAboutRightNow.("Member Length"))
%         if nodesICareAboutRightNow.("Force in member")(j) <= 0
%             trussGraph.Nodes.("Joint Thickness")(i) =...
%                 trussGraph.Nodes.("Joint Thickness")(i) +...
%                 compressionTable.("Joint Thickness")(...
%                 contains(compressionTable.("Member Type"),nodesICareAboutRightNow.("Beam type"){j}));
%         else
%              trussGraph.Nodes.("Joint Thickness")(i) =...
%                 trussGraph.Nodes.("Joint Thickness")(i) +...
%                 tensionTable.("Joint Thickness")(...
%                 contains(tensionTable.("Member Type"),nodesICareAboutRightNow.("Beam type"){j}));
%         end
%     end
% end
% trussGraphOut = trussGraph;

% New nodeThiccnessFinder
edges = trussGraph.Edges;
numNodes = trussGraph.numnodes;
nodeThiccness = zeros(numNodes,1);
parfor i = 1:numNodes
    edgesTemp = edges(any(edges.EndNodes == i, 2),:)
    curNodeThicc = 0;
    for j = 1:height(edgesTemp)
        if edgesTemp.("Force in member")(j) <= 0
            curNodeThicc = curNodeThicc + compressionTable.("Joint Thickness")...
                (contains(compressionTable.("Member Type"),edgesTemp.("Beam type"){j}));
        else
            curNodeThicc = curNodeThicc + tensionTable.("Joint Thickness")...
                (contains(tensionTable.("Member Type"),edgesTemp.("Beam type"){j}));
        end
    end
    nodeThiccness(i) = curNodeThicc;
end
trussGraph.Nodes.("Joint Thickness") = nodeThiccness;
trussGraphOut = trussGraph;
end
