#include "ros/ros.h"

#include "single_leg_controller_test/single_leg_controller_test.h"

#define FREQUENCY_X 1.0
#define FREQUENCY_Y 1.0
#define FREQUENCY_Z 1.0
#define DAMPING_X 1.0
#define DAMPING_Y 1.0
#define DAMPING_Z 1.0

#define START_POS_X 0.0
#define START_POS_Y 0.0
#define START_POS_Z 0.0

#define MIDDLE_POS_X 0.2
#define MIDDLE_POS_Y 0.0
#define MIDDLE_POS_Z 0.2

#define END_POS_X 1.0
#define END_POS_Y 0.0
#define END_POS_Z 0.0

#define TIMESTEP 0.02
#define TIME_END 2.0
#define TIME_MIDDLE 1.0

int main(int argc, char **argv)
{
    SingleLegController single_leg_controller(TIMESTEP);


    single_leg_controller.setReferenceParameters
    (
        FREQUENCY_X, FREQUENCY_Y, FREQUENCY_Z,
        DAMPING_X, DAMPING_Y, DAMPING_Z
    );

    single_leg_controller.setCurrentReferencePosition(START_POS_X, START_POS_Y, START_POS_Z);

    single_leg_controller.setFootGoalPos(MIDDLE_POS_X, MIDDLE_POS_Y, MIDDLE_POS_Z);
    
    single_leg_controller.initROS();

    

    return 0;
}