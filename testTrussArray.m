function [trussArrayOut] = testTrussArray(trussArray, safteyFactor, maxCost)
%testTrussArray Tests
%   Detailed explanation goes here

%Shortcut to find out if first generation
if trussArray(1).cost == 0
    firstTest = 1;
else
    firstTest = (length(trussArray)/2);
end
%tests a lot of trusses
for i = firstTest:length(trussArray)
    trussArray(i) = trussArray(i).optimiseTrussCapasity(safteyFactor, maxCost);
end
%sorts
[~, indexes] = sort([trussArray.cost]);
trussArray = trussArray(indexes);
[~, indexes] = sort([trussArray.capasity], 'descend');
trussArrayOut = trussArray(indexes);
end

