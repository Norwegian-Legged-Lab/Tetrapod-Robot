#ifndef terrain_h
#define terrain_h

#include<Eigen/Core>
#include<string>
#include "footstep_planner/stepping_stone.h"
#include<iostream>

class Terrain
{
    public: Terrain(Eigen::Array<bool, Eigen::Dynamic, 1> bool_bridge);

    public: Terrain();

    public: virtual ~Terrain();

    public: SteppingStone AddStone(Eigen::Vector3d center, double width, double height, std::string name=nullptr);

    public: Eigen::Array<SteppingStone, Eigen::Dynamic, 1> AddStones(Eigen::Array<Eigen::Vector3d, Eigen::Dynamic, 1> centers, Eigen::Array<double, Eigen::Dynamic, 1> widths, Eigen::Array<double, Eigen::Dynamic, 1> heights, std::string name="");

    public: const SteppingStone &GetStoneByName(std::string name) const;

    public: const Eigen::Array<SteppingStone, Eigen::Dynamic, 1> &GetSteppingStones() const {return stepping_stones;}
    /*** Variables ***/

    private: Eigen::Array<SteppingStone, Eigen::Dynamic, 1> stepping_stones;
};




#endif