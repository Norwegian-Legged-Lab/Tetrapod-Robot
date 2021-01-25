#!/bin/bash

clear

echo ----------------------------------------
echo ----------------------------------------
echo ---------- Build Source Code -----------
echo ----------------------------------------
echo ----------------------------------------

# Absolute path to this script, e.g. /home/user/bin/foo.sh
SCRIPT=$(readlink -f "$0")

# Absolute directory path for this script
SCRIPTPATH=$(dirname "$SCRIPT")

# Navigate to workspace directory
cd $SCRIPTPATH

# Source ROS commands
source /opt/ros/noetic/setup.bash

# Build using catkin_make
catkin_make

# Add the workspace to ROS env
source $SCRIPTPATH/devel/setup.bash