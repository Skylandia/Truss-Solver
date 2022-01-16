function obj = optimiseTrussCapasity(obj, safteyFactor, maxCost)
isPossible = obj.validateEdgeLengths(0.150);
if ~isPossible
    obj.cost = 0;
    obj.capasity = 0;
else
    obj = obj.tensionCalculator(obj.capasity);
    [~, isPossible] = obj.findMemberTypes(safteyFactor);
    if ~isPossible
        obj.cost = 0;
        obj.capasity = 0;
    else
        while isPossible
            [tempObj, isPossible] = obj.findMemberTypes(safteyFactor);
            tempObj = tempObj.nodeThiccnessFinder2;
            tempObj.cost = tempObj.generateCost;
            if tempObj.validateNodeThiccs(7) && (tempObj.cost <= maxCost) && isPossible
                obj = tempObj;
                minSafteyFactor = min([obj.edgesArray.safteyFactor]);
                obj.capasity = obj.capasity * minSafteyFactor;
                for i = 1:obj.numEdges
                    obj.edgesArray(i).forceInMember =...
                        obj.edgesArray(i).forceInMember * minSafteyFactor;
                end
            else
                isPossible = false;
            end
        end
        if isnan(obj.capasity)
            obj.capasity = 0;
            obj.cost = 0;
        else
            obj.capasity = obj.capasity * 2;
        end
    end
end
end
