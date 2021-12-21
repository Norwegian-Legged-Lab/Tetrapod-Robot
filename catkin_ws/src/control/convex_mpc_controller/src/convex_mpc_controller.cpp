#include<convex_mpc_controller/convex_mpc_controller.h>

namespace ConvexMpc{

ConvexMpcController::ConvexMpcController(
    ros::NodeHandle* node,
    double real_time_factor,
    double gait_period,
    ConvexMpc::GaitType gait_type,
    double tau_threshold,
    Eigen::Vector2d vel_des,
    double yaw_rate_des,
    double swing_height,
    Eigen::Vector3d r_b_to_fl_ref_in_b): contact_detector_(node, tau_threshold)
{
    node_ = node;

    real_time_factor_ = real_time_factor;

    gait_period_ = gait_period;

    stance_info_ = getStanceInfo(gait_type);

    vel_des_ = vel_des;

    yaw_rate_des_ = yaw_rate_des;

    swing_height_ = swing_height;

    r_b_to_fl_ref_in_b_ = r_b_to_fl_ref_in_b;

    for (int i = 0; i < swing_controllers_.size(); ++i){
        // initialize with non-active swing controllers
        swing_controllers_(i) = SwingController();
    }
    
    mpc_request_pub_ = node_->advertise<convex_mpc_controller::solveMpcRequest>("/mpc/request_channel", 1);
    
    torque_pub_ = node_->advertise<sensor_msgs::JointState>("/my_robot/joint_state_cmd", 1);

    trigger_sub_ = node_->subscribe<std_msgs::Bool>("/trigger", 1, &ConvexMpcController::TriggerCallback, this);

    mpc_response_sub_ = node_->subscribe<convex_mpc_controller::solveMpcResponse>("/mpc/response_channel", 1, &ConvexMpcController::MpcCallback, this);

    gen_coord_sub_ = node_->subscribe<std_msgs::Float64MultiArray>("/my_robot/gen_coord", 1, &ConvexMpcController::GenCoordCallback, this);

    gen_vel_sub_ = node_->subscribe<std_msgs::Float64MultiArray>("/my_robot/gen_vel", 1, &ConvexMpcController::GenVelCallback, this);

    t0_ = std::chrono::high_resolution_clock::now();

    gen_coord_.setConstant(std::numeric_limits<double>::quiet_NaN());
    gen_vel_.setConstant(std::numeric_limits<double>::quiet_NaN());
}

void ConvexMpcController::UpdateController(double t){
    Eigen::Array4d swing_taus = swing_controllers_.unaryExpr([t](const SwingController &contr){return contr.GetTau(t);});
    Eigen::Array4i current_foot_states = contact_detector_.GetContacts(swing_taus).cast<int>();
    ROS_INFO_STREAM("Convex Mpc Controller: Current foot states: " << current_foot_states.transpose());
    StanceIndices idx = getStanceIndices(stance_info_, t, 0.05, gait_period_, 0.05);
    Eigen::Vector3d desired_foot_pos_in_b;
    Eigen::Vector3d desired_foot_pos_in_w;

    double stance_time;
    double swing_time;

    for (int i = 0; i < swing_controllers_.size(); ++i){
        if(swing_controllers_(i).IsActive()){
            //If controller is currently active, check if corresponding leg has landed since last update
            if(current_foot_states(i) == 1){
                //The corresponding leg has landed
                swing_controllers_(i).Deactivate(); //Signal that swing phase is no longer active for this controller
            }
        }else{
            //If controller is not active, check if corresponding leg is supposed to begin swinging since last update
            if(idx(i).stance(0) == 0){
                stance_time = stance_info_(i).durations.sum()*gait_period_;
                swing_time = gait_period_ - stance_time;
                desired_foot_pos_in_b = getNominalTranslationBaseToFoot(r_b_to_fl_ref_in_b_, static_cast<FootType>(i));
                desired_foot_pos_in_b.head(2) += vel_des_*stance_time/2;
                desired_foot_pos_in_w = gen_coord_.head(3) + Eigen::LocalExtensions::EulerAnglesToRotMat(gen_coord_.middleRows(3,3), Eigen::LocalExtensions::intrinsic, 0, 1, 2)*desired_foot_pos_in_b;
                desired_foot_pos_in_w(2) = 0;

                swing_controllers_(i) = SwingController(f_pos_(i), desired_foot_pos_in_w, swing_height_, swing_time, t);
            }
        }
    }

    // The desired foot states are exactly as the actual foot states, except that current stance feet that are about to lift are not considered stance feet
    foot_states_ = swing_controllers_.unaryExpr([](const SwingController &contr){return !(contr.IsActive());}).cast<int>();
}


void ConvexMpcController::RequestMpcSolution(){
    convex_mpc_controller::solveMpcRequest out_msg;
    
    Eigen::VectorXd x0(12);

    Eigen::Array<Eigen::Vector3d, 4, 1> init_stance_pos;

    Eigen::VectorXd x0_gazebo(12);

    x0_gazebo << gen_coord_.head(6), gen_vel_.head(6);
    x0 = Eigen::LocalExtensions::GazeboToMpcBodyState(x0_gazebo);

    FootstepPositions footsteps;

    kinematics_.SolveForwardKinematics(gen_coord_, footsteps);

    init_stance_pos(0) << footsteps(0) - x0.head(3);

    init_stance_pos(1) << footsteps(1) - x0.head(3);
    
    init_stance_pos(2) << footsteps(2) - x0.head(3);
    
    init_stance_pos(3) << footsteps(3) - x0.head(3);

    out_msg.t0 = GetT();

    Eigen::VectorXd::Map(out_msg.x0.data(), 12) = x0;

    Eigen::Vector3d::Map(out_msg.init_stance_pos.fl_pos.data()) = init_stance_pos(0);
    Eigen::Vector3d::Map(out_msg.init_stance_pos.fr_pos.data()) = init_stance_pos(1);
    Eigen::Vector3d::Map(out_msg.init_stance_pos.rl_pos.data()) = init_stance_pos(2);
    Eigen::Vector3d::Map(out_msg.init_stance_pos.rr_pos.data()) = init_stance_pos(3);

    Eigen::Array<uint8_t, 4, 1>::Map(out_msg.init_stance_pos.contact_state.data()) = foot_states_.cast<uint8_t>();

    Eigen::Vector2d::Map(out_msg.vel_des.data()) = vel_des_;

    out_msg.yaw_rate_des = yaw_rate_des_;

    t1_ = std::chrono::high_resolution_clock::now();
    mpc_request_pub_.publish(out_msg);
}

void ConvexMpcController::TriggerCallback(const std_msgs::BoolConstPtr &msg){
    ROS_INFO_STREAM("Convex Mpc Controller: Noticed trigger");
    RequestMpcSolution();
}

void ConvexMpcController::MpcCallback(const convex_mpc_controller::solveMpcResponseConstPtr &msg){
    t2_ = std::chrono::high_resolution_clock::now();
    auto milliseconds_int = std::chrono::duration_cast<std::chrono::milliseconds>(t2_ - t1_);
    ROS_INFO_STREAM("Convex Mpc Controller: Time from request to response is " << milliseconds_int.count() << " milliseconds.");
    ConvexMpcSolver::Solution solution = ConvexMpcSolver::RosMsgToSolution(*msg, true);
    if(solution.solved){
        solution_ = solution;
        has_solution_ = true;
        last_solution_ts_ = std::chrono::high_resolution_clock::now();
    }
    RequestMpcSolution();

}

void ConvexMpcController::GenCoordCallback(const std_msgs::Float64MultiArrayConstPtr &msg){
    gen_coord_ = GeneralizedCoordinates::Map(msg->data.data());

    FootstepPositions f_pos_tentative;
    if(kinematics_.SolveForwardKinematics(gen_coord_, f_pos_tentative)){
        f_pos_ = f_pos_tentative;
    }
}

void ConvexMpcController::GenVelCallback(const std_msgs::Float64MultiArrayConstPtr &msg){
    gen_vel_ = GeneralizedCoordinates::Map(msg->data.data());
}

double ConvexMpcController::GetT() const
{
    double t_real = std::chrono::duration<double>(std::chrono::high_resolution_clock::now() - t0_).count();

    double t_slowed = real_time_factor_*t_real;

    ROS_INFO_STREAM("Convex Mpc Controller: real t: " << t_real << ", t slowed: " << t_slowed << ", real time factor: " << real_time_factor_);

    return t_slowed;
}

int ConvexMpcController::GetSolutionIndex(const double &t) const
{
    for (int i = 1; i < solution_.t.size(); ++i){
        if (solution_.t(i) > t){
            return i - 1;
        }
    }
    return solution_.t.size() - 1;
}

Eigen::Array<Eigen::Vector3d, 4, 1> ConvexMpcController::GetStanceForces(const double &t){

    int idx = GetSolutionIndex(t);

    Eigen::Array<Eigen::Vector3d, 4, 1> forces;

    for(int j = 0; j < solution_.inputs.size(); ++j){
        forces(j) = -solution_.inputs(j).forces.col(idx);
    }
    return forces;
}

Eigen::Array<Eigen::Vector3d, 4, 1> ConvexMpcController::GetStanceForces(){
    
    Eigen::Array<Eigen::Vector3d, 4, 1> forces;

    for(int j = 0; j < solution_.inputs.size(); ++j){
        forces(j) = -solution_.inputs(j).forces.leftCols(1);
    }

    return forces;
}

Eigen::Matrix<double, 12, 1> ConvexMpcController::GetStanceTorques(const double &t){
    Eigen::Matrix<double, 12, 1> torques;
    //TODO: unify the enumerations in this project
    Kinematics::LegType translation_table[] = {Kinematics::frontLeft, Kinematics::frontRight, Kinematics::rearLeft, Kinematics::rearRight};
    Eigen::Array<Eigen::Vector3d, 4, 1> forces = GetStanceForces(t);
    for(int i = 0; i < forces.size(); ++i){
        Eigen::MatrixXd J = (kinematics_.GetTranslationJacobianInW(translation_table[i], Kinematics::foot, gen_coord_)).block(0, 6 + 3*i, 3, 3);
        torques.middleRows(3*i, 3) = J.transpose()*forces(i);
    }
    return torques;
}

Eigen::Matrix<double, 12, 1> ConvexMpcController::GetStanceTorques(){
    Eigen::Matrix<double, 12, 1> torques;
    //TODO: unify the enumerations in this project
    Kinematics::LegType translation_table[] = {Kinematics::frontLeft, Kinematics::frontRight, Kinematics::rearLeft, Kinematics::rearRight};
    Eigen::Array<Eigen::Vector3d, 4, 1> forces = GetStanceForces();
    for(int i = 0; i < forces.size(); ++i){
        Eigen::MatrixXd J = (kinematics_.GetTranslationJacobianInW(translation_table[i], Kinematics::foot, gen_coord_)).block(0, 6 + 3*i, 3, 3);
        torques.middleRows(3*i, 3) = J.transpose()*forces(i);
    }
    return torques;
}

Eigen::Matrix<double, 12, 1> ConvexMpcController::GetStanceTorquesApproximate(const double &t){
    Eigen::Array<Eigen::Vector3d, 4, 1> torques;
    //TODO: unify the enumerations in this project
    Kinematics::LegType translation_table[] = {Kinematics::frontLeft, Kinematics::frontRight, Kinematics::rearLeft, Kinematics::rearRight};
    Eigen::Array<Eigen::Vector3d, 4, 1> forces = GetStanceForces(t);
    Eigen::Matrix<double, 12, 12> J;
    J.setZero();
    for(int i = 0; i < forces.size(); ++i){
        J.block(i*3, i*3, 3, 3) = (kinematics_.GetTranslationJacobianInW(translation_table[i], Kinematics::foot, gen_coord_)).block(0, 6 + 3*i, 3, 3);
    }
    double cost_ref = 3;
    double cost_tau = 1;
    Eigen::Matrix<double, 12, 1> f;
    f << forces(0), forces(1), forces(2), forces(3);
    Eigen::Matrix<double, 12, 12> Q1 = cost_ref*J.transpose()*J;
    Eigen::Matrix<double, 12, 12> Q2 = cost_tau*Eigen::Matrix<double, 12, 12>::Identity();
    drake::solvers::MathematicalProgram prog;
    drake::solvers::MatrixXDecisionVariable tau = prog.NewContinuousVariables(12, 1, "tau");
    prog.AddQuadraticCost(Q1 + Q2, -cost_ref*J.transpose()*f, tau);
    drake::solvers::GurobiSolver solver;
    drake::solvers::MathematicalProgramResult result = solver.Solve(prog);
    Eigen::Matrix<double, 12, 1> tau_res = result.GetSolution(tau);
    Eigen::Matrix<double, 12, 1> tau_temp = J.colPivHouseholderQr().solve(f);
    Eigen::Matrix<double, 12, 1> f_recovered = J*tau_temp;

    return tau_res;
}

Eigen::Matrix<double, 6, 1> ConvexMpcController::GetPoseDes(const double &t) const
{
    int idx = GetSolutionIndex(t);

    Eigen::Matrix<double, 12, 1> gazebo_state = Eigen::LocalExtensions::MpcToGazeboBodyState(solution_.states.x.col(idx));

    return gazebo_state.head(6);
}

Eigen::Matrix<double, 6, 1> ConvexMpcController::GetTwistDes(const double &t) const
{
    int idx = GetSolutionIndex(t);
    
    Eigen::Matrix<double, 12, 1> gazebo_state = Eigen::LocalExtensions::MpcToGazeboBodyState(solution_.states.x.col(idx));

    return gazebo_state.tail(6);
}

Eigen::Matrix<double, 6, 1> ConvexMpcController::GetAccelerationDes(const double &t) const
{
    int idx = GetSolutionIndex(t);

    return solution_.states.dx.block(6, idx, 6, 1);
}

Eigen::Matrix<double, 6, 1> ConvexMpcController::GetPoseDes() const
{
    Eigen::Matrix<double, 12, 1> gazebo_state = Eigen::LocalExtensions::MpcToGazeboBodyState(solution_.states.x.leftCols(1));

    return gazebo_state.head(6);
}

FootstepPositions ConvexMpcController::GetFootstepPosDes(const double &t){
    FootstepPositions pos;
    for(int i = 0; i < swing_controllers_.size(); ++i){
        if(swing_controllers_(i).IsActive()){
            pos(i) = swing_controllers_(i).Pos(t);
        }else{
            pos(i) = f_pos_(i);
        }
    }

    ROS_INFO_STREAM("Convex Mpc Controller:" <<
        std::endl << "Fl pos: (current | desired)" <<
        std::endl << f_pos_(0).transpose() << std::endl << pos(0).transpose() <<
        std::endl << "Fr pos: (current | desired)" <<
        std::endl << f_pos_(1).transpose() << std::endl << pos(1).transpose() <<
        std::endl << "Rl pos: (current | desired)" <<
        std::endl << f_pos_(2).transpose() << std::endl << pos(2).transpose() <<
        std::endl << "Rr pos: (current | desired)" <<
        std::endl << f_pos_(3).transpose() << std::endl << pos(3).transpose());

    return pos;
}

FootstepPositions ConvexMpcController::GetFootstepVelDes(const double &t){
    FootstepPositions vel;
    for(int i = 0; i < swing_controllers_.size(); ++i){
        if(swing_controllers_(i).IsActive()){
            vel(i) = swing_controllers_(i).Vel(t);
        }else{
            vel(i) = Eigen::Vector3d::Zero();
        }
    }

    return vel;
}

FootstepPositions ConvexMpcController::GetFootstepAccDes(const double &t){
    FootstepPositions acc;
    for(int i = 0; i < swing_controllers_.size(); ++i){
        if(swing_controllers_(i).IsActive()){
            acc(i) = swing_controllers_(i).Acc(t);
        }else{
            acc(i) = Eigen::Vector3d::Zero();
        }
    }

    return acc;
}



void ConvexMpcController::PublishTorqueMsg(Eigen::Matrix<double, 12, 1> &desired_tau)
{
    // Declare msg
    sensor_msgs::JointState joint_state_msg;

    // Set dimension
    joint_state_msg.effort.resize(12);

    Eigen::Matrix<double, 12, 1>::Map(joint_state_msg.effort.data()) = desired_tau;

    // Set timestamp
    joint_state_msg.header.stamp = ros::Time::now();

    // Publish
    torque_pub_.publish(joint_state_msg);
}
}//ConvexMpc