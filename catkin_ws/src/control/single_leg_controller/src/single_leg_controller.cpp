#include "single_leg_controller/single_leg_controller.h"

SingleLegController::SingleLegController()
{
    for(int i = 0; i < 3; i++)
    {
        q(i) = uninitialized_state;
    }

    K_p(0, 0) = 100.0;
    K_p(1, 1) = 100.0;
    K_p(2, 2) = 150.0;

    K_d(0, 0) = 20.0;
    K_d(1, 1) = 20.0;
    K_d(2, 2) = 30.0;
}


/*** ROS FUNCTIONS ***/

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
            "single_leg_controller_node",
            ros::init_options::NoSigintHandler
        );
    }

    // WHY DO THIS?
    node_handle.reset(new ros::NodeHandle("single_leg_controller_node"));

    // Initialize the generalized coordinates subscriber
    generalized_coordinates_subscriber = node_handle->subscribe
    (
        "/my_robot/gen_coord", 
        100, 
        &SingleLegController::generalizedCoordinatesCallback,
        this
    );

    generalized_velocities_subscriber = node_handle->subscribe
    (
        "/my_robot/gen_vel",
        100,
        &SingleLegController::generalizedVelocitiesCallback,
        this
    );

    // Initialize the ready to move subscriber
    ready_to_proceed_subscriber = node_handle->subscribe
    (
        "/ready_to_proceed",
        1, 
        &SingleLegController::readyToProceedCallback,
        this
    );

    joint_setpoint_subscriber = node_handle->subscribe
    (
        "/controller/joint_setpoints",
        1,
        &SingleLegController::jointSetpointCallback,
        this
    ); 

    // Initialize the joint state publisher
    joint_state_publisher = node_handle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 10);
}

void SingleLegController::generalizedCoordinatesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        q(i) = _msg->data[i + 6];
    }
}

void SingleLegController::generalizedVelocitiesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        q_d(i) = _msg->data[i + 6];
    }
}

void SingleLegController::readyToProceedCallback(const std_msgs::Bool &_msg)
{
    ready_to_proceed = _msg.data;
}

void SingleLegController::jointSetpointCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        q_ref(i) = _msg->data[i];
    }
}


/*** CONTROL FUNCTIONS ***/

void SingleLegController::updateJointReferences()
{
    double theta_hip_start = M_PI/6.0;
    double theta_hip_end = M_PI*5.0/6.0;
    double theta_travel = theta_hip_end - theta_hip_start;
    double T = 2.0;

    q_ref(0) = theta_travel*theta_travel*timer/T;
    q_ref(1) = M_PI/6;
    q_ref(2) = M_PI/4;

    q_d_ref(0) = theta_travel/T;
    q_d_ref(1) = 0.0;
    q_d_ref(2) = 0.0;

    q_dd_ref(0) = 0.0;
    q_dd_ref(1) = 0.0;
    q_dd_ref(2) = 0.0;

    if(timer >= T)
    {
        q_d_ref = Eigen::Matrix<double, 3, 1>::Zero();
        q_dd_ref = Eigen::Matrix<double, 3, 1>::Zero();
    }
}

void SingleLegController::updateJointTorques
(
    const Eigen::Matrix<double, 3, 1> &_q_ref,
    const Eigen::Matrix<double, 3, 1> &_q_d_ref,
    const Eigen::Matrix<double, 3, 1> &_q_dd_ref,
    const Eigen::Matrix<double, 3, 1> &_q,
    const Eigen::Matrix<double, 3, 1> &_q_d
)
{
    Eigen::Matrix<double, 3, 1> normalized_joint_torques = _q_dd_ref - K_p*(_q - _q_ref) - K_d*(_q_d - _q_d_ref);

    Eigen::Matrix<double, 3, 3> M = kinematics.GetSingleLegMassMatrix(_q);

    Eigen::Matrix<double, 3, 1> b = kinematics.GetSingleLegCoriolisAndCentrifugalTerms(_q, _q_d);

    Eigen::Matrix<double, 3, 1> g = kinematics.GetSingleLegGravitationalTerms(_q);

    /*
    ROS_INFO("y_ref: %f\t y_d_ref: %f\t y_dd_ref: %f\t y: %f\t y_d: %f", _q_ref(1), _q_d_ref(1), _q_dd_ref(1), _q(1), _q_d(1));

    ROS_INFO(
        "Mass matrix:\n%f\t%f\t%f\t\n%f\t%f\t%f\t\n%f\t%f\t%f\t\n", 
        M(0, 0), M(0, 1), M(0, 2), M(1, 0), M(1, 1), M(1, 2), M(2, 0), M(2, 1), M(2, 2));


    ROS_INFO("z1: %f\tz2: %f\tz3: %f", normalized_joint_torques(0), normalized_joint_torques(1), normalized_joint_torques(2));
    ROS_INFO("b1: %f\tb2: %f\tb3: %f", b(0), b(1), b(2));
    ROS_INFO("g1: %f\tg2: %f\tg3: %f", g(0), g(1), g(2));
    */

    tau = b + g + M*normalized_joint_torques;
}

void SingleLegController::updateJointTorques()
{
    updateJointTorques(q_ref, q_d_ref, q_dd_ref, q, q_d);
}

void SingleLegController::sendTorqueCommand()
{
    std_msgs::Float64MultiArray torque_msg;

    tf::matrixEigenToMsg(tau, torque_msg);

    sensor_msgs::JointState joint_state_msg;

    joint_state_msg.header.stamp = ros::Time::now();

    joint_state_msg.effort = torque_msg.data;

    joint_state_publisher.publish(joint_state_msg);
}

void SingleLegController::updateJointSetpoints()
{
    updateJointReferences();
    q_d_ref = Eigen::Matrix<double, 3, 1>::Zero();
    q_dd_ref = Eigen::Matrix<double, 3, 1>::Zero();
}


bool SingleLegController::moveJointsToSetpoints()
{
    ros::Rate command_send_rate(120.0);

    bool is_joint_target_reached = false;

    while(!is_joint_target_reached)
    {
        /*
        if(isTargetPositionReached()) // 5 degrees for each joint + speed
        {
            //is_joint_target_reached = true;

            ROS_WARN("GOAL REACHED");
        }
        else
        {
            ros::spinOnce();

            updateJointTorques();

            sendTorqueCommand();

            command_send_rate.sleep();
        }
        */
        ros::spinOnce();

        updateJointTorques();

        printTorques();

        sendTorqueCommand();

        command_send_rate.sleep();
    }

    return true;
}
    

/*** HELPER FUNCTIONS ***/

void SingleLegController::checkForNewMessages()
{
    ros::spinOnce();
}

bool SingleLegController::isTargetPositionReached()
{
    Eigen::Matrix<double, 3, 1> joint_error = q - q_ref;
    double q_speed = q_d.transpose()*q_d;
    ROS_INFO("q: %f, %f, %f\t q_ref: %f, %f, %f\t Error q_d: %f", q(0), q(1), q(2), q_ref(0), q_ref(1), q_ref(2), q_speed);
    if((joint_error.transpose()*joint_error < POSITION_CONVERGENCE_CRITERIA) && (q_speed < 0.050))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SingleLegController::isJointVelocitySmall()
{
    if(q_d.transpose()*q_d < 0.010)
    {
        return true;
    }
    else
    {
        ROS_INFO("Velocity is too large");
        return false;
    }
}

bool SingleLegController::initialStateReceived()
{
    if(q(0) == uninitialized_state)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void SingleLegController::printTorques()
{
    ROS_INFO("T1: %f\tT2: %f\tT3: %f", tau(0), tau(1), tau(2));
}