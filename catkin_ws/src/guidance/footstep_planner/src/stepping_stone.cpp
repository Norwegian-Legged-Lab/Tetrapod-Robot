#include "footstep_planner/stepping_stone.h"
#include<iostream>
SteppingStone::SteppingStone(Eigen::Vector3d center, double width, double height, std::string name)
{
    this->center = center;

    this->width = width;

    this->height = height;

    this->name = name;

    Eigen::Vector3d c2tr;

    c2tr << width/2, height/2, 0;

    Eigen::Vector3d c2br;

    c2br << width/2, -height/2, 0;

    top_right << center + c2tr;

    bottom_right << center + c2br;

    top_left << center - c2br;

    bottom_left << center - c2tr;

    A_ineq << 1, 0, 0,
        0, 1, 0,
        -1, 0, 0,
        0, -1, 0;

    b_ineq << c2tr.segment(0, 2).replicate(2, 1) + A_ineq*center;

    A_eq << 0, 0, 1;

    b_eq << center(2);
}

SteppingStone::SteppingStone()
{}

SteppingStone::~SteppingStone()
{}