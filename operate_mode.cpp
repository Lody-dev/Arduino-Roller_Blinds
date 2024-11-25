<<<<<<< HEAD
#include "mode_handeling.h"

void operate_mode(int motor_limit, const int b_up, const int b_down)
{
unsigned int	count = motor_limit;

=======
#include "operate_mode.h"

void	setup_mode(unsigned int limit, const int b_up, const int b_down)
{
	unsigned int	count = limit;
	
>>>>>>> 31cbcd647b8c1ff0199ed2bcba6f00494f7add33
	Bounce button_up = Bounce();
	Bounce button_down = Bounce();
  
	button_up.attach(b_up);
	button_down.attach(b_down);

<<<<<<< HEAD
	button_up.interval(25);
	button_down.interval(25);
=======
	button_up.interval(50);
	button_down.interval(50);
>>>>>>> 31cbcd647b8c1ff0199ed2bcba6f00494f7add33
	
	while(true)
	{
		button_up.update();
		button_down.update();

<<<<<<< HEAD
		if((button_down.read() == LOW) && (count < motor_limit))
		{
			motor_movement(ANTICLOCKWISE);
			Serial.println(count++);
		}
		
		if((button_up.read() == LOW) && (count > 0))
		{
			motor_movement(CLOCKWISE);
			Serial.println(count--);
=======
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
		
		if((button_down.rose()) && (count < limit))
		{
			for(count++; count < limit)
			{
				motor_movement(ANTICLOCKWISE);
				Serial.println(count);
			}
		}
		
		if((button_up.rose()) && (count > 0))
		{
			for(count--; count > 0)
			{
				motor_movement(CLOCKWISE);
				Serial.println(count);
			}
>>>>>>> 31cbcd647b8c1ff0199ed2bcba6f00494f7add33
		}
	} 

}
