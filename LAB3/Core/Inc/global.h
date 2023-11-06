/*
 * global.h
 *
 *  Created on: Nov 6, 2023
 *      Author: Huy Minh
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "display7SEG.h"
#include "led_traffic.h"

#include "main.h"


#define INIT		1

#define RED_AUTO 	2
#define GREEN_AUTO  3
#define YELLOW_AUTO	4
#define INIT_LED	8

#define MODE_1 		11
#define MODE_2 		12
#define MODE_3 		13
#define MODE_4 		14

extern int status;
extern int mode;

extern int counter_RED;
extern int counter_AMBER;
extern int counter_GREEN;
extern int counter[4];

const int MAX_LED = 4;
extern int index;

#endif /* INC_GLOBAL_H_ */
