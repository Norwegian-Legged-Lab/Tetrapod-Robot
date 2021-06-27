#include "ros/ros.h"
#include "sensor_msgs/JointState.h"

class SubAndPub
{
    public:
        SubAndPub()
        {
            pub = nh.advertise<sensor_msgs::JointState>("/motor/states", 1);

            sub = nh.subscribe("/motor/commands", 1, &SubAndPub::callback, this);
        }

        void callback(const sensor_msgs::JointState &_msg)
        {
            pub.publish(_msg);
        }

    private:
        ros::NodeHandle nh;
        ros::Publisher pub;
        ros::Subscriber sub;
};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "slave_node");

    SubAndPub slave;

    ros::Rate loop_rate(100000);

    while(ros::ok())
    {
        loop_rate.sleep();
        ros::spinOnce();
    }
}