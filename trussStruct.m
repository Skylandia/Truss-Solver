classdef trussStruct
    %trussStruct is what I should have done to begin with
    %   It's a truss, but matlab coder won't cry itself to sleep
    
    properties
        edgesArray
        nodesArray
        cost
        capasity
    end
    
    methods
        function obj = trussStruct(edgesArray,nodesArray)
            %trussStruct Construct an instance of this class
            %   Detailed explanation goes here
            obj.edgesArray = edgesArray;
            obj.nodesArray = nodesArray;
            
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
                obj.edgesArray(i).findMemberType(safteyFactor);
            end
        end
        
        function obj = nodeThiccnessFinder2(obj)
            [compressionTable, tensionTable, ~, ~] = generateTrussTables();
        end
        
    end
end

