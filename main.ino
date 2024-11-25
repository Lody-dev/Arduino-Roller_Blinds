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
  operate_mode(setup_mode(button_up, button_down), button_up, button_down);
}
