#include <serial_communication/serial_communication.h>

int main(int argc, char **argv)
{
	int num_motors = 3;

	SerialCommunication serial_communication("/dev/ttyACM0", num_motors);

	Eigen::VectorXd v;


	v.resize(num_motors, 1);

	v(0) = 1.23;
	v(1) = 20.5634;

	ROS_INFO_STREAM("v: \n" << v);

	serial_communication.SendMessage(v);

	return 0;
}