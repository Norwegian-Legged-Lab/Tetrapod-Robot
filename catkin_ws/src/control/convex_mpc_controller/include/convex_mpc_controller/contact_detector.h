#pragma once

#include<Eigen/Core>
#include<ros/ros.h>
#include<std_msgs/Int8MultiArray.h>

namespace ConvexMpc{

class ContactDetector{
    public:
    ContactDetector();

    ContactDetector(ros::NodeHandle* node, const double &tau_threshold);

    void ContactStateCallback(const std_msgs::Int8MultiArrayConstPtr &msg);
    
    Eigen::Array<bool, 4, 1> GetContacts(const Eigen::Array4d tau);

    private:
    ros::NodeHandle* node_;

    ros::Subscriber contact_sub_;

    double tau_threshold_;

    Eigen::Array4i contact_state_;
};

}// ConvexMpc