classdef Nodes
    %UNTITLED3 Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        x
        y
        ID %Propritary for old functions
        Thiccness
    end
    
    methods
        function obj = Nodes(x,y,ID)
            %Nodes Construct an instance of this class
            %   Makes ONE node, to create an array do:
            %   a(x,y) = Nodes() then fill the array
            if nargin == 0
                obj;
            else
            obj.x = x;
            obj.y = y;
            obj.ID = ID;
            end
        end
    end
end

