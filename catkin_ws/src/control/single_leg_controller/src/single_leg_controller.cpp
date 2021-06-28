#include "single_leg_controller/single_leg_controller.h"

SingleLegController::SingleLegController(double _publish_frequency)
{
    // Store the publish frequency for the controller
    this->publish_frequency = _publish_frequency;

    // Update the number of iterations per phase based on the publish frequency
    this->final_iteration = this->phase_period*publish_frequency;

    // Set all the states to uninitialized
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        this->joint_pos(i) = UNINITIALIZED_STATE;
    }

    // Set the initial goal position
    this->foot_pos_goal[0] = this->x_nominal;
    this->foot_pos_goal[1] = this->y_nominal;
    this->foot_pos_goal[2] = - this->hip_height;

    // Set the actuator gains
    double k_pos = 5.0;

    this->k_p_pos_hy = k_pos;
    this->k_i_pos_hy = k_pos;

    this->k_p_pos_hp = k_pos;
    this->k_i_pos_hp = k_pos;

    this->k_p_pos_kp = k_pos;
    this->k_i_pos_kp = k_pos;

    double k_vel = 10.0;

    this->k_p_vel_hy = k_vel;
    this->k_i_vel_hy = k_vel;

    this->k_p_vel_hp = k_vel;
    this->k_i_vel_hp = k_vel;

    this->k_p_vel_kp = k_vel;
    this->k_p_vel_kp = k_vel;

    double k_torque = 50.0;

    this->k_p_torque_hy = k_torque;
    this->k_i_torque_hy = k_torque;

    this->k_p_torque_hp = k_torque;
    this->k_i_torque_hp = k_torque;

    this->k_p_torque_kp = k_torque;
    this->k_i_torque_kp = k_torque;

    // Set the closed loop torque control gains
    double k_p_hy = 200.0;
    double k_p_hp = 200.0;
    double k_p_kp = 200.0;

    double k_d_hy = 40.0;
    double k_d_hp = 40.0;
    double k_d_kp = 40.0;

    // Store the values in matricies that will be used by the torque controller
    this->K_p(0, 0) = k_p_hy;
    this->K_p(1, 1) = k_p_hp;
    this->K_p(2, 2) = k_p_kp;

    this->K_d(0, 0) = k_d_hy;
    this->K_d(1, 1) = k_d_hp;
    this->K_d(2, 2) = k_d_kp;

    // Set the velocity control position error gains
    double k_pos_error_vel_control_hy = 5.0;
    double k_pos_error_vel_control_hp = 5.0;
    double k_pos_error_vel_control_kp = 5.0;

    K_pos_error_vel_control(0, 0) = k_pos_error_vel_control_hy;
    K_pos_error_vel_control(1, 1) = k_pos_error_vel_control_hp;
    K_pos_error_vel_control(2, 2) = k_pos_error_vel_control_kp;

    // Initializing the size of the logging messages
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {        
        this->joint_state_log_msg.position.push_back(UNINITIALIZED_STATE);
        this->joint_state_log_msg.velocity.push_back(UNINITIALIZED_STATE);
        this->joint_state_log_msg.effort.push_back(UNINITIALIZED_STATE);

        this->joint_reference_log_msg.position.push_back(UNINITIALIZED_STATE);
        this->joint_reference_log_msg.velocity.push_back(UNINITIALIZED_STATE);
        this->joint_reference_log_msg.effort.push_back(UNINITIALIZED_STATE);
    }
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

    // Do this to prevent multiple nodes from using the same name
    this->node_handle.reset(new ros::NodeHandle("single_leg_controller_node"));

    // Initialize the generalized coordinates subscriber
    this->generalized_coordinates_subscriber = node_handle->subscribe
    (
        "/my_robot/gen_coord", 
        1, 
        &SingleLegController::generalizedCoordinatesCallback,
        this
    );

    // Initialize the generalized velocities subscriber
    this->generalized_velocities_subscriber = node_handle->subscribe
    (
        "/my_robot/gen_vel",
        1,
        &SingleLegController::generalizedVelocitiesCallback,
        this
    );

    // Initialize the subscriber listening to real world motor states
    this->joint_state_subscriber = node_handle->subscribe
    (
        "/motor/states",
        1,
        &SingleLegController::jointStateCallback,
        this
    );

    // Initialize the ready to proceed subscriber
    this->ready_to_proceed_subscriber = node_handle->subscribe
    (
        "/ready_to_proceed",
        1, 
        &SingleLegController::readyToProceedCallback,
        this
    );

    // Initialize the joint setpoint subscriber
    this->joint_setpoint_subscriber = node_handle->subscribe
    (
        "/controller/joint_setpoints",
        1,
        &SingleLegController::jointSetpointCallback,
        this
    ); 

    // Initialize the motor confirmation subscriber
    this->motor_confirmation_subscriber = node_handle->subscribe
    (
        "/motor/confirmation",
        1,
        &SingleLegController::motorConfirmationCallback,
        this
    );

    // Initialize the joint state publisher
    this->joint_state_publisher = this->node_handle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 1);

    // Initialize the motor set motor gain publisher
    this->motor_gain_publisher = this->node_handle->advertise<std_msgs::Float64MultiArray>("/motor/gains", 1);

    // Initialize the state logging publisher
    this->log_joint_states_publisher = this->node_handle->advertise<sensor_msgs::JointState>("/logging/joint_states", 10);

    // Initialize the reference logging publisher
    this->log_joint_references_publisher = this->node_handle->advertise<sensor_msgs::JointState>("/logging/joint_references", 10);
}

