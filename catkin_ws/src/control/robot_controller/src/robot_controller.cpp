#include "robot_controller/robot_controller.h"

RobotController::RobotController(int _controller_freq, double _gait_period) : RobotController::Controller(_controller_freq)
{
    this->gait_duration = _gait_period;

    stance_iterations = _gait_period*controller_freq*stance_phase_duration_percentage;

    stance_period = _gait_period * stance_phase_duration_percentage;

    swing_period = _gait_period * (1.0 - 2.0 * stance_phase_duration_percentage);

    swing_iterations = _gait_period*controller_freq*(1.0 - 2.0*stance_phase_duration_percentage);

    this->final_iteration = this->stance_iterations;
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
    if(this->iteration == this->final_iteration - 1)
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

void RobotController::UpdateFeetTrajectories()
{

    switch (this->motion_state)
    {
    case MotionState::kStancePreSwingFlRr:
    {
        double fl_rr_progress = double(iteration + swing_iterations + stance_iterations)/double(swing_iterations + 2 * stance_iterations);
        double fr_rl_progress = double(iteration)/double(swing_iterations + 2 * stance_iterations);

        this->fl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontLeft, fl_rr_progress);
        this->rr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearRight, fl_rr_progress);

        this->fr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontRight, fr_rl_progress);
        this->rl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearLeft, fr_rl_progress);

        break;
    }
    case MotionState::kSwingFlRr:
    {
        double fl_rr_progress = double(iteration)/double(swing_iterations);
        double fr_rl_progress = double(iteration + stance_iterations)/double(swing_iterations + 2 * stance_iterations);

        this->UpdateSwingFootTrajectory(Kinematics::LegType::frontLeft, fl_rr_progress);
        this->UpdateSwingFootTrajectory(Kinematics::LegType::rearRight, fl_rr_progress);

        this->fr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontRight, fr_rl_progress);
        this->rl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearLeft, fr_rl_progress);

        break;
    }
    case MotionState::kStancePreSwingFrRl:
    {
        double fl_rr_progress = double(iteration)/double(swing_iterations + 2 * stance_iterations);
        double fr_rl_progress = double(iteration + swing_iterations + stance_iterations)/double(swing_iterations + 2 * stance_iterations);

        this->fl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontLeft, fl_rr_progress);
        this->rr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearRight, fl_rr_progress);

        this->fr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontRight, fr_rl_progress);
        this->rl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearLeft, fr_rl_progress);
        break;
    }
    case MotionState::kSwingFrRl:
    {
        double fl_rr_progress = double(stance_iterations + iteration)/double(swing_iterations + 2 * stance_iterations);
        double fr_rl_progress = double(iteration)/double(swing_iterations);

        this->fl_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::frontLeft, fl_rr_progress);
        this->rr_position_body = this->UpdateStanceFootPosition(Kinematics::LegType::rearRight, fl_rr_progress);

        this->UpdateSwingFootTrajectory(Kinematics::LegType::frontRight, fr_rl_progress);
        this->UpdateSwingFootTrajectory(Kinematics::LegType::rearLeft, fr_rl_progress);

        break;
    }
    default:
        break;
    }
}


