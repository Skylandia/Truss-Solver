function [trussArray] = sortTrussArrayCost(trussArray)
%SORTTRUSSARRAY Summary of this function goes here
%   Detailed explanation goes here
%sorts
[~, indexes] = sort([trussArray.capasity], 'descend');
trussArray = trussArray(indexes);
[~, indexes] = sort([trussArray.cost]);
trussArray = trussArray(indexes);
end
