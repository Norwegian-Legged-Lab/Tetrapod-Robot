# Dependencies

This folder contains relevant information about the dependencies needed for building and running the ROS Environment found in [catkin_ws](../catkin_ws/).

## Gazebo

The Gazebo Simulator depends a number of environment variables to locate files, and set up communications between the server and clients and are explained in detail [here](http://gazebosim.org/tutorials?tut=components&cat=get_started). For the current simulator iteration two enviroment variables are of interest, namely

`GAZEBO_MODEL_PATH`: A colon-separated set of directories where Gazebo will search for models.

`GAZEBO_RESOURCE_PATH`: A colon-separated set of directories where Gazebo will search for other resources such as world and media files.

Assuming the [github repository](https://github.com/Pathorse/Tetrapod-Robot) is located at your home folder, i.e., at `~/`, the following set of lines can be added to set the needed enviroment variables.

```bash
#-------------------------------------------------------
# Gazebo Setup
#-------------------------------------------------------
source /usr/share/gazebo/setup.sh

export GAZEBO_MODEL_PATH=~/Tetrapod-Robot/catkin_ws/src/simulator
export GAZEBO_MODEL_PATH=~/Tetrapod-Robot/catkin_ws/src/simulator/tetrapod_gazebo/models:$GAZEBO_MODEL_PATH
export GAZEBO_RESOURCE_PATH=~/Tetrapod-Robot/catkin_ws/src/simulator/tetrapod_gazebo/worlds:$GAZEBO_RESOURCE_PATH
```

We recommend adding the set of command lines to your `.bashrc` file for the ease of use (i.e. avoid running the commands every time you desire to run the simulator).

## ROS

To install ROS Noetic:

- First setup your computer to accept packages from packages.ros.org:

```
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
```

- Setup your keys:

```
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
```

- Installation:


```
sudo apt update
sudo apt install ros-noetic-desktop-full
```

To automatically source the necessary bash script, run the following commands:

```
echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

- Install and initialize Rosdep

rosdep enables you to easily install system dependencies for source you want to compile and is required to run some core components in ROS. rosdep can be installed and initialized with the following commands:

```
sudo apt install python3-rosdep -y
sudo rosdep init
rosdep update
```
## Drake

The Drake toolbox can be installed using either a binary installation, or from source. The following lines of commands can be run to install Drake on Ubuntu 20.04 (Focal) from the latest binary release:


```bash
# Download and extract the latest Ubuntu 20.04 (Focal) release to /opt
curl -o drake.tar.gz https://drake-packages.csail.mit.edu/drake/nightly/drake-latest-focal.tar.gz
sudo rm -rf /opt/drake
sudo tar -xvzf drake.tar.gz -C /opt

# Install system dependencies
sudo /opt/drake/share/drake/setup/install_prereqs
```

Note that if Python is to be used you need to ensure that your `PYTHONPATH` is properly configured (for Ubuntu 20.04 (Focal) by running the following command:

```bash
export PYTHONPATH=/opt/drake/lib/python3.8/site-packages:${PYTHONPATH}
```

## Ignition

First install some necessary tools:

```
sudo apt-get update && sudo apt-get install lsb-release wget gnupg
```

Then install Ignition Citadel:

```
sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list'
wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
sudo apt-get update
sudo apt-get install ignition-citadel
```

Make sure all ign-gazebo related packages are up to date by running ```sudo apt update && sudo apt upgrade -y```.

## Git submodules

Make sure to clone code from all submodules in the repository using

```
git submodule update --init --recursive
```

## ROS package system dependencies

Make sure rosdep is initialized by first running ```catkin_make``` and then ```source devel/setup.bash``` from the catkin workspace. Then run ```rosdep install --from-paths src --ignore-src -y``` to fulfill the system dependencies of all ros packages in the workspace.

[//]:## Keyboard Control
To use the keyboard-ros package you need the SDL_LIBRARY which can be installed with the following two commands:
```sudo apt-get install libsdl-image1.2-dev```
```sudo apt-get install libsdl-dev```

## Joystick Drivers
The Joystick Drivers package depends on several debs and require the following command to be run:
```sudo apt-get install libusb-dev libx11-dev libspnav-dev libbluetooth-dev libcwiid-dev```