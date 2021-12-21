#include<convex_mpc_controller/swing_controller.h>


#include<ros/ros.h>
namespace ConvexMpc{

SwingController::SwingController(const Eigen::Vector3d &init_pos, const Eigen::Vector3d &final_pos, const double &h, const double &T, const double &t0){
    init_pos_ = init_pos;

    final_pos_ = final_pos;

    h_ = h;

    T_ = T;

    t0_ = t0;

    is_active_ = true;

    ROS_INFO_STREAM("Swing Controller: Swing controller created with initial position " << init_pos.transpose() << ", final position " << final_pos.transpose() <<
        ", starting time " << t0 << " and period " << T << ".");
}

SwingController::SwingController(){
    
    is_active_ = false;

    init_pos_ = Eigen::Vector3d::Zero();

    final_pos_ = Eigen::Vector3d::Zero();
    
    h_ = 0;

    T_ = 1;

    t0_ = -1;
}

Eigen::Vector3d SwingController::Pos(const double &t){

    double tau = GetTau(t);

    Eigen::Vector3d pos;

    double sine_height_component = h_*std::sin(M_PI*tau);

    pos << init_pos_ + (final_pos_ - init_pos_)*tau + Eigen::Vector3d::Constant(0, 0, sine_height_component);

    return pos;
}

Eigen::Vector3d SwingController::Vel(const double &t){
    double tau = GetTau(t);

    Eigen::Vector3d vel;

    double d_sine_height_component = h_*std::cos(M_PI*tau)*(M_PI/T_);

    vel << (final_pos_ - init_pos_)/T_ + Eigen::Vector3d::Constant(0, 0, d_sine_height_component);

    return vel;
}

Eigen::Vector3d SwingController::Acc(const double &t){
    double tau = GetTau(t);

    Eigen::Vector3d acc;

    double d2_sine_height_component = -h_*std::sin(M_PI*tau)*std::pow(M_PI/T_, 2);

    acc << Eigen::Vector3d::Constant(0, 0, d2_sine_height_component);

    return acc;
}


}//ConvexMpc