void SingleLegController::generalizedCoordinatesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        // + 6 is added because the first six states are (x, y, z, roll, pitch, yaw)
        // The remaining three states are theta_hy, theta_hp, theta_kp
        this->joint_pos(i) = _msg->data[i + 6];
    }
}

void SingleLegController::generalizedVelocitiesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        // + 6 is added because the first six states are (x_dot, y_dot, z_dot, roll_dot, pitch_dot, yaw_dot)
        // The remaining three states are theta_hy_dot, theta_hp_dot, theta_kp_dot
        this->joint_vel(i) = _msg->data[i + 6];
    }
}

void SingleLegController::jointStateCallback(const sensor_msgs::JointStatePtr &_msg)
{
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        // Store the jont angles
        this->joint_pos(i) = _msg->position[i];

        // Store the joint velocities
        this->joint_vel(i) = _msg->velocity[i];

        // Store the joint torques
        this->joint_torque(i) = _msg->effort[i];
    }
}

void SingleLegController::readyToProceedCallback(const std_msgs::Bool &_msg)
{
    // Store the message
    this->ready_to_proceed = _msg.data;
}

void SingleLegController::jointSetpointCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < 3; i++)
    {
        // Set the desired joint state goal
        this->foot_pos_goal(i) = _msg->data[i];
    }
}

void SingleLegController::motorConfirmationCallback(const std_msgs::Bool &_msg)
{
    // Inform that the gains have been set
    this->gains_set = _msg.data;
}


/*** CONTROL FUNCTIONS ***/

Eigen::Matrix<double, 3, 1> SingleLegController::calculateSwingLegHeightTrajectory(double _percentage, double _period, double _max_swing_height, double _hip_height)
{
    // Defining parameters for the polynomial. Please see the report for an explanation
    double c = _max_swing_height;
    double a = c/pow(0.5, 4.0);
    double b = -2.0*a*pow(0.5, 2.0);

    // Define a vector to store the foot height trajectory
    Eigen::Matrix<double, 3, 1> trajectory;

    // Shift the gait cycle location to be centered around 0, [-0.5, 0.5]
    double x = _percentage - 0.5;

    // Calculate the swing foot height (See report)
    trajectory(0) = a*pow(x, 4.0) + b*pow(x, 2.0) + c - _hip_height;

    // Calculate the swing foot height velocity (see report)
    trajectory(1) = (4.0*a*pow(x, 3.0) + 2.0*b*x)/_period;

    // Calculate the swing foot height acceleration (see report)
    trajectory(2) = (12.0*a*pow(x, 2.0) + 2.0*b)/pow(_period, 2.0);

    // Return the trajectory
    return trajectory;
}

void SingleLegController::calculateSingleAxisTrajectory
(
    const double &_percentage, 
    const double &_period, 
    const double &_max_travel,
    double &_axis_pos, 
    double &_axis_vel, 
    double &_axis_acc
)
{
    // Define paramaters for the polynomial. Please see the report for an explanation
    double a = 30.0*_max_travel;
    double b = -15.0*_max_travel;
    double c = 1.875*_max_travel;
    double d = -_max_travel*7.0/16.0;

    // Calculate the position from the polynomial
    _axis_pos = 0.2*a*pow((_percentage - 0.5), 5.0) + b*pow((_percentage - 0.5), 3.0)/3.0 + c*_percentage + d;

    // Calculate the velocity from the derivative of the polynomial
    _axis_vel = (a*pow((_percentage - 0.5), 4.0) + b*pow((_percentage - 0.5), 2.0) + c)/_period;

    // Calculate the acceleration from the two times derivative of the polynomial
    _axis_acc = (4.0*a*pow((_percentage - 0.5), 3.0) + 2.0*b*(_percentage - 0.5))/(_period*_period);
}

