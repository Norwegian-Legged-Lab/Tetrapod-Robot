#pragma once

#include<Eigen/Core>
#include<kindr/Core>

#include<kinematics/kinematics.h>

class TaskGenerator{
    public:

    /// \brief Task struct
    struct Task {
        bool has_eq_constraint = false;     ///< Bool indicating whether the task has a linear equality constraint.
        bool has_ineq_constraint = false;   ///< Bool indicating whether the task has a linear inequality constraint.
        Eigen::MatrixXd A_eq;               ///< Linear equality constraint matrix A.
        Eigen::VectorXd b_eq;               ///< Linear equality constraint vector b.             
        Eigen::MatrixXd A_ineq;             ///< Linear inequality constraint matrix A.
        Eigen::VectorXd b_ineq;             ///< Linear inequality constraint vector b.
    };

    enum TaskType {eom, cmc, cftl, mt, pt, cfm};

    TaskGenerator(
        Kinematics _kinematics,
        const Eigen::Matrix<double, 3, 1> &_desired_base_pos,
        const Eigen::Matrix<double, 3, 1> &_desired_base_vel,
        const Eigen::Matrix<double, 3, 1> &_desired_base_acc,
        const Eigen::Matrix<double, 3, 1> &_desired_base_ori,
        const Eigen::Matrix<double, 3, 1> &_desired_base_omega,
        const Eigen::Matrix<double, 3, 1> &_desired_base_alpha,
        const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
        const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
        const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
        const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos,
        const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_vel,
        const Eigen::Matrix<double, 18, 1> &_q,
        const Eigen::Matrix<double, 18, 1> &_u,
        const double &_mu,
        const double &_k_p_fb_pos,
        const double &_k_d_fb_pos,
        const double &_k_p_fb_rot,
        const double &_k_d_fb_rot,
        const double &_k_p_fl,
        const double &_k_d_fl,
        const double &_k_p_fr,
        const double &_k_d_fr,
        const double &_k_p_rl,
        const double &_k_d_rl,
        const double &_k_p_rr,
        const double &_k_d_rr,
        const double &_k_p_pt,
        const double &_k_d_pt,
        const double &_tau_min,
        const double &_tau_max,
        const std::vector<Kinematics::LegType> &_contact_legs,
        const std::vector<Kinematics::LegType> &_swing_legs);
    
    Task EomTask();

    Task CmcTask();

    Task CftlTask();

    Task MtTask();

    Task PtTask();
    
    Task CfmTask();

    private:

    unsigned int state_dim;
    unsigned int n_c;
    unsigned int n_s;
    Kinematics kinematics;
    Eigen::Matrix<double, 3, 1> desired_base_pos;
    Eigen::Matrix<double, 3, 1> desired_base_vel;
    Eigen::Matrix<double, 3, 1> desired_base_acc;
    Eigen::Matrix<double, 3, 1> desired_base_ori;
    Eigen::Matrix<double, 3, 1> desired_base_omega;
    Eigen::Matrix<double, 3, 1> desired_base_alpha;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_vel;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> desired_f_acc;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> f_pos;
    Eigen::Matrix<Eigen::Vector3d, 4, 1> f_vel;
    Eigen::Matrix<double, 18, 1> q;
    Eigen::Matrix<double, 18, 1> u;
    double mu;
    Eigen::Matrix3d k_p_fb_pos;
    Eigen::Matrix3d k_d_fb_pos;
    Eigen::Matrix3d k_p_fb_rot;
    Eigen::Matrix3d k_d_fb_rot;

    Eigen::Matrix3d k_p_fl;
    Eigen::Matrix3d k_d_fl;
    Eigen::Matrix3d k_p_fr;
    Eigen::Matrix3d k_d_fr;
    Eigen::Matrix3d k_p_rl;
    Eigen::Matrix3d k_d_rl;
    Eigen::Matrix3d k_p_rr;
    Eigen::Matrix3d k_d_rr;

    Eigen::Matrix<double, 12, 12> k_p_pt;
    Eigen::Matrix<double, 12, 12> k_d_pt;

    std::vector<Kinematics::LegType> contact_legs;
    std::vector<Kinematics::LegType> swing_legs;

    // Kinematic and dynamic matrices and terms used to
    // enforce constraints.
    Eigen::Matrix<double, 18, 18> M;                      // 18x18 Mass matrix
    Eigen::Matrix<double, 18, 1> b;                       // 18x1 Coriolis and centrifugal terms
    Eigen::Matrix<double, 18, 1> g;                       // 18x1 Gravitational terms
    Eigen::Matrix<double, Eigen::Dynamic, 18> J_c;        // (3*n_c)x18 Contact Jacobian
    Eigen::Matrix<double, Eigen::Dynamic, 18> dot_J_c;    // (3*n_c)x18 Time derivative of the Contact Jacobian

    // Matrices and parameters used to enfore motion tracking
    Eigen::Matrix<double, 3, 18> J_P_fb;                   // 3x18 Floating base Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_R_fb;                   // 3x18 Floating base Rotation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_fl;                   // 3x18 Front left foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_fr;                   // 3x18 Front right foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_rl;                   // 3x18 Rear left foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> J_P_rr;                   // 3x18 Rear right foot Translation Jacobian

    Eigen::Matrix<double, 3, 18> dot_J_P_fb;               // 3x18 Time derivative of the Floating base Translation Jacobian
    Eigen::Matrix<double, 3, 18> dot_J_R_fb;               // 3x18 Time derivative of the Floating base Rotation Jacobian
    Eigen::Matrix<double, 3, 18> dot_J_P_fl;               // 3x18 Time derivative of the Front left foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> dot_J_P_fr;               // 3x18 Time derivative of the Front right foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> dot_J_P_rl;               // 3x18 Time derivative of the Rear left foot Translation Jacobian
    Eigen::Matrix<double, 3, 18> dot_J_P_rr;               // 3x18 Time derivative of the Rear right foot Translation Jacobian

    // Terms used to enforce posture tracking
    Eigen::Matrix<double, 12, 1> q_r_nom;                  // 12x1 Nominal posture configuration

    // Terms used to enforce contact force and torque limits
    Eigen::Vector3d h;                                    // 3x1 Heading direction of the control frame expressed in the inertial frame
    Eigen::Vector3d l;                                    // 3x1 Lateral direction of the control frame expressed in the inertial frame
    Eigen::Vector3d n;                                    // 3x1 Normal direction of the control frame expressed in the inertial frame
    Eigen::Matrix<double, 3, 3> rotationWToC;             // 3x3 Rotation matrix from world to control frame (transform from control to world).
    Eigen::Matrix<double, 12, 1> tau_min;                 // 18x1 Minimum actuator torques
    Eigen::Matrix<double, 12, 1> tau_max;                 // 18x1 Maximum actuator torques
};


