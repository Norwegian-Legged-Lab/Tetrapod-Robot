function [F, dF, ddF] = calcAugmentedLagrangian(x, variable_idx, U, P, w, A0, A)
%CALCAUGMENTEDLAGRANGIAN Summary of this function goes here
%   Detailed explanation goes here

n_x = length(x);

xi_idx = variable_idx.xi;
Wvec_idx = variable_idx.W;
mu_idx = variable_idx.mu;
gamma_idx = variable_idx.gamma;

z = struct;
z.xi = x(xi_idx);

z.mu = x(mu_idx);
z.gamma = x(gamma_idx);

W_vec = x(Wvec_idx);

%number of unique elements in symmetric nxn matrix is (n*(n+1))/2
n_W = (-1 + sqrt(1 + 8*length(W_vec)))/2;

idx = 1:n_W;
z.W = diag(W_vec(idx));

for i = 1:n_W-1
    idx = (idx(end)+1):(idx(end)+length(idx) - 1);
    z.W = z.W + diag(W_vec(idx),i) + diag(W_vec(idx), -i);
end


lincomb_A = A0;
n_xi = length(z.xi);

assert(length(A) == n_xi);
for i = 1:n_xi
    lincomb_A = lincomb_A + A{i}*z.xi(i);
end
M11 = z.W;
M12 = lincomb_A*z.W;
M22 = z.W*(1 - z.mu);
% M1 = [
%     M11, M12;
%     M12', M22];

% schur_decomp_M22 = decomposition(M22 - P*eye(size(M22)));
schur_decomp_M22 = M22 + P*eye(size(M22));

% schur_decomp_M1 = decomposition((M11 - P*eye(size(M11))) - M12*(schur_decomp_M22\M12'));
schur_decomp_M1 = (M11 + P*eye(size(M11))) - M12*(schur_decomp_M22\M12');

M1_P_Inv = [
    inv((M11 + P*eye(size(M11))) - M12*(schur_decomp_M22\M12')), -schur_decomp_M1\(M12/schur_decomp_M22);
    -schur_decomp_M22\(M12'/schur_decomp_M1), inv(M22 + P*eye(size(M22))) + schur_decomp_M22\(M12'*(schur_decomp_M1\(M12/schur_decomp_M22)))];

% M2 = [
%     eye(size(z.xi,1)), z.xi;
%     z.xi, z.gamma];

% M2_schur_decomp = decomposition(((1-P)*eye(size(z.xi,1))) - z.xi*z.xi'/(z.gamma - P));
M2_schur_decomp = ((1+P)*eye(size(z.xi,1))) - z.xi*z.xi'/(z.gamma + P);

M2_P_Inv = [
    inv(((1 + P)*eye(size(z.xi,1))) - z.xi*z.xi'/(z.gamma + P)), -M2_schur_decomp\(z.xi/z.gamma);
    -z.gamma\z.xi'/M2_schur_decomp, inv(z.gamma) + z.gamma\(z.xi'*(M2_schur_decomp\z.xi))/z.gamma];

M3 = z.mu;

%Minus because the BMI in the exponential stabilization problem is posed in
%terms of SPD while the BMI in the algorithm is posed in terms of SND

%M = -blkdiag(sparse(M1), sparse(M2), sparse(M3));
% Z_x = -blkdiag(sparse(M1_P_Inv), sparse(M2_P_Inv), sparse(inv(M3 - P)));
Z_x = -[sparse(M1_P_Inv), sparse(2*n_W, n_xi + 2);
    sparse(n_xi + 1, 2*n_W), sparse(M2_P_Inv), sparse(n_xi+1, 1);
    sparse(1, 2*n_W + n_xi + 1), sparse(inv(M3 + P))];

n_Z = size(Z_x,1);

f = -w*z.mu + z.gamma;



Phi_p = P^2*Z_x - P*eye(n_Z);

F = f + trace(U*Phi_p);

n_xi = numel(z.xi);
n_Wvec = numel(W_vec);

%dF/dXi
dFdXi = zeros(n_xi,1);
dAdXi = cell(n_xi,1);
for i = 1:n_xi
    dM12 = sparse(A{i}*z.W);
    dM1 = [sparse(n_W,n_W), dM12;
        dM12', sparse(n_W, n_W)];
%     dA = -blkdiag(dM1, sparse(n_xi+2, n_xi+2)); % +1 for gamma in M2 and +1 for mu in the last inequality
    dA = -[dM1, sparse(2*n_W, n_xi+2);
        sparse(n_xi+2, 2*n_W + n_xi+2)]; % +1 for gamma in M2 and +1 for mu in the last inequality
    dAdXi{i} = dA; %for hessian later
    dPhi = P^2*Z_x*dA*Z_x;
    dFdXi(i) = trace(U*dPhi);
end


%dF/dmu

% dM = blkdiag(sparse(n_W, n_W), -z.W);
dM = [sparse(n_W, n_W), sparse(n_W, n_W);
    sparse(n_W, n_W),-z.W];

% dAdmu = -blkdiag(dM, sparse(n_xi+1, n_xi+1), 1);
dAdmu = -[dM, sparse(2*n_W, n_xi+2);
    sparse(n_xi+1, 2*n_W + n_xi+2);
    sparse(1, 2*n_W + n_xi + 1), 1];

dPhi = P^2*Z_x*dAdmu*Z_x;
dfdmu = -w;
dFdmu = dfdmu + trace(U*dPhi);

%dF/dW_vec, ddF/dxidW_vec, ddF/dmudW_vec
dFdWvec = zeros(n_Wvec, 1);
ddFdxidWvec = zeros(n_Wvec, n_xi);
ddFdmudWvec = zeros(n_Wvec, 1);

idx_vec = 1:n_W;
idx_mat = [1:n_W;1:n_W]';

for i = 1:n_W
    %dF/dW_vec
    dWdWvec = sparse(idx_mat(i,1), idx_mat(i,2), 1, n_W, n_W);
    dM12 = lincomb_A*dWdWvec;
    dM1 = [dWdWvec, dM12;
        dM12', (1-z.mu)*dWdWvec];
%     dA = -blkdiag(dM1, sparse(n_xi+2, n_xi+2)); % +1 for gamma in M2 and +1 for mu in the last inequality
    dA = -[dM1, sparse(2*n_W, n_xi + 2);
        sparse(n_xi+2, 2*n_W + n_xi + 2)]; % +1 for gamma in M2 and +1 for mu in the last inequality
    
    dPhi = P^2*Z_x*dA*Z_x;
    dFdWvec(idx_vec(i)) = trace(U*dPhi);
    %ddF/dxidWvec
    for k = 1:n_xi
        ddM12 = A{k}*dWdWvec;
        ddM1 = [sparse(n_W, n_W), ddM12;
            ddM12', sparse(n_W, n_W)];
%         ddA = -blkdiag(ddM1, sparse(n_xi+2, n_xi+2)); % +1 for gamma in M2 and +1 for mu in the last inequality
        ddA = -[ddM1, sparse(n_W*2, n_xi + 2);
            sparse(n_xi+2, 2*n_W + n_xi+2)]; % +1 for gamma in M2 and +1 for mu in the last inequality
        ddPhi = P^2*Z_x*(dAdXi{k}*Z_x*dA + dA*Z_x*dAdXi{k} - ddA)*Z_x;
        ddFdxidWvec(idx_vec(i), k) = trace(U*ddPhi);
    end
    %ddF/dmudWvec
    
%     ddA = -blkdiag(sparse(n_W, n_W), -dWdWvec, sparse(n_xi+2, n_xi+2));
    ddA = -[sparse(n_W, n_W*2 + n_xi + 2);
        sparse(n_W, n_W), -dWdWvec, sparse(n_W, n_xi+2);
        sparse(n_xi+2, n_W*2 + n_xi+2)];
    ddPhi = P^2*Z_x*(dAdmu*Z_x*dA + dA*Z_x*dAdmu - ddA)*Z_x;
    ddFdmudWvec(idx_vec(i)) = trace(U*ddPhi);
end

idx_end = idx_vec(end);

for i = 1:n_W-1
    idx_vec = (idx_end+1):(idx_end + n_W - i);
    idx_mat = [(i+1):n_W; 1:(n_W - i)]';
    for j = 1:n_W-i
        %dF/dW_vec
        dWdWvec = sparse(idx_mat(j,:), idx_mat(j,end:-1:1), [1, 1], n_W, n_W);
        dM12 = lincomb_A*dWdWvec;
        dM1 = [dWdWvec, dM12;
            dM12', (1-z.mu)*dWdWvec];
%         dA = -blkdiag(dM1, sparse(n_xi+2, n_xi+2));
        dA = -[dM1, sparse(2*n_W, n_xi+2);
            sparse(n_xi+2, 2*n_W + n_xi+2)];
        
        dPhi = P^2*Z_x*dA*Z_x;
        dFdWvec(idx_vec(j)) = trace(U*dPhi);
        
        %ddF/dxidWvec
        for k = 1:n_xi
            ddM12 = A{k}*dWdWvec;
            ddM1 = [sparse(n_W, n_W), ddM12;
                ddM12', sparse(n_W, n_W)];
%             ddA = -blkdiag(ddM1, sparse(n_xi+2, n_xi+2)); % +1 for gamma in M2 and +1 for mu in the last inequality
            ddA = -[ddM1, sparse(2*n_W, n_xi+2);
                sparse(n_xi+2, 2*n_W + n_xi+2)]; % +1 for gamma in M2 and +1 for mu in the last inequality
            
            ddPhi = P^2*Z_x*(dAdXi{k}*Z_x*dA + dA*Z_x*dAdXi{k} - ddA)*Z_x;
            ddFdxidWvec(idx_vec(j), k) = trace(U*ddPhi);
        end
        %ddF/dmudWvec

%         ddA = -blkdiag(sparse(n_W, n_W), -dWdWvec, sparse(n_xi+2, n_xi+2));
        ddA = -[sparse(n_W, 2*n_W + n_xi + 2);
            sparse(n_W, n_W), -dWdWvec, sparse(n_W, n_xi + 2);
            sparse(n_xi+2, 2*n_W + n_xi+2)];
        
        ddPhi = P^2*Z_x*(dAdmu*Z_x*dA + dA*Z_x*dAdmu - ddA)*Z_x;
        ddFdmudWvec(idx_vec(j)) = trace(U*ddPhi);
    end
    
    idx_end = idx_vec(end);
end

%dF/dgamma

% dA = -blkdiag(sparse(n_W*2 + n_xi, n_W*2 + n_xi), sparse(1), sparse(0));
dA = -[sparse(n_W*2 + n_xi, n_W*2 + n_xi + 2);
    sparse(1, n_W*2 + n_xi + 1, 1, 1, n_W*2 + n_xi + 2);
    sparse(1, n_W*2 + n_xi + 2)];

dPhi = P^2*Z_x*dA*Z_x;
dfdgamma = 1;
dFdgamma = dfdgamma + trace(U*dPhi);

dFdx_idx = [xi_idx, Wvec_idx, mu_idx, gamma_idx];
dF = zeros(n_x, 1);
dF(dFdx_idx) = [dFdXi; dFdWvec; dFdmu; dFdgamma];

ddFdxidWvec_idx = [kron(ones(numel(xi_idx),1), Wvec_idx'), kron(xi_idx', ones(numel(Wvec_idx),1))];
ddFdmudWvec_idx = [Wvec_idx', ones(length(Wvec_idx),1)*mu_idx];

ddFdxidWvec_val = reshape(ddFdxidWvec, [], 1);
ddFdmudWvec_val = reshape(ddFdmudWvec, [], 1);


ddF_idx = [ddFdxidWvec_idx; ddFdxidWvec_idx(:, end:-1:1); ddFdmudWvec_idx; ddFdmudWvec_idx(:, end:-1:1)];

ddF_val = [ddFdxidWvec_val; ddFdxidWvec_val; ddFdmudWvec_val; ddFdmudWvec_val];

ddF = sparse(ddF_idx(:,1), ddF_idx(:,2), ddF_val, n_x, n_x);

end

