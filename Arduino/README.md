Temporary README.

In ROSserial you cannot use nh.loginfo() on other types than strings. For example nh.loginfo(i) doesn't work, but nh.loginfo("Hello world") does.
If you do this you will get an error message in ROS when you try to communicate with the host PC. The Teensy will bug and the following steps must be completed to reset the teensy:
1. Disconnect/power-off the teensy
2. Kill teensy-ros-node
3. Stop the roscore
4. Upload a safe sketch to the teensy through reset button
5. Fix you original sketch
6. Connect as usual
