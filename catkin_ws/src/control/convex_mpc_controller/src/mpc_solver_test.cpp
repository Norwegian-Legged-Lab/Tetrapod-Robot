#include<convex_mpc_controller/convex_mpc_solver.h>
#include<convex_mpc_controller/local_eigen_extensions.h>
#include<kinematics/kinematics.h>
#include<iostream>
#include<Eigen/Core>
#include<exception>
int main(int argc, char **argv){
    double mass;
    
    Eigen::Matrix3d J_b;
    double mu;
    Eigen::Vector3d r_b_to_fl_ref_in_b;
    double delta_t;
    double T_sim;
    double T_gait;
    double cost_eom;
    double cost_reference;
    double cost_force;
    Kinematics kinematics;
    Eigen::Matrix<double, 18, 1> q;
    q.setZero();
    q.tail(12) << 10, 35, 45, -10, -35, -45, 170, -35, -45, -170, 35, 45;

    bool gazebo_values = true;
    if(gazebo_values){
        //mass = 10;
        Eigen::MatrixXd M = kinematics.GetMassMatrix(q);
        mass = M(0,0);
//        J_b << 0.14, 0, 0,
//                0, 0.14, 0,
//                0, 0, 0.25;
        J_b << M.block(3,3,3,3);
    }else{
        mass = 8.7385;
        J_b << 0.0328, 0, 0,
            0, 0.0307, 0,
            0, 0, 0.0617;
    }    
    mu = 0.3;

    r_b_to_fl_ref_in_b << 0.4512, 0.1512, 0;

    delta_t = 0.05;

    T_sim = 1;

    T_gait = 0.5;

    cost_reference = 1e5;

    cost_force = 1;


    ConvexMpc::ConvexMpcSolver solver(
        mass,
        J_b,
        mu,
        r_b_to_fl_ref_in_b,
        delta_t,
        T_sim,
        T_gait,
        cost_reference,
        cost_force,
        ConvexMpc::Stand,
        nullptr);
    
    Eigen::Array<Eigen::Vector3d, 4, 1> r_b_feet_w;
    r_b_feet_w(0) << 0.4, 0.1, -0.4;
    r_b_feet_w(1) << 0.4, -0.1, -0.4;
    r_b_feet_w(2) << -0.4, 0.1, -0.4;
    r_b_feet_w(3) << -0.4, -0.1, -0.4;

    Eigen::Matrix<double, 12, 1> x0;

    x0 << 0, 0, 0.4, 0.3, 0, 0, 0, 0, 0, 0, 0, 0;

    double t0 = 0;

    Eigen::Vector2d vel_des;
    vel_des << 0, 0;
    double yaw_rate_des = 0;

    Eigen::Array4i init_contact_state;
    init_contact_state.setZero();
    
    ConvexMpc::ConvexMpcSolver::Solution sol = solver.RosMsgToSolution(solver.Solve(t0, x0, r_b_feet_w, init_contact_state, x0(2), vel_des, yaw_rate_des));

    ROS_INFO_STREAM("Roll trajectory:" << std::endl << sol.states.x.row(3));
    ROS_INFO_STREAM("Front left z-forces:" << std::endl << sol.inputs(0).forces.row(2));
    ROS_INFO_STREAM("Front right z-forces:" << std::endl << sol.inputs(1).forces.row(2));
    ROS_INFO_STREAM("Rear left z-forces:" << std::endl << sol.inputs(2).forces.row(2));
    ROS_INFO_STREAM("Rear right z-forces:" << std::endl << sol.inputs(3).forces.row(2));
    return 0;
}