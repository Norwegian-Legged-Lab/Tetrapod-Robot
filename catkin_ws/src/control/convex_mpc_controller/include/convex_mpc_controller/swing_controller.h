#pragma once
#include<Eigen/Core>
#include<chrono>
#include<cmath>

namespace ConvexMpc{

class SwingController{
    public:

    SwingController(const Eigen::Vector3d &init_pos, const Eigen::Vector3d &final_pos, const double &h, const double &T, const double &t0);

    SwingController();

    Eigen::Vector3d Pos(const double &t);

    Eigen::Vector3d Vel(const double &t);

    Eigen::Vector3d Acc(const double &t);

    double GetTau(double t) const {return (t - t0_)/T_;}

    bool IsActive() const {return is_active_;}

    void Deactivate() {is_active_ = false;}

    private:

    Eigen::Vector3d init_pos_;

    Eigen::Vector3d final_pos_;

    double h_;
    double T_;
    double t0_;
    bool is_active_;

};

}