void SingleLegController::updateSwingFootPositionTrajectory()
{
    // Calculate the location in the gait cycle
    double progress = current_iteration/final_iteration;

    // Foot position [m] in x direction relative to the nominal foot position
    double foot_dx;

    // Foot position [m] in the y direction relative to the nominal foot position
    double foot_dy;

    // Foot velocity [m/s] in the x direction relative to the hip
    double foot_vel_x;

    // Foot velocity [m/s] in the y direction relative to the hip
    double foot_vel_y;

    // Foot acceleration [m/s^2] in the x direction relative to the hip
    double foot_acc_x;

    // Foot accaleration [m/s^2] in the y direction relative to the hip
    double foot_acc_y;

    // Update the foot trajectory in the hip x direction
    this->calculateSingleAxisTrajectory(progress, this->phase_period, this->x_step_distance, foot_dx, foot_vel_x, foot_acc_x);

    // Update the foot trajectory in the hip y direction
    this->calculateSingleAxisTrajectory(progress, this->phase_period, this->y_step_distance, foot_dy, foot_vel_y, foot_acc_y);

    // Update the foot trajectory in the hip z direction
    Eigen::Matrix<double, 3, 1> z = this->calculateSwingLegHeightTrajectory(progress, this->phase_period, this->max_swing_height, this->hip_height);
    //z(0) = -hip_height;
    //z(1) = 0.0;
    //z(2) = 0.0;

    // Update the foot positions in the hip frame
    this->foot_pos_ref(0) = this->x_nominal - this->x_step_distance + foot_dx;
    this->foot_pos_ref(1) = this->y_nominal - this->y_step_distance + foot_dy;
    this->foot_pos_ref(2) = z(0);
    //this->foot_pos_ref(2) = -this->hip_height; // For testing

    // Update the foot velocities in the hip frame
    this->foot_vel_ref(0) = foot_vel_x;
    this->foot_vel_ref(1) = foot_vel_y;
    this->foot_vel_ref(2) = z(1);

    // Update the foot accelerations in the hip frame
    this->foot_acc_ref(0) = foot_acc_x;
    this->foot_acc_ref(1) = foot_acc_y;
    this->foot_acc_ref(2) = z(2);
}

void SingleLegController::updateStanceFootPositionTrajectory()
{
    // Calculate the location in the gait cycle
    double progress = current_iteration/final_iteration;

    // Foot position [m] in x direction relative to the nominal foot position
    double foot_dx;

    // Foot position [m] in the y direction relative to the nominal foot position
    double foot_dy;

    // Foot velocity [m/s] in the x direction relative to the hip
    double foot_vel_x;

    // Foot velocity [m/s] in the y direction relative to the hip
    double foot_vel_y;

    // Foot acceleration [m/s^2] in the x direction relative to the hip
    double foot_acc_x;

    // Foot accaleration [m/s^2] in the y direction relative to the hip
    double foot_acc_y;

    // Update the foot trajectory in the hip x direction
    this->calculateSingleAxisTrajectory(progress, phase_period, x_step_distance, foot_dx, foot_vel_x, foot_acc_x);

    // Update the foot trajectory in the hip y direction
    this->calculateSingleAxisTrajectory(progress, phase_period, y_step_distance, foot_dy, foot_vel_y, foot_acc_y);

    // Update the foot positions in the hip frame
    // To push the body of the robot forward we have to move the stance foot backwards
    this->foot_pos_ref(0) = x_nominal - foot_dx;
    this->foot_pos_ref(1) = y_nominal - foot_dy;

    // We assume a constant height of the ground. !!! Here a lot can be done to handle obstacles
    this->foot_pos_ref(2) = - hip_height;

    // If we have not reached the final iteration, simply assign the foot trajectory velocity and acceleration
    if(current_iteration + 1 < final_iteration)
    {
        this->foot_vel_ref(0) = - foot_vel_x;
        this->foot_vel_ref(1) = - foot_vel_y;
        this->foot_vel_ref(2) = 0.0;

        this->foot_acc_ref(0) = - foot_acc_x;
        this->foot_acc_ref(1) = - foot_acc_y;
        this->foot_acc_ref(2) = 0.0;
    }
    // If we have reached the final iteration and not changed state, set the velocities to zero to keep the foot still.
    else
    {
        this->foot_vel_ref(0) = 0.0;
        this->foot_vel_ref(1) = 0.0;
        this->foot_vel_ref(2) = 0.0;

        this->foot_acc_ref(0) = 0.0;
        this->foot_acc_ref(1) = 0.0;
        this->foot_acc_ref(2) = 0.0;
    }
}

