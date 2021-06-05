#include "kill_switch.h"

KillSwitch::KillSwitch()
{

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