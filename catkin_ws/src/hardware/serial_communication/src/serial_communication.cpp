#include "serial_communication/serial_communication.h"

SerialCommunication::SerialCommunication() : 
    port { "/dev/ttyACM0" },
    num_motors { 6 }
{
    this->InitLibSerial();
}

SerialCommunication::SerialCommunication(const std::string &_port, const int &_num_motors) :
    port { _port },
    num_motors { _num_motors }
{
    this->InitLibSerial();
}

SerialCommunication::~SerialCommunication()
{
    serial_port.Close();
}

void SerialCommunication::SendMessage(const ControlMode &_control_mode, const Eigen::VectorXd &_state)
{
    if (_state.rows() != this->num_motors)
    {
        std::abort();
    }

    this->PackageBuffer(_control_mode, _state.data());

    this->serial_port.Write(tx_buffer);
}

Eigen::Matrix<Eigen::VectorXd, 3, 1> SerialCommunication::ReceiveMessage()
{
    while (!this->IsNewDataAvailable())
    {
        sleep(0.00001);
    }

    this->serial_port.Read(this->rx_buffer, this->RX_BUFFER_SIZE, 10000);

    return this->UnpackageBuffer(this->rx_buffer.data());
}

void SerialCommunication::InitLibSerial()
{
    this->serial_port.Open(this->port);

    this->serial_port.SetBaudRate(LibSerial::BaudRate::BAUD_9600);

    this->serial_port.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);

    this->serial_port.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);

    this->serial_port.SetStopBits(LibSerial::StopBits::STOP_BITS_1);

    this->TX_BUFFER_SIZE  = (1 + num_motors) * 8;
    this->RX_BUFFER_SIZE  = num_motors * 8 * 3;

    this->tx_buffer.resize(TX_BUFFER_SIZE);
    this->rx_buffer.resize(RX_BUFFER_SIZE);
}

void SerialCommunication::PackageBuffer(const ControlMode &_control_mode, const double *_data)
{
    double control_mode_data[1] = { ((double)_control_mode) };

    this->PackageBufferControlMode(control_mode_data);

    this->PackageBufferControlCommand(_data);
}

void SerialCommunication::PackageBufferControlMode(const double *_data)
{
    for (int i = 0; i < 8; i++)
    {
        tx_buffer[i] = ((char *)_data)[i];
    }
}

void SerialCommunication::PackageBufferControlCommand(const double *_data)
{
    for (int i = 8; i < this->TX_BUFFER_SIZE; i++)
    {
        tx_buffer[i] = ((char *)_data)[i - 8];
    }
}

Eigen::Matrix<Eigen::VectorXd, 3, 1> SerialCommunication::UnpackageBuffer(unsigned char *_data)
{
    Eigen::Matrix<Eigen::VectorXd, 3, 1> state;

    // Set state size
    state(0).resize(this->num_motors, 1);
    state(1).resize(this->num_motors, 1);
    state(2).resize(this->num_motors, 1);

    // Fill data
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < this->num_motors; j++)
        {
            double double_data = *((double*)_data + i*this->num_motors + j);

            state(i)(j) = double_data;
        }
    }

    return state;
}

void SerialCommunication::EigenToCArray(const Eigen::VectorXd &_state, double *_data)
{
    int size = _state.size();

    for (int i = 0; i < size; i++)
    {
        _data[i] = *(_state.data() + i);
    }
}

bool SerialCommunication::IsNewDataAvailable()
{
    if(serial_port.IsDataAvailable() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Setup thread to process messages
void SerialCommunication::ProcessQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosProcessQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Setup thread to publish messages
void SerialCommunication::PublishQueueThread()
{
    static const double timeout = 0.01;
    while (this->rosNode->ok())
    {
        this->rosPublishQueue.callAvailable(ros::WallDuration(timeout));
    }
}

// Initialize ROS
void SerialCommunication::InitRos()
{
    if (!ros::isInitialized())
    {
        int argc = 0;
        char **argv = NULL;
        ros::init(
            argc,
            argv,
            "hierarchical_optimization_control_node",
            ros::init_options::NoSigintHandler
        );
    }

    this->rosNode.reset(new ros::NodeHandle("hierarchical_optimization_control_node"));

    ros::SubscribeOptions joint_state_cmd_so = 
        ros::SubscribeOptions::create<std_msgs::Float64MultiArray>(
            "/my_robot/joint_state_cmd",
            1,
            boost::bind(&SerialCommunication::OnJointStateCmdMsg, this, _1),
            ros::VoidPtr(),
            &this->rosProcessQueue
            );

    ros::AdvertiseOptions joint_state_ao =
        ros::AdvertiseOptions::create<sensor_msgs::JointState>(
            "/my_robot/joint_state",
            1,
            ros::SubscriberStatusCallback(),
            ros::SubscriberStatusCallback(),
            ros::VoidPtr(),
            &this->rosPublishQueue
        );

    this->jointStateCmdSub = this->rosNode->subscribe(joint_state_cmd_so);

    this->jointStatePub = this->rosNode->advertise(joint_state_ao);
}

// Initialize ROS Publish and Process Queue Threads
void SerialCommunication::InitRosQueueThreads()
{
    this->rosPublishQueueThread = std::thread(
        std::bind(&SerialCommunication::RosPublishQueueThread, this)
    );

    this->rosProcessQueueThread = std::thread(
        std::bind(&SerialCommunication::RosProcessQueueThread, this)
    );
}