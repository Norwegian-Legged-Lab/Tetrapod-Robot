#include "footstep_planner/footstep_planner.h"

#include "ros/ros.h"
#include "ros/console.h"

bool footstep_planner_service(sensor_msgs::SetCameraInfoRequest &req, sensor_msgs::SetCameraInfoResponse &res){ return true;}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "footstep_planner_server");

    ros::NodeHandle n;

    ros::ServiceServer service = n.advertiseService("footstep_planner", footstep_planner_service);

    Eigen::Array<bool, 4, 1> bool_bridge;

    bool_bridge << true, true, true, false;

    Terrain terrain(bool_bridge);

    terrain.print();

    int n_steps = 8;

    double step_span = 1.5;

    ROS_INFO("About to begin planning");

    DecVars_res res = footstep_planner(terrain, n_steps, step_span);

    ROS_INFO("Got to the end");

    ROS_INFO("Writing to file...");

    writeDecVarsToFile(res, "/home/melyso/Documents/csv_files/footstep_planner");

    ROS_INFO("Successfully wrote to file!");

    ros::spinOnce();

    return 0;
}