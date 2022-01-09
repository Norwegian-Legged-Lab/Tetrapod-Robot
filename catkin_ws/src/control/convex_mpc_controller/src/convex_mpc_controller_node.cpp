#include<convex_mpc_controller/convex_mpc_controller.h>
#include<hierarchical_optimization_controller/hierarchical_optimization_controller.h>
#include<convex_mpc_controller/stance.h>
#include<convex_mpc_controller/contact_detector.h>
#include<convex_mpc_controller/swing_controller.h>
#include<cmath>
#include<vector>

int main(int argc, char **argv){

    double tau_threshold;

    double real_time_factor;

    double T_gait;

    Eigen::Vector2d vel_des;

    Eigen::Vector3d r_b_to_fl_ref_in_b;
    
    double yaw_rate_des;

    double swing_height;

    std::vector<double> r_b_to_fl_ref_in_b_stdvec;

    std::vector<double> vel_des_stdvec;    

    ConvexMpc::GaitType gait_type;

    ros::init(argc, argv, "convex_mpc_controller_node");
    ROS_INFO_STREAM("Convex Mpc Controller node: Initialized ros");

    ros::NodeHandle node;


    //Load parameters from config, use defaults if failing to load
    if(!node.getParam("real_time_factor", real_time_factor)){
        real_time_factor = 1;
        ROS_INFO("Convex Mpc Controller node: Failed to retrieve realtime factor from config.");
    }
    if(!node.getParam("post_liftoff_contact_timeout", tau_threshold)){
        tau_threshold = 0.2;
        ROS_INFO("Convex Mpc Controller node: Failed to retrieve post liftoff contact timeout from config.");
    }
    if(!node.getParam("gait_period", T_gait)){
        T_gait = 0.5;
        ROS_INFO("Convex Mpc Controller node: Failed to retrieve gait period from config.");
    }
    int gait_type_int;
    if(!node.getParam("gait_type", gait_type_int)){
        gait_type = ConvexMpc::Stand;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve scalar reference cost from config.");
    }else{
        gait_type = (ConvexMpc::GaitType)gait_type_int;
    }
    if(!node.getParam("vel_des", vel_des_stdvec)){
        vel_des << 0.0, 0.0;
        ROS_INFO("Convex Mpc Controller node: Failed to retrieve gait period from config.");
    }else{
        vel_des = Eigen::Vector2d::Map(vel_des_stdvec.data());
    }
    if(!node.getParam("yaw_rate_des", yaw_rate_des)){
        yaw_rate_des = 0;
        ROS_INFO("Convex Mpc Controller node: Failed to retrieve desired yaw rate from config.");
    }
    if(!node.getParam("swing_height", swing_height)){
        swing_height = 0.1;
        ROS_INFO("Convex Mpc Controller node: Failed to retrieve desired swing height from config.");
    }
    if(!node.getParam("nominal_translation_base_to_front_left_foot", r_b_to_fl_ref_in_b_stdvec)){
        r_b_to_fl_ref_in_b << 0.4512, 0.1512, 0;
        ROS_INFO_STREAM("Convex Mpc Controller node: failed to retrieve nominal translation from base to front left foot from config.");
    }else{
        r_b_to_fl_ref_in_b = Eigen::Vector3d::Map(r_b_to_fl_ref_in_b_stdvec.data());
    }


    ros::Publisher pub = node.advertise<convex_mpc_controller::solveMpcRequest>("/mpc/request_channel", 1);

    ConvexMpc::ConvexMpcController convex_controller(&node, real_time_factor, T_gait, gait_type, tau_threshold, vel_des, yaw_rate_des, swing_height, r_b_to_fl_ref_in_b);

    ros::Subscriber trigger_sub = node.subscribe<std_msgs::Bool>("/trigger", 1, &ConvexMpc::ConvexMpcController::TriggerCallback, &convex_controller);

    ros::Subscriber mpc_sub = node.subscribe<convex_mpc_controller::solveMpcResponse>("/mpc/response_channel", 1, &ConvexMpc::ConvexMpcController::MpcCallback, &convex_controller);

    ros::Rate loop_rate(200);

    HierarchicalOptimizationControl ho_control;

    while(not convex_controller.GenCoordsInitialized()){
        ros::spinOnce();
        loop_rate.sleep();
    }

    convex_controller.RequestMpcSolution();
    double t;
    double solution_age = 0;
    Eigen::Array<Eigen::Vector3d, 4, 1> torques;
    Eigen::Array<Eigen::Vector3d, 4, 1> forces;
    Eigen::Matrix<double, 12, 1> torque_des;
    Eigen::Matrix<double, 12, 1> force_vec;
    Eigen::Matrix<double, 6, 1> body_pose_des;
    Eigen::Matrix<double, 6, 1> body_twist_des;
    Eigen::Matrix<double, 6, 1> body_acceleration_des;

    FootstepPositions f_pos_des;
    FootstepPositions f_vel_des;
    FootstepPositions f_acc_des;

    Eigen::Vector3d resulting_alpha;
    int iteration = 0;
    double solution_age_threshold = 0.2;
    ConvexMpc::ConvexMpcSolver::Solution sol;
/*    
    int idx;
    int num_zeros = 0;
    int num_ones = 0;
    int num_twos = 0;
    int num_gt_twos = 0;
*/

    while(!convex_controller.HasSolution()){
        ros::spinOnce();
        loop_rate.sleep();
    }
    convex_controller.ResetTime();
    convex_controller.UpdateController(0);
    while(ros::ok()){

        t = convex_controller.GetT();

        convex_controller.UpdateController(t);

        solution_age = convex_controller.GetSolutionAge();

        f_pos_des = convex_controller.GetFootstepPosDes(t);

        f_vel_des = convex_controller.GetFootstepVelDes(t);

        f_acc_des = convex_controller.GetFootstepAccDes(t);

        convex_controller.PublishDesiredFootStates(t);
        convex_controller.PublishFootStates();
/*
        idx = convex_controller.GetSolutionIndex(t);
        switch(idx){
            case 0: ++num_zeros; break;
            case 1: ++num_ones; break;
            case 2: ++num_twos; break;
            default: ++num_gt_twos;
        }
*/

        sol = convex_controller.GetSolution();

        
        ROS_INFO_STREAM(std::endl << std::endl << "Iteration no. " << iteration << ". Time: " << t << " seconds. Solution age: " << solution_age << " seconds.");

/*
        ROS_INFO_STREAM("Timestamps: " << sol.t.transpose());
        ROS_INFO_STREAM("Timestamp chosen: " << sol.t(idx));


        ROS_INFO_STREAM("#zeros: " << num_zeros << ", #ones: " << num_ones << ", #twos: " << num_twos << ", #>twos: " << num_gt_twos);
*/
        ROS_INFO_STREAM("Height: " << convex_controller.GetGenCoord()(2) << ". Roll: " << convex_controller.GetGenCoord()(3));

/*
        ROS_INFO_STREAM("Convex Mpc Controller: index is " << idx << ".");
*/
        ROS_INFO_STREAM("Convex Mpc Controller: Solution is" << std::endl << sol.states.x);
        ROS_INFO_STREAM("Convex Mpc Controller: Solution derivative is" << std::endl << sol.states.dx);
        ROS_INFO_STREAM("Convex Mpc Controller: desired acceleration is" << std::endl << body_acceleration_des);
        
        ROS_INFO_STREAM("Convex Mpc Controller: desired stance z-forces:" <<
            std::endl << "fl: " << sol.inputs(0).forces.bottomLeftCorner(1,1) <<
            ", fr: " << sol.inputs(1).forces.bottomLeftCorner(1,1) <<
            std::endl << "rl: " << sol.inputs(2).forces.bottomLeftCorner(1,1) <<
            ", rr: " << sol.inputs(3).forces.bottomLeftCorner(1,1));

        ROS_INFO_STREAM("Convex Mpc Controller: desired foot accelerations:" <<
            std::endl << "fl: " << f_acc_des(0).transpose() <<
            ", fr: " << f_acc_des(1).transpose() <<
            std::endl << "rl: " << f_acc_des(2).transpose() <<
            ", rr: " << f_acc_des(3).transpose());
/*        
        resulting_alpha.setZero();
        Eigen::Matrix<double, 3, 12> skew;
        Eigen::Matrix<double, 12, 1> f;
        for(int i = 0; i < 4; ++i){
            resulting_alpha += sol.inputs(i).stance_vectors.col(0).cross(sol.inputs(i).forces.col(0));
            skew.block(0, 3*i, 3, 3) << 0, -sol.inputs(i).stance_vectors.col(0)(2), sol.inputs(i).stance_vectors.col(0)(1),
                sol.inputs(i).stance_vectors.col(0)(2), 0, -sol.inputs(i).stance_vectors.col(0)(0),
                -sol.inputs(i).stance_vectors.col(0)(1), sol.inputs(i).stance_vectors.col(0)(0), 0;
            f.middleRows(3*i, 3) << sol.inputs(i).forces.col(0);
            }
        ROS_INFO_STREAM("Resulting torque on body: " << std::endl << resulting_alpha.transpose());
        ROS_INFO_STREAM("Resulting torque on body from skew matrices: " << std::endl << (skew*f).transpose());
*/
        body_pose_des = convex_controller.GetPoseDes();
        body_twist_des = convex_controller.GetTwistDes();
        body_acceleration_des = convex_controller.GetAccelerationDes();

//        torque_des = convex_controller.GetStanceTorques();
//        torque_des = ho_control.ComputeStandingTorque(body_pose_des.head(3), body_twist_des.head(3), body_acceleration_des.head(3),
//            body_pose_des.tail(3), body_twist_des.tail(3), body_acceleration_des.tail(3));

        torque_des = ho_control.ComputeTorque(body_pose_des.head(3), body_twist_des.head(3), body_acceleration_des.head(3),
            body_pose_des.tail(3), body_twist_des.tail(3), body_acceleration_des.tail(3), f_pos_des, f_vel_des, f_acc_des, convex_controller.GetFootStates());




        convex_controller.PublishTorqueMsg(torque_des);

        ++iteration;
        if (solution_age > solution_age_threshold){
            ROS_INFO_STREAM("Error: solution is older than " << solution_age_threshold << " seconds. Shutting down node.");
            ros::shutdown();
        }

        ROS_INFO_STREAM("Time (ros): " << ros::Time::now());
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}