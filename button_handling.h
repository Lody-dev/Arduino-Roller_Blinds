#ifndef BUTTON_HANDLING_H
#define BUTTON_HANDLING_H

#include <Arduino.h>

bool debounceButton(int buttonPin, int &buttonState);

#endif

