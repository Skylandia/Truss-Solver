classdef Edges
    %Edges represents a member of a truss
    %   Detailed explanation goes here
    
    properties
        endNodes
        beamType
        safteyFactor
        forceInMember
        memberLength
    end
    
    methods
        function obj = Edges(inputArg1,inputArg2)
            %Edges Construct an instance of an Edges object array
            %   Converts a propriatary Edges table to an array of Edges
            %   objects
            obj.Property1 = inputArg1 + inputArg2;
        end
        
        function outputArg = method1(obj,inputArg)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            outputArg = obj.Property1 + inputArg;
        end
    end
end

