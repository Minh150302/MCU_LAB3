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

extern int status;
extern int mode;



#endif /* INC_GLOBAL_H_ */