void SingleLegController::setPoseGoal(Eigen::Matrix<double, 3, 1> _foot_pos)
{
    // Set the trajectory goal joint positions given by the foot pos
    if(!this->kinematics.SolveSingleLegInverseKinematics(false, _foot_pos, this->joint_pos_goal))
    {
        ROS_WARN("[setFootPose] Failed to solve inverse kinematics");
        
        return;
    }
    
    // Set the trajectory initial joint position 
    this->joint_pos_initial = this->joint_pos;

    double max_joint_error = 0.0;

    for(int i = 0; i < this->NUMBER_OF_MOTORS; i++)
    {
        if(abs(joint_pos_goal(i) - joint_pos_initial(i)) > max_joint_error)
        {
            max_joint_error = abs(joint_pos_goal(i) - joint_pos_initial(i));
        }
    }

    // Calculate the desired period based on the maximum allowable velocity
    double a = 30.0 * max_joint_error;
    double b = -15.0 * max_joint_error;
    double c = 1.875 * max_joint_error;
    double d = - max_joint_error * 7.0/16.0;
    double _percentage = 0.5;

    this->pose_period = (a*pow((_percentage - 0.5), 4.0) + b*pow((_percentage - 0.5), 2.0) + c)/this->max_pose_vel;

    // Update the number of iterations
    this->current_pose_iteration = 0;

    this->final_pose_iteration = this->pose_period * this->publish_frequency;
}

bool SingleLegController::updatePoseControlJointTrajectoryReference()
{
    double progress = this->current_pose_iteration/this->final_pose_iteration;

    double hy_pos;
    double hy_vel;
    double hy_acc;

    double hp_pos;
    double hp_vel;
    double hp_acc;

    double kp_pos;
    double kp_vel;
    double kp_acc;

    hy_pos = (joint_pos_goal(0) - joint_pos_initial(0))*progress;
    hp_pos = (joint_pos_goal(1) - joint_pos_initial(1))*progress;
    kp_pos = (joint_pos_goal(2) - joint_pos_initial(2))*progress;
    

    //this->calculateSingleAxisTrajectory(progress, this->pose_period, joint_pos_goal(0) - joint_pos_initial(0), hy_pos, hy_vel, hy_acc);

    //this->calculateSingleAxisTrajectory(progress, this->pose_period, joint_pos_goal(1) - joint_pos_initial(1), hp_pos, hp_vel, hp_acc);

    //this->calculateSingleAxisTrajectory(progress, this->pose_period, joint_pos_goal(2) - joint_pos_initial(2), kp_pos, kp_vel, kp_acc);

    this->joint_pos_ref(0) = this->joint_pos_initial(0) + hy_pos;
    this->joint_vel_ref(0) = hy_vel;
    this->joint_acc_ref(0) = hy_acc;

    this->joint_pos_ref(1) = this->joint_pos_initial(1) + hp_pos;
    this->joint_vel_ref(1) = hp_vel;
    this->joint_acc_ref(1) = hp_acc;

    this->joint_pos_ref(2) = this->joint_pos_initial(2) + kp_pos;
    this->joint_vel_ref(2) = kp_vel;
    this->joint_acc_ref(2) = kp_acc;

    ROS_INFO("P: %f\thy_pos: %f\thp_pos: %f\tkp_pos: %f", progress, hy_pos, hp_pos, kp_pos);

    if(this->current_pose_iteration < this->final_pose_iteration)
    {
        this->current_pose_iteration++;

        // If the goal position is not reached we return false
        return false;
    }
    else
    {
        this->current_pose_iteration = this->final_pose_iteration;

        // When the goal position is reached we return true
        return true;
    }

    
}

