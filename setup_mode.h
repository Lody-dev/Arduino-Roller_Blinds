#ifndef SETUP_MODE_H
#define SETUP_MODE_H

#include <Arduino.h>

#include "motor_movement.h"
#include "button_handing.h"

unsigned int setup_mode(const int button_up, const int button_down);

#endif
