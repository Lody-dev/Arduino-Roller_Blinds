#include "mode_handeling.h"

// Executes setup mode to adjust and save the lowest point of the window.
// Moves the motor up with the "up" button and down with the "down" button.
// Pressing both buttons together saves the current position and exits setup mode.
// Returns the lowest point of the window as an unsigned integer.
unsigned int setup_mode(const int b_up, const int b_down)
{
        unsigned int    limit = 2000;
        unsigned int    count = 0;

        Bounce button_up = Bounce();
        Bounce button_down = Bounce();

        button_up.attach(b_up);
        button_down.attach(b_down);

        button_up.interval(25);
        button_down.interval(25);

        while(true)
        {
                button_up.update();
                button_down.update();

                if((button_down.read() == LOW) && (button_up.read() == HIGH) && (count < limit))
                {
                        motor_movement(ANTICLOCKWISE);
                        Serial.println(count++);
                }

                if((button_down.read() == HIGH) && (button_up.read() == LOW) && (count > 0))
                {
                        motor_movement(CLOCKWISE);
                        Serial.println(count--);
                }

                if((button_up.read() == LOW) && (button_down.read() == LOW))
                {
                        return(count);
                        break;
                }
        }

}

// Operates the roller blinds in normal mode.
// Moves the motor up with the "up" button (decreases count).
// Moves the motor down with the "down" button (increases count), within the motor limit.
// Runs indefinitely, allowing manual control of the blinds.
void operate_mode(int motor_limit, const int b_up, const int b_down)
{
unsigned int    count = motor_limit;

        Bounce button_up = Bounce();
        Bounce button_down = Bounce();

        button_up.attach(b_up);
        button_down.attach(b_down);

        button_up.interval(25);
        button_down.interval(25);

        while(true)
        {
                button_up.update();
                button_down.update();

                if((button_down.read() == LOW) && (count < motor_limit))
                {
                        motor_movement(ANTICLOCKWISE);
                        Serial.println(count++);
                }

                if((button_up.read() == LOW) && (count > 0))
                {
                        motor_movement(CLOCKWISE);
                        Serial.println(count--);
                }
        }

}
