#include<casadi/casadi.hpp>
#include<kinematics/kinematics.h>
#include<casadi/
class KinematicsCasadi : public Kinematics{
    public: casadi::MX GetPosition(const LegType &leg,
    const BodyType &body,
    const casadi::MX _q);
    
}