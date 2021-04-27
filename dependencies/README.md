# Dependencies

This folder contains relevant information about the dependencies needed for building and running the ROS Environment found in [catkin_ws](../catkin_ws/).

## Gazebo

The Gazebo Simulator depends a number of environment variables to locate files, and set up communications between the server and clients and are explained in detail [here](http://gazebosim.org/tutorials?tut=components&cat=get_started). For the current simulator iteration two enviroment variables are of interest, namely

`GAZEBO_MODEL_PATH`: A colon-separated set of directories where Gazebo will search for models.

```GAZEBO_RESOURCE_PATH```: A colon-separated set of directories where Gazebo will search for other resources such as world and media files.

Assuming the [github repository](https://github.com/Pathorse/Tetrapod-Robot) is located at your home folder, i.e., at ```~/```, the following set of lines can be added to set the needed enviroment variables.

```bash
#-------------------------------------------------------
# Gazebo Setup
#-------------------------------------------------------
source /usr/share/gazebo/setup.sh

export GAZEBO_MODEL_PATH=~/Tetrapod-Robot/catkin_ws/src/simulator
export GAZEBO_MODEL_PATH=~/Tetrapod-Robot/catkin_ws/src/simulator/tetrapod_gazebo/models:$GAZEBO_MODEL_PATH
export GAZEBO_RESOURCE_PATH=~/Tetrapod-Robot/catkin_ws/src/simulator/tetrapod_gazebo/worlds:$GAZEBO_RESOURCE_PATH
```





Gazebo offers the ability to accurately and efficiently simulate populations of robots in various environments, and is a open-source platform designed for robotic simulation.
 