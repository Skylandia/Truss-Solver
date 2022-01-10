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
        function obj = trussStruct(trussGraph)
            %trussStruct Construct an instance of this class
            %   Detailed explanation goes here
            obj.Edges = trussGraph.edgesArray;
            obj.Nodes = trussGraph.nodesArray;
            
        end
        
        function numNodes = numNodes(obj)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            numNodes = obj.Property1 + inputArg;
        end
    end
end

