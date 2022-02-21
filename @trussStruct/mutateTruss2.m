function obj = mutateTruss2(obj, loadZone, restrictedZoneArray)

valid = false;
while ~valid
    nodeLocations = [[obj.nodesArray.x]',[obj.nodesArray.y]'] + [[0,0];normrnd(0,0.00025, obj.numNodes-2, 2);[0,0]];
    connectionsMatrix = obj.endNodes;
    obj = generateTrussStruct(nodeLocations, connectionsMatrix, obj.weightNode);
    valid = obj.validateEdgeLengths(0.150) &&...
        loadZone.isWeightNodeInZone(obj)...
        && all(cellfun(@(panic) isRestricted(panic,obj), restrictedZoneArray));
end
end

