#include <serial_communication/serial_communication.h>

int main(int argc, char **argv)
{
	int num_motors = 3;

	SerialCommunication serial_communication("/dev/ttyACM0", num_motors);

	Eigen::VectorXd v;


	v.resize(3, 1);


	v.setRandom();

	v(0) = 1;

	ROS_INFO_STREAM("v: \n" << v);

	SerialCommunication::ControlMode cm = SerialCommunication::ControlMode::torque;



    auto start = std::chrono::steady_clock::now();

	serial_communication.SendMessage(cm, v);

		
	Eigen::Matrix<Eigen::VectorXd, 3, 1> join_state = serial_communication.ReceiveMessage();

    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double, std::micro> diff = end - start;

    ROS_INFO_STREAM("Send-Receive-time: " << diff.count() << " microseconds. \n");

	for (int i = 0; i < 3; i++)
	{
		ROS_INFO_STREAM("Joint state at index " << i << " is \n" << join_state(i));
	}

	//serial_communication.test();


	return 0;
}