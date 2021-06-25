#include "footstep_planner/footstep_planner.h"

//#include "footstep_planner/waypoint_planner.h"

#include "ros/ros.h"

#include "ros/console.h"

bool footstep_planner_service(sensor_msgs::SetCameraInfoRequest &req, sensor_msgs::SetCameraInfoResponse &res){ return true;}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "footstep_planner_server");

    ros::NodeHandle n;

    ros::ServiceServer service = n.advertiseService("footstep_planner", footstep_planner_service);

    Eigen::Array<bool, 4, 1> bool_bridge;

    bool_bridge << true, true, true, true;

    //Terrain terrain(bool_bridge);
    Terrain terrain;
    terrain.print();

    int n_steps = 4*2;

    int n_legs = 4;

    Leg step_sequence[] = {front_left, rear_right, front_right, rear_left};

    double step_span = 0.4;

    double length_legs = 0.4;

    double bbox_len = 0.2;

    ROS_INFO("About to begin planning");

    DecVars_res res = footstep_planner(terrain, n_steps, n_legs, length_legs, step_sequence, bbox_len, step_span);
    double wp_dist = 2;
    int n_points = 4;
    //DecVars_res res = waypoint_planner(terrain, n_points, length_legs, bbox_len, wp_dist);

    ROS_INFO("Got to the end");

    ROS_INFO("Writing to file...");

    writeDecVarsToFile(res, "/home/melyso/Documents/csv_files/footstep_planner");
    
    ROS_INFO("Successfully wrote to file!");

    ros::spinOnce();

    return 0;
}