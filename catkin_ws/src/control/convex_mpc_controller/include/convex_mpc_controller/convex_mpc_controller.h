#include<convex_mpc_controller/solveMpcRequest.h>
#include<convex_mpc_controller/solveMpcResponse.h>
#include<convex_mpc_controller/convex_mpc_solver.h>
#include<convex_mpc_controller/stance.h>
#include<convex_mpc_controller/contact_detector.h>
#include<convex_mpc_controller/swing_controller.h>
#include<convex_mpc_controller/local_eigen_extensions.h>
#include<convex_mpc_controller/pose.h>

#include<ros/ros.h>
#include<std_msgs/Bool.h>
#include<sensor_msgs/JointState.h>
#include<std_msgs/Float64MultiArray.h>
#include<limits>
#include<cmath>
#include<vector>
#include<chrono>
#include<Eigen/Core>
#include<eigen_conversions/eigen_msg.h>
#include<kinematics/kinematics.h>

namespace ConvexMpc{

class ConvexMpcController{
    public:
    ConvexMpcController(
        ros::NodeHandle* node,
        double real_time_factor,
        double gait_period,
        ConvexMpc::GaitType gait_type,
        double tau_threshold,
        Eigen::Vector2d vel_des,
        double yaw_rate_des,
        double swing_height,
        Eigen::Vector3d r_b_to_fl_ref_in_b);
    
    void UpdateController(double t);

    void RequestMpcSolution();

    void TriggerCallback(const std_msgs::BoolConstPtr &msg);

    void MpcCallback(const convex_mpc_controller::solveMpcResponseConstPtr &msg);

    void GenCoordCallback(const std_msgs::Float64MultiArrayConstPtr &msg);
    
    void GenVelCallback(const std_msgs::Float64MultiArrayConstPtr &msg);

    void ResetTime() {t0_ = std::chrono::high_resolution_clock::now();}

    bool HasSolution() const {return has_solution_;}

    //double GetT() const {return real_time_factor_*(std::chrono::duration<double>(std::chrono::high_resolution_clock::now() - t0_).count());}
    double GetT() const;

    double GetSolutionAge() const {return std::chrono::duration<double>(std::chrono::high_resolution_clock::now() - last_solution_ts_).count();}

    ConvexMpcSolver::Solution const GetSolution() {return solution_;}

    bool GenCoordsInitialized() const {return not (gen_coord_.array().isNaN().any() || gen_vel_.array().isNaN().any());}

    GeneralizedCoordinates GetGenCoord() const {return gen_coord_;}

    GeneralizedCoordinates GetGenVel() const {return gen_vel_;}

    Eigen::Array4i GetFootStates() const {return foot_states_;}

    int GetSolutionIndex(const double &t) const;

    Eigen::Array<Eigen::Vector3d, 4, 1> GetStanceForces(const double &t);
    
    Eigen::Array<Eigen::Vector3d, 4, 1> GetStanceForces();

    Eigen::Matrix<double, 12, 1> GetStanceTorques(const double &t);
    
    Eigen::Matrix<double, 12, 1> GetStanceTorques();

    Eigen::Matrix<double, 12, 1> GetStanceTorquesApproximate(const double &t);

    Eigen::Matrix<double, 6, 1> GetPoseDes(const double &t) const;
    
    Eigen::Matrix<double, 6, 1> GetTwistDes(const double &t) const;
    
    Eigen::Matrix<double, 6, 1> GetAccelerationDes(const double &t) const;

    Eigen::Matrix<double, 6, 1> GetPoseDes() const;
    
    Eigen::Matrix<double, 6, 1> GetTwistDes() const {return solution_.states.x.bottomLeftCorner(6,1);}
    
    Eigen::Matrix<double, 6, 1> GetAccelerationDes() const {return solution_.states.dx.bottomLeftCorner(6,1);}

    FootstepPositions GetFootstepPosDes(const double &t) const;
    
    FootstepPositions GetFootstepVelDes(const double &t) const;
    
    FootstepPositions GetFootstepAccDes(const double &t) const;

    void PublishTorqueMsg(Eigen::Matrix<double, 12, 1> &desired_tau);

    void PublishFootStates();

    void PublishDesiredFootStates(const double &t) const;

    private:

    double real_time_factor_;
    double gait_period_;
    Eigen::Vector3d r_b_to_fl_ref_in_b_;
    ConvexMpc::StanceInfo stance_info_;
    Eigen::Vector2d vel_des_;
    double yaw_rate_des_;
    double swing_height_;
    ContactDetector contact_detector_;
    Eigen::Array<SwingController, 4, 1> swing_controllers_;
    Eigen::Array4i foot_states_;



    Kinematics kinematics_;
    bool has_solution_ = false;//TODO:Hacky solution, find something else
    ros::NodeHandle* node_;
    ros::Publisher mpc_request_pub_;
    ros::Publisher torque_pub_;
    ros::Subscriber trigger_sub_;
    ros::Subscriber mpc_response_sub_;
    ros::Subscriber gen_coord_sub_;
    ros::Subscriber gen_vel_sub_;

    ros::Publisher des_foot_pos_pub_;
    ros::Publisher des_foot_vel_pub_;
    ros::Publisher des_foot_acc_pub_;

    ros::Publisher foot_pos_pub_;
    ros::Publisher des_base_pose_pub_;
    ros::Publisher des_base_twist_pub_;
    ros::Publisher des_base_acc_pub_;

    std::chrono::time_point<std::chrono::system_clock> t0_;
    std::chrono::time_point<std::chrono::system_clock> t1_;
    std::chrono::time_point<std::chrono::system_clock> t2_;
    std::chrono::time_point<std::chrono::system_clock> last_solution_ts_;
    GeneralizedCoordinates gen_coord_;
    GeneralizedCoordinates gen_vel_;
    FootstepPositions f_pos_;
    ConvexMpcSolver::Solution solution_;
};
}//ConvexMpc