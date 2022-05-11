function [new_gait, sol, info, total_time] = solve(nlp, x0, info)

    solver = IpoptApplication(nlp);

    solver.Options.ipopt.bound_frac = 1e-8;
    solver.Options.ipopt.bound_push = 1e-8;
    % Possible parameter changes to solver

    solver.Options.ipopt.tol = 1e-3;
    solver.Options.ipopt.dual_inf_tol = 1e-3;
    solver.Options.ipopt.constr_viol_tol = 1e-3;
    solver.Options.ipopt.compl_inf_tol = 1e-3;
    solver.Options.ipopt.max_iter = 2000;

    if nargin > 2
        solver.Options.ipopt.point_perturbation_radius = 0;
        solver.Options.ipopt.warm_start_bound_push = 1e-8;
        solver.Options.ipopt.warm_start_mult_bound_push = 1e-8;
        solver.Options.ipopt.mu_init = 1e-6;
        solver.Options.zl = info.zl;
        solver.Options.zu = info.zu;
        solver.Options.lambda = info.lambda;
    end

    solver.Options.ipopt.print_timing_statistics = 'yes';
    solver.Options.ipopt.nlp_lower_bound_inf = -1e6;
    solver.Options.ipopt.nlp_upper_bound_inf = 1e6;

    start_time = tic();
    if nargin < 2
        [sol, info] = optimize(solver);
    else
        [sol, info] = optimize(solver, x0);
    end
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    tspan{3} = tspan{1}(end) + tspan{3};

    total_time = toc(start_time);
    new_gait = struct(...
        'tspan', tspan,...
        'states', states,...
        'inputs', inputs,...
        'params', params);
end
