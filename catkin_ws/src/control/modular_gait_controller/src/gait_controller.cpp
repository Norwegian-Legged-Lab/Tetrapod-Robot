#include "modular_gait_controller/gait_controller.h"

GaitController::GaitController(
    int controller_freq, double gait_period,
    std::function<Eigen::Vector3d(double)> fl_traj, std::function<Eigen::Vector3d(double)> fr_traj,
    std::function<Eigen::Vector3d(double)> rl_traj, std::function<Eigen::Vector3d(double)> rr_traj) : GaitController::Controller(controller_freq)
{
    this->gait_period = gait_period;

    this->fl_traj = fl_traj;

    this->fr_traj = fr_traj;

    this->rl_traj = rl_traj;

    this->rr_traj = rr_traj;
}

void GaitController::increment()
{
    iteration = std::fmod(iteration + 1, gait_period*controller_freq);
}

void GaitController::UpdateFeetReferences()
{
    double t = double(iteration)/(controller_freq*gait_period);

    fl_position_body = fl_traj(t) + fl_offset;

    fr_position_body = fr_traj(t) + fr_offset;
    
    rl_position_body = rl_traj(t) + rl_offset;

    rr_position_body = rr_traj(t) + rr_offset;
}