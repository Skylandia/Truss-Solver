numberOfTrusses = 500; %must be even
numberOfRuns = 720;

trussArray = prepTrussArray(numberOfTrusses, [0,0],[0.450,0]);
trussArray = testTrussArray(trussArray, 0.8, 280000);
maxArray = zeros(1,numberOfRuns);
meanArray = zeros(1,numberOfRuns);
Video = VideoWriter('DP3 12','MPEG-4'); 
Video.FrameRate = 6; 
open(Video)
for i = 1:numberOfRuns
    maxArray(i) = max([trussArray.capasity]);
    meanArray(i) = mean([trussArray.capasity]);
    
    % Video and Output Stuff
    subplot(2,1,1);
    plot(1:i, maxArray(1:i), 1:i, meanArray(1:i))
    legend({['Highest Truss Capacity: ', num2str(maxArray(i))],['Mean Truss Capacity: ', num2str(meanArray(i))]},...
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
    
    
    trussArray = sortTrussArray(trussArray);
    trussArray = thanosArray(trussArray);
    trussArray(numberOfTrusses/2 + 1:end) = testTrussArray(trussArray(numberOfTrusses/2 + 1:end), 0.8, 280000);
end
close(Video)