void SingleLegController::updateJointReferences()
{
    // Try to solve the inverse kinematics for the single leg to obtain the joint angle references from the foot position reference
    if(!this->kinematics.SolveSingleLegInverseKinematics(false, foot_pos_ref, this->joint_pos_ref))
    {
        ROS_WARN("[updateJointReferences] Failed to solve inverse kinematics");
    }
    else // If we successfully found a solution to the inverse kinematics problem
    {
        // Calculate the translation Jacobian for the foot
        Eigen::Matrix<double, 3, 3> J_s = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, joint_pos(0), joint_pos(1), joint_pos(2));
        
        // Calculate the derivative of the translation Jacobian for the foot
        Eigen::Matrix<double, 3, 3> J_s_d = this->kinematics.GetTranslationJacobianInBDiff(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, joint_pos(0), joint_pos(1), joint_pos(2), joint_vel(0), joint_vel(1), joint_vel(2));

        // Update the joint angle velocity references
        this->joint_vel_ref = J_s.inverse()*this->foot_vel_ref;

        // Update the joint angle acceleration references
        this->joint_acc_ref = J_s.inverse()*(this->foot_acc_ref - J_s_d*this->foot_vel_ref);
    }
}

void SingleLegController::updateJointVelocityCommands()
{
    this->joint_vel_commands = joint_vel_ref + K_pos_error_vel_control*(joint_pos_ref - joint_pos);
}

void SingleLegController::updateJointTorqueCommands()
{
    // Updates the joint torque references based on the joint reference trajectories and estimated joint states
    this->updateJointTorqueCommands(this->joint_pos_ref, this->joint_vel_ref, this->joint_acc_ref, this->joint_pos, this->joint_vel);
}

void SingleLegController::updateJointTorqueCommands
(
    const Eigen::Matrix<double, 3, 1> &_joint_pos_ref,
    const Eigen::Matrix<double, 3, 1> &_joint_vel_ref,
    const Eigen::Matrix<double, 3, 1> &_joint_acc_ref,
    const Eigen::Matrix<double, 3, 1> &_joint_pos,
    const Eigen::Matrix<double, 3, 1> &_joint_vel
)
{
    // Calculate the closed loop joint torque
    Eigen::Matrix<double, 3, 1> normalized_joint_torques = _joint_acc_ref - K_p*(_joint_pos - _joint_pos_ref) - K_d*(_joint_vel - _joint_vel_ref);

    // Calculate the mass inertia matrix
    Eigen::Matrix<double, 3, 3> M = this->kinematics.GetSingleLegMassMatrix(_joint_pos);

    // Calculate the Coriolis/Centrifugal vector
    Eigen::Matrix<double, 3, 1> b = this->kinematics.GetSingleLegCoriolisAndCentrifugalTerms(_joint_pos, _joint_vel);

    // Calculate the gravity vector
    Eigen::Matrix<double, 3, 1> g = this->kinematics.GetSingleLegGravitationalTerms(_joint_pos);

    /*
    ROS_INFO("y_ref: %f\t y_d_ref: %f\t y_dd_ref: %f\t y: %f\t y_d: %f", _q_ref(1), _joint_vel_ref(1), _joint_acc_ref(1), _q(1), _joint_vel(1));

    ROS_INFO(
        "Mass matrix:\n%f\t%f\t%f\t\n%f\t%f\t%f\t\n%f\t%f\t%f\t\n", 
        M(0, 0), M(0, 1), M(0, 2), M(1, 0), M(1, 1), M(1, 2), M(2, 0), M(2, 1), M(2, 2));


    ROS_INFO("z1: %f\tz2: %f\tz3: %f", normalized_joint_torques(0), normalized_joint_torques(1), normalized_joint_torques(2));
    ROS_INFO("b1: %f\tb2: %f\tb3: %f", b(0), b(1), b(2));
    ROS_INFO("g1: %f\tg2: %f\tg3: %f", g(0), g(1), g(2));
    */

    this->joint_torque_commands = b + g + M*normalized_joint_torques;
}

void SingleLegController::sendJointPositionCommands()
{
    // Check if the position commands are within the joint angle limit constraints
    if (this->kinematics.ValidateSolution(this->joint_pos_ref) == false)
    {
        // If they are violated report the problem and don't send a command to the motors
        ROS_WARN("Position setpoint violates joint limits. Command canceled.");
    }
    else // If the joint angles are valid
    {
        // Create a joint state message
        sensor_msgs::JointState joint_state_msg;

        // Set the time of the joint state message
        joint_state_msg.header.stamp = ros::Time::now();

        // Indicate that position control should be used
        joint_state_msg.name.push_back("position");

        // Create a float array for joint angle commands
        std_msgs::Float64MultiArray position_commands;

        // Put the joint angle reference vector into the position command message
        tf::matrixEigenToMsg(this->joint_pos_ref, position_commands);

        // Add the position commands to the joint state message
        joint_state_msg.position = position_commands.data;

        // Publish the message
        joint_state_publisher.publish(joint_state_msg);
    }
}