Eigen::Matrix<double, 3, 1> RobotController::UpdateStanceFootPosition(Kinematics::LegType _leg_type, double _progress)
{
    Eigen::Matrix<double, 3, 1> foot_pos;

    foot_pos(0) = (_progress - 0.5)*(- step_distance_x_linear);
    foot_pos(1) = (_progress - 0.5)*(- step_distance_y_linear);
    foot_pos(2) = - hip_height;

    switch (_leg_type)
    {
    case Kinematics::LegType::frontLeft:
    { 
        foot_pos(0) += (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) -= (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += fl_offset;
        break;
    }
    case Kinematics::LegType::frontRight:
    {
        foot_pos(0) -= (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) -= (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += fr_offset;
        break;
    }
    case Kinematics::LegType::rearLeft:
    {
        foot_pos(0) += (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) += (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += rl_offset;
        break;
    }
    case Kinematics::LegType::rearRight:
    {
        foot_pos(0) -= (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) += (_progress - 0.5)*step_distance_y_rotational;

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

    foot_pos(0) = (_progress - 0.5)*step_distance_x_linear;
    foot_pos(1) = (_progress - 0.5)*step_distance_y_linear;
    foot_pos(2) = -0.28; // Temp
    
    switch (_leg_type)
    {
    case Kinematics::LegType::frontLeft:
    {
        //ROS_WARN("FL Progress: %f\tSDX: %f", _progress, foot_pos(0));
        foot_pos(0) -= (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) += (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += fl_offset;
        break;
    }
    case Kinematics::LegType::frontRight:
    {
        foot_pos(0) += (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) += (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += fr_offset;
        break;
    }
    case Kinematics::LegType::rearLeft:
    {
        foot_pos(0) -= (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) -= (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += rl_offset;
        break;
    }
    case Kinematics::LegType::rearRight:
    {
        //ROS_WARN("RR Progress: %f\tSDX: %f", _progress, foot_pos(0));
        foot_pos(0) += (_progress - 0.5)*step_distance_x_rotational;
        foot_pos(1) -= (_progress - 0.5)*step_distance_y_rotational;

        foot_pos += rr_offset;
        break;
    }
    default:
        ROS_WARN("RobotController::UpdateSwingFootPosition - Invalid leg type selected");
        break;
    }

    return foot_pos;
}

void RobotController::UpdateSwingFootTrajectory(Kinematics::LegType _leg_type, double progress)
{
    double swing_time = progress * swing_period;

    double center_percentage = progress - 0.5;

    Eigen::Matrix<double, 3, 1> foot_default;
    Eigen::Matrix<double, 3, 1> foot_pos;
    Eigen::Matrix<double, 3, 1> foot_vel;
    Eigen::Matrix<double, 3, 1> foot_acc;
    Eigen::Matrix<double, 3, 1> foot_jerk;    

    //ROS_INFO("Swing Time: %f, Swing Period: %f, Stance Period: %f, Progress: %f", swing_time, swing_period, stance_period, progress);

    switch (_leg_type)
    {
    case Kinematics::LegType::frontLeft:
    {
        //ROS_INFO("SW-FL");
        double foot_step_distance_x = step_distance_x_linear - step_distance_x_rotational;
        double foot_step_distance_y = step_distance_y_linear + step_distance_y_rotational;

        double foot_velocity_x = foot_step_distance_x/(swing_period + 2.0 * stance_period);
        double foot_velocity_y = foot_step_distance_y/(swing_period + 2.0 * stance_period);

        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_x, foot_velocity_x, foot_pos(0), foot_vel(0), foot_acc(0), foot_jerk(0));
        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_y, foot_velocity_y, foot_pos(1), foot_vel(1), foot_acc(1), foot_jerk(1));
        CalculateFourthOrderPolynomialTrajectory(swing_time, swing_period, max_step_height, foot_pos(2), foot_vel(2), foot_acc(2));

        fl_position_body(0) = fl_offset(0) + foot_pos(0) - foot_step_distance_x / 2.0;
        fl_position_body(1) = fl_offset(1) + foot_pos(1) - foot_step_distance_y / 2.0;
        fl_position_body(2) = - hip_height + foot_pos(2);

        fl_velocity_body = foot_vel;

        fl_acceleration_body = foot_acc;

        //ROS_INFO("FSDX: %f, FVX: %f", foot_step_distance_x, foot_velocity_x);
        //ROS_INFO("FL_OFFSET_X: %f, CP: %f, FPX: %f", fl_offset(0), center_percentage, foot_pos_x);
        //ROS_INFO("FLPX: %f, FLPY: %f, FLPZ: %f", fl_position_body(0), fl_position_body(1), fl_position_body(2));

        break;
    }
    case Kinematics::LegType::frontRight:
    {
        //ROS_INFO("SW-FR");
        double foot_step_distance_x = step_distance_x_linear + step_distance_x_rotational;
        double foot_step_distance_y = step_distance_y_linear + step_distance_y_rotational;

        double foot_velocity_x = foot_step_distance_x/(swing_period + 2.0 * stance_period);
        double foot_velocity_y = foot_step_distance_y/(swing_period + 2.0 * stance_period);

        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_x, foot_velocity_x, foot_pos(0), foot_vel(0), foot_acc(0), foot_jerk(0));
        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_y, foot_velocity_y, foot_pos(1), foot_vel(1), foot_acc(1), foot_jerk(1));
        CalculateFourthOrderPolynomialTrajectory(swing_time, swing_period, max_step_height, foot_pos(2), foot_vel(2), foot_acc(2));

        fr_position_body(0) = fr_offset(0) + foot_pos(0) - foot_step_distance_x / 2.0;
        fr_position_body(1) = fr_offset(1) + foot_pos(1) - foot_step_distance_y / 2.0;
        fr_position_body(2) = - hip_height + foot_pos(2);

        fr_velocity_body = foot_vel;
        fr_acceleration_body = foot_acc;

        break;
    }
    case Kinematics::LegType::rearLeft:
    {
        //ROS_INFO("SW-RL");
        double foot_step_distance_x = step_distance_x_linear - step_distance_x_rotational;
        double foot_step_distance_y = step_distance_y_linear - step_distance_y_rotational;

        double foot_velocity_x = foot_step_distance_x/(swing_period + 2.0 * stance_period);
        double foot_velocity_y = foot_step_distance_y/(swing_period + 2.0 * stance_period);

        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_x, foot_velocity_x, foot_pos(0), foot_vel(0), foot_acc(0), foot_jerk(0));
        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_y, foot_velocity_y, foot_pos(1), foot_vel(1), foot_acc(1), foot_jerk(1));
        CalculateFourthOrderPolynomialTrajectory(swing_time, swing_period, max_step_height, foot_pos(2), foot_vel(2), foot_acc(2));

        rl_position_body(0) = rl_offset(0) + foot_pos(0) - foot_step_distance_x / 2.0;
        rl_position_body(1) = rl_offset(1) + foot_pos(1) - foot_step_distance_y / 2.0;
        rl_position_body(2) = - hip_height + foot_pos(2);

        rl_velocity_body = foot_vel;
        rl_acceleration_body = foot_acc;

        break;
    }
    case Kinematics::LegType::rearRight:
    {
        //ROS_INFO("SW-RR");
        double foot_step_distance_x = step_distance_x_linear + step_distance_x_rotational;
        double foot_step_distance_y = step_distance_y_linear - step_distance_y_rotational;

        double foot_velocity_x = foot_step_distance_x/(swing_period + 2.0 * stance_period);
        double foot_velocity_y = foot_step_distance_y/(swing_period + 2.0 * stance_period);

        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_x, foot_velocity_x, foot_pos(0), foot_vel(0), foot_acc(0), foot_jerk(0));
        CalculatePolynomialTrajectory(swing_time, swing_period, swing_rise_percentage, foot_step_distance_y, foot_velocity_y, foot_pos(1), foot_vel(1), foot_acc(1), foot_jerk(1));
        CalculateFourthOrderPolynomialTrajectory(swing_time, swing_period, max_step_height, foot_pos(2), foot_vel(2), foot_acc(2));

        rr_position_body(0) = rr_offset(0) + foot_pos(0) - foot_step_distance_x / 2.0;
        rr_position_body(1) = rr_offset(1) + foot_pos(1) - foot_step_distance_y / 2.0;
        rr_position_body(2) = - hip_height + foot_pos(2);

        rr_velocity_body = foot_vel;
        rr_acceleration_body = foot_acc;

        break;
    }
    default:
        ROS_WARN("RobotController::UpdateSwingFootTrajectory - Invalid leg type selected");
        break;
    }

    //ROS_INFO("Pos: %f, %f, %f\tVel: %f, %f, %f\tAcc: %f, %f, %f", foot_pos(0), foot_pos(1), foot_pos(2), foot_vel(0), foot_vel(1), foot_vel(2), foot_acc(0), foot_acc(1), foot_acc(2));

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