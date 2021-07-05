#include "visualization_utils/eigen_geometry_msgs.h"

geometry_msgs::PoseArray pose_array_from_eigen_matr(Eigen::MatrixXd pos)
{
    int n_steps = pos.rows();

    if (pos.cols() == 2)
    {
        pos.conservativeResize(Eigen::NoChange, 3);
        pos.col(2) = Eigen::MatrixXd::Zero(n_steps, 1);
    }

    geometry_msgs::PoseArray res;

    res.poses = std::vector<geometry_msgs::Pose>(n_steps);

    for (int i = 0; i < n_steps; ++i)
    {
        res.poses[i].position.x = pos(i, 0);
        res.poses[i].position.y = pos(i, 1);
        res.poses[i].position.z = pos(i, 2);
    }

    return res;
}

Eigen::MatrixX3d eigen_matr_from_pose_array(geometry_msgs::PoseArray pose_array)
{
    int n_steps = pose_array.poses.size();

    Eigen::MatrixX3d res;

    std::vector<geometry_msgs::Pose> &poses = pose_array.poses;

    res.conservativeResize(n_steps, Eigen::NoChange);

    for (int i = 0; i < n_steps; ++i)
    {
        res.row(i) = Eigen::Vector3d(poses[i].position.x, poses[i].position.y, poses[i].position.z).transpose();
    }

    return res;
}