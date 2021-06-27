#include "ros/ros.h"
#include "sensor_msgs/JointState.h"

class SubAndPub
{
    public:
        SubAndPub()
        {
            pub = nh.advertise<sensor_msgs::JointState>("/motor/commands", 1);

            sub = nh.subscribe("/motor/states", 1, &SubAndPub::callback, this);

            tx_msg.header.seq = 0;

            for(int i = 0; i < NUMBER_OF_MOTORS; i++)
            {
                tx_msg.position.push_back(0.0);
                tx_msg.velocity.push_back(1.000);
                tx_msg.effort.push_back(100.0);
            }
        }

        void callback(const sensor_msgs::JointState &rx_msg)
        {
            double recv_time = ros::Time::now().toSec();

            double duration = recv_time - send_time;

            ROS_INFO("Time [s]: %f\tTx: %f\tRx: %f\tErr: %f", duration, tx_msg.position[0], rx_msg.position[0], tx_msg.position[0] - rx_msg.position[0]);
        }

        void sendMessage()
        {
            tx_msg.position[0]++;
            send_time = ros::Time::now().toSec();
            pub.publish(tx_msg);
        }



    private:
        ros::NodeHandle nh;
        ros::Publisher pub;
        ros::Subscriber sub;

        sensor_msgs::JointState tx_msg;
        double send_time = 0.0;
        int NUMBER_OF_MOTORS = 3;
};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "master_node");

    SubAndPub master;

    ros::Rate loop_rate(1000);

    while(ros::ok())
    {
        master.sendMessage();
        loop_rate.sleep();
        ros::spinOnce();
    }
}