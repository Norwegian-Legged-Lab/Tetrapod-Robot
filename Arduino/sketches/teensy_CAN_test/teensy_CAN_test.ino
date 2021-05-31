#include "FlexCAN_T4.h"
#include "motor_driver.h"
#include "utilities.h"
#include "teensy_can_ports.h"

int motor_id = 1;

CAN_message_t send_can_msg;
CAN_message_t recv_can_msg;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay_microseconds(1000000.0);

  can_port_1.begin();
  can_port_1.setBaudRate(1000000);

  //delay_microseconds(1000000.0);

  send_can_msg.id = motor_id + 0x140;

  make_can_msg::readMotorStatus2(send_can_msg.buf);
  //make_can_msg::readPIDParameters(send_can_msg.buf);
}

void loop() {

  can_port_1.write(send_can_msg);

  delay_microseconds(10000);

  while(can_port_1.read(recv_can_msg))
  {
    Serial.print("Message received: ");
    for(int i = 0; i < 8; i++)
    {
      Serial.print(recv_can_msg.buf[i]); Serial.print("\t");
    }
    Serial.println("");
  }

  Serial.println("Done reading");

  delay_microseconds(1000000);
  
}
