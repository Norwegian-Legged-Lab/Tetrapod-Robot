#ifndef eigen_geometry_msgs_h
#define eigen_geometry_msgs_h

#include<Eigen/Core>
#include "geometry_msgs/PoseArray.h"
#include<vector>


geometry_msgs::PoseArray pose_array_from_eigen_matr(Eigen::MatrixXd pos);

Eigen::MatrixX3d eigen_matr_from_pose_array(geometry_msgs::PoseArray pose_array);

#endif