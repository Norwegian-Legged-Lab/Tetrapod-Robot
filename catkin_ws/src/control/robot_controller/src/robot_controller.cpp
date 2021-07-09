#include "robot_controller/robot_controller.h"

RobotController::RobotController(int _controller_freq, double _gait_period) : RobotController::Controller(_controller_freq)
{
    this->gait_duration = _gait_period;

    stance_iterations = _gait_period*controller_freq*stance_phase_duration_percentage;

    swing_iterations = _gait_period*controller_freq*(1.0 - 2.0*stance_phase_duration_percentage);
}

/*
void RobotController::UpdateFeetReferences()
{
    if(this->super_state == SuperState::kIdle)
    {
        UpdateFeetReferencesPoseControl();
    }
    else if(this->super_state == SuperState::kMoving)
    {
        UpdateFeetReferencesGaitControl();
    }
}
*/

void RobotController::UpdateStepDistances()
{
    this->step_distance_x_linear = gait_duration*lin_vel_x;

    this->step_distance_y_linear = gait_duration*lin_vel_y;

    Eigen::Matrix<double, 3, 1> base_to_hip_distance; // = kinematics.GetDistanceFromBaseToFrontLeftHipInB();

    double rotation_radius =  sqrt(2*LEG_OFFSET_LENGTH*LEG_OFFSET_LENGTH)
                            + sqrt(base_to_hip_distance(0)*base_to_hip_distance(0) + base_to_hip_distance(1)*base_to_hip_distance(1));

    double step_distance_rotation = ang_vel_z*rotation_radius*gait_duration;

    this->step_distance_x_rotational = step_distance_rotation/sqrt(2.0);

    this->step_distance_y_rotational = step_distance_rotation/sqrt(2.0);
}

void RobotController::UpdateGaitState()
{
    if(this->iteration == this->final_iteration)
    {
        this->UpdateStepDistances();

        iteration = 0;

        switch (this->motion_state)
        {
        case MotionState::kStancePreSwingFlRr:
        {
            this->motion_state = MotionState::kSwingFlRr;
            this->final_iteration = this->swing_iterations;
            break;
        }
        case MotionState::kSwingFlRr:
        {
            this->motion_state = MotionState::kStancePreSwingFrRl;
            this->final_iteration = this->stance_iterations;
            break;
        }
        case MotionState::kStancePreSwingFrRl:
        {
            this->motion_state = MotionState::kSwingFrRl;
            this->final_iteration = this->swing_iterations;
            break;
        }
        case MotionState::kSwingFrRl:
        {
            this->motion_state = MotionState::kStancePreSwingFlRr;
            this->final_iteration = this->stance_iterations;
            break;
        }
        default:
            break;
        }
    }
    else
    {
        iteration++;
    }
}

void RobotController::UpdateFeetReferences()
{
    switch (this->motion_state)
    {
    case MotionState::kStancePreSwingFlRr:
    {
        this->fl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontLeft, double(iteration + stance_iterations + swing_iterations)/double(swing_iterations + 2*stance_iterations));
        this->rr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearRight, double(iteration + stance_iterations + swing_iterations)/double(swing_iterations + 2*stance_iterations));

        this->fr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontRight, double(iteration)/double(swing_iterations + 2*stance_iterations));
        this->rl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearLeft, double(iteration)/double(swing_iterations + 2*stance_iterations));

        break;
    }
    case MotionState::kSwingFlRr:
    {
        this->fr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontRight, double(iteration + stance_iterations)/double(2*stance_iterations + swing_iterations));
        this->rl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearLeft, double(iteration + stance_iterations)/double(2*stance_iterations + swing_iterations));

        this->fl_position_body = this->UpdateSwingFootPosition(Kinematics::LegType::frontLeft, double(iteration)/double(swing_iterations));
        this->rr_position_body = this->UpdateSwingFootPosition(Kinematics::LegType::rearRight, double(iteration)/double(swing_iterations));
        // Swing
        break;
    }
    case MotionState::kStancePreSwingFrRl:
    {
        this->fl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontLeft, double(iteration)/double(swing_iterations + 2*stance_iterations));
        this->rr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearRight, double(iteration)/double(swing_iterations + 2*stance_iterations));

        this->fr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontRight, double(iteration + stance_iterations + swing_iterations)/double(swing_iterations + 2*stance_iterations));
        this->rl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearLeft, double(iteration + stance_iterations + swing_iterations)/double(swing_iterations + 2*stance_iterations));
        break;
    }
    case MotionState::kSwingFrRl:
    {
        this->fl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontLeft, double(iteration + stance_iterations)/double(2*stance_iterations + swing_iterations));
        this->rr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearRight, double(iteration + stance_iterations)/double(2*stance_iterations + swing_iterations));

        this->fr_position_body = this->UpdateSwingFootPosition(Kinematics::LegType::frontRight, double(iteration)/double(swing_iterations));
        this->rl_position_body = this->UpdateSwingFootPosition(Kinematics::LegType::rearLeft, double(iteration)/double(swing_iterations));
        // Swing
        break;
    }
    default:
        break;
    }
}

