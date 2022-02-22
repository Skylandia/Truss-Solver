function [isOnLine] = colinearPointCheck(point_a, point_b, point_c)
% colinearPointCheck Given three collinear points point a, point b, point c, the function 
% checks if point b lies on line segment 'ac'
%   Impliments geeksforgeeks.org's method
%   https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/

isOnLine = false;

if (point_b.x <= max(point_a.x, point_c.x)) && (point_b.x >= min(point_a.x, point_c.x)) && (point_b.y <= max(point_a.y, point_c.y)) && (point_b.y >= min(point_a.y, point_c.y))
        isOnLine = true;
end

end


