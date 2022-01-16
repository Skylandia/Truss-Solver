figure
trussArray = prepTrussArray(100, [0,0],[0.450,0]);
trussArray = testTrussArray(trussArray, 0.8, 280000);
maxArray = zeros(1,100);
meanArray = zeros(1,100);
for i = 1:3
    maxArray(i) = max([trussArray.capasity]);
    meanArray(i) = mean([trussArray.capasity]);
    plot(1:i, maxArray(1:i), 1:i, meanArray(1:i))
    trussArray = sortTrussArray(trussArray);
    trussArray = thanosArray(trussArray);
    trussArray(51:100) = testTrussArray(trussArray(51:100), 0.8, 280000);
end