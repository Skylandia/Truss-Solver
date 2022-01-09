function [compressionStrengths] = findCompressionStrengths(lengths, safetyFactor)
%findCompressionStrenghs takes in a load of lenghs, and optionally a saftey
%multiplyer, then spits out the relative compression strengh
%   Safteyfactor is a multiplicitve modifiey, is one by default, and must
%   be greater than 0. 
narginchk(1,2)
compressionStrengths = 758228.*(1000.*lengths).^-2.061;
if nargin == 2
    if safetyFactor <= 0
        error('Safety factor must be greater than 0')
    end
    compressionStrengths = compressionStrengths .* safetyFactor;
end
end
