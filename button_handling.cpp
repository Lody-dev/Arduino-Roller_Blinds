#include "button_handling.h"

          // Pin for the button
const unsigned long debounceDelay = 50;  // 50 milliseconds debounce time
const unsigned long holdThreshold = 1000; // 1000 milliseconds (1 second) hold time

bool buttonState = false;  // Current button state (pressed or not)
bool lastButtonState = false;  // Previous button state
unsigned long lastDebounceTime = 0;  
unsigned long buttonPressStartTime = 0;  // Time when button press started


bool isButtonPressed(const int buttonPin) {
    bool currentButtonState = digitalRead(buttonPin) == LOW;  // Button is pressed if the pin is LOW

    if (currentButtonState != lastButtonState) {
        lastDebounceTime = millis();  // Record the time of state change
    }

    if ((millis() - lastDebounceTime) > debounceDelay) {
        if (currentButtonState != buttonState) {
            buttonState = currentButtonState;
            if (buttonState == true) {  // Button was pressed
                buttonPressStartTime = millis();  // Record the time when the button was pressed
                lastButtonState = buttonState;
                return true;  // Return true when the button is pressed
            }
        }
    }

    lastButtonState = currentButtonState;
    return false;  // Return false if the button is not pressed
}

bool isButtonHeld(const int buttonPin) {
    if (buttonState == true && (millis() - buttonPressStartTime >= holdThreshold)) {
        return true;  // Return true if button is held for more than 1 second
    }
    return false;  // Return false if button is not held long enough
}
