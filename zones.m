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
            %   Triangles are defined by a 3*2 matrix, the 3 coords of the 
            %   3 points
            %   Circles are defined by a 1*3 vector, the radius, the x
            %   value of the center, then the y value
            
            obj.location = coords;
            obj.shape = shapeType;
            obj.zoneType = zoneType;
        end
        
        function isPossible = isRestricted(obj,trussStruct)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            % trussStruct.edgesArray(edgeIndex).endNodes(1) -> first node
            % ID
            % trussStruct.edgesArray(edgeIndex).endNodes(2) -> second node
            % ID
            % trussStruct.nodesArray(ID).x or .y to get coordinates
            isForbidden=false;
            switch(obj.shape)
                case shapes.rectangle
                    % [x1,y1;x2,y2] 
                    % points being TL(x1,y1) BL(x1 y2) TR(x2 y1) BR(x2 y2)
                    TL = [obj.location(1,1), obj.location(1,2)];
                    BL = [obj.location(1,1), obj.location(2,2)];
                    TR = [obj.location(2,1), obj.location(1,2)];
                    BR = [obj.location(2,1), obj.location(2,2)];
                    for i = 1:length(TrussStruct.edgesArray)
                        n1=trussStruct.edgesArray(edgeIndex).endNodes(1);
                        n2=trussStruct.edgesArray(edgeIndex).endNodes(2);
                        if ~(((trussStruct.nodesArray(n1).x && trussStruct.nodesArray(n2).x) < TL(1)) ||...
                            ((trussStruct.nodesArray(n1).x && trussStruct.nodesArray(n2).x) > BR(1)) ||...
                            ((trussStruct.nodesArray(n1).y && trussStruct.nodesArray(n2).y) > TL(2)) ||...
                            ((trussStrust.nodesArray(n1).y && trussSTruct.nodesArray(n2).y) < BR(2)))
                            for i=1:4
                                switch(i)
                                    case 1
                                        p1=TL;
                                        p2=BL;
                                    case 2
                                        p1=TL;
                                        p2=TR;
                                    case 3
                                        p1=TR;
                                        p2=BR;
                                    case 4
                                        p1=BL;
                                        p2=BR;
                                end
                                d = (p2(1)*p1(2)-p1(1)*p2(2));
                                s = (1/d)*((trussStruct.nodesArray(n1).x - trussStruct.nodesArray(n2).x)*p1(2) - (trussStruct.nodesArray(n1).y - trussStruct.nodesArray(n2).y)*p1(1));
                                t = (1/d)*-(-(trussStruct.nodesArray(n1).x - trussStruct.nodesArray(n2).x)*p2(2) + (trussStruct.nodesArray(n1).y - trussStruct.nodesArray(n2).y)*p1(2));
                                if ~(0<=s && s <=1 && 0<=t && t<=1)
                                    isForbidden=true;
                                    break
                                end
                            end
                        end
                    end
                    
                case shapes.circle
                    2;
                case shapes.triangle
                    3;
            end
        end
    end
end

