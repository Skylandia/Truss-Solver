classdef trussStruct
    %trussStruct is what I should have done to begin with
    %   It's a truss, but matlab coder won't cry itself to sleep
    
    properties
        edgesArray
        nodesArray
        weightNode = 2
        cost = 0
        capasity = 1
    end
    
    methods
        function obj = trussStruct(edgesArray, nodesArray, weightNode)
            %trussStruct Construct an instance of this class
            %   Detailed explanation goes here
            if nargin == 0
                obj;
            else
                obj.edgesArray = edgesArray;
                obj.nodesArray = nodesArray;
                obj.weightNode = weightNode;
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
        
        function obj = tensionCalculator(obj, weightMagnitude)
            [tensionArray] = tensionCalculator3_mex(...
                [obj.nodesArray.x]',...
                [obj.nodesArray.y]',...
                obj.numNodes,...
                obj.numEdges,...
                obj.endNodes,...
                weightMagnitude,...
                obj.weightNode);
            for i = 1:length(tensionArray)-3
                obj.edgesArray(i).forceInMember = tensionArray(i);
            end 
        end
        
        function [obj, isPossible] = findMemberTypes(obj, safteyFactor)
            isPossible = true;
            for i = 1:obj.numEdges
                [obj.edgesArray(i), isPTemp] = obj.edgesArray(i).findMemberType(safteyFactor);
                if ~isPTemp
                    isPossible = false;
                end
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

        function json = toJson(obj)
            json = "{";

            json = json + '"width":"1920",';

            json = json + '"joints":[';
            for i = 1:obj.numNodes
                json = json + "[" + (1000 * obj.nodesArray(i).x) + "," + (1000 * -obj.nodesArray(i).y) + "],";
            end
            json = extractBefore(json, json.strlength);
            json = json + "],";

           
            json = json + '"members":[';
            for i = 1:obj.numEdges
                json = json + "[" + (obj.edgesArray(i).endNodes(1)-1) + "," + (obj.edgesArray(i).endNodes(2)-1) + "],";
            end
            json = extractBefore(json, json.strlength);
            json = json + "],";

            json = json + '"loads":[';
            json = json + "[" + (obj.weightNode-1) + "," + (-90) + "," + (obj.capasity/2) + "]";
            json = json + "],";

            json = json + '"supports":[';
            json = json + '[0, "p"], [' + (obj.numNodes-1) + ', "r"]';
            json = json + "]";

            json = json + "}";
        end
        
        function cost = generateCost(obj)

            [compressionTable, tensionTable, ~, ~] = generateTrussTables();
            running_total = 10 * 0.021;                                             % 10 cross members weight
            running_total = running_total + 2 * length(obj.nodesArray) * 0.025;     % weight of joins

            for i = 1:obj.numEdges
                member_length = obj.edgesArray(i).memberLength;
                if obj.edgesArray(i).forceInMember > 0              % member is in tension
                    beam_thickness = tensionTable.("Member Thickness")(contains(tensionTable.("Member Type"), obj.edgesArray(i).beamType));
                    member_length = beam_thickness * member_length + 2 * 0.012;
                else                                                % member is in compression
                    beam_thickness = compressionTable.("Member Thickness")(contains(compressionTable.("Member Type"), obj.edgesArray(i).beamType));
                    member_length = beam_thickness * member_length + 2 * 0.008;
                end
                running_total = running_total + 2 * (member_length / 175) * 0.021;
            end
            cost = running_total;
        end
        
        obj = optimiseTrussCapasity(obj, safteyFactor, maxCost)
        obj = mutateTruss2(obj, safteyFactor, maxCost)
                
        function obj = mutateTruss(obj, bestObj)
            nodeLocations = [[obj.nodesArray.x]',[obj.nodesArray.y]'] + [[0,0];normrnd(0,0.00025, obj.numNodes-2, 2);[0,0]];
            connectionsMatrix = obj.endNodes;
            obj = generateTrussStruct(nodeLocations, connectionsMatrix, obj.weightNode);
            if ~obj.validateEdgeLengths(0.150)
                obj = generateTrussStruct([[bestObj.nodesArray.x];[bestObj.nodesArray.y]]', bestObj.endNodes, bestObj.weightNode);
            end
        end
        
        function obj = optimiseTrussCost(obj, safteyFactor, minCapastiy)
            minCapastiy = minCapastiy /2;
            isPossible = obj.validateEdgeLengths(0.150);
            if ~isPossible
                obj.cost = inf; 
                obj.capasity = 0;
            else
                obj = obj.tensionCalculator(minCapastiy);
                [tempObj, isPossible] = obj.findMemberTypes(safteyFactor);
                if ~isPossible
                    obj.cost = inf;
                    obj.capasity = 0;
                else
                    tempObj = tempObj.nodeThiccnessFinder2;
                    if tempObj.validateNodeThiccs(7)
                        obj = tempObj;
                        obj.cost = obj.generateCost;
                        minSafteyFactor = min([obj.edgesArray.safteyFactor]);
                        obj.capasity = minCapastiy * minSafteyFactor;
                        for i = 1:obj.numEdges
                            obj.edgesArray(i).forceInMember =...
                                obj.edgesArray(i).forceInMember * minSafteyFactor;
                            obj.edgesArray(i).safteyFactor =...
                                obj.edgesArray(i).safteyFactor / minSafteyFactor;
                        end
                    else
                        obj.cost = inf;
                        obj.capasity = 0;
                    end
                end
            end
            if isnan(obj.capasity)
                obj.capasity = 0;
                obj.cost = inf;
            else
                obj.capasity = obj.capasity * 2;
            end
        end
    end
end

