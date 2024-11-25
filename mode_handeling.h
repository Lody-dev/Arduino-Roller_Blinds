#ifndef MODE_HANDELING_H
#define MODE_HANDELING_H

#include <Arduino.h>

#include "motor_control.h"
#include <Bounce2.h>

const int button_up = 12;
const int button_down = 13; 

unsigned int setup_mode(const int button_up, const int button_down);
void operate_mode(int motor_limit, const int b_up, const int b_down);

#endif
