/*
 * button.h
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#ifndef ECUAL_BUTTON_BUTTON_H_
#define ECUAL_BUTTON_BUTTON_H_

#include "../../MCAL/DIO/dio.h"


extern volatile uint8 g_trafficMode;
extern volatile uint8 g_press;

#define BUTTON_IS_NOT_PRESSED 0
#define BUTTON_IS_PRESSED 1
#define PEDESTRIAN_MODE 1
#define NORMAL_MODE 0
void button_init(uint8 port_number, uint8 pin_number);

uint8 button_Is_Pressed(uint8 port_number, uint8 pin_number);
#endif /* ECUAL_BUTTON_BUTTON_H_ */
