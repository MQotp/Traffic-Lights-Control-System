/*
 * app.h
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#ifndef APPLICATION_APP_H_
#define APPLICATION_APP_H_

/*******************************************************************************
 *				                     Includes         	       	               *
 *******************************************************************************/

#include "../Utilities/reg.h"
#include "../Utilities/common_macros.h"
#include "../Utilities/std_types.h"
#include "../ECUAL/BUTTON/button.h"
#include "../ECUAL/LED/led.h"

/*******************************************************************************
 *				                     Definitions       	       	               *
 *******************************************************************************/
#define NORMAL_MODE 0
#define PEDESTRIAN_MODE 1
#define NUMBER_OF_SECONDS 5

/*******************************************************************************
 *				                 Functions Prototype     	                   *
 *******************************************************************************/
void timer_interrupts_test(void);

void callBackFunc(void);

void app_Init(void);

void app_Start(void);


#endif /* APPLICATION_APP_H_ */
