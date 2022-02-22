function [isIntercepting] = doIntercept(line_1,line_2)
%DOINTERCEPT Impliments Geeks for Geeks line intercepting method
%   Detailed explanation goes here

% Split lines into points
point_a = line_1.leftMostPoint;
point_c = line_1.rightMostPoint;
point_b = line_2.leftMostPoint;
point_d = line_2.rightMostPoint;
% orientations
o1 = orientation(point_a, point_c, point_b);
o2 = orientation(point_a, point_c, point_d);
o3 = orientation(point_b, point_d, point_a);
o4 = orientation(point_b, point_d, point_c);
% most cases
if (o1 ~= o2) && (o3 ~= o4)
    isIntercepting = true;   
    return
end
% p1 , q1 and p2 are collinear and p2 lies on segment p1q1
if (o1 == 0) && colinearPointCheck(point_a, point_b, point_c)
    isIntercepting = true;   
    return
end
% p1 , q1 and q2 are collinear and q2 lies on segment p1q1
if (o2 == 0) && colinearPointCheck(point_a, point_d, point_c)
    isIntercepting = true;   
    return
end

% p2 , q2 and p1 are collinear and p1 lies on segment p2q2
if (o3 == 0) && colinearPointCheck(point_b, point_a, point_d)
    isIntercepting = true;   
    return
end

% p2 , q2 and q1 are collinear and q1 lies on segment p2q2
if (o4 == 0) && colinearPointCheck(point_b, point_c, point_d)
    isIntercepting = true;   
    return
end

% If none of the cases
isIntercepting = false;
end

