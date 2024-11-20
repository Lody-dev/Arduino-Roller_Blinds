#ifndef SETUP_MODE_H
#define SETUP_MODE_H

#include <Arduino.h>

#include "motor_control.h"
#include <Bounce2.h>

unsigned int setup_mode(const int button_up, const int button_down);

#endif
