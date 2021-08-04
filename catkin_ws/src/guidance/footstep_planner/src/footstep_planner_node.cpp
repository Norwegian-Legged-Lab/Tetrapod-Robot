#include "footstep_planner/footstep_planner.h"

#include "visualization_utils/xml_utils.h"
#include "visualization_utils/eigen_geometry_msgs.h"

#include "ros/ros.h"
#include "ros/console.h"
#include "geometry_msgs/PoseArray.h"
#include "footstep_planner/utils.h"

bool footstep_planner_service(sensor_msgs::SetCameraInfoRequest &req, sensor_msgs::SetCameraInfoResponse &res){ return true;}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "footstep_planner_server");

    ros::NodeHandle n;

    ros::Publisher footstep_pub = n.advertise<geometry_msgs::PoseArray>("/footstep_planner/footstep_plan", 1000);

    ros::Duration(1).sleep();

    Eigen::Array<bool, 4, 1> bool_bridge;

    bool_bridge << true, true, true, true;

    //Terrain terrain(bool_bridge);
    Terrain terrain;

    int n_steps = 4*20;

    int n_legs = 4;

    LegType step_sequence[] = {front_left, rear_right, front_right, rear_left};

    double step_span = 0.5;

    double step_height = 0.2;

    double length_legs = 0.6;

    double bbox_len = 0.3;

    Eigen::Matrix<Eigen::Vector3d, 4, 1> init_f_pos;

    Eigen::Vector3d center(terrain.getStoneByName("initial").getCenter());
    
    double angle_divided = 2*M_PI/n_legs;

    double phis[] = {0.5*angle_divided, -0.5*angle_divided, 1.5*angle_divided, -1.5*angle_divided};

    double theta_0 = 0;

    double angle_front_left = theta_0 + phis[front_left - 1];

    double angle_front_right = theta_0 + phis[front_right - 1];

    double angle_rear_left = theta_0 + phis[rear_left - 1];

    double angle_rear_right = theta_0 + phis[rear_right - 1];

    init_f_pos(front_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_left), std::sin(angle_front_left), 0);

    init_f_pos(front_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_right), std::sin(angle_front_right), 0);

    init_f_pos(rear_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_left), std::sin(angle_rear_left), 0);

    init_f_pos(rear_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_right), std::sin(angle_rear_right), 0);

    Eigen::Matrix<Eigen::Vector3d, 4, 1> goal_f_pos;

    center = terrain.getStoneByName("goal").getCenter();

    goal_f_pos(front_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_left), std::sin(angle_front_left), 0);

    goal_f_pos(front_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_front_right), std::sin(angle_front_right), 0);

    goal_f_pos(rear_left - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_left), std::sin(angle_rear_left), 0);

    goal_f_pos(rear_right - 1) = center + length_legs*Eigen::Vector3d(std::cos(angle_rear_right), std::sin(angle_rear_right), 0);

    ROS_INFO("About to begin planning");
    
    DecVars_res res = footstep_planner(terrain, init_f_pos, goal_f_pos, n_steps, n_legs, length_legs, step_sequence, bbox_len, step_span, step_height);

    if (res.success)
    {
        ROS_INFO("Writing to file...");

        writeDecVarsToFile(res, "/home/melyso/Documents/csv_files/footstep_planner");
        

        ROS_INFO("Successfully wrote to file!");

        geometry_msgs::PoseArray msg = pose_array_from_eigen_matr(res.position_ts);
        ROS_INFO("Successfully got poseArray");
        footstep_pub.publish(msg);    
        ROS_INFO("Successfully published");
    }

    ros::spinOnce();
    
    return 0;
}