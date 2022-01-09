#include<convex_mpc_controller/convex_mpc_solver.h>
#include<iostream>
#include<Eigen/Core>
#include<exception>
#include<vector>
int main(int argc, char **argv){
    double mass;
    
    Eigen::Matrix3d J_b;
    double mu;
    Eigen::Vector3d r_b_to_fl_ref_in_b;
    double delta_t;
    double T_sim;
    double T_gait;
    double cost_reference_scalar;
    Eigen::Matrix<double, ConvexMpc::ConvexMpcSolver::n_states_, ConvexMpc::ConvexMpcSolver::n_states_> cost_reference;
    double cost_force_scalar;
    bool use_uniform_reference_cost;
    std::vector<double> cost_reference_diagonal_elements;
    std::vector<double> r_b_to_fl_ref_in_b_stdvec;

    Kinematics kinematics;
    //TODO: Incorporate pinocchio to read these directly from URDF in stead of pasting them from Matlab
    bool gazebo_values = true;
    ConvexMpc::GaitType gait_type;
    if(gazebo_values){
        //mass = 10;
//        mass = 10.1 + 4*1.179 + 4*1.394 + 4*0.283;
//       J_b << 0.14, 0, 0,
//              0, 0.14, 0,
//                0, 0, 0.25;
        Eigen::Matrix<double, 18, 1> q;
        q.setZero();
        q.bottomRows(12) << 45, -20, 90, -45, 20, -90, 135, 20, -90, -145, -20, 90;
        Eigen::MatrixXd M = kinematics.GetMassMatrix(q);
        mass = M(0,0);
        J_b << M.block(3,3,3,3);
    }else{
        mass = 8.7385;
        J_b << 0.0328, 0, 0,
            0, 0.0307, 0,
            0, 0, 0.0617;
    }
    ros::init(argc, argv, "convex_mpc_solver_node");
//    ROS_INFO_STREAM("About to set fake variables");
//    //For test run only!
//    Eigen::VectorXd x0(12);
//    x0 << 0.023780454458912834, 0.0003314196489485762, 0.4316570254399411, 
//    -0.00010480825173588952, -2.528585734080015e-06, -0.02274554092656443,
//    -7.1356572390914725e-06, -1.7726082994121907e-06, -3.303670175814649e-05,
//    0.00012204414010054468, -9.392319480360148e-06, -0.00015980559979376213;
//
//    double t0 = 0;
//
//    Eigen::Array<Eigen::Vector3d, 4, 1> init_stance_pos;
//    init_stance_pos(0) << 0.5271406284483638, 0.2023568921665738, -0.47189724874561184;
//    init_stance_pos(1) << 0.5100946142647598, -0.21685672287351512, -0.47318788607586515;
//    init_stance_pos(2) << 0.21656231667372666, 0.09208650359339549, -0.47215047013043654;
//    init_stance_pos(3) << 0.21790932204841912, -0.09314966927159143, -0.47173545180537957;
//
//    Eigen::Vector2d vel_des;
//
//    vel_des << 0.5, 0.0;
//
//    double yaw_rate_des = 0;

    ROS_INFO_STREAM("Convex Mpc Solver node: Initialized ros");
    
    ros::NodeHandle node;

    // Load parameters from config file and use defaults if/where loading fails

    if(!node.getParam("nominal_translation_base_to_front_left_foot", r_b_to_fl_ref_in_b_stdvec)){
        r_b_to_fl_ref_in_b << 0.4512, 0.1512, 0;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve nominal translation from base to front left foot from config.");
    }else{
        r_b_to_fl_ref_in_b = Eigen::Vector3d::Map(r_b_to_fl_ref_in_b_stdvec.data());
    }
    if(!node.getParam("use_uniform_reference_cost", use_uniform_reference_cost)){
        use_uniform_reference_cost = false;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve use_uniform_reference_cost from config.");
    }
    if(!node.getParam("simulation_horizon", T_sim)){
        T_sim = 0.5;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve simulation horizon from config.");
    }
    if(!node.getParam("gait_period", T_gait)){
        T_gait = 0.5;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve gait period from config.");
    }
    if(!node.getParam("simulation_timestep", delta_t)){
        delta_t = 0.05;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve simulation timestep from config.");
    }
    if(!node.getParam("mu", mu)){
        mu = 0.3;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve mu from config.");
    }
    if(!node.getParam("cost_force_scalar", cost_force_scalar)){
        cost_force_scalar = 1;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve scalar force cost from config.");
    }
    if(!node.getParam("cost_reference_scalar", cost_reference_scalar)){
        cost_reference_scalar = 5e5;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve scalar reference cost from config.");
    }
    int gait_type_int;
    if(!node.getParam("gait_type", gait_type_int)){
        gait_type = ConvexMpc::Stand;
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve scalar reference cost from config.");
    }else{
        gait_type = (ConvexMpc::GaitType)gait_type_int;
    }
        if(!node.getParam("cost_reference_diagonal_elements", cost_reference_diagonal_elements)){
        for(int i = 0; i < ConvexMpc::ConvexMpcSolver::n_states_; ++i){cost_reference_diagonal_elements.push_back(5e5);}
        ROS_INFO_STREAM("Convex Mpc Solver node: failed to retrieve reference cost diagonal elements from config.");
    }
    
    cost_reference = Eigen::Matrix<double, ConvexMpc::ConvexMpcSolver::n_states_, 1>::Map(cost_reference_diagonal_elements.data()).asDiagonal();


    ros::Publisher mpc_pub = node.advertise<convex_mpc_controller::solveMpcResponse>("/mpc/response_channel", 1);

    ConvexMpc::ConvexMpcSolver solver = use_uniform_reference_cost ?
        ConvexMpc::ConvexMpcSolver(
            mass,
            J_b,
            mu,
            r_b_to_fl_ref_in_b,
            delta_t,
            T_sim,
            T_gait,
            cost_reference_scalar,
            cost_force_scalar,
            gait_type,
            &mpc_pub)
        :
        ConvexMpc::ConvexMpcSolver(
            mass,
            J_b,
            mu,
            r_b_to_fl_ref_in_b,
            delta_t,
            T_sim,
            T_gait,
            cost_reference,
            cost_force_scalar,
            gait_type,
            &mpc_pub);
    
//    auto response_msg = solver.Solve(t0, x0, init_stance_pos, vel_des, yaw_rate_des);

    ros::Subscriber mpc_sub = node.subscribe<convex_mpc_controller::solveMpcRequest>("/mpc/request_channel", 1, &ConvexMpc::ConvexMpcSolver::RequestCallback, &solver);
    ros::Rate loop_rate(1000);

    ros::spin();
}