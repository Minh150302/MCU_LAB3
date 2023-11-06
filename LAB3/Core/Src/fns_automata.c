/*
 * fns_automata.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#include "fns_automata.h"

void fns_automata_run(){
	int counter;
	switch(status){
	case INIT:
		ALL_LIGHT_OFF();
		status = RED_AUTO;
		setTimer1(counter_RED*100);
		counter = 0;
		break;
	case RED_AUTO:
		RED_LIGHT1();
		counter++;
		if(timer1_flag){
			status = GREEN_AUTO;
			setTimer1(counter_GREEN*100);
		}
		break;
	case GREEN_AUTO:
		GREEN_LIGHT1();
		if(timer1_flag){
			status = YELLOW_AUTO;
			setTimer1(counter_AMBER*100);
		}
		break;
	case YELLOW_AUTO:
		YELLOW_LIGHT1();
		if(timer1_flag){
			status = RED_AUTO;
			setTimer1(counter_RED*100);
		}
		break;
	default :
		break;
	}
}
