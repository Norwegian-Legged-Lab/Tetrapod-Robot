# ROS Workspace

This README serves as an overview of the tetrapod-robot´s ROS Workspace and its contents.

## Gazebo

Gazebo offers the ability to accurately and efficiently simulate populations of robots in various environments, and is a open-source platform designed for robotic simulation.

### Resetting Simulations

To simplify the process of resetting simulations we've created a rosservice which can be binded to a arbitrary keystroke, in this case F12, by adding the following to your' `.bashrc` file (remember to start a new terminal or call `bash` for it to load):

```bash
#-------------------------------------------------------
# Bindings
#-------------------------------------------------------
bind -x '"\e[24~":"rosservice call /my_robot/reset_simulation""^M"'
```

If you would like to manually reset the simulation from the terminal, simply call:

```bash
rosservice call /my_robot/reset_simulation
```