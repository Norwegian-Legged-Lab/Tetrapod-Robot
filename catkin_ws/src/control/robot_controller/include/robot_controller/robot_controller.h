#ifndef robot_controller_h
#define robot_controller_h

#include "controller/controller.h"
#include "modular_gait_controller/gaits.h"

class RobotController : public Controller
{
    public: enum SuperState {kIdle, kMoving};

    public: enum MotionState {kStancePreSwingFlRr, kSwingFlRr, kStancePreSwingFrRl, kSwingFrRl};

    public: enum SwingState {kStart, kRise, kHigh, kFall, kEnd};

    public: RobotController(int controller_freq, double gait_period);

    public: void UpdateStepDistances();

    public: void UpdateGaitState();

    /// \brief A function updating the foot positions of the robot in the hip frames
    public: void UpdateFeetReferences();

    public: void UpdateFeetTrajectories();

    /// \brief A pose controller updating robot's foot positions to control its pose
    public: void UpdateFeetReferencesPoseControl();

    /// \brief A gait controller updating the robot's foot positions to walk
    public: void UpdateFeetReferencesGaitControl();

    /// \brief A function that sets the goal positions as the targets to reach eventually
    public: void SetFeetPositionsGoalPose();

    public: Eigen::Matrix<double, 3, 1> UpdateStanceFootPosition(Kinematics::LegType _leg_type, double _progress);

    public: Eigen::Matrix<double, 3, 1> UpdateSwingFootPosition(Kinematics::LegType _leg_type, double _progress);

    public: void UpdateSwingFootTrajectory(Kinematics::LegType _leg_type, double progress);

    /// \brief The main state of the robot deciding whether the robot is walking or not
    private: SuperState super_state = SuperState::kIdle;

    /// \brief A variable deciding which of the four motion states we are currently in
    private: MotionState motion_state = MotionState::kStancePreSwingFlRr;

    /// \brief The front left foot target position in the hip frame when using pose control
    private: Eigen::Matrix<double, 3, 1> fl_goal_position;

    /// \brief The front right foot target position in the hip frame when using pose control
    private: Eigen::Matrix<double, 3, 1> fr_goal_position;

    /// \brief The rear left foot target position in the hip frame when using pose control
    private: Eigen::Matrix<double, 3, 1> rl_goal_position;

    /// \brief The rear right foot target position in the hip frame when using pose control
    private: Eigen::Matrix<double, 3, 1> rr_goal_position;

    private: Eigen::Matrix<double, 12, 1> initial_feet_positions_pose_control;

    private: double hip_height = 0.35;

    private: double step_distance_x_linear = 0.0;

    private: double step_distance_y_linear = 0.0;

    private: double step_distance_x_rotational = 0.0;

    private: double step_distance_y_rotational = 0.0;

    private: double gait_duration = 0.0;

    private: double vel_x = 0.0;

    private: double vel_y = 0.0;

    private: double yaw_rate = 0.0;

    private: int iteration = 0;

    private: double max_step_height = 0.1;

    private: double stance_phase_duration_percentage = 0.1;

    private: double swing_rise_percentage = 0.3;

    private: double swing_period; // SET SOMEWHERE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    private: double stance_period;

    private: int swing_iterations;

    private: int stance_iterations; 

    private: int final_iteration;

    private: double fl_step_distance_x;

    private: double fl_step_distance_y;

    private: double fr_step_distance_x;

    private: double fr_step_distance_y;

    private: double rl_step_distance_x;

    private: double rl_step_distance_y;

    private: double rr_step_distance_x;

    private: double rr_step_distance_y;


    /*
    Eigen::Matrix<double, 3, 1> fl_trajectory_x;

    Eigen::Matrix<double, 3, 1> fl_trajectory_y;

    Eigen::Matrix<double, 3, 1> fl_trajectory_z;

    Eigen::Matrix<double, 3, 1> fr_trajectory_x;

    Eigen::Matrix<double, 3, 1> fr_trajectory_y;

    Eigen::Matrix<double, 3, 1> fr_trajectory_z;

    Eigen::Matrix<double, 3, 1> rl_trajectory_x;

    Eigen::Matrix<double, 3, 1> rl_trajectory_y;

    Eigen::Matrix<double, 3, 1> rl_trajectory_z;

    Eigen::Matrix<double, 3, 1> rr_trajectory_x;

    Eigen::Matrix<double, 3, 1> rr_trajectory_y;

    Eigen::Matrix<double, 3, 1> rr_trajectory_z;
    */

   public: void PrintParameters();

   public: void PrintFootPositions();

   public: void PrintVelCommands();

};

#endif