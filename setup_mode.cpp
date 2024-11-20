#include "setup_mode.h"

unsigned int setup_mode(const int b_up, const int b_down)
{
	unsigned int	limit = 2000;
	unsigned int	count = 100;
	
	Serial.begin(9600);

	Bounce button_up = Bounce();
	Bounce button_down = Bounce();
  
	button_up.attach(b_up);
	button_down.attach(b_down);

	button_up.interval(50);
	button_down.interval(50);
	
	while(true)
	{
		button_up.update();
		button_down.update();

		while((button_down.fell()) && (count < limit))
		{
			motor_movement(ANTICLOCKWISE);
			count++;
			Serial.println(count);
		}
		
		while((button_up.fell()) && (count > 0))
		{
			motor_movement(CLOCKWISE);
			count--;
			Serial.println(count);
		}

		if((button_up.fell()) && (button_down.fell()))
		{
			return(count);
			break;
		}
	} 

}
