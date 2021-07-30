#include "visualization_utils/color_interp.h"

Eigen::Matrix3Xd interpolateColors(Eigen::Vector3d begin_rgb, Eigen::Vector3d end_rgb, int nsteps)
{
    Eigen::Vector3d begin_hsv;

    Eigen::Vector3d end_hsv;

    RGBtoHSV(begin_rgb(0), begin_rgb(1), begin_rgb(2), begin_hsv(0), begin_hsv(1), begin_hsv(2));
    
    RGBtoHSV(end_rgb(0), end_rgb(1), end_rgb(2), end_hsv(0), end_hsv(1), end_hsv(2));

    Eigen::Matrix3Xd res;
    res.conservativeResize(Eigen::NoChange, nsteps);

    double interp;

    double h, s, v;

    for (int i = 0; i < nsteps; ++i)
    {
        interp = double(i)/(nsteps - 1);

        h = interp*end_hsv(0) + (1 - interp)*begin_hsv(0);
        
        s = interp*end_hsv(1) + (1 - interp)*begin_hsv(1);
        
        v = interp*end_hsv(2) + (1 - interp)*begin_hsv(2);

        HSVtoRGB(res(0, i), res(1, i), res(2, i), h, s, v);
    }

    return res;
}