void SingleLegController::sendJointVelocityCommands()
{
    // Create a joint state message
    sensor_msgs::JointState joint_state_msg;

    // Set the time of the joint state message
    joint_state_msg.header.stamp = ros::Time::now();

    // Indicate that velocity control should be used
    joint_state_msg.name.push_back("velocity");

    // Create a float array for joint torque commands
    std_msgs::Float64MultiArray joint_vel_command_array;

    // Put the joint velocity command array into the joint velocity command message
    tf::matrixEigenToMsg(this->joint_vel_commands, joint_vel_command_array);

    // Add the joint velocity commands to the joint state message
    joint_state_msg.effort = joint_vel_command_array.data;

    // Publish the message
    joint_state_publisher.publish(joint_state_msg);
}

void SingleLegController::sendJointTorqueCommands()
{
    // Create a joint state message
    sensor_msgs::JointState joint_state_msg;

    // Set the time of the joint state message
    joint_state_msg.header.stamp = ros::Time::now();

    // Indicate that torque control should be used
    joint_state_msg.name.push_back("torque");

    // Create a float array for joint torque commands
    std_msgs::Float64MultiArray joint_torque_command_array;

    // Put the joint torque reference vector into the torque command message
    tf::matrixEigenToMsg(this->joint_torque_commands, joint_torque_command_array);

    // Add the torque commands to the joint state message
    joint_state_msg.effort = joint_torque_command_array.data;

    // Publish the message
    joint_state_publisher.publish(joint_state_msg);
}

bool SingleLegController::moveFootToPosition(Eigen::Matrix<double, 3, 1> _foot_goal_pos)
{
    // Starting angle of the trajectory
    Eigen::Matrix<double, 3, 1> trajectory_initial_joint_pos = joint_pos;

    // Target angles of the trajectory
    Eigen::Matrix<double, 3, 1> trajectory_goal_joint_pos;

    // Check if the desired goal position has a valid inverse kinematics solution
    if(this->kinematics.SolveSingleLegInverseKinematics(this->kinematics.GetflOffset(), _foot_goal_pos, trajectory_goal_joint_pos) == false)
    {
        ROS_WARN("In the function SingleLegController::moveFootToPosition the inverse kinematics solver failed to find a valid solution.");
        return false;
    }

    // Check if the inverse kinematics solution violates any of theangle constraints
    if(this->kinematics.ValidateSolution(trajectory_goal_joint_pos) == false)
    {
        ROS_WARN("In the function SingleLegController::moveFootToPosition the goal joint angles violated the angle constaints of the leg.");
        return false;
    }
    
    // Set the control command send rate
    ros::Rate command_send_rate(publish_frequency);

    // Find the maximum joint angle error
    double max_joint_error = 0.0;

    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        if(abs(trajectory_goal_joint_pos(i) - trajectory_initial_joint_pos(i)) > max_joint_error)
        {
            max_joint_error = abs(trajectory_goal_joint_pos(i) - trajectory_initial_joint_pos(i));
        }
    }

    // Set the fastest joint_velocity
    double max_joint_velocity = math_utils::degToRad(20);

    // The joint with largest error decides the trajectory duration
    double trajectory_duration = max_joint_error/max_joint_velocity;

    // Calculate the number of iterations to reach the goal
    double _final_iteration = trajectory_duration*this->publish_frequency;

    // Set initial iteration to zero
    double _iteration = 0.0;

    while((_iteration <= _final_iteration) || !isTargetPositionReached() || !isJointVelocitySmall() || !ready_to_proceed)
    {
        ros::spinOnce();

        this->joint_pos_ref = trajectory_initial_joint_pos + (trajectory_goal_joint_pos - trajectory_initial_joint_pos)*_iteration/_final_iteration;

        this->sendJointPositionCommands();

        command_send_rate.sleep();
        
        if(_iteration <= _final_iteration)
        {
            _iteration ++;
        }

        ROS_INFO("Trying to get to final position. I: %f\tI_f: %f", _iteration, _final_iteration);
    }

    return true;
}

