# Demo Footstep planner and static gait

## To run a demonstration of the footstep planner:
- Make sure all prerequisites are installed correctly, as per the installation guide found in the [documentation](https://norwegian-legged-lab.github.io/Tetrapod-Robot/html/md_docs_markdown_install_guide.html). For installing drake with Gurobi support (strongly recommended for the footstep planner): Install gurobi as described [here](http://drake.mit.edu/bazel.html?highlight=gurobi#install-on-ubuntu)
Install drake from source as described [here](https://github.com/RobotLocomotion/drake-external-examples/tree/main/drake_cmake_installed)
 - For each terminal, it's important to first navigate to the catkin_ws folder of the repository, source the necessary files by writing ```source devel/setup.bash``` and run the makefile once with the command ```catkin_make```
 - In one terminal, launch the simulator by writing ```roslaunch tetrapod_gazebo tetrapod.launch```
 - When the simulator is launched: In a second terminal, launch the controller by writing ```roslaunch hierarchical_optimization_controller hierarchical_optimization_controller.launch```