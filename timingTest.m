
parfor i = 1:length(trussArray)
    trussArray{i}.optimiseTrussCapasity(0.8, 280000)
end
