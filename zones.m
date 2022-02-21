classdef zones
    %ZONES A zone that nodes must or can't enter
    %   Detailed explanation goes here
    
    properties
        shape
        zoneType
        location
    end
    
    methods
        function obj = zones(shapeType, zoneType, coords)
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
            switch(obj.shape)
                case shapes.rectangle
                    [A,B] = size(obj.location);
                    if A ~= 2 || B ~= 2
                        error("Invalid coord dimentions\n" + ...
                            "Expected a [3,2] double and got a [%d,%d]", A,B)
                    end
                case shapes.circle
                    [A,B] = size(obj.location);
                    if A ~= 1 || B ~= 3
                        error("Invalid coord dimentions\n" + ...
                            "Expected a [3,2] double and got a [%d,%d]", A,B)
                    end
                case shapes.triangle
                    [A,B] = size(obj.location);
                    if A ~= 3 || B ~= 2
                        error("Invalid coord dimentions\n" + ...
                            "Expected a [3,2] double and got a [%d,%d]", A,B)
                    end
            end
        end
        
        function isPossible = isRestricted(obj,trussStruct)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            % trussStruct.edgesArray(edgeIndex).endNodes(1) -> first node
            % ID
            % trussStruct.edgesArray(edgeIndex).endNodes(2) -> second node
            % ID
            % trussStruct.nodesArray(ID).x or .y to get coordinates
            
            switch(obj.shape)
                case {shapes.rectangle, shapes.triangle}
                    if obj.shape == shapes.rectangle
                        % [x1,y1;x2,y2]
                        % Top left ; bottom right
                        points = point(obj.location(1,1), 
                                  

                case shapes.circle
                    isPossible = true;
                    for i = 1:length(trussStruct.edgesArray)
                        if isPossible
                            %Nodes
                            node1=trussStruct.edgesArray(i).endNodes(1);
                            node2=trussStruct.edgesArray(i).endNodes(2);
                            %Circle Location
                            cx = obj.location(2);
                            cy = obj.location(3);
                            %Relative X
                            x1 = trussStruct.nodesArray(node1).x - cx;
                            x2 = trussStruct.nodesArray(node2).x - cx;
                            %Relative Y
                            y1 = trussStruct.nodesArray(node1).y - cy;
                            y2 = trussStruct.nodesArray(node2).y - cy;
                            %...Magic...
                            a = (x2 - x1)^2 + (y2 - y1)^2;
                            b = 2 * (x1 * (x2 - x1) + y1 * (y2 - y1));
                            c = x1^2 + y1^2 - (obj.location(1))^2;
                            disc = b^2 - 4*a*c;
                            if disc > 0
                                sqrtdisc = sqrt(disc);
                                t1 = (-b + sqrtdisc)/(2*a);
                                t2 = (-b - sqrtdisc)/(2*a);
                                if ((0 < t1 && t1 < 1) || (0 < t2 && t2 < 1))
                                    isPossible = false;
                                end
                            end

                        end
                    end
                case shapes.triangle
                    3;
            end
        end

        function isPossible = isWeightNodeInZone(obj, trussStruct)
            isPossible = false;
            weightNode = trussStruct.weightNode;
            weightNodeLocation = [...
                trussStruct.nodesArray(weightNode).x,...
                trussStruct.nodesArray(weightNode).y];
            switch(obj.shape)
                case shapes.rectangle
                    % [x1,y1;x2,y2]
                    % Top left ; bottom right
                    if (...
                            (weightNodeLocation(1) < obj.location(1,1)) && (weightNodeLocation(1) > obj.location(2,1)) ||...
                            (weightNodeLocation(2) < obj.location(1,2)) && (weightNodeLocation(2) > obj.location(2,2)))
                        isPossible = true;
                    end
                case shapes.circle
                    if (norm(obj.location(2:3) - weightNodeLocation) < obj.location(1))
                        isPossible = true;
                    end
                case shapes.triange
            end
        end


        function [point] = pointInZone(obj)
            rand = [-1,-1];
            while any(rand < 0) || any(rand > 1)
                rand = normrnd(0.5,0.1941,1,2);
            end

            switch(obj.shape)
                case shapes.rectangle
                    % [x1,y1;x2,y2]
                    % Top left ; bottom right
                    point = [obj.location(2,1)-obj.location(1,1), obj.location(1,2)-obj.location(2,2)] ...
                        .* rand + [obj.location(1,1),obj.location(2,2)];

                case shapes.circle
                    point = obj.location(1:2) + ...
                        (rand - 0.5) .* obj.location(3);
                case shapes.triangle

            end
        end


    end
end


