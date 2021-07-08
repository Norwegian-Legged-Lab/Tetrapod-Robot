#include "controller/controller.h"

class GaitController : public Controller {
    public: GaitController(
        int controller_freq, double gait_period,
        std::function<Eigen::Vector3d(double)> fl_traj, std::function<Eigen::Vector3d(double)> fr_traj,
        std::function<Eigen::Vector3d(double)> rl_traj, std::function<Eigen::Vector3d(double)> rr_traj);
    
    /*** Functions ***/
    public: void increment();

    public: void UpdateFeetReferences();
    /*** Variables ***/
    private: std::function<Eigen::Vector3d(double)> fl_traj;

    private: std::function<Eigen::Vector3d(double)> fr_traj;

    private: std::function<Eigen::Vector3d(double)> rl_traj;

    private: std::function<Eigen::Vector3d(double)> rr_traj;

    private: double gait_period;

    private: int iteration = 0;
};