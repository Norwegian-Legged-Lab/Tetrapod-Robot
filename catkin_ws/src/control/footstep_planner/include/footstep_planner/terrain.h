#ifndef terrain_h
#define terrain_h

#include<Eigen/Core>
#include<string>
#include "footstep_planner/stepping_stone.h"
#include<iostream>

class Terrain
{
    public: Terrain(Eigen::Array<bool, Eigen::Dynamic, 1> bool_bridge);

    public: virtual ~Terrain();

    public: SteppingStone addStone(Eigen::Matrix<double, 2, 1> center, double width, double height, std::string name=nullptr);

    public: Eigen::Array<SteppingStone, Eigen::Dynamic, 1> addStones(Eigen::Array<Eigen::Matrix<double, 2, 1>, Eigen::Dynamic, 1> centers, Eigen::Array<double, Eigen::Dynamic, 1> widths, Eigen::Array<double, Eigen::Dynamic, 1> heights, std::string name="");

    public: const SteppingStone &getStoneByName(std::string name) const;

    public: const Eigen::Array<SteppingStone, Eigen::Dynamic, 1> &getSteppingStones() const {return stepping_stones;}
    
    public: void print();
    /*** Variables ***/

    private: Eigen::Array<SteppingStone, Eigen::Dynamic, 1> stepping_stones;
};




#endif