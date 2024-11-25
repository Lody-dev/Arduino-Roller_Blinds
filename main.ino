#include "mode_handeling.h"

unsigned int motor_limit;

void setup()
{
	pinMode(button_up, INPUT_PULLUP); 
	pinMode(button_down, INPUT_PULLUP); 
	Serial.begin(9600);
}

void loop() 
{
	//motor_limit = setup_mode(button_up, button_down);
	//Serial.print("New motor limit set: ");
	//Serial.println(motor_limit);
  //delay(500);
 
  operate_mode(setup_mode(button_up, button_down), button_up, button_down);
}
