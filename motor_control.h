#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h>

#define STEP_PIN 8
#define DIR_PIN 9

#define CLOCKWISE HIGH
#define ANTICLOCKWISE LOW 

void motor_movement(bool direction);

#endif
