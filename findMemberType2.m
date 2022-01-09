function [trussGraphOut, isPossible] = findMemberType2(trussGraph, safteyFactor)
%findMemberType finds the required member to hold the force
%   please refer to some form of oracle if you need to understand the mess
%   I am about to write

narginchk(1,2)

memberForces = trussGraph.Edges.("Force in member");
tenStrengh = 230;%N edit this if you need to adjust how much a tension member holds
if nargin ==2
    tenStrengh = tenStrengh * safteyFactor;
end
[compressionTable, tensionTable, ~, ~] = generateTrussTables();
isPossible = true;
for i = 1:length(memberForces)
    if memberForces(i) == 0
        trussGraph.Edges.("Beam type")(i) = {'Type 1 * 1'};
        trussGraph.Edges.("Safety Factor")(i) = inf;
    elseif memberForces(i) < 0
        if nargin == 2
            compStrengh = findCompressionStrengths(trussGraph.Edges.("Member Length")(i), safteyFactor);
        else
            compStrengh = findCompressionStrengths(trussGraph.Edges.("Member Length")(i));
        end
        eqivTypeOne = abs(memberForces(i))./compStrengh;
        posBeams = compressionTable((compressionTable.("Relative Strength")>eqivTypeOne),:);
        if isempty(posBeams)
            trussGraph.Edges.("Beam type")(i)=compressionTable.("Member Type")(end);
            trussGraph.Edges.("Safety Factor")(i)=(compressionTable.("Relative Strength")(end)/eqivTypeOne);
            warning('Truss unable to hold load')
            isPossible = false;
        else
            trussGraph.Edges.("Beam type")(i)=posBeams.("Member Type")(1);
            trussGraph.Edges.("Safety Factor")(i)=(posBeams.("Relative Strength")(1)/eqivTypeOne);
        end
            
    else
        eqivTypeOne = memberForces(i)./tenStrengh;
        posBeams = tensionTable((tensionTable.("Relative Strength")>eqivTypeOne),:);
        if isempty(posBeams)
            trussGraph.Edges.("Beam type")(i)=tensionTable.("Member Type")(end);
            trussGraph.Edges.("Safety Factor")(i)=(tensionTable.("Relative Strength")(end)/eqivTypeOne);
            warning('Truss unable to hold load')
            isPossible = false;
        else
            trussGraph.Edges.("Beam type")(i)=posBeams.("Member Type")(1);
            trussGraph.Edges.("Safety Factor")(i)=(posBeams.("Relative Strength")(1)/eqivTypeOne);
        end
    end
end
trussGraphOut = trussGraph;
end