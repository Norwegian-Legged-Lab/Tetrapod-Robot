R = 0.55;
L = 0.00054;

% Damping
z = 1;

% Natural frequency
nf = 2*pi*30.0; 

% Gain
K = 2*z*nf*L - R;

% Time constant
T = K/(nf*nf*L);

% Proportional gain
Kp = K;

% Integral gain
Ki = K/T;

%Kp = 100.0;

%Ki = 50.0;

Kp2 = 200.0;

Ki2 = 100;