# Tetrapod-Robot

[![CodeFactor](https://www.codefactor.io/repository/github/Pathorse/Tetrapod-Robot/badge)](https://www.codefactor.io/repository/github/Pathorse/Tetrapod-Robot)


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
\theta_fl,hy | 0 | 170
\theta_fl,hp | -90 | 90
\theta_fl,kp | -115 | 115
\theta_fr,hy | -170 | 0
\theta_fr,hp | -90 | 90
\theta_fr,kp | -115 | 115
\theta_rl,hy | 10 | 180
\theta_rl,hp | -90 | 90
\theta_rl,kp | -115 | 115
\theta_rr,hy | -180 | -10
\theta_rr,hp | -90 | 90
\theta_rr,kp | -115 | 115

fl = front left, fr = front right, rl = rear left, rr = rear right, hy = hip yaw, hp = hip pitch, kp = knee pitch
