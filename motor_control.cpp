#include "motor_control.h"

int stepsPerRevolution = 200; //200 steps = 360 degree rotation

void motor_movement(bool direction)
{
	digitalWrite(DIR_PIN, direction);
	digitalWrite(STEP_PIN, HIGH);
	delayMicroseconds(500);
	digitalWrite(STEP_PIN, LOW);
	delayMicroseconds(500);
}
