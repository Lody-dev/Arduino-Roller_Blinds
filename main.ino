#include "button_handling.h"

void setup()
{
    pinMode(buttonPin, INPUT_PULLUP); 
    Serial.begin(9600); 
}



void loop() 
{
    if (isButtonPressed()) {
        Serial.println("Button Pressed!");
    }

    if (isButtonHeld()) {
        Serial.println("Button Held for 1 second!");
    }
}
