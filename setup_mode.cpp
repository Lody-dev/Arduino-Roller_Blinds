#include "mode_handeling.h"

unsigned int setup_mode(const int b_up, const int b_down)
{
	unsigned int	limit = 2000;
	unsigned int	count = 0;

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
