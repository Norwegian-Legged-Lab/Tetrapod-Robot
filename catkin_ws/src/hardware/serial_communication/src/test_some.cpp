#include <serial_communication/serial_communication.h>

int main(int argc, char **argv)
{
	int num_motors = 1;

	SerialCommunication serial_communication("/dev/ttyACM0", num_motors);

	Eigen::VectorXd v;


	v.resize(num_motors, 1);

	v.setRandom();

	ROS_INFO_STREAM("v: \n" << v);

	//serial_communication.SendMessage(v);

	Eigen::Matrix<Eigen::VectorXd, 3, 1> join_state = serial_communication.ReceiveMessage();

	for (int i = 0; i < 3; i++)
	{
		ROS_INFO_STREAM("Joint state at index " << i << " is \n" << join_state(i));
	}


	return 0;
}