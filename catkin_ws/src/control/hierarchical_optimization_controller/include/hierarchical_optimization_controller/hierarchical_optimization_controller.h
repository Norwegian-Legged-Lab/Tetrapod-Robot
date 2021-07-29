/*******************************************************************/
/*    AUTHOR: Paal Arthur S. Thorseth                              */
/*    ORGN:   Dept of Eng Cybernetics, NTNU Trondheim              */
/*    FILE:   hierarchical_optimization_controller.h               */
/*    DATE:   May 15, 2021                                         */
/*                                                                 */
/* Copyright (C) 2021 Paal Arthur S. Thorseth,                     */
/*                    Adrian B. Ghansah                            */
/*                                                                 */
/* This program is free software: you can redistribute it          */
/* and/or modify it under the terms of the GNU General             */
/* Public License as published by the Free Software Foundation,    */
/* either version 3 of the License, or (at your option) any        */
/* later version.                                                  */
/*                                                                 */
/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty     */
/* of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.         */
/* See the GNU General Public License for more details.            */
/*                                                                 */
/* You should have received a copy of the GNU General Public       */
/* License along with this program. If not, see                    */
/* <https://www.gnu.org/licenses/>.                                */
/*                                                                 */
/*******************************************************************/

#pragma once

// C++ Standard Library
#include <cmath>
#include <thread>

// ROS
#include "ros/ros.h" 
#include "ros/callback_queue.h"

// ROS messages
#include "std_msgs/Int8MultiArray.h"
#include "std_msgs/Float64MultiArray.h"
#include "sensor_msgs/JointState.h"

// ROS Package Libraries
#include <kinematics/kinematics.h>
#include <debug_utils/debug_utils.h>
#include <math_utils/Core>

// Eigen
#include <Eigen/Core>

// Kindr
#include <kindr/Core>

// Drake C++ Toolbox
#include <drake/common/symbolic.h>
#include <drake/solvers/mathematical_program.h>
#include <drake/solvers/solve.h>
#include <drake/solvers/osqp_solver.h>
#include <drake/solvers/equality_constrained_qp_solver.h>
#include <drake/solvers/clp_solver.h>
#include <drake/solvers/scs_solver.h>
#include <drake/solvers/snopt_solver.h>

/// \brief A class for hierarchical optimization control
class HierarchicalOptimizationControl
{
    /// \brief Task struct
    public: struct Task {
        bool has_eq_constraint = false;     ///< Bool indicating whether the task has a linear equality constraint.
        bool has_ineq_constraint = false;   ///< Bool indicating whether the task has a linear inequality constraint.
        Eigen::MatrixXd A_eq;               ///< Linear equality constraint matrix A.
        Eigen::VectorXd b_eq;               ///< Linear equality constraint vector b.             
        Eigen::MatrixXd A_ineq;             ///< Linear inequality constraint matrix A.
        Eigen::VectorXd b_ineq;             ///< Linear inequality constraint vector b.
    };

    /// \brief Drake Solver type enumerator
    public: enum SolverType { OSQP = 1, ECQP = 2, CLP = 3, SCS = 4, SNOPT = 5, UNSPECIFIED};

    /// \brief Leg type enumerator
    public: enum LegType { frontLeft = 1, frontRight = 2, rearLeft = 3, rearRight = 4, NONE };

    /// \brief Body type enumerator
    public: enum BodyType { base = 1, hip = 2, thigh = 3, leg = 4, foot = 5 };

    /// \brief Constructor
    public: HierarchicalOptimizationControl();

    /// \brief Destructor
    public: virtual ~HierarchicalOptimizationControl();

    // TODO Remove
    public: void StaticTorqueTest();

    // TODO Remove
    public: void HeightRollYawTest();

    /// \brief The HierarchicalOptimization function finds
    /// the optimal joint torques for a desired motion plan.
    /// It finds joint torques by finding optimal joint 
    /// accelerations and contact forces for a set of 
    /// whole-body control QP tasks, and leveraging inverse
    /// dynamics. 
    /// \param[in] _desired_base_pos Desired base position.
    /// \param[in] _desired_base_vel Desired base velocity.
    /// \param[in] _desired_base_acc Desired base acceleration.
    /// \param[in] _desired_base_ori Desired base orientation.
    /// \param[in] _desired_f_pos Desired foot-point positions.
    /// \param[in] _desired_f_vel Desired foot-point velocities.
    /// \param[in] _desired_f_acc Desired foot-point accelerations.
    /// \param[in] _f_pos Foot-point positions.
    /// \param[in] _f_vel Foot-point velocities.
    /// \param[in] _v Verbosity level [0,1,2,3].
    /// \return Returns the optimal set of joint torques for
    /// the whole-body control problem leveraging hierarchical 
    /// optimization. 
    public: Eigen::Matrix<double, 12, 1> HierarchicalOptimization(const Eigen::Matrix<double, 3, 1> &_desired_base_pos,
                                                                  const Eigen::Matrix<double, 3, 1> &_desired_base_vel,
                                                                  const Eigen::Matrix<double, 3, 1> &_desired_base_acc,
                                                                  const Eigen::Matrix<double, 3, 1> &_desired_base_ori,
                                                                  const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
                                                                  const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
                                                                  const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
                                                                  const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos,
                                                                  const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_vel,
                                                                  const Eigen::Matrix<double, 18, 1> &_q,
                                                                  const Eigen::Matrix<double, 18, 1> &_u,
                                                                  const int &_v = 0); 

