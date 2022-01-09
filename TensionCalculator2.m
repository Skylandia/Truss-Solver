function [trussGraphOut] = TensionCalculator2(trussGraph, weightMagnitude, weightNode)
%Calculates all the Tension(+) and compression(-) forces in every member
%and enters them into the 'Force in Member' column in the trussGraph table
%   trussGraph: must be created by GenerateTrussGraph
%   weightMagnitude: is a scalar, this is the weight on both trusses
%   weightNode: is the node number in the trussGraph at which the weight is
%   placed

% Locations of pin and roller nodes, pin is the left node and roller is the
% right
baseIndx=find(trussGraph.Nodes.y==0);
maximum=max(max(trussGraph.Nodes.x(baseIndx)));
minimum=min(min(trussGraph.Nodes.x(baseIndx)));
rollerNode=baseIndx(trussGraph.Nodes.x(baseIndx)==maximum);
pinNode=baseIndx(trussGraph.Nodes.x(baseIndx)==minimum);



r=trussGraph.numnodes;
c=trussGraph.numedges;
nodeEquationArray=zeros(r*2,c+3);

xEquationArray = zeros(r,c);
yEquationArray = zeros(r,c);
endNodes = trussGraph.Edges.EndNodes;
yVector = trussGraph.Nodes.y;
xVector = trussGraph.Nodes.x;

% NodeX then NodeY
% columns are members then FPin then FRoller
% array dimensions are members x nodes +2

% Node Equation Array layout
%        member1 member2... FyPin FyFroller FxPin (will be 0)
% Node1x
% Node1y
% Node2x
% ...

forceArray=zeros(r*2,1);
forceArray(weightNode*2)=abs(weightMagnitude);

% Setting supports for pin and roller nodes
nodeEquationArray(pinNode(1)*2, c+1)=1;
nodeEquationArray(rollerNode(1)*2,c+2)=1;

% force x on pin which will be 0
nodeEquationArray(pinNode(1)*2-1,c+3)=1;


% For every node
parfor i=1:r
    
    tempX = zeros(1,c);
    tempY = zeros(1,c);
    yVectorLoop = yVector;
    xVectorLoop = xVector;
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

nodeEquationArray(1:2:2*r,1:c) = xEquationArray(1:1:r,:);
nodeEquationArray(2:2:2*r,1:c) = yEquationArray(1:1:r,:);
TensionArray=nodeEquationArray\forceArray; %Solving the systems to find the tension array

trussGraphOut = trussGraph;
trussGraphOut.Edges.("Force in member") = TensionArray(1:end-3);
end