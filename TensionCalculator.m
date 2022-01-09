function [trussGraphOut] = TensionCalculator(trussGraph, weightMagnitude, weightNode)
%Calculates all the Tension(+) and compression(-) forces in every member
%and enters them into the 'Force in Member' column in the trussGraph table
%   trussGraph: must be created by GenerateTrussGraph
%   weightMagnitude: is a scalar
%   weightNode: is the node number in the trussGraph at which the weight is
%   placed

% Locations of pin and roller nodes, pin is the left node and roller is the
% right
endNodes = trussGraph.Edges.EndNodes;
baseIndx=find(trussGraph.Nodes.y==0);
maximum=max(max(trussGraph.Nodes.x(baseIndx)));
minimum=min(min(trussGraph.Nodes.x(baseIndx)));
rollerNode=baseIndx(trussGraph.Nodes.x(baseIndx)==maximum);
pinNode=baseIndx(trussGraph.Nodes.x(baseIndx)==minimum);

[r,~]=size(trussGraph.Nodes.x);
[c,~]=size(endNodes);
nodeEquationArray=zeros(r*2,c+3);
xEquationArray = zeros(r,c);
yEquationArray = zeros(r,c);
% NodeX then NodeY
% columns are members then FPin then FRoller
% array dimensions are members x nodes +2

% Node Equation Array layour
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


% For every node (old loop)
% for i=1:r
%     [row,~]= find(trussGraph.Edges.EndNodes==i);
%     
% %     for matches in column 1
%     for j=1:length(row)
%         col=2;
%         if trussGraph.Edges.EndNodes(row(j),2)==i
%             col=1;
%         end
%         
%         y=trussGraph.Nodes.y(trussGraph.Edges.EndNodes(row(j),col))-trussGraph.Nodes.y(i);
%         x=trussGraph.Nodes.x(trussGraph.Edges.EndNodes(row(j),col))-trussGraph.Nodes.x(i);
% 
%         nodeEquationArray(i*2-1,row(j))=x/norm([x;y]); %Odd rows are sum Fx
%         nodeEquationArray(i*2,row(j))=y/norm([x;y]);   %Even rows are sum Fy
%           
%     end
%    
% end

% New Loop
parfor i=1:r
    [row,~]= find(endNodes==i);
    tempX = zeros(1,c);
    tempY = zeros(1,c);
%     for matches in column 1
    for j=1:length(row)
        col = (endNodes(row(j),:)~=i);       
        y=trussGraph.Nodes.y(endNodes(row(j),col))-trussGraph.Nodes.y(i);
        x=trussGraph.Nodes.x(endNodes(row(j),col))-trussGraph.Nodes.x(i);

        tempX(1,row(j))=x/norm([x;y]); %Odd rows are sum Fx
        tempY(1,row(j))=y/norm([x;y]); %Even rows are sum Fy
          
    end
   xEquationArray(i,:) = tempX;
   yEquationArray(i,:) = tempY
end

nodeEquationArray(1:2:2*r,1:c) = xEquationArray(1:1:r,:);
nodeEquationArray(2:2:2*r,1:c) = yEquationArray(1:1:r,:);

TensionArray=nodeEquationArray\forceArray; %Solving the systems to find the tension array

trussGraphOut = trussGraph;
trussGraphOut.Edges.("Force in member") = TensionArray(1:end-3);
end