    /// \brief The HierarchicalQPOptimization function finds the 
    /// optimal solution for a set of tasks in a strictly
    /// prioritized order. The method iterates through the
    /// set of tasks and searches for a new solution in the 
    /// null-space of all higher priority equality constraints. 
    /// At each iteration a QP problem is solved to find a 
    /// vector lying in the row-space of the null-space of all 
    /// equality constraints, which improve on the current 
    /// solution.
    /// \param[in] _state_dim State dimension for the solution vector.
    /// \param[in] _tasks A set of tasks to be solved.
    /// \param[in] _solver Solver type.
    /// \param[in] _v Verbosity level [0,1,2,3].
    /// \return Returns the optimal solution in a strict prioritized
    /// manner given a set of tasks. 
    public: Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalQPOptimization(const int &_state_dim,
                                                                                const std::vector<Task> &_tasks,
                                                                                const SolverType &_solver = SolverType::OSQP,
                                                                                const int &_v = 0);

    /// \brief The HierarchicalLeastSquareOptimization function finds the
    /// optimal solution for a set of linear equality constraints in a
    /// strictly prioritized order. The method iterates through the set 
    /// of equality constraints and searches for a new solution in the 
    /// null-space of all higher priority equality constraints. At each
    /// iteration the Moore-Penrose pseudoinverse is utilized to find
    /// a vector lying in the row-space of the null-space of all equality
    /// constraints, which improve on the current solution. The usage
    /// of the Moore-Penrose pseudoinverse yield a least square solution
    /// of the problem at hand.
    /// \param[in] _A A set of equality constraint matrices A.
    /// \param[in] _b A set of equality constraint vectors b.
    /// \param[in] _v Verbosity level [0,1].
    /// \return Returns the optimal solution in a strict prioritized
    /// manner given a set of equality constraints.
    public: Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalLeastSquareOptimization(const Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> &_A,
                                                                                         const Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Dynamic, 1> &_b,
                                                                                         const int &_v = 0);

    /// \brief The SolveQP function solves a (convex) quadratic
    /// program (QP) on the form:
    ///
    ///     min_x        0.5 x^T Q x + c^T x
    ///      s.t.        E_ineq x <= f_ineq
    ///
    /// The toolbox uses the Drake toolbox for solving the 
    /// problem. Currently Drake identifies the problem
    /// and chooses an appropriate commercial solver, but
    /// the solver can be specified (among the supported) 
    /// by the user if one desires.
    /// \param[in] _Q Cost matrix Q (must be positive semidefinite).
    /// \param[in] _c Cost vector c.
    /// \param[in] _E_ineq Linear inequality constraint matrix E_ineq;
    /// \param[in] _f_ineq Linear inequality constraint vector f_ineq;
    /// \param[out] _sol Solution of the QP (if it exists).
    /// \param[in] _solver Solver type, default is unspecified (Drake
    /// will choose accordingly).
    /// \param[in] _v Verbosity level. // TODO Update after verbosity is set
    /// \return Returns true if a solution is found, false if not.
    public: bool SolveQP(const Eigen::MatrixXd &_Q,
                         const Eigen::VectorXd &_c,
                         const Eigen::MatrixXd &_E_ineq,
                         const Eigen::VectorXd &_f_ineq,
                         Eigen::VectorXd &_sol,
                         const SolverType &_solver = SolverType::UNSPECIFIED,
                         const int &_v = 0);

    /// \brief The SolveQP function solves a (convex) quadratic
    /// program (QP) on the form:
    /// 
    ///     min_x        0.5 x^T Q x + c^T x
    ///      s.t.        lb <= A x <= ub        
    /// 
    /// The toolbox uses the Drake toolbox for solving the 
    /// problem. Currently Drake identifies the problem
    /// and chooses an appropriate commercial solver, but
    /// the solver can be specified (among the supported) 
    /// by the user if one desires.
    /// \param[in] _Q Cost matrix Q (must be positive semidefinite).
    /// \param[in] _c Cost vector c.
    /// \param[in] _A Linear inequality constraint matrix A;
    /// \param[in] _lb Linear inequality constraint lower bound vector;
    /// \param[in] _ub Linear inequality constraint upper bound vector;
    /// \param[out] _sol Solution of the QP (if it exists).
    /// \param[in] _solver Solver type, default is unspecified (Drake
    /// will choose accordingly).
    /// \param[in] _v Verbosity level. // TODO Update after verbosity is set
    /// \return Returns true if a solution is found, false if not.
    public: bool SolveQP(const Eigen::MatrixXd &_Q,
                         const Eigen::VectorXd &_c,
                         const Eigen::MatrixXd &_A,
                         const Eigen::VectorXd &_lb,
                         const Eigen::VectorXd &_ub,
                         Eigen::VectorXd &_sol,
                         const SolverType &_solver = SolverType::UNSPECIFIED,
                         const int &_v = 0);

