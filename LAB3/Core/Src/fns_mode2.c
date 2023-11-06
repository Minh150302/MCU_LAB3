/*
 * fns_mode2.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */


#include "fns_mode2.h"


void fns_mode2_run(){
	RED_BLINK();
	int counter = 0;

	if(isButtonPressed(1)){
		mode = MODE_3;
		setTimer1(500);
	}

	if(isButtonPressed(2)){
		counter++;
		setTimer1(500);
	}

	if(isButtonPressed(3)){
		counter_RED = (counter_RED + counter)  % 100;
		setTimer1(500);
	}

	if(timer1_flag){
		status = INIT;
		mode = MODE_1;
	}
}






