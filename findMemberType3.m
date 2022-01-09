function [trussGraphOut, isPossible] = findMemberType3(trussGraph, safteyFactor)
%findMemberType finds the required member to hold the force
%   please refer to some form of oracle if you need to understand the mess
%   I am about to write

narginchk(1,2)
numIn = nargin;
memberForces = trussGraph.Edges.("Force in member");
tenStrengh = 230;%N edit this if you need to adjust how much a tension member holds

beamType = trussGraph.Edges.("Beam type");
safteyFactor_Members = trussGraph.Edges.("Safety Factor");
memLenghths = trussGraph.Edges.("Member Length");

if nargin ==2
    tenStrengh = tenStrengh * safteyFactor;
end
[compressionTable, tensionTable, ~, ~] = generateTrussTables();
isPossible = true;
for i = 1:length(memberForces)
    if memberForces(i) == 0
        beamType(i) = {'Type 1 * 1'};
        safteyFactor_Members(i) = inf;
    elseif memberForces(i) < 0
        if numIn == 2
            compStrengh = findCompressionStrengths(memLenghths(i), safteyFactor);
        else
            compStrengh = findCompressionStrengths(memLenghths(i));
        end
        eqivTypeOne = abs(memberForces(i))./compStrengh;
        posBeams = compressionTable((compressionTable.("Relative Strength")>eqivTypeOne),:);
        if isempty(posBeams)
            beamType(i)=compressionTable.("Member Type")(end);
            safteyFactor_Members(i)=(compressionTable.("Relative Strength")(end)/eqivTypeOne);
            warning('Truss unable to hold load')
            isPossible = false;
            break
        else
            beamType(i)=posBeams.("Member Type")(1);
            safteyFactor_Members(i)=(posBeams.("Relative Strength")(1)/eqivTypeOne);
        end
            
    else
        eqivTypeOne = memberForces(i)./tenStrengh;
        posBeams = tensionTable((tensionTable.("Relative Strength")>eqivTypeOne),:);
        if isempty(posBeams)
            beamType(i)=tensionTable.("Member Type")(end);
            safteyFactor_Members(i)=(tensionTable.("Relative Strength")(end)/eqivTypeOne);
            warning('Truss unable to hold load')
            isPossible = false;
            break
        else
            beamType(i)=posBeams.("Member Type")(1);
            safteyFactor_Members(i)=(posBeams.("Relative Strength")(1)/eqivTypeOne);
        end
    end
end
trussGraph.Edges.("Beam type") = beamType;
trussGraph.Edges.("Safety Factor") = safteyFactor_Members;

trussGraphOut = trussGraph;
end