#include "motor_control.h"

void setup() {
pinMode(STEP_PIN, OUTPUT);
pinMode(DIR_PIN, OUTPUT);
}

void loop() {
motor_movement(CLOCKWISE);
delay(500);

motor_movement(ANTICLOCKWISE);
delay(500);
}
