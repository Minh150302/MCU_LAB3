///*
// * fns_automata2.c
// *
// *  Created on: Nov 7, 2023
// *      Author: Huy Minh
// */
//
//#include "fns_automata.h"
//
//void fns_automata_run(){
//	if(timer3_flag){
//		setTimer3(1000);
//		counterNUM[0]++;
//		counterNUM[1]++;
//	}
//
//
//	for(int i = 0; i < 2; i ++){
////		if(status[1] == RED_AUTO) status[0] = GREEN_AUTO;
//		switch(status[i]){
//			case INIT:
//				ALL_LIGHT_OFF();
//				status[i] = RED_AUTO;
//				setTimer1(100, i);
//				counterNUM[i] = 0;
//				counter[1] = counter_RED;
//				counter[0] = counter_GREEN;
//				status[1] = RED_AUTO;
//				status[0] = GREEN_AUTO;
//				break;
//			case RED_AUTO:
//				RED_LIGHT(i);
//				if(timer1_flag[i]){
//					status[i] = GREEN_AUTO;
//					setTimer1(counter_GREEN*100, i);
//
//
//					counterNUM[i] = 0;
//				}
//				break;
//			case GREEN_AUTO:
//				GREEN_LIGHT(i);
//				if(timer1_flag[i]){
//					status[i] = YELLOW_AUTO;
//					setTimer1(counter_AMBER*100, i);
//
//
//					counterNUM[i] = 0;
//				}
//				break;
//			case YELLOW_AUTO:
//				YELLOW_LIGHT(i);
//				if(timer1_flag[i]){
//					status[i] = RED_AUTO;
//					setTimer1(counter_RED*100, i);
//
//
//					counterNUM[i] = 0;
//				}
//				break;
//			default :
//				break;
//		}
//	}
//}
