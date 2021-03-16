/* 
 * rosserial Subscriber Example
 * Blinks an LED on callback
 */

#include <ros.h>
#include <std_msgs/Empty.h>

ros::NodeHandle  nh;

const int ledPin = 13;
bool light_on = false;

void messageCb( const std_msgs::Empty& toggle_msg)
{
  if(!light_on)
  {
    // Turn light on
    digitalWrite(ledPin, HIGH);
    light_on = true;
  }
  else
  {
    // Turn light off
    digitalWrite(ledPin, LOW);
    light_on = false;
  }
}

ros::Subscriber<std_msgs::Empty> sub("toggle_led", &messageCb );

void setup()
{ 
  Serial.begin(115200);
  delay(1000);
  pinMode(ledPin, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  delay(1);
}
