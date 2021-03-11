# Tetrapod-Robot

Robot Specifications:
Parameter | Value
--- | ---
Number of Legs | 4
DoF per Leg | 3
Mass [kg] | 19.4
Max Joint Torque [Nm] | 35

Inertial data:
Link | Mass [kg] | I_xx [kgm^2] | I_yy [kgm^2] | I_zz [kgm^2] |
--- | --- | --- | --- | --- 
Base | 6.2 | 1.0 | 1.0 | 1.0
Shoulder | 1.5 | 1.0 | 1.0 | 1.0
Thigh | 1.5 | 1.0 | 1.0 | 1.0
Leg | 0.3 | 1.0 | 1.0 | 1.0

Joint constraints:
Joint | Min [deg] | Max [deg] |
--- | --- | --- 
\theta_hy | 0 | 170
\theta_hp | -90 | 90
\theta_kp | -115 | 115
