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

    /// \brief Leg type enumerator
    public: enum LegType { frontLeft = 1, frontRight = 2, rearLeft = 3, rearRight = 4, NONE };

    /// \brief Body type enumerator
    public: enum BodyType { base = 1, hip = 2, thigh = 3, leg = 4, foot = 5 };

    /// \brief Constructor
    public: HierarchicalOptimizationControl();

    /// \brief Destructor
    public: virtual ~HierarchicalOptimizationControl();

    // TODO Describe
    public: Eigen::Matrix<double, 12, 1> HierarchicalOptimization(const Eigen::Vector3d &_desired_base_pos,
                                                                  const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos); 

    /// \brief The HierarchicalQPOptimization function finds the 
    /// optimal solution for a set of tasks in a strictly
    /// prioritized order. The method iterates through the
    /// set of tasks and searches for a new solution in the 
    /// null-space of all higher priority equality constraints. 
    /// At each iteration a QP problem is solved to find 
    /// vectors lying in the row-space of the null-space of all 
    /// equality constraints, which improve on the current 
    /// solution.
    /// \param[in] _state_dim State dimension for the solution vector.
    /// \param[in] _tasks A set of tasks to be solved.
    /// \param[in] _v Verbosity level [1,2,3].
    /// \return Returns the optimal solution in a strict prioritized
    /// manner given a set of tasks. 
    public: Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalQPOptimization(const int &_state_dim,
                                                                                const std::vector<Task> &_tasks,
                                                                                const int &_v = 0);

    // TODO Describe
    public: Eigen::Matrix<double, Eigen::Dynamic, 1> HierarchicalLeastSquareOptimization(const Eigen::Matrix<Eigen::MatrixXd, Eigen::Dynamic, 1> &_A,
                                                                                         const Eigen::Matrix<Eigen::Matrix<double, Eigen::Dynamic, 1>, Eigen::Dynamic, 1> &_b,
                                                                                         const int &_v = 0);

    /// \brief The SolveQP function solves a (convex) quadratic
    /// program (QP) on the form:
    /// -------------------------------------------------------
    ///     min_x        0.5 x^T Q x + c^T x
    ///      s.t.        E_ineq x <= f_ineq
    /// -------------------------------------------------------
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
    /// \param[in] _v Verbosity level. // TODO Update after verbosity is set
    /// \return Returns true if a solution is found, false if not.
    public: bool SolveQP(const Eigen::MatrixXd &_Q,
                         const Eigen::VectorXd &_c,
                         const Eigen::MatrixXd &_E_ineq,
                         const Eigen::VectorXd &_f_ineq,
                         Eigen::VectorXd &_sol,
                         const int &_v = 0);

    /// \brief The SolveQP function solves a (convex) quadratic
    /// program (QP) on the form:
    /// -------------------------------------------------------
    ///     min_x        0.5 x^T Q x + c^T x
    ///      s.t.          E_eq x  = f_eq
    ///                  E_ineq x <= f_ineq
    /// -------------------------------------------------------
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
    /// \param[in] _v Verbosity level. // TODO Update after verbosity is set
    /// \return Returns true if a solution is found, false if not.
    public: bool SolveQP(const Eigen::MatrixXd &_Q,
                         const Eigen::VectorXd &_c,
                         const Eigen::MatrixXd &_E_eq,
                         const Eigen::VectorXd &_f_eq,
                         const Eigen::MatrixXd &_E_ineq,
                         const Eigen::VectorXd &_f_ineq,
                         Eigen::VectorXd &_sol,
                         const int &_v = 0);


    // TODO Remove
    public: void testDrakeQPOpt();

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
    private: Kinematics kinematics;

    /// \brief Generalized Coordinates
    private: Eigen::Matrix<double, 18, 1> genCoord;

    /// \brief Generalized Velocities
    private: Eigen::Matrix<double, 18, 1> genVel;

    /// \brief Footstep positions
    private: Eigen::Matrix<Eigen::Vector3d, 4, 1> fPos;

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

    /// \brief ROS callbackque that helps process messages.
    private: ros::CallbackQueue rosProcessQueue;

    /// \brief ROS callbackque that helps publish messages.
    private: ros::CallbackQueue rosPublishQueue;

    /// \brief Thread running the rosProcessQueue.
    private: std::thread rosProcessQueueThread;

    /// \brief Thread running the rosPublishQueue.
    private: std::thread rosPublishQueueThread;
};