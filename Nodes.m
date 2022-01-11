classdef Nodes
    %UNTITLED3 Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        x {double}
        y {double}
        ID %Propritary for old functions
        Thiccness
    end
    
    methods
        function obj = Nodes(x,y,ID)
            %Nodes Construct an instance of this class
            %   Makes ONE node, to create an array do:
            %   a(x,y) = Nodes() then fill the array
            %   Nodes(x,y,0) doesn't assign an ID
            if nargin == 0
                obj.x = 0;
                obj.y = 0;
                obj.ID = -1;
            elseif ID ~= 0
                obj.x = x;
                obj.y = y;
                obj.ID = ID;
            else
                obj.x = x;
                obj.y = y;
            end
        end
    end
end

