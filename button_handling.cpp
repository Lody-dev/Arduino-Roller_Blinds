#include "button_handling.h"

const unsigned long debounceDelay = 50;
unsigned long lastDebounceTime = 0;
int lastButtonState = LOW;

bool debounceButton(int buttonPin, int &buttonState) 
{
    int reading = digitalRead(buttonPin);

    if (reading != lastButtonState) 
    {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debounceDelay) 
    {
        if (reading != buttonState) 
	{
            buttonState = reading;
            if (buttonState == HIGH) 
	    {
                return true;
            }
        }
    }
    
    lastButtonState = reading;
    return false;
}
