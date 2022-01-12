classdef Edges
    %Edges represents a member of a truss
    %   Detailed explanation goes here
    
    properties
        endNodes 
        beamType
        safteyFactor {double}
        forceInMember {double}
        memberLength {double}
    end
    
    methods
        function obj = Edges(endNodes)
            %Edges Construct an instance of an Edges object array
            %   Input: a 1*2 array of Nodes
            if nargin == 0
                obj;
            else
            obj.beamType = {'Type 1 * 1'}; %Soon to be replaced with beamType Object
            obj.safteyFactor = NaN;
            obj.forceInMember = NaN;
            
            %Now for the fun parts
            obj.endNodes = [endNodes.ID];
            obj.memberLength = norm([...
                endNodes(1).x-endNodes(2).x;
                endNodes(1).y-endNodes(2).y]);
            end
        end
        
        function [obj,isPossible] = findMemberType(obj, globalSafteyFactor)
            if length(obj) ~= 1
                error("Unable to handel arrays, use arrayfun")
            else
                [obj.beamType,obj.safteyFactor,isPossible] = findMemberType5_mex(...
                    obj.forceInMember,...
                    obj.beamType,...
                    obj.memberLength,...
                    globalSafteyFactor);
            end
        end
        
    end
end

