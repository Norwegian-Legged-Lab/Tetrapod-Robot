#ifndef filter_utils_h
#define filter_utils_h

#include <Eigen/Core>

class ThirdOrderFilter
{
public:
    ThirdOrderFilter(){}
    ThirdOrderFilter(double _dt, double _x_current, double _x_goal, double _omega, double _zeta);
    void setReference(double _x_goal){x_goal = _x_goal;};
    void setParameters(double _frequency, double _damping);
    void setTimestep(double _dt){dt = _dt;}
    void setCurrentPos(double _x_current){X(0) = _x_current;}
    double getPosition(){return X(0);}
    double getSpeed(){return X(1);}
    double getAcceleration(){return X(2);}
    void updateFilter();
    Eigen::Matrix<double, 3, 1> getState() {return X;}
private:
    Eigen::Matrix<double, 3, 1> X = Eigen::Matrix<double, 3, 1>::Zero();
    double x_goal;
    double dt;
    Eigen::Matrix<double, 3, 3> A_d;
    Eigen::Matrix<double, 3, 1> B_d;
};

#endif