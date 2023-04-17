function [trussArray] = sortTrussArray(trussArray)
%SORTTRUSSARRAY Summary of this function goes here
%   Detailed explanation goes here
%sorts
if iscell(trussArray)
    [~, indexes] = sort(cellfun(@(truss) truss.capasity / truss.cost, trussArray), 'descend');
    trussArray = trussArray(indexes);
else
    [~, indexes] = sort(trussArray.capasity ./ trussArray.cost, 'descend');
    trussArray = trussArray(indexes);
end
end

