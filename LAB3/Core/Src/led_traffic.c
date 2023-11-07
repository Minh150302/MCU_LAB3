/*
 * led_traffic.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#include "led_traffic.h"


void RED_LIGHT_mode(
		GPIO_TypeDef* LED_RED_GPIO_Port, uint16_t LED_RED_Pin,
		GPIO_TypeDef* LED_AMBER_GPIO_Port, uint16_t LED_AMBER_Pin,
		GPIO_TypeDef* LED_GREEN_GPIO_Port, uint16_t LED_GREEN_Pin){
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void YELLOW_LIGHT_mode(
		GPIO_TypeDef* LED_RED_GPIO_Port, uint16_t LED_RED_Pin,
		GPIO_TypeDef* LED_AMBER_GPIO_Port, uint16_t LED_AMBER_Pin,
		GPIO_TypeDef* LED_GREEN_GPIO_Port, uint16_t LED_GREEN_Pin){
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void GREEN_LIGHT_mode(
		GPIO_TypeDef* LED_RED_GPIO_Port, uint16_t LED_RED_Pin,
		GPIO_TypeDef* LED_AMBER_GPIO_Port, uint16_t LED_AMBER_Pin,
		GPIO_TypeDef* LED_GREEN_GPIO_Port, uint16_t LED_GREEN_Pin){
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);

}


void RED_LIGHT(int i){
	if (i % 2 == 1)
		return RED_LIGHT_mode(
		  LED_RED1_GPIO_Port, LED_RED1_Pin,
		  LED_AMBER1_GPIO_Port, LED_AMBER1_Pin,
		  LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
	else
		return RED_LIGHT_mode(
			  LED_RED2_GPIO_Port, LED_RED2_Pin,
			  LED_AMBER2_GPIO_Port, LED_AMBER2_Pin,
			  LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);

}

void YELLOW_LIGHT(int i){
	if (i % 2 == 1)
		return YELLOW_LIGHT_mode(
		  LED_RED1_GPIO_Port, LED_RED1_Pin,
		  LED_AMBER1_GPIO_Port, LED_AMBER1_Pin,
		  LED_GREEN1_GPIO_Port, LED_GREEN1_Pin
		  );
	else
		return YELLOW_LIGHT_mode(
		  LED_RED2_GPIO_Port, LED_RED2_Pin,
		  LED_AMBER2_GPIO_Port, LED_AMBER2_Pin,
		  LED_GREEN2_GPIO_Port, LED_GREEN2_Pin
		  );
}

void GREEN_LIGHT(int i){
	if (i % 2 == 1)
		return GREEN_LIGHT_mode(
		  LED_RED1_GPIO_Port, LED_RED1_Pin,
		  LED_AMBER1_GPIO_Port, LED_AMBER1_Pin,
		  LED_GREEN1_GPIO_Port, LED_GREEN1_Pin
		  );
	else
		return GREEN_LIGHT_mode(
		  LED_RED2_GPIO_Port, LED_RED2_Pin,
		  LED_AMBER2_GPIO_Port, LED_AMBER2_Pin,
		  LED_GREEN2_GPIO_Port, LED_GREEN2_Pin
		  );
}


void LIGHT_OFF(
		GPIO_TypeDef* LED_RED_GPIO_Port, uint16_t LED_RED_Pin,
		GPIO_TypeDef* LED_AMBER_GPIO_Port, uint16_t LED_AMBER_Pin,
		GPIO_TypeDef* LED_GREEN_GPIO_Port, uint16_t LED_GREEN_Pin){
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void ALL_LIGHT_OFF(){
	LIGHT_OFF(
	  LED_RED1_GPIO_Port, LED_RED1_Pin,
	  LED_AMBER1_GPIO_Port, LED_AMBER1_Pin,
	  LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
	LIGHT_OFF(
		  LED_RED2_GPIO_Port, LED_RED2_Pin,
		  LED_AMBER2_GPIO_Port, LED_AMBER2_Pin,
		  LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
}
