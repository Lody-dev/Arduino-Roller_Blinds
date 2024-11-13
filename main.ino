#include "button_handling.h"

const int buttonPin = 2;
int buttonState = LOW;

void setup() {
    pinMode(buttonPin, INPUT);
}

void loop() {
    if (debounceButton(buttonPin, buttonState)) {
        Serial.println("Button Pressed!");
    }
}
