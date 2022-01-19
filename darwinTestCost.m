numberOfTrusses = 100; %must be even
numberOfRuns = 5000;

trussArray = prepTrussArray(numberOfTrusses, [0,0],[0.450,0]);
trussArray = testTrussArrayCost(trussArray, 0.8, 650);
cheapestArray = zeros(1,numberOfRuns);
meanArray = zeros(1,numberOfRuns);
Video = VideoWriter('DP3 11','MPEG-4'); 
Video.FrameRate = 6; 
open(Video)
for i = 1:numberOfRuns
    cheapestArray(i) = trussArray(1).capasity;
    meanArray(i) = mean([trussArray.capasity]);
    
    % Video and Output Stuff
    subplot(2,1,1);
    plot(1:i, cheapestArray(1:i), 1:i, meanArray(1:i))
    legend({['Cheapest Truss Capacity: ', num2str(cheapestArray(i))],['Mean Truss Capacity: ', num2str(meanArray(i))]},...
        'Location','southeast')
    set(gca,'XAxisLocation','top','YAxisLocation','left');
    xlabel('Number of Generations')
    ylabel('Truss Capacity')
    subplot(2,1,2);
    t = trussArray(1);
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
    frame = getframe(gcf); %get frame
    writeVideo(Video, frame);
    
    
    trussArray = sortTrussArrayCost(trussArray);
    trussArray = thanosArray(trussArray);
    trussArray(numberOfTrusses/2 + 1:end) = testTrussArrayCost(trussArray(numberOfTrusses/2 + 1:end), 0.8, 650);
end