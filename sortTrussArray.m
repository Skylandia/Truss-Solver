function [trussArray] = sortTrussArray(trussArray)
%SORTTRUSSARRAY Summary of this function goes here
%   Detailed explanation goes here
%sorts
if ~iscell(trussArray)
    [~, indexes] = sort([trussArray.cost]);
    trussArray = trussArray(indexes);
    [~, indexes] = sort([trussArray.capasity], 'descend');
    trussArray = trussArray(indexes);
else
    [~, indexes] = sort(cellfun(@(ahhhhh) ahhhhh.cost, trussArray));
    trussArray = trussArray(indexes);
    [~, indexes] = sort(cellfun(@(ahhhhh) ahhhhh.capasity, trussArray),'descend');
    trussArray = trussArray(indexes);
end
end

