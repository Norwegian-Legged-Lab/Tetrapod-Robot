#pragma once

#include<Eigen/Core>
#include<kinematics/kinematics.h>

namespace Eigen{
namespace Extensions{

VectorXd Arange(const double &low, const double &high, const double &delta_t);

}
}

namespace ConvexMpcController{

enum FootType {fl, fr, rl, rr};

enum GaitType {Amble, Trot, FlyingTrot, Bound, Gallop};


struct LegStanceInfo {
    Eigen::ArrayXd starts;
    
    Eigen::ArrayXd durations;
};


struct LegStanceIndices{
    Eigen::VectorXi stance;
    Eigen::VectorXi stance_diff;
};


//struct StanceIndices{
//    LegStanceIndices fl;
//    LegStanceIndices fr;
//    LegStanceIndices rl;
//    LegStanceIndices rr;
//};

using StanceInfo = Eigen::Array<LegStanceInfo, 4, 1>;
using StanceIndices = Eigen::Array<LegStanceIndices, 4, 1>;

StanceInfo getStanceInfo(GaitType gait_type);

StanceIndices getStanceIndices(StanceInfo stance_info, double t0, double T_sim, double T_gait, double delta_t);
} //ConvexMpcController