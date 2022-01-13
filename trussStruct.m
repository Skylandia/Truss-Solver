classdef trussStruct
    %trussStruct is what I should have done to begin with
    %   It's a truss, but matlab coder won't cry itself to sleep
    
    properties
        edgesArray
        nodesArray
        cost = 0
        capasity = 1
    end
    
    methods
        function obj = trussStruct(edgesArray,nodesArray)
            %trussStruct Construct an instance of this class
            %   Detailed explanation goes here
            if nargin == 0
                obj;
            else
                obj.edgesArray = edgesArray;
                obj.nodesArray = nodesArray;
            end
            
        end
        
        function numNodes = numNodes(obj)
            %numNodes The number of nodes in this truss
            %   Detailed explanation goes here
            numNodes = length(obj.nodesArray);
        end
        
        function numEdges = numEdges(obj)
            %numEdges The number of edges in this truss
            %   Detailed explanation goes here
            numEdges = length(obj.edgesArray);
        end
        
        function endNodes = endNodes(obj)
            %endNodes Makes a matrix in the format of the old endNode
            %system for compatibility
            endNodes = [obj.edgesArray.endNodes];
            endNodes = (reshape(endNodes,[2,obj.numEdges]))';
        end
        
        function obj = tensionCalculator(obj, weightMagnitude, weightNode)
            [tensionArray] = tensionCalculator3_mex(...
                [obj.nodesArray.x]',...
                [obj.nodesArray.y]',...
                obj.numNodes,...
                obj.numEdges,...
                obj.endNodes,...
                weightMagnitude,...
                weightNode);
            for i = 1:length(tensionArray)-3
                obj.edgesArray(i).forceInMember = tensionArray(i);
            end 
        end
        
        function obj = findMemberTypes(obj, safteyFactor)
            for i = 1:obj.numEdges
                obj.edgesArray(i) = obj.edgesArray(i).findMemberType(safteyFactor);
            end
        end
        
        function obj = nodeThiccnessFinder2(obj)
            [compressionTable, tensionTable, ~, ~] = generateTrussTables();
            for i = 1:obj.numNodes
                obj.nodesArray(i).Thiccness = 0;
            end
            for i = 1:obj.numEdges
                if obj.edgesArray(i).forceInMember <= 0
                    beamThicc = compressionTable.("Joint Thickness")...
                        (contains(compressionTable.("Member Type"),obj.edgesArray(i).beamType));
                    obj.nodesArray(obj.edgesArray(i).endNodes(1)).Thiccness =...
                        obj.nodesArray(obj.edgesArray(i).endNodes(1)).Thiccness +...
                        beamThicc;
                    obj.nodesArray(obj.edgesArray(i).endNodes(2)).Thiccness =...
                        obj.nodesArray(obj.edgesArray(i).endNodes(2)).Thiccness +...
                        beamThicc;
                else
                    beamThicc = tensionTable.("Joint Thickness")...
                        (contains(tensionTable.("Member Type"),obj.edgesArray(i).beamType));
                    obj.nodesArray(obj.edgesArray(i).endNodes(1)).Thiccness =...
                        obj.nodesArray(obj.edgesArray(i).endNodes(1)).Thiccness +...
                        beamThicc;
                    obj.nodesArray(obj.edgesArray(i).endNodes(2)).Thiccness =...
                        obj.nodesArray(obj.edgesArray(i).endNodes(2)).Thiccness +...
                        beamThicc;
                end
            end
        end
        
        function isPossible = validateNodeThiccs(obj, boltMax)
            isPossible = false;
            if max([obj.nodesArray.Thiccness]) <= boltMax
                isPossible = true;
            end
        end
        
        function isPossible = validateEdgeLengths(obj, maxLength)
            isPossible = false;
            if max([obj.edgesArray.memberLength]) <= maxLength
                isPossible = true;
            end
        end
        
        function cost = generateCost(obj)
            [~, ~, ~, member_table]= generateTrussTables();
            nodeThiccArray = [obj.nodesArray.Thiccness];
            nodeThiccerThan5 = sum(nodeThiccArray>5);
            runningTotal = nodeThiccerThan5 * 300 + (obj.numNodes - nodeThiccerThan5) * 150;
            
            for i = 1:obj.numEdges
                typeIndx=find(contains(member_table.("Member Type"),obj.edgesArray(i).beamType));
                if obj.edgesArray(i).memberLength<= 0.09
                    runningTotal = runningTotal+member_table.("<= 90mm long")(typeIndx);
                else
                    runningTotal = runningTotal+member_table.("> 90mm long")(typeIndx);
                end
            end
            cost = runningTotal*2;
        end
        
        function obj = optimiseTrussCapasity(obj, weightNode, safteyFactor, maxCost)
            isPossible = obj.validateEdgeLengths(0.150);
            if ~isPossible
                obj.cost = 0;
                obj.capasity = 0;
            else
                obj = obj.tensionCalculator(obj.capasity, weightNode);
                while isPossible
                    obj = obj.findMemberTypes(safteyFactor);
                    obj = obj.nodeThiccnessFinder2;
                    tempCost = obj.generateCost;
                    if obj.validateNodeThiccs(7) && (tempCost <= maxCost)
                        obj.cost = tempCost;
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
                obj.capasity = obj.capasity * 2 * minSafteyFactor;
            end
        end
    end
end

