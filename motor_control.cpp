#include "motor_control.h"

// Moves the motor one step in the specified direction.
// The direction is controlled by the `direction` parameter:
//   - CLOCKWISE (HIGH) rotates the motor clockwise.
//   - ANTICLOCKWISE (LOW) rotates the motor counterclockwise.
// Pulses the STEP_PIN to trigger the motor step, with a 500-microsecond delay between pulses.
void motor_movement(bool direction)
{
	digitalWrite(DIR_PIN, direction);
	digitalWrite(STEP_PIN, HIGH);
	delayMicroseconds(500);
	digitalWrite(STEP_PIN, LOW);
	delayMicroseconds(500);
}
