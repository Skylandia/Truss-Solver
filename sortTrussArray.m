function [trussArrayOut] = sortTrussArray(trussArray)
%SORTTRUSSARRAY Summary of this function goes here
%   Detailed explanation goes here
%sorts
[~, indexes] = sort([trussArray.cost]);
trussArray = trussArray(indexes);
[~, indexes] = sort([trussArray.capasity], 'descend');
trussArrayOut = trussArray(indexes);
end

