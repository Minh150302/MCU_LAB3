/*
 * fns_mode.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#include "fns_mode.h"

void run_MODE2(){
	ALL_LIGHT_OFF();
};

void fns_mode_run(){
	switch(mode){
		case INIT:
			status = INIT;
			mode = MODE_1;
			break;
		case MODE_1:
			fns_automata_run();
			if(isButtonPressed(1)){
				mode = MODE_2;
				setTimer1(5000);
			}
			break;
		case MODE_2:
			run_MODE2();
//			fns_mode2_run();
			if(timer1_flag){
				status = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(1)){
				mode = MODE_1;
				setTimer1(5000);
			}
			break;
		case MODE_3:
			break;
		case MODE_4:
			break;
		default:
			break;
	}
}
