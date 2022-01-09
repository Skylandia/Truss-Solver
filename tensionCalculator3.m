function [tensionArray] = tensionCalculator3(nodesX,nodesY,numNodes,numEdges,endNodes, weightMagnitude, weightNode)
%Calculates all the Tension(+) and compression(-) forces in every member
%and enters them into the 'Force in Member' column in the trussGraph table
%   trussGraph: must be created by GenerateTrussGraph
%   weightMagnitude: is a scalar, this is the weight on both trusses
%   weightNode: is the node number in the trussGraph at which the weight is
%   placed

% Locations of pin and roller nodes, pin is the left node and roller is the
% right
baseIndx=find(nodesY==0);
maximum=max(max(nodesX(baseIndx)));
minimum=min(min(nodesX(baseIndx)));
rollerNode=baseIndx(nodesX(baseIndx)==maximum);
pinNode=baseIndx(nodesX(baseIndx)==minimum);

nodeEquationArray=zeros(numNodes*2,numEdges+3);

xEquationArray = zeros(numNodes,numEdges);
yEquationArray = zeros(numNodes,numEdges);

% NodeX then NodeY
% columns are members then FPin then FRoller
% array dimensions are members x nodes +2

% Node Equation Array layout
%        member1 member2... FyPin FyFroller FxPin (will be 0)
% Node1x
% Node1y
% Node2x
% ...

forceArray=zeros(numNodes*2,1);
forceArray(weightNode*2)=abs(weightMagnitude);

% Setting supports for pin and roller nodes
nodeEquationArray(pinNode(1)*2, numEdges+1)=1;
nodeEquationArray(rollerNode(1)*2,numEdges+2)=1;

% force x on pin which will be 0
nodeEquationArray(pinNode(1)*2-1,numEdges+3)=1;


% For every node
parfor i=1:numNodes
    
    tempX = zeros(1,numEdges);
    tempY = zeros(1,numEdges);
    yVectorLoop = nodesY;
    xVectorLoop = nodesX;
    [row,~] = find(endNodes==i);
    [~,col] = find(endNodes(row,:)~=i);
    col=flipud(col); % I have no clue why the column data is upside down
    refArray=endNodes(row,col);
    %    I have no clue why the hell the diagonal is the node data i want
    ref=diag(refArray);
  
    y=yVectorLoop(ref)-yVectorLoop(i);
    x=xVectorLoop(ref)-xVectorLoop(i);
    n= sqrt(sum([x,y].^2,2));
    xnorm=x./n;
    ynorm=y./n;
    
    tempX(1,row)=xnorm; %Odd rows are sum Fx
    tempY(1,row)=ynorm;   %Even rows are sum Fy
    xEquationArray(i,:) = tempX;
    yEquationArray(i,:) = tempY;
    
end

nodeEquationArray(1:2:2*numNodes,1:numEdges) = xEquationArray(1:1:numNodes,:);
nodeEquationArray(2:2:2*numNodes,1:numEdges) = yEquationArray(1:1:numNodes,:);
tensionArray=nodeEquationArray\forceArray; %Solving the systems to find the tension array

end
