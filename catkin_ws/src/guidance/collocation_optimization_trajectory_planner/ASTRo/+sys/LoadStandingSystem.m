function system = LoadStandingSystem(model, load_path)
    if nargin < 2
        load_path = [];
    end

    quadrupleStance = sys.domains.QuadrupleStance(model, load_path);

    io_control = IOFeedback('IO');

    system = HybridSystem('ASTRo');
    system = addVertex(system, 'QuadrupleStance', 'Domain', quadrupleStance,...
        'Control', io_control);
end