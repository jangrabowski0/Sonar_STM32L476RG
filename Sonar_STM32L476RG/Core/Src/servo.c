
#include "servo.h"


bool is_max_angle_180(uint8_t i, volatile int pulse_width, volatile bool *state){
	if(pulse_width>2400){
		i=20;
		*state=true;
	}
	if(pulse_width<700){
		i=20;
		*state=false;
	}
	return state;
}

void adjust_rotation_direction(uint8_t i, volatile int *pulse_width, volatile bool state){
	if(state){
		*pulse_width-=i;
	}
	else if(!state){
		*pulse_width+=i;
	}
}

void calc_current_position(volatile int pulse_width, volatile uint8_t *current_position){
	*current_position=(pulse_width-699)/100;
}
//2499 699 18 steps
