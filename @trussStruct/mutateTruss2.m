function obj = mutateTruss2(obj, loadZone, restrictedZoneArray)

valid = false;
connectionsMatrix = obj.endNodes;
while ~valid
    nodeLocations = [[obj.nodesArray.x]',[obj.nodesArray.y]'] + [[0,0];normrnd(0,0.00025, obj.numNodes-2, 2);[0,0]];
    tempObj = generateTrussStruct(nodeLocations, connectionsMatrix, obj.weightNode);
    valid = tempObj.validateEdgeLengths(0.150) &&...
        loadZone.isWeightNodeInZone(tempObj)...
        && all(cellfun(@(panic) isRestricted(panic,tempObj), restrictedZoneArray));
end
obj = tempObj;
end

