/*
 * rosserial PubSub Example
 * Prints "hello world!" and toggles led
 */
//#include <stdlib.h>
#include <ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Empty.h>

ros::NodeHandle  nh;


std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);

char hello[13] = "hello world!";

int pi = 3;
int n = 7;
char buf[3];
char log_msg[9];


String myString = String(n);

char debug[]= "debug statements";
char info[] = "infos";
char warn[] = "warnings";
char error[] = "errors";
char fatal[] = "fatalities";

void setup()
{
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.advertise(chatter);
}

void loop()
{
  str_msg.data = hello;
  chatter.publish( &str_msg );

  // Second argument decides the number of decimals
  dtostrf(pi, 1, 0, buf);
  
  nh.logdebug(buf);
  nh.loginfo(buf);
  nh.logwarn(buf);
  nh.logerror(buf);
  nh.logfatal(buf);

  sprintf(log_msg, "ID is: %s", buf);
  nh.loginfo(log_msg);
  
  nh.spinOnce();
  delay(500);
}
