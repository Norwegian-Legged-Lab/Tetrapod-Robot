#include "single_leg_controller/single_leg_controller.h"

SingleLegController::SingleLegController(double _publish_frequency, bool _SIMULATION)
{
    SIMULATION = _SIMULATION;

    // Set the publish frequency for the controller
    this->publish_frequency = _publish_frequency;

    // Calculate the swing_period
    // This should be changed so that the final iteration is a function of the swing period and publish frequency
    this->swing_period = final_iteration/publish_frequency; // XXXXXXXXXXXXXXXXXXXXXX

    // Set all the states to uninitialized
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        this->q(i) = uninitialized_state; // XXXXXXXXXXXXXXXXX REPLACE BY A BOOLEAN VALUE
    }

    // Set the initial goal position
    this->q_goal[0] = math_utils::HALF_PI;
    this->q_goal[1] = 0.0;
    this->q_goal[2] = 0.0;

    // Set the actuator gains
    this->k_p_pos_hy = 30.0;
    this->k_i_pos_hy = 30.0;

    this->k_p_pos_hp = 30.0;
    this->k_i_pos_hp = 30.0;

    this->k_p_pos_kp = 30.0;
    this->k_i_pos_kp = 30.0;

    this->k_p_vel_hy = 100.0;
    this->k_i_vel_hy = 100.0;

    this->k_p_vel_hp = 100.0;
    this->k_i_vel_hp = 100.0;

    this->k_p_vel_kp = 100.0;
    this->k_p_vel_kp = 100.0;

    this->k_p_torque_hy = 100.0;
    this->k_i_torque_hy = 100.0;

    this->k_p_torque_hp = 100.0;
    this->k_i_torque_hp = 100.0;

    this->k_p_torque_kp = 100.0;
    this->k_i_torque_kp = 100.0;

    // Set the closed loop torque control gains
    double k_p_hy = 50.0;
    double k_p_hp = 50.0;
    double k_p_kp = 50.0;

    double k_d_hy = 10.0;
    double k_d_hp = 10.0;
    double k_d_kp = 10.0;

    // Store the values in matricies that will be used by the torque controller
    this->K_p(0, 0) = k_p_hy;
    this->K_p(1, 1) = k_p_hp;
    this->K_p(2, 2) = k_p_kp;

    this->K_d(0, 0) = k_d_hy;
    this->K_d(1, 1) = k_d_hp;
    this->K_d(2, 2) = k_d_kp;

    // WHY DO THIS? XXXXXXXXXXXXXXXXXXXXXXXXX
    this->swing_start_time = - 2.0*swing_period;  

    // Initializing the size of the logging messages
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {        
        this->joint_state_log_msg.position.push_back(CONTROL_IDLE);
        this->joint_state_log_msg.velocity.push_back(CONTROL_IDLE);
        this->joint_state_log_msg.effort.push_back(CONTROL_IDLE);

        this->joint_reference_log_msg.position.push_back(CONTROL_IDLE);
        this->joint_reference_log_msg.velocity.push_back(CONTROL_IDLE);
        this->joint_reference_log_msg.effort.push_back(CONTROL_IDLE);
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
        100, 
        &SingleLegController::generalizedCoordinatesCallback,
        this
    );

    // Initialize the generalized velocities subscriber
    this->generalized_velocities_subscriber = node_handle->subscribe
    (
        "/my_robot/gen_vel",
        100,
        &SingleLegController::generalizedVelocitiesCallback,
        this
    );

    // Initialize the subscriber listening to real world motor states
    this->joint_state_subscriber = node_handle->subscribe
    (
        "/motor/states",
        100,
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
        10,
        &SingleLegController::motorConfirmationCallback,
        this
    );

    // Initialize the joint state publisher
    this->joint_state_publisher = this->node_handle->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 10);

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
        this->q(i) = _msg->data[i + 6];
    }
}

void SingleLegController::generalizedVelocitiesCallback(const std_msgs::Float64MultiArrayConstPtr &_msg)
{
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        // + 6 is added because the first six states are (x_dot, y_dot, z_dot, roll_dot, pitch_dot, yaw_dot)
        // The remaining three states are theta_hy_dot, theta_hp_dot, theta_kp_dot
        this->q_d(i) = _msg->data[i + 6];
    }
}

