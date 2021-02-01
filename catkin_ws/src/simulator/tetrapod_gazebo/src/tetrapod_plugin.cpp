#ifndef _TETRAPOD_PLUGIN_HH_
#define _TETRAPOD_PLUGIN_HH_

// Gazebo
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>

// ROS
#include <thread>
#include "ros/ros.h"
#include "ros/console.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "std_msgs/Float32.h"

namespace gazebo
{
    class TetrapodPlugin : public ModelPlugin
    {
        public:
            
            TetrapodPlugin() {};

            virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
            {
                if (_model->GetJointCount() == 0)
                {
                    ROS_ERROR("Invalid joint count, Tetrapod plugin not loaded\n");
                    return;
                }

                double velocity = 0;

                this->model = _model;

                this->joint = _model->GetJoints()[0];

                this->pid = common::PID(0.1, 0, 0);

                this->model->GetJointController()->SetVelocityPID(
                    this->joint->GetScopedName(), this->pid);

                if (!ros::isInitialized())
                {
                    int argc = 0;
                    char **argv = NULL;
                    ros::init(
                        argc,argv,
                        "gazebo_cleint",
                        ros::init_options::NoSigintHandler
                    );
                }

                this->rosNode.reset(new ros::NodeHandle("gazebo_client"));

                ros::SubscribeOptions so = 
                    ros::SubscribeOptions::create<std_msgs::Float32>(
                        "/" + this->model->GetName() + "/vel_cmd",
                        1,
                        boost::bind(&TetrapodPlugin::OnRosMsg, this, _1),
                        ros::VoidPtr(), &this->rosQueue
                    );

                this->rosSub = this->rosNode->subscribe(so);

                this->rosQueueThread =
                    std::thread(std::bind(&TetrapodPlugin::QueueThread, this));
            }

        private:

            void SetVelocity(const double &_vel)
            {
                this->model->GetJointController()->SetVelocityTarget(
                    this->joint->GetScopedName(),
                    _vel
                );
            }

            void OnRosMsg(const std_msgs::Float32ConstPtr &_msg)
            {
                this->SetVelocity(_msg->data);
                ROS_DEBUG("OnRosMsg setting velocity to %f", _msg->data);
            }

            void QueueThread()
            {
                static const double timeout = 0.01;
                while (this->rosNode->ok())
                {
                    this->rosQueue.callAvailable(ros::WallDuration(timeout));
                }
            }

            physics::ModelPtr model;

            physics::JointPtr joint;

            common::PID pid;

            std::unique_ptr<ros::NodeHandle> rosNode;

            ros::Subscriber rosSub;

            ros::CallbackQueue rosQueue;

            std::thread rosQueueThread;
    };

    GZ_REGISTER_MODEL_PLUGIN(TetrapodPlugin)

} // namespace gazebo

#endif