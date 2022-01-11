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
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            numNodes = length(obj.nodesArray);
        end
        
        function numEdges = numEdges(obj)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            numEdges = length(obj.edgesArray);
        end
    end
end

