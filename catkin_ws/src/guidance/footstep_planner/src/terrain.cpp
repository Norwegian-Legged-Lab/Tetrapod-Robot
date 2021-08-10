#include "footstep_planner/terrain.h"

Terrain::Terrain(Eigen::Array<bool, Eigen::Dynamic, 1> bool_bridge)
{
    SteppingStone initial = AddStone(Eigen::Vector3d::Zero(), 1.2, 1.2, "initial");

    double width_bridge = 0.24;

    Eigen::Vector3d center = initial.GetBottomRight() + Eigen::Vector3d(width_bridge*1.5, initial.GetHeight()/2, 0);

    int num_stones = bool_bridge.colwise().count()(0);

    Eigen::Array<Eigen::Vector3d, Eigen::Dynamic, 1> centers(num_stones);

    for (int i = 0; i < bool_bridge.rows(); ++i)
    {
        if (bool_bridge(i))
        {
            centers(i) = center + Eigen::Vector3d(i*2*width_bridge, 0, 0);
        }
    }

    AddStones(centers,
        Eigen::Array<double, Eigen::Dynamic, 1>::Constant(num_stones, 1, width_bridge*1.5),
        Eigen::Array<double, Eigen::Dynamic, 1>::Constant(num_stones, 1, initial.GetHeight()),
        "bridge");
    
    center = initial.GetCenter() + Eigen::Vector3d(initial.GetWidth() + (bool_bridge.rows()*2 + 1)*width_bridge, 0, 0);

    SteppingStone goal = AddStone(center, initial.GetWidth(), initial.GetHeight(), "goal");

    double height = 0.8;

    double clearance = 0.1;

    Eigen::Vector3d c2g = goal.GetCenter() - initial.GetCenter();

    double width = initial.GetWidth() + c2g(0);

    center = initial.GetCenter() + Eigen::Vector3d(0, (initial.GetHeight() + height)/2 + clearance, 0);

    AddStone(center, width, height, "lateral");
}

Terrain::Terrain()
{
    SteppingStone initial = AddStone(Eigen::Vector3d(0, 0, 0), 1.2, 1.2, "initial");

    for (int i = 0; i < 2; ++i)
    {
        AddStone(Eigen::Vector3d(1 + 2*i, 0, 0), 1.2, 4.2, "vertical");
        AddStone(Eigen::Vector3d(2, -1.5 + 3*i, 0), 3.2, 1.2, "lateral");
    }

    SteppingStone goal = AddStone(Eigen::Vector3d(4, 0, 0), 1.2, 1.2, "goal");
}

Terrain::~Terrain()
{}

SteppingStone Terrain::AddStone(Eigen::Vector3d center, double width, double height, std::string name)
{
    SteppingStone stone(center, width, height, name);

    stepping_stones.conservativeResize(stepping_stones.rows() + 1, Eigen::NoChange);
    
    stepping_stones(stepping_stones.rows() - 1, 0) = stone;

    return stone;
}

Eigen::Array<SteppingStone, Eigen::Dynamic, 1> Terrain::AddStones(Eigen::Array<Eigen::Vector3d, Eigen::Dynamic, 1> centers, Eigen::Array<double, Eigen::Dynamic, 1> widths, Eigen::Array<double, Eigen::Dynamic, 1> heights, std::string name)
{
    int n = centers.rows();

    if ((widths.rows() != n) || (heights.rows() != n))
    {
        throw "Arguments have incoherent size.";
    }

    Eigen::Array<SteppingStone, Eigen::Dynamic, 1> stones;

    stones.conservativeResize(stones.rows() + n, Eigen::NoChange);

    for (int i = 0; i < n; ++i)
    {
        std::string stone_name = (name.empty()) ? name : name + std::to_string(i);

        stones(stones.rows() - n + i) = AddStone(centers(i), widths(i), heights(i), stone_name);
    }

    return stones;
}

SteppingStone const &Terrain::GetStoneByName(std::string name) const
{
    for (int i = 0; i < stepping_stones.rows(); ++i)
    {
        if (stepping_stones(i).GetName() == name)
        {
            return stepping_stones(i);
        }
    }
    
    throw "No stone in the terrain has the name " + name + ".";
}