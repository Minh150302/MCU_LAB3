///*
// * button.c
// *
// *  Created on: Nov 6, 2023
// *      Author: Huy Minh
// */
//
//#include "button.h"
//
//int button1_flag = 0;
//
//
//int KeyReg0 = NORMAL_STATE;
//int KeyReg1 = NORMAL_STATE;
//
//int KeyReg2 = NORMAL_STATE;
//
//
//int KeyReg3 = NORMAL_STATE;
//int TimerForKeyPress = 200;
//
//int isButton1Pressed(){
//	if(button1_flag == 1){
//		button1_flag = 0;
//		return 1;
//	}
//	return 0;
//}
//
////void SubKeyProcess(){
////	button1_flag = 1;
////}
//
//void getKeyInput1(){
//	KeyReg0 = KeyReg1;
//	KeyReg1 = KeyReg2;
//	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
//	if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
//		if(KeyReg3 != KeyReg2){
//			KeyReg3 = KeyReg2;
//			if(KeyReg2 == PRESSED_STATE){
////				SubKeyProcess();
//				button1_flag = 1;
//				TimerForKeyPress = 200;
//			}
//		}else{
//			TimerForKeyPress--;
//			if(TimerForKeyPress == 0){
//				KeyReg3 = NORMAL_STATE;
//
////				if(KeyReg2 == PRESSED_STATE){
////					SubKeyProcess();
////				}
////				TimerForKeyPress = 200;
//			}
//		}
//	}
//}