void SingleLegController::jointStateCallback(const sensor_msgs::JointStatePtr &_msg)
{
    for(int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        // Store the jont angles
        this->q(i) = _msg->position[i];

        // Store the joint velocities
        this->q_d(i) = _msg->velocity[i];

        // Store the joint torques
        this->tau(i) = _msg->effort[i];
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
        this->q_goal(i) = _msg->data[i];
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
    double &_x, 
    double &_x_d, 
    double &_x_dd
)
{
    // Define paramaters for the polynomial. Please see the report for an explanation
    double a = 30.0*_max_travel;
    double b = -15.0*_max_travel;
    double c = 1.875*_max_travel;
    double d = -_max_travel*7.0/16.0;

    // Calculate the position from the polynomial
    _x = 0.2*a*pow((_percentage - 0.5), 5.0) + b*pow((_percentage - 0.5), 3.0)/3.0 + c*_percentage + d;

    // Calculate the velocity from the derivative of the polynomial
    _x_d = (a*pow((_percentage - 0.5), 4.0) + b*pow((_percentage - 0.5), 2.0) + c)/_period;

    // Calculate the acceleration from the two times derivative of the polynomial
    _x_dd = (4.0*a*pow((_percentage - 0.5), 3.0) + 2.0*b*(_percentage - 0.5))/(_period*_period);
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
    this->calculateSingleAxisTrajectory(progress, swing_period, x_offset, foot_dx, foot_vel_x, foot_acc_x);

    // Update the foot trajectory in the hip y direction
    this->calculateSingleAxisTrajectory(progress, swing_period, y_offset, foot_dy, foot_vel_y, foot_acc_y);

    // Update the foot trajectory in the hip z direction
    Eigen::Matrix<double, 3, 1> z = this->calculateSwingLegHeightTrajectory(progress, swing_period, max_swing_height, hip_height);
    //z(0) = -hip_height;
    //z(1) = 0.0;
    //z(2) = 0.0;

    // Update the foot positions in the hip frame
    this->pos(0) = x_center - x_offset + foot_dx;
    this->pos(1) = y_center - y_offset + foot_dy;
    this->pos(2) = z(0);

    // Update the foot velocities in the hip frame
    this->vel(0) = foot_vel_x;
    this->vel(1) = foot_vel_y;
    this->vel(2) = z(1);

    // Update the foot accelerations in the hip frame
    this->acc(0) = foot_acc_x;
    this->acc(1) = foot_acc_y;
    this->acc(2) = z(2);
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
    this->calculateSingleAxisTrajectory(progress, swing_period, x_offset, foot_dx, foot_vel_x, foot_acc_x);

    // Update the foot trajectory in the hip y direction
    this->calculateSingleAxisTrajectory(progress, swing_period, y_offset, foot_dy, foot_vel_y, foot_acc_y);

    // Update the foot positions in the hip frame
    // To push the body of the robot forward we have to move the stance foot backwards
    this->pos(0) = x_center - foot_dx;
    this->pos(1) = y_center - foot_dy;

    // We assume a constant height of the ground. !!! Here a lot can be done to handle obstacles
    this->pos(2) = - hip_height;

    // If we have not reached the final iteration, simply assign the foot trajectory velocity and acceleration
    if(current_iteration + 1 < final_iteration)
    {
        this->vel(0) = - foot_vel_x;
        this->vel(1) = - foot_vel_y;
        this->vel(2) = 0.0;

        this->acc(0) = - foot_acc_x;
        this->acc(1) = - foot_acc_y;
        this->acc(2) = 0.0;
    }
    // If we have reached the final iteration and not changed state, set the velocities to zero to keep the foot still.
    else
    {
        this->vel(0) = 0.0;
        this->vel(1) = 0.0;
        this->vel(2) = 0.0;

        this->acc(0) = 0.0;
        this->acc(1) = 0.0;
        this->acc(2) = 0.0;
    }
}

void SingleLegController::updateJointReferences()
{
    // Try to solve the inverse kinematics for the single leg to obtain the joint angle references from the foot position reference
    if(!this->kinematics.SolveSingleLegInverseKinematics(false, pos, q_ref))
    {
        ROS_WARN("[updateJointReferences] Failed to solve inverse kinematics");
    }
    else // If we successfully found a solution to the inverse kinematics problem
    {
        // Calculate the translation Jacobian for the foot
        Eigen::Matrix<double, 3, 3> J_s = this->kinematics.GetTranslationJacobianInB(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, q(0), q(1), q(2));
        
        // Calculate the derivative of the translation Jacobian for the foot
        Eigen::Matrix<double, 3, 3> J_s_d = this->kinematics.GetTranslationJacobianInBDiff(Kinematics::LegType::frontLeft, Kinematics::BodyType::foot, q(0), q(1), q(2), q_d(0), q_d(1), q_d(2));

        // Update the joint angle velocity references
        q_d_ref = J_s.inverse()*this->vel;

        // Update the joint angle acceleration references
        q_dd_ref = J_s.inverse()*(this->acc - J_s_d*this->vel);
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
    // Calculate the closed loop joint torque
    Eigen::Matrix<double, 3, 1> normalized_joint_torques = _q_dd_ref - K_p*(_q - _q_ref) - K_d*(_q_d - _q_d_ref);

    // Calculate the mass inertia matrix
    Eigen::Matrix<double, 3, 3> M = this->kinematics.GetSingleLegMassMatrix(_q);

    // Calculate the Coriolis/Centrifugal vector
    Eigen::Matrix<double, 3, 1> b = this->kinematics.GetSingleLegCoriolisAndCentrifugalTerms(_q, _q_d);

    // Calculate the gravity vector
    Eigen::Matrix<double, 3, 1> g = this->kinematics.GetSingleLegGravitationalTerms(_q);

    /*
    ROS_INFO("y_ref: %f\t y_d_ref: %f\t y_dd_ref: %f\t y: %f\t y_d: %f", _q_ref(1), _q_d_ref(1), _q_dd_ref(1), _q(1), _q_d(1));

    ROS_INFO(
        "Mass matrix:\n%f\t%f\t%f\t\n%f\t%f\t%f\t\n%f\t%f\t%f\t\n", 
        M(0, 0), M(0, 1), M(0, 2), M(1, 0), M(1, 1), M(1, 2), M(2, 0), M(2, 1), M(2, 2));


    ROS_INFO("z1: %f\tz2: %f\tz3: %f", normalized_joint_torques(0), normalized_joint_torques(1), normalized_joint_torques(2));
    ROS_INFO("b1: %f\tb2: %f\tb3: %f", b(0), b(1), b(2));
    ROS_INFO("g1: %f\tg2: %f\tg3: %f", g(0), g(1), g(2));
    */

    this->tau = b + g + M*normalized_joint_torques;
}

void SingleLegController::updateJointTorques()
{
    // Updates the joint torque references based on the joint reference trajectories and estimated joint states
    this->updateJointTorques(this->q_ref, this->q_d_ref, this->q_dd_ref, this->q, this->q_d);
}

void SingleLegController::sendTorqueCommand()
{
    // Create a joint state message
    sensor_msgs::JointState joint_state_msg;

    // Set the time of the joint state message
    joint_state_msg.header.stamp = ros::Time::now();

    // Indicate that torque control should be used
    joint_state_msg.name.push_back("torque");

    // Create a float array for joint torque commands
    std_msgs::Float64MultiArray torque_commands;

    // Put the joint torque reference vector into the torque command message
    tf::matrixEigenToMsg(this->tau, torque_commands);

    // Add the torque commands to the joint state message
    joint_state_msg.effort = torque_commands.data;

    // Publish the message
    joint_state_publisher.publish(joint_state_msg);
}

void SingleLegController::sendPositionCommand()
{
    // Check if the position commands are within the joint angle limit constraints
    if (kinematics.ValidateSolution(this->q_ref) == false)
    {
        // If they are violated report the problem and don't send a command
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
        tf::matrixEigenToMsg(this->q_ref, position_commands);

        // Add the position commands to the joint state message
        joint_state_msg.position = position_commands.data;

        // Publish the message
        joint_state_publisher.publish(joint_state_msg);
    }
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

bool SingleLegController::moveJointsToCenter()
{
    ros::Rate command_send_rate(publish_frequency);

    swing_percentage = 0.0;

    updateStanceFootPositionTrajectory();

    updateJointReferences();

    q_d_ref = Eigen::Matrix<double, 3, 1>::Zero();

    q_dd_ref = Eigen::Matrix<double, 3, 1>::Zero();

    bool is_joint_target_reached = false;

    while(!is_joint_target_reached)
    {
        if(isTargetPositionReached() && readyToProceed())
        {
            is_joint_target_reached = true;
            ROS_INFO("Print Target Reached");
            command_send_rate.sleep();
        }
        else
        {
            ros::spinOnce();

            updateJointTorques();

            sendTorqueCommand();

            command_send_rate.sleep();
        }
    }

    return true;
}

bool SingleLegController::updateSimpleFootTrajectory()
{
    double foot_dx;
    double foot_vel_x;
    double foot_acc_x;

    calculateSingleAxisTrajectory(current_iteration/final_iteration, swing_period, x_offset, foot_dx, foot_vel_x, foot_acc_x);

    pos(0) = x_center - foot_dx;
    pos(1) = y_center;
    pos(2) = - hip_height;

    if(current_iteration + 1 < final_iteration)
    {
        vel(0) = - foot_vel_x;
        vel(1) = 0.0;
        vel(2) = 0.0;

        acc(0) = - foot_acc_x;
        acc(1) = 0.0;
        acc(2) = 0.0;
    }
    else
    {
        vel(0) = 0.0;
        vel(1) = 0.0;
        vel(2) = 0.0;

        acc(0) = 0.0;
        acc(1) = 0.0;
        acc(2) = 0.0;
    }

    return true;
}

void SingleLegController::increaseIterator()
{
    current_iteration++;
    if(current_iteration >= final_iteration)
    {
        current_iteration = final_iteration;
    }
}

void SingleLegController::updateState()
{
    current_iteration++;

    if(current_iteration >= final_iteration)
    {
        current_iteration = 0.0;

        if(state != State::stance)
        {
            state = State::stance;
        }
        else
        {
            state = State::swing;
        }
    }
    
}

void SingleLegController::updateFootReference()
{
    if(state == State::swing)
    {
        ROS_INFO("SWING");
        updateSwingFootPositionTrajectory();
    }
    else
    {
        ROS_INFO("STANCE");
        updateStanceFootPositionTrajectory();
    }
}

void SingleLegController::updateSetpointTrajectory()
{
    // This is the desired change in setpoint position
    double joint_step_distance = math_utils::degToRad(2.0);

    // This the threshold for which we want the controller to converge to the goal
    double angle_threshold = math_utils::degToRad(5.0);

    // For all the actuators do the following
    for(int i = 0; i < 3; i++)
    {
        // If we are within the angle threshold we tell the actuators to converge to the goal position
        // The larger the threshold the smaller is the chance of oscillations about the goal
        // A smaller threshold will provide a smother response
        if(abs(q_goal(i) - q(i)) < angle_threshold)
        {
            q_ref(i) = q_goal(i);
            ROS_INFO("%d Close to goal", i);
        }
        else if(q_goal(i) > q(i))
        {
            // Increment the joint reference
            q_ref(i) = q(i) + joint_step_distance;
            ROS_INFO("%d Increment", i);
        }
        else if(q_goal(i) < q(i))
        {
            // Decrement the joint reference
            q_ref(i) = q(i) - joint_step_distance;
            ROS_INFO("%d Decrement", i);
        }
    }
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
    printAllStates();
    if((joint_error.transpose()*joint_error < POSITION_CONVERGENCE_CRITERIA) && (q_speed < 0.050))
    {
        ROS_INFO("Target Reached");
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

void SingleLegController::printSpatialTrajectories()
{
    ROS_INFO("Pos: %f, %f, %f\tVel: %f, %f, %f\tAcc: %f, %f, %f", pos(0), pos(1), pos(2), vel(0), vel(1), vel(2), acc(0), acc(1), acc(2));
}

void SingleLegController::printJointTrajectories()
{
    ROS_INFO("q_ref: %f, %f, %f\tq_d_ref: %f, %f, %f\tq_dd_ref: %f, %f, %f", q_ref(0), q_ref(1), q_ref(2), q_d_ref(0), q_d_ref(1), q_d_ref(2), q_dd_ref(0), q_dd_ref(1), q_dd_ref(2));
}

void SingleLegController::printPercentage()
{
    ROS_INFO("Progress: %f", swing_percentage);
}

void SingleLegController::printAllStates()
{
    ROS_INFO("I: %.0f\tP: %.3f, %.3f, %.3f\tV: %.3f, %.3f, %.3f\tA: %.3f, %.3f, %.3f\tq_r: %.3f, %.3f, %.3f\tq_d_r: %.3f, %.3f, %.3f\tq_dd_r: %.3f, %.3f, %.3f\tq: %.3f, %.3f, %.3f\tq_d: %.3f, %.3f, %.3f\tT:  %.3f, %.3f, %.3f",
    current_iteration,
    pos(0), pos(1), pos(2), vel(0), vel(1), vel(2), acc(0), acc(1), acc(2),
    math_utils::radToDeg(q_ref(0)), math_utils::radToDeg(q_ref(1)), math_utils::radToDeg(q_ref(2)), q_d_ref(0), q_d_ref(1), q_d_ref(2), q_dd_ref(0), q_dd_ref(1), q_dd_ref(2),
    math_utils::radToDeg(q(0)), math_utils::radToDeg(q(1)), math_utils::radToDeg(q(2)), q_d(0), q_d(1), q_d(2),
    tau(0), tau(1), tau(2)
    );
}

void SingleLegController::writeToLog()
{
    // Fill the log messages with the latest data
    
    for(int i = 0; i < 3; i++)
    {
        joint_state_log_msg.position[i] = q(i);
        joint_state_log_msg.velocity[i] = q_d(i);
        joint_state_log_msg.effort[i] = tau(i);

        joint_reference_log_msg.position[i] = q_ref(i);
        joint_reference_log_msg.velocity[i] = q_d_ref(i);
        joint_reference_log_msg.effort[i] = q_dd_ref(i);
    }
    
    // Update the time stamps
    joint_state_log_msg.header.stamp = ros::Time::now();
    joint_reference_log_msg.header.stamp = ros::Time::now();

    log_joint_states_publisher.publish(joint_state_log_msg);
    log_joint_references_publisher.publish(joint_reference_log_msg);
}

void SingleLegController::setMotorGains()
{
    ros::Rate set_gains_rate(0.4);

    gains_set = false;

    std_msgs::Float64MultiArray motor_gain_msg;

    motor_gain_msg.data.push_back(k_p_pos_hy);
    motor_gain_msg.data.push_back(k_i_pos_hy);
    motor_gain_msg.data.push_back(k_p_vel_hy);
    motor_gain_msg.data.push_back(k_i_vel_hy);
    motor_gain_msg.data.push_back(k_p_torque_hy);
    motor_gain_msg.data.push_back(k_i_torque_hy);

    motor_gain_msg.data.push_back(k_p_pos_hp);
    motor_gain_msg.data.push_back(k_i_pos_hp);
    motor_gain_msg.data.push_back(k_p_vel_hp);
    motor_gain_msg.data.push_back(k_i_vel_hp);
    motor_gain_msg.data.push_back(k_p_torque_hp);
    motor_gain_msg.data.push_back(k_i_torque_hp);

    motor_gain_msg.data.push_back(k_p_pos_kp);
    motor_gain_msg.data.push_back(k_i_pos_kp);
    motor_gain_msg.data.push_back(k_p_vel_kp);
    motor_gain_msg.data.push_back(k_p_vel_kp);
    motor_gain_msg.data.push_back(k_p_torque_kp);
    motor_gain_msg.data.push_back(k_i_torque_kp);

    while(!gains_set)
    {
        motor_gain_publisher.publish(motor_gain_msg);

        ROS_INFO("Waiting for gains set confirmation message");

        set_gains_rate.sleep();

        ros::spinOnce();
    }

    ROS_INFO("Gains set sucessfully");
}