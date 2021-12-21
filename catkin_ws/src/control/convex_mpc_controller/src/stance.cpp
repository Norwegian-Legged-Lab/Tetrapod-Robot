#include<convex_mpc_controller/stance.h>
#include<convex_mpc_controller/local_eigen_extensions.h>

#include<cmath>

namespace ConvexMpc{


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

StanceInfo getStanceInfoTrot(){
    StanceInfo stance_info;

    stance_info(fl).starts.conservativeResize(2);
    stance_info(fl).starts << 0, 0.5;
    
    stance_info(fl).durations.conservativeResize(2);
    stance_info(fl).durations << 0.1, 0.5;

    stance_info(fr).starts = Eigen::ArrayXd::Zero(1);

    stance_info(fr).durations = Eigen::ArrayXd::Constant(1, 0.6);


    stance_info(rl).starts = Eigen::ArrayXd::Zero(1);

    stance_info(rl).durations = Eigen::ArrayXd::Constant(1, 0.6);

    stance_info(rr).starts.conservativeResize(2);
    stance_info(rr).starts << 0, 0.5;
    
    stance_info(rr).durations.conservativeResize(2);
    stance_info(rr).durations << 0.1, 0.5;

    return stance_info;
}

StanceInfo getStanceInfoStand(){
    StanceInfo stance_info;

    stance_info(fl).starts = Eigen::ArrayXd::Zero(1);

    stance_info(fl).durations = Eigen::ArrayXd::Constant(1, 1);
    
    stance_info(fr).starts = Eigen::ArrayXd::Zero(1);

    stance_info(fr).durations = Eigen::ArrayXd::Constant(1, 1);

    stance_info(rl).starts = Eigen::ArrayXd::Zero(1);

    stance_info(rl).durations = Eigen::ArrayXd::Constant(1, 1);

    stance_info(rr).starts = Eigen::ArrayXd::Zero(1);

    stance_info(rr).durations = Eigen::ArrayXd::Constant(1, 1);

    return stance_info;
}
//TODO: actually implement these other gaits!
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
        case Stand:
            return getStanceInfoStand();
        default:
            return getStanceInfoAmble();
    }
}

bool isStance(const double &tau, const LegStanceInfo &info){
    return ((tau >= info.starts) && (tau < info.starts + info.durations)).any();
}

void setLegStanceIndices(const Eigen::VectorXd &tau, const LegStanceInfo &info, LegStanceIndices &out){
    Eigen::VectorXi stance_idxs_with_extra_step = tau.unaryExpr([info](const double x){return ((x >= info.starts) && (x < info.starts + info.durations)).any();}).cast<int>();
    out.stance = stance_idxs_with_extra_step.tail(stance_idxs_with_extra_step.size() - 1);
    out.stance_diff = out.stance - stance_idxs_with_extra_step.head(stance_idxs_with_extra_step.size() - 1);
}

StanceIndices getStanceIndices(StanceInfo stance_info, double t0, double T_sim, double T_gait, double delta_t){
    //include one delta_t-step before t0 to get accurate information about stance_diff[0]
    Eigen::VectorXd ts = Eigen::LocalExtensions::Arange(t0 - delta_t, T_sim + t0, delta_t);
    Eigen::VectorXd tau_s = ts/T_gait;
    Eigen::VectorXd tau_s_mod = tau_s.unaryExpr([](const double x){return std::fmod(x, 1);});

    StanceIndices stance_indices;
    
    for (int i = 0; i < stance_indices.size(); ++i){
        setLegStanceIndices(tau_s_mod, stance_info(i), stance_indices(i));
    }

    return stance_indices;
}

StanceIndices getStanceIndices(StanceInfo stance_info, double t0, double T_sim, double T_gait, double delta_t, Eigen::Array4i contact_state){
    StanceIndices stance_indices = getStanceIndices(stance_info, t0, T_sim, T_gait, delta_t);

    for(int i = 0; i < stance_indices.size(); ++i){
        if(contact_state(i) == 1){
            for(int j = 0; j < stance_indices(i).stance.size(); ++j){
                stance_indices(i).stance_diff(j) = 0;

                if (stance_indices(i).stance(j) == 1){
                    break;
                }

                stance_indices(i).stance(j) = 1;
            }
        }
    }

    return stance_indices;
}

Eigen::Vector3d getNominalTranslationBaseToFoot(const Eigen::Vector3d &r_b_to_fl_ref, FootType foot){
    Eigen::Vector3d r_b_to_foot = r_b_to_fl_ref;

    switch(foot){
        case fl: break;
        case fr:{
            r_b_to_foot(1) = -r_b_to_foot(1);
        } break;
        case rl:{
            r_b_to_foot(0) = -r_b_to_foot(0);
        } break;
        case rr:{
            r_b_to_foot(0) = -r_b_to_foot(0);
            r_b_to_foot(1) = -r_b_to_foot(1);
        } break;
    }

    return r_b_to_foot;
}

}//ConvexMpc