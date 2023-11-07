/*
 * fns_mode.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#include "fns_mode.h"




void fns_mode_run(){
	if(timer2_flag){
	    setTimer2(250);
	    update7SEG(index++);
    }

	switch(mode){
		case INIT:
			run_MODE2();
			status[1] = INIT;
			status[0] = INIT;
			mode = MODE_1;
			setTimer1(100, 1);
			setTimer1(100, 0);
			setTimer2(100);
			setTimer3(100);
			break;

		case MODE_1:
//			setTimer1(100, 1);
//			setTimer1(100, 0);
			fns_automata_run();
			if(isButtonPressed(0)){
				mode = MODE_2;
				setTimer1(5000, 0);
				setTimer1(500, 1);
				ALL_LIGHT_OFF();
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
				HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
			}
			break;

		case MODE_2:
			run_MODE2();
			if(timer1_flag[0]){
				status[1] = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(0)){
				mode = MODE_3;
				setTimer1(5000, 0);
				setTimer1(500, 1);
				ALL_LIGHT_OFF();
				HAL_GPIO_WritePin(LED_AMBER1_GPIO_Port, LED_AMBER1_Pin, RESET);
				HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, RESET);
			}
			break;

		case MODE_3:
			run_MODE3();
			if(timer1_flag[0]){
				status[1] = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(0)){
				mode = MODE_4;
				setTimer1(5000, 0);
				setTimer1(500, 1);
				ALL_LIGHT_OFF();
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
				HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
			}
			break;
		case MODE_4:
			run_MODE4();
			if(timer1_flag[0]){
				status[1] = INIT;
				mode = MODE_1;
			}
			if(isButtonPressed(0)){
				mode = MODE_1;
				setTimer1(5000, 0);
				ALL_LIGHT_OFF();
			}
			break;
		default:
			break;
	}
}
