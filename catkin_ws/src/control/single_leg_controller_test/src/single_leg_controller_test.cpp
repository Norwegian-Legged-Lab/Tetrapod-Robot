#include "single_leg_controller_test/single_leg_controller_test.h"

SingleLegController::SingleLegController(double _dt)
{
    filter_ref_foot_speed_x.setTimestep(_dt);
    filter_ref_foot_speed_y.setTimestep(_dt);
    filter_ref_foot_speed_z.setTimestep(_dt);

    for(int i = 0; i < 3; i++)
    {
        motor_command_msg.position.push_back(1000);
        motor_command_msg.velocity.push_back(1000);
        motor_command_msg.effort.push_back(1000);
    }
}

void SingleLegController::generalizedCoordinatesCallback(const sensor_msgs::JointStateConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        joint_angles(i) = _msg->position[i];
    }
}

void SingleLegController::readyToMoveCallback(const std_msgs::Bool &_msg)
{
    ready_to_move = _msg.data;
}
/*
int main(int argc, char **argv)
{
    SingleLegController single_leg_controller;

    ros::spin();

    return 0;
}
*/
void SingleLegController::initROS()
{
    // Check if ROS has been initialized. If false, initialize ROS.
    if(!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init
        (
            argc,
            argv,
            "single_leg_controller_test_node"//,
            //ros::init_options::NoSigintHandler
        );
    }

    // WHY DO THIS?
    nodeHandle.reset(new ros::NodeHandle("single_leg_controller_test_node"));

    generalizedCoordinatesSubscriber = nodeHandle->subscribe
    (
        "/generalized_coordinates", 
        10, 
        &SingleLegController::generalizedCoordinatesCallback,
        this
    );

    readyToMoveSubscriber = nodeHandle->subscribe
    (
        "/ready_to_move",
        1, 
        &SingleLegController::readyToMoveCallback,
        this
    );

    jointCommandPublisher = nodeHandle->advertise<sensor_msgs::JointState>("/joint_command", 10);
}

void SingleLegController::checkForNewMessages()
{
    ros::spinOnce();
}

void SingleLegController::setFootGoalPos(double _desired_foot_pos_x, double _desired_foot_pos_y, double _desired_foot_pos_z)
{
    filter_ref_foot_speed_x.setReference(_desired_foot_pos_x);
    filter_ref_foot_speed_y.setReference(_desired_foot_pos_y);
    filter_ref_foot_speed_z.setReference(_desired_foot_pos_z);
}

void SingleLegController::setReferenceParameters
(
    double _omega_x, double _omega_y, double _omega_z,
    double _damping_x, double _damping_y, double _damping_z
)
{
    filter_ref_foot_speed_x.setParameters(_omega_x, _damping_x);
    filter_ref_foot_speed_y.setParameters(_omega_y, _damping_y);
    filter_ref_foot_speed_z.setParameters(_omega_z, _damping_z);
}

void SingleLegController::setCurrentReferencePosition(double _pos_x, double _pos_y, double _pos_z)
{
    filter_ref_foot_speed_x.setCurrentPos(_pos_x);
    filter_ref_foot_speed_y.setCurrentPos(_pos_y);
    filter_ref_foot_speed_z.setCurrentPos(_pos_z);
}

void SingleLegController::updateSpeedControlCommands()
{
    filter_ref_foot_speed_x.updateFilter();
    filter_ref_foot_speed_y.updateFilter();
    filter_ref_foot_speed_z.updateFilter();

    Eigen::Matrix<double, 3, 1> vel_foot;
    vel_foot(0) = filter_ref_foot_speed_x.getSpeed();
    vel_foot(1) = filter_ref_foot_speed_y.getSpeed();
    vel_foot(2) = filter_ref_foot_speed_z.getSpeed();

    Eigen::Matrix<double, 3, 3> foot_jacobian = Eigen::Matrix<double, 3, 3>::Zero();
    //foot_jacobian = kinematics::getFootJacobian(joint_angles); 
    for(int i = 0; i < 3; i++){foot_jacobian(i, i) = 1.0;} // TODO Replace with true Jacobian

    joint_velocities = foot_jacobian.inverse()*vel_foot;
}

void SingleLegController::sendJointCommand()
{
    for(int i = 0; i < 3; i++)
    {
        motor_command_msg.velocity[i] = joint_velocities(i);
    }
    motor_command_msg.header.stamp = ros::Time::now();
    jointCommandPublisher.publish(motor_command_msg);
}