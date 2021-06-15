#include "footstep_planner/stepping_stone.h"

SteppingStone::SteppingStone(Eigen::Matrix<double, 2, 1> center, double width, double height, std::string name="")
{
    this->center = center;

    this->width = width;

    this->height = height;

    this->name = name;

    Eigen::Matrix<double, 2, 1> c2tr;

    c2tr << width/2, height/2;

    Eigen::Matrix<double, 2, 1> c2br;

    c2br << width/2, -height/2;

    top_right << center + c2tr;

    bottom_right << center + c2br;

    top_left << center - c2br;

    bottom_left << center - c2tr;

    A << 1, 0,
        0, 1,
        -1, 0,
        0, -1;

    b << c2br.replicate(2, 1) + A*center;
}