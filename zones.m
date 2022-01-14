classdef zones
    %ZONES A zone that nodes must or can't enter
    %   Detailed explanation goes here
    
    properties
        shape
        zoneType
        coords
    end
    
    methods
        function obj = zones(coords, shapeType, zoneType)
            %ZONES Construct an instance of this class
            %   Detailed explanation goes here
            
            obj.coords = coords;
            obj.shape = shapeType;
            obj.zoneType = zoneType;
        end
        
        function isPossible = isRestricted(obj,edge)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            switch(obj.shape)
                case shapes.rectangle
                    1;
                case shapes.circle
                    2;
                case shapes.triangle
                    3;
            end
        end
    end
end

