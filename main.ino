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
