function [outboundString] = pyTrussSolve_input(...
    nodeLocations,...
    connectionsMatrix,...
    weightNode,...
    safteyFactor,...
    maxCost, ...
    discordID)
%pyTrussSolve_input Scheduals a job to solve a truss, and handles the
%output to the Discord Bot
%   Detailed explanation goes here
cluster = parcluster('local');
job = createJob(cluster);

createTask(job, @pyTrussSolve_jobFunction, 2, {...
    nodeLocations,...
    connectionsMatrix,...
    weightNode,...
    safteyFactor,...
    maxCost...
    })
submit(job)
wait(job)
cg = fetchOutputs(job);
g = cg{1};
trussStruct = cg{2};
delete(job)
f = figure();
gp = plot(g,'XData',g.Nodes.x,'YData',g.Nodes.y,...
   'Marker','s','MarkerSize',5);
ax = ancestor(gp,'axes');
axis(ax,'ij');
axis(ax,'equal');
ax.YDir = 'normal';
exportgraphics(f,append('C:\Users\Mack\Documents\MATLAB\Truss Solver\OutboundGraphics\',int2str(discordID),'.png'));
close(f)
outboundString = sprintf('Truss Cost: $%.2f\nTruss Capasity: %.3fN', trussStruct.cost, trussStruct.capasity);
end
