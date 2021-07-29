#include "kill_switch.h"

KillSwitch::KillSwitch()
{
    connected_to_robot = false;
}

void KillSwitch::setupTransceiver()
{
    transceiver.begin();
    transceiver.openWritingPipe(TRANSCEIVER_ADDRESS);
    transceiver.openReadingPipe(0, TRANSCEIVER_ADDRESS);
    transceiver.setPALevel(RF24_PA_MIN);
    transceiver.stopListening();
}

void KillSwitch::readIncommingMessage()
{
    transceiver.startListening();
    
    float timer = micros();

    float timeout = 500000.0;

    while(micros() < timer + timeout)
    {
        if(transceiver.available())
        {
            time_of_last_ack = micros();

            connected_to_robot = true;

            uint8_t msg[4] = "";

            transceiver.read(&msg, sizeof(msg));
            
            robot_battery_1_percentage = msg[2];

            robot_battery_2_percentage = msg[3];

            uint16_t acknowledgement_sequence_number = 0;
            acknowledgement_sequence_number += msg[0];
            acknowledgement_sequence_number += msg[1]*256;

            for(int i = 0; i < 4; i++)
            {
                Serial.print(msg[i]); Serial.print("\t");
            }
            break;
        }
    }

    // Check if connection lost timer is triggered
}

void KillSwitch::updateConnectionStatus()
{
    if(micros() > time_of_last_ack + ROBOT_COMMUNICATION_TIMEOUT)
    {
        connected_to_robot = false;
    }
}

void KillSwitch::sendDontKillMessage()
{    
    message_sequence_number++;
    if(message_sequence_number >= 65000)
    {
        message_sequence_number = 0;
    }

    uint8_t msg[2];
    msg[1] = message_sequence_number >> 8;
    msg[0] = message_sequence_number;

    transceiver.write(&msg, sizeof(msg));
}

void KillSwitch::setupDisplay()
{
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    {
        Serial.println(F("SSD1306 allocation failed"));
        while(true);
    }
    display.display();
    delay(1000);

    display.clearDisplay();
    display.display();
    delay(1000);
}
/*
void KillSwitch::writeBatteryStatesToDisplay()
{
    char robot_battery_1_percentage_str[3];
    char robot_battery_2_percentage_str[3];
    char kill_switch_battery_percentage_str[3];

    char robot_battery_1_print_str[9];
    char robot_battery_2_print_str[9];
    char kill_switch_battery_print_str[9];

    dtostrf(robot_battery_1_percentage, 3, 0, robot_battery_1_percentage_str);
    dtostrf(robot_battery_2_percentage, 3, 0, robot_battery_2_percentage_str);
    dtostrf(kill_switch_battery_percentage, 3, 0, kill_switch_battery_percentage_str);

    sprintf(robot_battery_1_print_str, "RB1: %s", robot_battery_1_percentage_str);
    sprintf(robot_battery_2_print_str, "RB2: %s", robot_battery_2_percentage_str);
    sprintf(kill_switch_battery_print_str, "KSB: %s", kill_switch_battery_percentage_str);

    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    
    if(connected_to_robot)
    {
        //display.println("Connected");
    }
    else
    {
        //display.println("Disconnect");
    }
    Serial.println(robot_battery_1_print_str);
    Serial.println(robot_battery_2_print_str);
    Serial.println(kill_switch_battery_print_str);

    //display.println(robot_battery_1_print_str);
    //display.println(robot_battery_2_print_str);
    display.println(kill_switch_battery_print_str);
    display.println(kill_switch_battery_print_str);
    display.println(kill_switch_battery_print_str);

    display.display();
}
*/

void KillSwitch::writeBatteryStatesToDisplay()
{
    char robot_battery_1_percentage_str[3];
    char robot_battery_1_print_str[9];
    dtostrf(robot_battery_1_percentage, 3, 0, robot_battery_1_percentage_str);
    sprintf(robot_battery_1_print_str, "RB1: %s", robot_battery_1_percentage_str);

    char robot_battery_2_percentage_str[3];
    char robot_battery_2_print_str[9];
    dtostrf(robot_battery_2_percentage, 3, 0, robot_battery_2_percentage_str);
    sprintf(robot_battery_2_print_str, "RB2: %s", robot_battery_2_percentage_str);

    char kill_switch_battery_percentage_str[3];
    char kill_switch_battery_print_str[9];
    dtostrf(kill_switch_battery_percentage, 3, 0, kill_switch_battery_percentage_str);
    sprintf(kill_switch_battery_print_str, "KSB: %s", kill_switch_battery_percentage_str);

    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    
    if(connected_to_robot)
    {
        display.println("Connected");
    }
    else
    {
        display.println("Disconnect");
    }

    display.println(robot_battery_1_print_str);
    display.println(robot_battery_2_print_str);
    display.println(kill_switch_battery_print_str);

    display.display();
}