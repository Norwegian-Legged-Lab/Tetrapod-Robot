#ifndef color_interp_h
#define color_interp_h

#include "visualization_utils/hsvrgb.h"

#include <Eigen/Core>
#include<cmath>

Eigen::Matrix3Xd interpolateColors(Eigen::Vector3d begin_rgb, Eigen::Vector3d end_rgb, int nsteps);

#endif