% --- Start Matlab Global Node  
try
    rosnode list
catch exp   % Error from rosnode list
    rosinit  % only if error: rosinit
end

addpath('/home/melyso/Tetrapod-Robot/catkin_ws/src/guidance/matlab_msg_gen_ros1/glnxa64/install/m');
savepath;
clear classes
rehash toolboxcache

testpub = rospublisher('test_topic_response', 'std_msgs/String');
val = handle_value;

testsub = rossubscriber('test_topic_call', 'std_msgs/Bool', @(src, msg) my_callback(src, msg, val));
r = rosrate(200);

maxtoc = 0;
while true
    t = tic;
    disp(val.data);
    newtoc = toc(t)
    maxtoc = max(maxtoc, newtoc);
    waitfor(r);
end


function my_callback(src, msg, val)
    val.data = msg.Data;
end