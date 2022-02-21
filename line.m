classdef line
    %LINE Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        leftMostPoint
        rightMostPoint
    end
    
    methods

        function obj = line(leftMostPoint,rightMostPoint)
            %LINE Construct an instance of this class
            %   Detailed explanation goes here
            obj.leftMostPoint = leftMostPoint;
            obj.rightMostPoint = rightMostPoint;
        end
        
    end
end

