// ROS includes
#include <thread>
#include "ros/ros.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "std_msgs/Float32.h"


// Gazebo includes
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>


namespace tetrapod_control 
{
    /// \brief A plugin to control a Tetrapod Robot
    class TetrapodControlPlugin : public Model
    {
        public: 

            /// \brief Constructor
            TetrapodPlugin();

            /// \brief Destructor
            ~TetrapodPlugin() = default;

            /// \brief The load function is called by Gazebo when the plugin is
            /// inserted into simulation
            /// \param[in] _model A pointer to the model that this plugin is
            /// attached to.
            /// \param[in] _sdf A pointer to the plugin's SDF element.
            virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

        private:

            /// \brief Publish function
            void publishRos();

        protected:

            /// \brief Load ROS parameters function
            void loadParametersRos();

            /// \brief Initialize ROS function
            void initializeRos();

            /// \brief Some callback method
            virtual void someFloatCallback(const std_msgs::Float32 &someFloat) = 0;

            /// \brief Node handler
            ros::NodeHandle& nodeHandle_;

            /// \brief Some float subscriber
            ros::Subscriber someFloatSubscriber_;
            std::string someFloatSubscriberTopic_;

            /// \brief Some publisher
            ros::Publisher someFloatPublisher_;
            std::string someFloatPublisherTopic_;
    };
} // namespace tetrapod_control