/*
 * display7SEG.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#include "display7SEG.h"

int index_led = 1;
int counter[4] = {0, 0, 0, 0};

void set_display7SEG(int counter,
		GPIO_TypeDef* a_seg_GPIO_Port, uint16_t a_seg_Pin,
		GPIO_TypeDef* b_seg_GPIO_Port, uint16_t b_seg_Pin,
		GPIO_TypeDef* c_seg_GPIO_Port, uint16_t c_seg_Pin,
		GPIO_TypeDef* d_seg_GPIO_Port, uint16_t d_seg_Pin,
		GPIO_TypeDef* e_seg_GPIO_Port, uint16_t e_seg_Pin,
		GPIO_TypeDef* f_seg_GPIO_Port, uint16_t f_seg_Pin,
		GPIO_TypeDef* g_seg_GPIO_Port, uint16_t g_seg_Pin)
{
	switch(counter){
		case 0:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, RESET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, RESET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, SET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, SET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, SET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, SET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, SET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, RESET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, SET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, SET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, SET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, SET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, SET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, SET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, RESET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, SET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, SET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, RESET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, SET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, RESET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, RESET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, SET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, SET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, SET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, RESET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, RESET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a_seg_GPIO_Port, a_seg_Pin, RESET);
			HAL_GPIO_WritePin(b_seg_GPIO_Port, b_seg_Pin, RESET);
			HAL_GPIO_WritePin(c_seg_GPIO_Port, c_seg_Pin, RESET);
			HAL_GPIO_WritePin(d_seg_GPIO_Port, d_seg_Pin, RESET);
			HAL_GPIO_WritePin(e_seg_GPIO_Port, e_seg_Pin, SET);
			HAL_GPIO_WritePin(f_seg_GPIO_Port, f_seg_Pin, RESET);
			HAL_GPIO_WritePin(g_seg_GPIO_Port, g_seg_Pin, RESET);
			break;
		default:
			break;
	}
}


void display7SEG(int counter){
	return set_display7SEG(counter,
			SEG0_GPIO_Port,  SEG0_Pin,
			SEG1_GPIO_Port,  SEG1_Pin,
			SEG2_GPIO_Port,  SEG2_Pin,
			SEG3_GPIO_Port,  SEG3_Pin,
			SEG4_GPIO_Port,  SEG4_Pin,
			SEG5_GPIO_Port,  SEG5_Pin,
			SEG6_GPIO_Port,  SEG6_Pin
			);
}


void update7SEG(int index){
	index = index % 4;
    switch (index){
        case 0:
            //Display the first 7SEG with counter[0]
        	display7SEG(counter[0]);
        	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
        	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
        	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
        	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
            break;
        case 1:
            //Display the second 7SEG with counter[1]
        	display7SEG(counter[1]);
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
            break;
        case 2:
//            Display the third 7SEG with counter[2]
        	display7SEG(counter[2]);
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
            break;
        case 3:
//            Display the forth 7SEG with counter[3]
        	display7SEG(counter[3]);
			  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
            break;
        default:
            break;
    }
}

void set_update7SEG_VALUE(int counter[], int NUM ){
	//mode1
	counter[1] = counter[3];
	counter[0] = counter[2];

	//mode2, 3, 4
	counter[0] = counter[3];
	counter[1] = NUM % 10;
	counter[2] = NUM / 10;
}








