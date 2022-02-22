function [ori] = orientation(a,b,c)
%orientation Uses GeeksforGeeks orientation method to find the oriantation
%of 3 points, A B and C
    % to find the orientation of an ordered triplet (a,b,c)
    % function returns the following values:
    % 0 : Collinear points
    % 1 : Clockwise points
    % 2 : Counterclockwise
     
    % See https://www.geeksforgeeks.org/orientation-3-ordered-points/amp/
    % for details of below formula.
     
    val = ((b.y - a.y) * (c.x - b.x)) - ((b.x - a.x) * (c.y - b.y));
    if val > 0
         
        % Clockwise orientation
        ori = 1;
    elseif val < 0
         
        % Counterclockwise orientation
        ori = 2;
    else
         
        % Collinear orientation
        ori = 0;
    end
end

