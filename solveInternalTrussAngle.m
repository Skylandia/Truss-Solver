function [angle] = solveInternalTrussAngle(trussGraph,pointTwo,pointZero,pointOne)
%solveInternalTrussAngles Solves the angle between 3 nodes
%   why am I doing this to myself
pointZero = [trussGraph.Nodes.x(pointZero),trussGraph.Nodes.y(pointZero)];
pointOne = [trussGraph.Nodes.x(pointOne),trussGraph.Nodes.y(pointOne)];
pointTwo = [trussGraph.Nodes.x(pointTwo),trussGraph.Nodes.y(pointTwo)];
angle = atan2(abs(det([pointTwo-pointZero;pointOne-pointZero])),dot(pointTwo-pointZero,pointOne-pointZero))*180/pi;
end

