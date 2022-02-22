function [string] = mat2inputString(matrix)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
A = size(matrix);
string = '[';
for i = 1:A(1)
    for j = 1:A(2)
        string = strcat(string, num2str(matrix(i,j)), ',');
    end
    string(end) = ';';
end
string(end) = ']';
end