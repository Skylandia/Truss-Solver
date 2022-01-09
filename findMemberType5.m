function [beamType, safteyFactor_Members, isPossible] = findMemberType5(memberForces,beamType,memLenghths, safteyFactor)
%findMemberType finds the required member to hold the force
%   please refer to some form of oracle if you need to understand the mess
%   I am about to write

nodeCount = size(memberForces,1);
% This is where normally beam type will be made, but God decleared that
% this isn't going to work today... or yesterday
safteyFactor_Members = zeros(nodeCount,1);


tenStrengh = 230 * safteyFactor;%N edit this if you need to adjust how much a tension member holds

[compressionTable, tensionTable, ~, ~] = generateTrussTables();
isPossible = true;
for i = 1:length(memberForces)
    if memberForces(i) == 0
        beamType{i} = 'Type 1 * 1';
        safteyFactor_Members(i) = inf;
    elseif memberForces(i) < 0
        compStrengh = findCompressionStrengths(memLenghths(i), safteyFactor);
        eqivTypeOne = abs(memberForces(i))./compStrengh;
        posBeams = compressionTable((compressionTable.("Relative Strength")>eqivTypeOne),:);
        if isempty(posBeams)
            beamType{i}=compressionTable.("Member Type"){end};
            safteyFactor_Members(i)=(compressionTable.("Relative Strength")(end)/eqivTypeOne);
            % warning('Truss unable to hold load')
            isPossible = false;
            break
        else
            beamType{i}=posBeams.("Member Type"){1};
            safteyFactor_Members(i)=(posBeams.("Relative Strength")(1)/eqivTypeOne);
        end
            
    else
        eqivTypeOne = memberForces(i)./tenStrengh;
        posBeams = tensionTable((tensionTable.("Relative Strength")>eqivTypeOne),:);
        if isempty(posBeams)
            beamType{i}=tensionTable.("Member Type"){end};
            safteyFactor_Members(i)=(tensionTable.("Relative Strength")(end)/eqivTypeOne);
            % warning('Truss unable to hold load')
            isPossible = false;
            break
        else
            beamType{i}=posBeams.("Member Type"){1};
            safteyFactor_Members(i)=(posBeams.("Relative Strength")(1)/eqivTypeOne);
        end
    end
end
end