    /// \brief The SolveQP function solves a (convex) quadratic
    /// program (QP) on the form:
    /// 
    ///     min_x        0.5 x^T Q x + c^T x
    ///      s.t.          E_eq x  = f_eq
    ///                  E_ineq x <= f_ineq
    /// 
    /// The toolbox uses the Drake toolbox for solving the 
    /// problem. Currently Drake identifies the problem
    /// and chooses an appropriate commercial solver, but
    /// the solver can be specified (among the supported) 
    /// by the user if one desires.
    /// \param[in] _Q Cost matrix Q (must be positive semidefinite).
    /// \param[in] _c Cost vector c.
    /// \param[in] _E_eq Linear equality constraint matrix E_eq;
    /// \param[in] _f_eq Linear equality constraint vector f_eq;
    /// \param[in] _E_ineq Linear inequality constraint matrix E_ineq;
    /// \param[in] _f_ineq Linear inequality constraint vector f_ineq;
    /// \param[out] _sol Solution of the QP (if it exists).
    /// \param[in] _solver Solver type, default is unspecified (Drake
    /// will choose accordingly).
    /// \param[in] _v Verbosity level. // TODO Update after verbosity is set
    /// \return Returns true if a solution is found, false if not.
    public: bool SolveQP(const Eigen::MatrixXd &_Q,
                         const Eigen::VectorXd &_c,
                         const Eigen::MatrixXd &_E_eq,
                         const Eigen::VectorXd &_f_eq,
                         const Eigen::MatrixXd &_E_ineq,
                         const Eigen::VectorXd &_f_ineq,
                         Eigen::VectorXd &_sol,
                         const SolverType &_solver = SolverType::UNSPECIFIED,
                         const int &_v = 0);

    /// \brief The PublishTorqueMsg function publishes
    /// a desired torque message to the ROS topic set by 
    /// the joint state publisher.
    /// \param[in] _desired_tau Desired torque to be published.
    public: void PublishTorqueMsg(const Eigen::Matrix<double, 12, 1> &_desired_tau);

    /// \brief The OnGenCoordMsg function handles an incoming 
    /// generalized coordinates message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// coordinates.
    public: void OnGenCoordMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnGenVelMsg function handles an incoming 
    /// generalized velocities message from ROS.
    /// \param[in] _msg A float array containing the generalized
    /// velocities.
    public: void OnGenVelMsg(const std_msgs::Float64MultiArrayConstPtr &_msg);

    /// \brief The OnContactStateMsg function handles an incoming 
    /// contact state message from ROS.
    /// \param[in] _msg A float array containing the contact state.
    public: void OnContactStateMsg(const std_msgs::Int8MultiArrayConstPtr &_msg);

    /// \brief The ProcessQueueThread function is a ROS helper function
    /// that processes messages.
    public: void ProcessQueueThread();

    /// \brief The PublishQueueThread function is a ROS helper function
    /// that publish state messages.
    public: void PublishQueueThread();

    /// \brief The InitRos function is called to initialize ROS 
    protected: void InitRos();

    /// \brief The InitRosQueueThreads function is called to initialize
    /// the ROS Publish and Process Queue Threads
    protected: void InitRosQueueThreads();

    /// \brief Kinematics
    // TODO Make private
    public: Kinematics kinematics;

    /// \brief Generalized Coordinates
    private: Eigen::Matrix<double, 18, 1> genCoord;

    /// \brief Generalized Velocities
    private: Eigen::Matrix<double, 18, 1> genVel;

    /// \brief Foot-point positions
    private: Eigen::Matrix<Eigen::Vector3d, 4, 1> fPos;

    /// \brief Foot-point velocities
    private: Eigen::Matrix<Eigen::Vector3d, 4, 1> fVel;

    /// \brief Contact State
    private: int contactState[4];

    /// \brief Node used for ROS transport.
    private: std::unique_ptr<ros::NodeHandle> rosNode;

    /// \brief ROS Generalized Coordinates Subscriber.
    private: ros::Subscriber genCoordSub;

    /// \brief ROS Generalized Coordinates Subscriber.
    private: ros::Subscriber genVelSub;

    /// \brief ROS Contact State Subscriber.
    private: ros::Subscriber contactStateSub;

    /// \brief ROS Joint State Publisher
    private: ros::Publisher jointStatePub;

    // TODO remove as it is only needed to log to plots
    /// \brief ROS Base Position Command Publisher
    private: ros::Publisher basePoseCmdPub;

    // TODO remove as it is only needed to log to plots
    /// \brief ROS Base Position Command Publisher
    private: ros::Publisher baseTwistCmdPub;

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief ROS callbackque that helps publish messages.
    private: ros::CallbackQueue rosPublishQueue;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;

    /// \brief Thread running the rosPublishQueue.
    private: std::thread rosPublishQueueThread;
};