# Tetrapod-Robot

**Authors: Adrian B. Ghansah, Mads Erlend B. Lysø, Paal Arthur S. Thorseth**

This project documents the development of software for the torque controllable tetrapod robot, ASTRo.

## Documentation
This software is documented using [Doxygen](https://www.doxygen.nl/index.html) and is readily available [here](https://norwegian-legged-lab.github.io/Tetrapod-Robot).

## License

This software is released under a [GNU General Public License](LICENSE).

## Style Guide
The project follows two style guides for writing C++ code, namely:

* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* [ROS C++ Style Guide](http://wiki.ros.org/CppStyleGuide)

Note that the [ROS C++ Style Guide](http://wiki.ros.org/CppStyleGuide) builds on the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html). See [here](https://google.github.io/styleguide/cppguide.html#Background) for a detailed explanation on the reasons for using style guides.

## Robot Specifications:
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
