#include "setup_mode.h"

const int button_up = 2;
const int button_down = 3;
unsigned int motor_limit; 

void setup()
{
	pinMode(button_up, INPUT_PULLUP); 
	Serial.begin(9600);
	

}



void loop() 
{
	motor_limit = setup_mode(button_up, button_down);
	Serial.print("New motor limit set: ");
	Serial.println(motor_limit);
}
