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
	if(timer2_flag){
	    setTimer2(250);
	    update7SEG(index++);
    }

	switch(mode){
		case INIT:

			run_MODE2();
			status[1] = INIT;
			mode = MODE_1;
			break;

		case MODE_1:
			setTimer1(100, 1);
			setTimer1(100, 2);
			fns_automata_run();
			if(isButtonPressed(1)){
				mode = MODE_2;
				setTimer1(5000, 0);
			}
			break;

		case MODE_2:
			run_MODE2();
//			fns_mode2_run();
			if(timer1_flag[0]){
				status[1] = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(1)){
				mode = MODE_3;
				setTimer1(5000, 0);
			}
			break;

		case MODE_3:
			run_MODE2();
//			fns_mode2_run();
			if(timer1_flag[0]){
				status[1] = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(1)){
				mode = MODE_4;
				setTimer1(5000, 0);
			}
			break;
		case MODE_4:
			run_MODE2();
//			fns_mode2_run();
			if(timer1_flag[0]){
				status[1] = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(1)){
				mode = MODE_1;
				setTimer1(5000, 0);
			}
			break;
		default:
			break;
	}
}
