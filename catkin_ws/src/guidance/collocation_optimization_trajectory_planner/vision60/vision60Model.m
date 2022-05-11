classdef vision60Model < RobotLinks
    %ASTROMODEL Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
    end
    
    methods
        function obj = vision60Model(urdf_file, base)
            %ASTROMODEL Construct an instance of the ASTRo robot model
            %   Detailed explanation goes here            
            obj = obj@RobotLinks(urdf_file, base);   
        end
    end
end

