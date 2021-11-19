#include<convex_mpc_controller/stance.h>
#include<cmath>

namespace Eigen{
namespace Extensions{
VectorXd Arange(const double &low, const double &high, const double &delta_t){
    int size = (high - low)/delta_t;
    return VectorXd::LinSpaced(low, size*delta_t, size);
}

}
}

namespace ConvexMpcController{


StanceInfo getStanceInfoAmble(){
    StanceInfo stance_info;

    stance_info(fl).starts = Eigen::ArrayXd::Constant(1, 0.5);
    
    stance_info(fl).durations = Eigen::ArrayXd::Constant(1, 0.5);

    stance_info(fr).starts = Eigen::ArrayXd::Zero(1);

    stance_info(fr).durations = Eigen::ArrayXd::Constant(1, 0.5);;

    stance_info(rl).starts = Eigen::ArrayXd::Zero(2);
    stance_info(rl).starts << 0, 0.75;

    stance_info(rl).durations = Eigen::ArrayXd::Constant(2, 0.25);

    stance_info(rr).starts = Eigen::ArrayXd::Constant(1, 0.25);
    stance_info(rr).durations = Eigen::ArrayXd::Constant(1, 0.5);

    return stance_info;
}
//TODO: actually implement these other gaits!
StanceInfo getStanceInfoTrot(){
    return getStanceInfoAmble();
};

StanceInfo getStanceInfoFlyingTrot(){
    return getStanceInfoAmble();
}

StanceInfo getStanceInfoBound(){
    return getStanceInfoAmble();
}

StanceInfo getStanceInfoGallop(){
    return getStanceInfoAmble();
}

StanceInfo getStanceInfo(GaitType gait_type){
    switch(gait_type){
        case Amble:
            return getStanceInfoAmble();
        case Trot:
            return getStanceInfoTrot();
        case FlyingTrot:
            return getStanceInfoFlyingTrot();
        case Bound:
            return getStanceInfoBound();
        case Gallop:
            return getStanceInfoGallop();
        default:
            return getStanceInfoAmble();
    }
}

void setLegStanceIndices(const Eigen::VectorXd &tau, const LegStanceInfo &info, LegStanceIndices &out){
    Eigen::VectorXi stance_idxs_with_extra_step = tau.unaryExpr([info](const double x){return ((x >= info.starts) && (x < info.starts + info.durations)).any();}).cast<int>();
    out.stance = stance_idxs_with_extra_step.tail(stance_idxs_with_extra_step.size() - 1);
    out.stance_diff = out.stance - stance_idxs_with_extra_step.head(stance_idxs_with_extra_step.size() - 1);
}

StanceIndices getStanceIndices(StanceInfo stance_info, double t0, double T_sim, double T_gait, double delta_t){
    //include one delta_t-step before t0 to get accurate information about stance_diff[0]
    Eigen::VectorXd ts = Eigen::Extensions::Arange(t0 - delta_t, T_sim + t0, delta_t);
    
    Eigen::VectorXd tau_s = ts/T_gait;
    Eigen::VectorXd tau_s_mod = tau_s.unaryExpr([](const double x){return std::fmod(x, 1);});

    StanceIndices stance_indices;
    
    for (int i = 0; i < stance_indices.size(); ++i){
        setLegStanceIndices(tau_s, stance_info(i), stance_indices(i));
    }

    return stance_indices;
}



}//ConvexMpcController