Eigen::Matrix<double, 3, 1> RobotController::UpdateStanceFootPosition(Kinematics::LegType _leg_type, double _progress)
{
    Eigen::Matrix<double, 3, 1> foot_pos;

    foot_pos(0) = _progress*(- step_distance_x_linear);
    foot_pos(1) = _progress*(- step_distance_y_linear);
    foot_pos(2) = - hip_height;

    switch (_leg_type)
    {
    case Kinematics::LegType::frontLeft:
    { 
        foot_pos(0) += _progress*step_distance_x_rotational;
        foot_pos(1) -= _progress*step_distance_y_rotational;

        foot_pos += fl_offset;
        break;
    }
    case Kinematics::LegType::frontRight:
    {
        foot_pos(0) -= _progress*step_distance_x_rotational;
        foot_pos(1) -= _progress*step_distance_y_rotational;

        foot_pos += fr_offset;
        break;
    }
    case Kinematics::LegType::rearLeft:
    {
        foot_pos(0) += _progress*step_distance_x_rotational;
        foot_pos(1) += _progress*step_distance_y_rotational;

        foot_pos += rl_offset;
        break;
    }
    case Kinematics::LegType::rearRight:
    {
        foot_pos(0) -= _progress*step_distance_x_rotational;
        foot_pos(1) += _progress*step_distance_y_rotational;

        foot_pos += rr_offset;
        break;
    }    
    default:
        ROS_WARN("RobotController::UpdateStanceFootPosition - Invalid leg type selected");
        break;
    }

    return foot_pos;
}

Eigen::Matrix<double, 3, 1> RobotController::UpdateSwingFootPosition(Kinematics::LegType _leg_type, double _progress)
{
    Eigen::Matrix<double, 3, 1> foot_pos;

    foot_pos(0) = (_progress - 1.0)*step_distance_x_linear;
    foot_pos(1) = (_progress - 1.0)*step_distance_y_linear;
    foot_pos(2) = -0.28; // Temp

    switch (_leg_type)
    {
    case Kinematics::LegType::frontLeft:
    {
        foot_pos(0) -= (_progress - 1.0)*step_distance_x_rotational;
        foot_pos(1) += (_progress - 1.0)*step_distance_y_rotational;

        foot_pos += fl_offset;
        break;
    }
    case Kinematics::LegType::frontRight:
    {
        foot_pos(0) += (_progress - 1.0)*step_distance_x_rotational;
        foot_pos(1) += (_progress - 1.0)*step_distance_y_rotational;

        foot_pos += fr_offset;
        break;
    }
    case Kinematics::LegType::rearLeft:
    {
        foot_pos(0) -= (_progress - 1.0)*step_distance_x_rotational;
        foot_pos(1) -= (_progress - 1.0)*step_distance_y_rotational;

        foot_pos += rl_offset;
        break;
    }
    case Kinematics::LegType::rearRight:
    {
        foot_pos(0) += (_progress - 1.0)*step_distance_x_rotational;
        foot_pos(1) -= (_progress - 1.0)*step_distance_y_rotational;

        foot_pos += rr_offset;
        break;
    }
    default:
        ROS_WARN("RobotController::UpdateSwingFootPosition - Invalid leg type selected");
        break;
    }

    return foot_pos;
}

void RobotController::PrintParameters()
{
    ROS_INFO("SwI: %d\tStI: %d", swing_iterations, stance_iterations);
}

void RobotController::PrintVelCommands()
{
    ROS_INFO("LinX: %f\tLinY: %f\tAngZ: %f", lin_vel_x, lin_vel_y, ang_vel_z);
}

void RobotController::PrintFootPositions()
{
    ROS_INFO("State: %d\tIteration: %d\tVlx: %f\tVly: %f\tVax: %f\tVay: %f\tFeet: %f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t", 
    motion_state, iteration,
    step_distance_x_linear, step_distance_y_linear, step_distance_x_rotational, step_distance_y_rotational,
    fl_position_body(0), fl_position_body(1), fl_position_body(2),
    fr_position_body(0), fr_position_body(1), fr_position_body(2),
    rl_position_body(0), rl_position_body(1), rl_position_body(2),
    rr_position_body(0), rr_position_body(1), rr_position_body(2));
}