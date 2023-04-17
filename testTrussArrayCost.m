function [trussArray] = testTrussArrayCost(trussArray, safteyFactor, minCapasity)
%testTrussArray Tests
%   Detailed explanation goes here

%Shortcut to find out if first generation
% if trussArray(1).cost == 0
%     firstTest = 1;
% else
%     firstTest = (length(trussArray)/2)+1;
% end
%tests a lot of trusses
parfor i = 1:length(trussArray)
        trussArray(i) = trussArray(i).optimiseTrussCost(safteyFactor, minCapasity);
end

end
