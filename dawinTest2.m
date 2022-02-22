numberOfTrusses = 500; %must be even
numberOfRuns = 720;
leftMostPoint = [-0.005,0];
rightMostPoint = [0.455,0];
safteyFactor = 0.8;
maxCost = 280000;
loadZone = zones( ...
    shapes.rectangle, ...
    zoneType.load, ...
    [0.150,0.150;0.200,-0.150]);
%restricted zones
leftEdge = zones( ...
    shapes.rectangle, ...
    zoneType.platform, ...
    [-0.150,-0.001;0,-0.150]);
rightEdge = zones( ...
    shapes.rectangle, ...
    zoneType.platform, ...
    [0.450,-0.001;0.600,-0.150]);
bottomForbiddenZone1 = zones( ...
    shapes.rectangle, ...
    zoneType.restricted, ...
    [0.350,-0.001;0.450,-0.150]);
bottomForbiddenZone2 = zones( ...
    shapes.rectangle, ...
    zoneType.restricted, ...
    [0,-0.150;0.450,-0.160]);
circleForbiddenZone = zones( ...
    shapes.circle, ...
    zoneType.restricted, ...
    [0.025,0.025,0.125]);
restrictedZoneArray = {leftEdge, rightEdge, bottomForbiddenZone1, bottomForbiddenZone2, circleForbiddenZone};

gcp
pctRunOnAll warning off %this is a really crap idea

trussArray = prepTrussArray2(numberOfTrusses, leftMostPoint, rightMostPoint, loadZone, restrictedZoneArray);
trussArray = testTrussArray(trussArray, safteyFactor, maxCost);
maxArray = zeros(1,numberOfRuns);
meanArray = zeros(1,numberOfRuns);
Video = VideoWriter('DP3 17','MPEG-4'); 
Video.FrameRate = 6; 
open(Video)
for i = 1:numberOfRuns
    maxArray(i) = max(cellfun(@(ahhhhh) ahhhhh.capasity, trussArray));
    meanArray(i) = mean(cellfun(@(ahhhhh) ahhhhh.capasity, trussArray));
    
    % Video and Output Stuff
    subplot(2,1,1);
    plot(1:i, maxArray(1:i), 1:i, meanArray(1:i))
    legend({['Highest Truss Capacity: ', num2str(maxArray(i))],['Mean Truss Capacity: ', num2str(meanArray(i))]},...
        'Location','southeast')
    set(gca,'XAxisLocation','top','YAxisLocation','left');
    xlabel('Number of Generations')
    ylabel('Truss Capacity')
    subplot(2,1,2);
    t = trussArray{1};
    endNodes = t.endNodes;
    nodes = [[t.nodesArray.x];[t.nodesArray.y]]';
    graph = generateTrussGraph2(nodes, endNodes);
    h = plotImageGraph(graph);
    highlight(h,t.weightNode,'NodeColor','r')
    title('Current Best Truss Design')
    dim = [.15 .2 .2 .2];
    str = {['Cost: ', num2str(t.cost)], ['Capacity: ', num2str(t.capasity)]};
    cur_plot = gca;
    cur_plot.YDir = 'normal';
    plotZone(cur_plot, loadZone)
    cellfun(@(sad) plotZone(cur_plot, sad), restrictedZoneArray)
    frame = getframe(gcf); %get frame
    writeVideo(Video, frame);
    
    
    trussArray = sortTrussArray(trussArray);
    trussArray = snapArray(trussArray, loadZone, restrictedZoneArray);
    trussArray(numberOfTrusses/2 + 1:end) = testTrussArray(trussArray(numberOfTrusses/2 + 1:end), safteyFactor, maxCost);
end
close(Video)