bool SingleLegController::moveJointsToSetpoints()
{
    return this->moveFootToPosition(foot_pos_goal);
}

bool SingleLegController::moveFootToNominalPosition()
{
    Eigen::Matrix<double, 3, 1> nominal_foot_position(this->x_nominal, this->y_nominal, -this->hip_height);

    return this->moveFootToPosition(nominal_foot_position);
}

void SingleLegController::increaseIterator()
{
    // Increment the gait cycle iterator
    this->current_iteration++;

    // If we reach the final iteration stop incrementing
    if(this->current_iteration >= this->final_iteration)
    {
        this->current_iteration = this->final_iteration;
    }
}

void SingleLegController::updateGaitPhase()
{
    // Increase the iterator
    this->current_iteration++;

    // If the the final iteration is reached
    if(this->current_iteration >= this->final_iteration)
    {
        // Reset the iterator for the new phase
        this->current_iteration = 0.0;

        // If the previous phase was not the stance phase, change to stance phase
        if(this->gait_phase != GaitPhase::stance)
        {
            this->gait_phase = GaitPhase::stance;
        }
        else // If not change to swing phase
        {
            this->gait_phase = GaitPhase::swing;
        }
    }
    
}

void SingleLegController::updateFootTrajectoryReference()
{
    if(this->gait_phase == GaitPhase::swing)
    {
        ROS_INFO("SWING");

        // Update the foot trajectory as a swing foot trajectory 
        this->updateSwingFootPositionTrajectory();
    }
    else
    {
        ROS_INFO("STANCE");

        // Update the foot tractory as a stance foot trajectory
        this->updateStanceFootPositionTrajectory();
    }
}



/*** HELPER FUNCTIONS ***/

void SingleLegController::checkForNewMessages()
{
    ros::spinOnce();
}

bool SingleLegController::isTargetPositionReached()
{
    Eigen::Matrix<double, 3, 1> joint_error = joint_pos - this->joint_pos_ref;
    double joint_pos_speed = joint_vel.transpose()*joint_vel;
    printAllStates();
    if((joint_error.transpose()*joint_error < POSITION_CONVERGENCE_CRITERIA) && (joint_pos_speed < 0.050))
    {
        ROS_INFO("Target Reached");
        return true;
    }
    else
    {
        ROS_INFO("Error too large");
        return false;
    }
}

bool SingleLegController::isJointVelocitySmall()
{
    if(joint_vel.transpose()*joint_vel < 3.0*math_utils::degToRad(3.0)*math_utils::degToRad(3.0))
    {
        ROS_INFO("Velocity is small");
        return true;
    }
    else
    {
        ROS_INFO("Velocity is too large");
        return false;
    }
}

