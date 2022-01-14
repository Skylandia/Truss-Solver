classdef zones
    %ZONES A zone that nodes must or can't enter
    %   Detailed explanation goes here
    
    properties
        shape
        zoneType
        location
    end
    
    methods
        function obj = zones(coords, shapeType, zoneType)
            %ZONES Construct an instance of this class
            %   Detailed explanation goes here
            %   Rectanges are defined by a 2*2 matrix, the top left and
            %   bottom right corner
            %   Triangels are defined by a 3*2 matrix, the 3 coords of the 
            %   3 points
            %   Circles are defined by a 1*3 vector, the radius, the x
            %   value of the center, then the y value
            
            obj.location = coords;
            obj.shape = shapeType;
            obj.zoneType = zoneType;
        end
        
        function isPossible = isRestricted(obj,edgesArray)
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

