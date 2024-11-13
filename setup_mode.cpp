#include "setup_mode.h"

unsigned int 	window_limit = 20000;
unsigned int 	step_count = 0;

unsigned int setup_mode(const int button_up, const int button_down){
	
	if(isButtonPressed(button_up) && step_count > 0)
	{
		motor_movement(ANTICLOCKWISE);
		step_count--;
	}
	else if(isButtonDownPressed(button_down) && step_count < window_limit)
	{
		motor_movement(CLOCKWISE);
		step_count++;

	}
	else if(isButtonPressed(button_up) && isButtonDownPressed(button_down))
	{
		window_limit = step_count;
		return(window_limit);
	}
}