bool SingleLegController::isInitialStateReceived()
{
    // Check if the current joint angle is equal to the uninitialized state
    if(this->joint_pos(0) == this->UNINITIALIZED_STATE)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void SingleLegController::printTorqueReferences()
{
    ROS_INFO("T1: %f\tT2: %f\tT3: %f", this->joint_torque_ref(0), this->joint_torque_ref(1), this->joint_torque_ref(2));
}

void SingleLegController::printSpatialTrajectories()
{
    ROS_INFO("Pos: %f, %f, %f\tVel: %f, %f, %f\tAcc: %f, %f, %f", this->foot_pos_ref(0), this->foot_pos_ref(1), this->foot_pos_ref(2), this->foot_vel_ref(0), this->foot_vel_ref(1), this->foot_vel_ref(2), this->foot_acc_ref(0), this->foot_acc_ref(1), this->foot_acc_ref(2));
}

void SingleLegController::printJointTrajectories()
{
    ROS_INFO("joint_pos_ref: %f, %f, %f\tq_d_ref: %f, %f, %f\tq_dd_ref: %f, %f, %f", this->joint_pos_ref(0), this->joint_pos_ref(1), this->joint_pos_ref(2), this->joint_vel_ref(0), this->joint_vel_ref(1), this->joint_vel_ref(2), this->joint_acc_ref(0), this->joint_acc_ref(1), this->joint_acc_ref(2));
}

void SingleLegController::printAllStates()
{
    ROS_INFO("I: %.0f\tP: %.3f, %.3f, %.3f\tV: %.3f, %.3f, %.3f\tA: %.3f, %.3f, %.3f\tq_r: %.3f, %.3f, %.3f\tq_d_r: %.3f, %.3f, %.3f\tq_dd_r: %.3f, %.3f, %.3f\tq: %.3f, %.3f, %.3f\tq_d: %.3f, %.3f, %.3f\tT:  %.3f, %.3f, %.3f",
    current_iteration,
    this->foot_pos_ref(0), this->foot_pos_ref(1), this->foot_pos_ref(2), this->foot_vel_ref(0), this->foot_vel_ref(1), this->foot_vel_ref(2), this->foot_acc_ref(0), this->foot_acc_ref(1), this->foot_acc_ref(2),
    math_utils::radToDeg(this->joint_pos_ref(0)), math_utils::radToDeg(this->joint_pos_ref(1)), math_utils::radToDeg(this->joint_pos_ref(2)), this->joint_vel_ref(0), this->joint_vel_ref(1), this->joint_vel_ref(2), this->joint_acc_ref(0), this->joint_acc_ref(1), this->joint_acc_ref(2),
    math_utils::radToDeg(joint_pos(0)), math_utils::radToDeg(joint_pos(1)), math_utils::radToDeg(joint_pos(2)), joint_vel(0), joint_vel(1), joint_vel(2),
    joint_torque(0), joint_torque(1), joint_torque(2)
    );
}

void SingleLegController::writeToLog()
{
    // Fill the log messages with the latest data
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        this->joint_state_log_msg.position[i] = this->joint_pos(i);
        this->joint_state_log_msg.velocity[i] = this->joint_vel(i);
        this->joint_state_log_msg.effort[i] = this->joint_torque(i);

        this->joint_reference_log_msg.position[i] = this->joint_pos_ref(i);
        this->joint_reference_log_msg.velocity[i] = this->joint_vel_ref(i);
        this->joint_reference_log_msg.effort[i] = this->joint_torque_commands(i);
    }
    
    // Update the time stamps
    this->joint_state_log_msg.header.stamp = ros::Time::now();
    this->joint_reference_log_msg.header.stamp = ros::Time::now();

    // Publish the messages
    this->log_joint_states_publisher.publish(joint_state_log_msg);
    this->log_joint_references_publisher.publish(joint_reference_log_msg);
}

void SingleLegController::setMotorGains()
{
    // Rate of which we try to set the motor gains
    ros::Rate set_gains_rate(0.4);

    // Inform that the gains have not been set to their desired value
    this->gains_set = false;

    // Create a multi array message for the motor gains
    std_msgs::Float64MultiArray motor_gain_msg;

    // Add the motor gains for the hip yaw motor
    motor_gain_msg.data.push_back(k_p_pos_hy);
    motor_gain_msg.data.push_back(k_i_pos_hy);
    motor_gain_msg.data.push_back(k_p_vel_hy);
    motor_gain_msg.data.push_back(k_i_vel_hy);
    motor_gain_msg.data.push_back(k_p_torque_hy);
    motor_gain_msg.data.push_back(k_i_torque_hy);

    // Add the motor gains for the hip pitch motor
    motor_gain_msg.data.push_back(k_p_pos_hp);
    motor_gain_msg.data.push_back(k_i_pos_hp);
    motor_gain_msg.data.push_back(k_p_vel_hp);
    motor_gain_msg.data.push_back(k_i_vel_hp);
    motor_gain_msg.data.push_back(k_p_torque_hp);
    motor_gain_msg.data.push_back(k_i_torque_hp);

    // Add the motor gains for the knee pitch motor
    motor_gain_msg.data.push_back(k_p_pos_kp);
    motor_gain_msg.data.push_back(k_i_pos_kp);
    motor_gain_msg.data.push_back(k_p_vel_kp);
    motor_gain_msg.data.push_back(k_p_vel_kp);
    motor_gain_msg.data.push_back(k_p_torque_kp);
    motor_gain_msg.data.push_back(k_i_torque_kp);

    // Keep looping until a a confirmation message from the motors have been received
    while(!gains_set) 
    {
        // Publish the motor gain message to the motors
        this->motor_gain_publisher.publish(motor_gain_msg);

        // Print to the screen that we are trying to set the motor gains
        ROS_INFO("Waiting for gains set confirmation message");

        // Wait for relies for a short while
        set_gains_rate.sleep();

        // Check for incomming messages to see if the confirmation message has been received
        ros::spinOnce();
    }

    // Report that we set the motor gains successfully
    ROS_INFO("Gains set sucessfully");
}