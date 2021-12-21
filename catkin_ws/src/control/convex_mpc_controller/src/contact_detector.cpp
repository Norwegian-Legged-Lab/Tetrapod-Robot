#include<convex_mpc_controller/contact_detector.h>

namespace ConvexMpc{

ContactDetector::ContactDetector(){
    node_ = nullptr;
    
    tau_threshold_ = 0;
}
ContactDetector::ContactDetector(ros::NodeHandle* node, const double &tau_threshold){
    node_ = node;

    tau_threshold_ = tau_threshold;

    contact_sub_ = node_->subscribe<std_msgs::Int8MultiArray>("/my_robot/contact_state", 1, &ContactDetector::ContactStateCallback, this);
    contact_state_.setZero();
}

void ContactDetector::ContactStateCallback(const std_msgs::Int8MultiArrayConstPtr &msg){
    contact_state_ = (Eigen::Array<int8_t, 4, 1>::Map(msg->data.data())).cast<int>();
}

Eigen::Array<bool, 4, 1> ContactDetector::GetContacts(const Eigen::Array4d tau){
    return (contact_state_ == 1) && (tau >= tau_threshold_);
}


}//ConvexMpc