/*
 * fns_automata.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#include "fns_automata.h"

//int counterNUM[2]= {0, 0};

void fns_automata_run(){
	if(timer3_flag){
		setTimer3(1000);
		counter[0]--;
		counter[1]--;
		set_update7SEG_VALUE();
	}

	for(int i = 0; i < 2; i ++){
		switch(status[i]){
			case INIT:
				ALL_LIGHT_OFF();
				setTimer1(counter_RED*1000, 1);
				setTimer1(counter_GREEN*1000, 0);
				status[1] = RED_AUTO;
				status[0] = GREEN_AUTO;
				counter[1] = counter_RED;
				counter[0] = counter_GREEN;
				break;
			case RED_AUTO:
				RED_LIGHT(i);
				set_update7SEG_VALUE();
				if(timer1_flag[i]){
					status[i] = GREEN_AUTO;
					setTimer1(counter_GREEN*1000, i);
					counter[i] = counter_GREEN;
				}
				break;
			case GREEN_AUTO:
				GREEN_LIGHT(i);
				set_update7SEG_VALUE();
				if(timer1_flag[i]){
					status[i] = YELLOW_AUTO;
					setTimer1(counter_AMBER*1000, i);
					counter[i] = counter_AMBER;
				}
				break;
			case YELLOW_AUTO:
				YELLOW_LIGHT(i);
				set_update7SEG_VALUE();
				if(timer1_flag[i]){
					status[i] = RED_AUTO;
					setTimer1(counter_RED*1000, i);
					counter[i] = counter_RED;
				}
				break;
			default :
				break;
		}
	}
}
