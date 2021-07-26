motor_current = [0, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200];
weight = [0, 187, 560, 830, 1006. 1235, 1540, 1710, 1950, 2250, 2450, 2640, 2920];

P = inv(motor_current*motor_current');

B = motor_current*weight';

theta = P*B;