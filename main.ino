<<<<<<< HEAD
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
=======
#include "setup_mode.h"

const int b_up = 2;
const int b_down = 3;
unsigned int limit; 

void setup()
{
	pinMode(STEP_PIN, OUTPUT);
	pinMode(DIR_PIN, OUTPUT);
	pinMode(b_up, INPUT_PULLUP);
	pinMode(b_down, INPUT_PULLUP);
	Serial.begin(9600);
}

void loop()
{
	limit = setup_mode(b_up, b_down);
	Serial.print("New limit: ");
	Serial.println(limit);
	operate_mode(limit, b_up, b_down);
}
>>>>>>> 31cbcd647b8c1ff0199ed2bcba6f00494f7add33
