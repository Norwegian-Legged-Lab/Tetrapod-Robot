#include "footstep_planner/terrain.h"

Terrain::Terrain(Eigen::Array<bool, Eigen::Dynamic, 1> bool_bridge)
{
    SteppingStone initial = addStone(Eigen::Matrix<double, 2, 1>::Zero(), 1.2, 1.2, "initial");

    double width_bridge = 0.24;

    Eigen::Matrix<double, 2, 1> center = initial.getBottomRight() + Eigen::Vector2d(width_bridge*1.5, initial.getHeight()/2);

    int num_stones = bool_bridge.colwise().count()(0);

    Eigen::Array<Eigen::Matrix<double, 2, 1>, Eigen::Dynamic, 1> centers(num_stones);

    for (int i = 0; i < bool_bridge.rows(); ++i)
    {
        if (bool_bridge(i))
        {
            centers(i) = center + Eigen::Vector2d(i*2*width_bridge, 0);
        }
    }

    addStones(centers,
        Eigen::Array<double, Eigen::Dynamic, 1>::Constant(num_stones, 1, width_bridge*1.5),
        Eigen::Array<double, Eigen::Dynamic, 1>::Constant(num_stones, 1, initial.getHeight()),
        "bridge");
    
    center = initial.getCenter() + Eigen::Vector2d(initial.getWidth() + (bool_bridge.rows()*2 + 1)*width_bridge, 0);

    SteppingStone goal = addStone(center, initial.getWidth(), initial.getHeight(), "goal");

    double height = 0.8;

    double clearance = 0.1;

    Eigen::Matrix<double, 2, 1> c2g = goal.getCenter() - initial.getCenter();

    double width = initial.getWidth() + c2g(0);

    center = initial.getCenter() + Eigen::Vector2d(0, (initial.getHeight() + height)/2 + clearance);

    addStone(center, width, height, "lateral");
}

Terrain::Terrain()
{
    SteppingStone initial = addStone(Eigen::Vector2d(0, 0), 1.2, 1.2, "initial");

    for (int i = 0; i < 2; ++i)
    {
        addStone(Eigen::Vector2d(1 + 2*i, 0), 1.2, 4.2, "vertical");
        addStone(Eigen::Vector2d(2, -1.5 + 3*i), 3.2, 1.2, "lateral");
    }

    SteppingStone goal = addStone(Eigen::Vector2d(4, 0), 1.2, 1.2, "goal");
}

Terrain::~Terrain()
{}

SteppingStone Terrain::addStone(Eigen::Matrix<double, 2, 1> center, double width, double height, std::string name)
{
    SteppingStone stone(center, width, height, name);

    stepping_stones.conservativeResize(stepping_stones.rows() + 1, Eigen::NoChange);
    
    stepping_stones(stepping_stones.rows() - 1, 0) = stone;

    return stone;
}

Eigen::Array<SteppingStone, Eigen::Dynamic, 1> Terrain::addStones(Eigen::Array<Eigen::Vector2d, Eigen::Dynamic, 1> centers, Eigen::Array<double, Eigen::Dynamic, 1> widths, Eigen::Array<double, Eigen::Dynamic, 1> heights, std::string name)
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

        stones(stones.rows() - n + i) = addStone(centers(i), widths(i), heights(i), stone_name);
    }

    return stones;
}

SteppingStone const &Terrain::getStoneByName(std::string name) const
{
    for (int i = 0; i < stepping_stones.rows(); ++i)
    {
        if (stepping_stones(i).getName() == name)
        {
            return stepping_stones(i);
        }
    }
    
    throw "No stone in the terrain has the name " + name + ".";
}

void Terrain::print()
{
    for (int i = 0; i < stepping_stones.rows(); ++i)
    {
        stepping_stones(i).print();
    }
}