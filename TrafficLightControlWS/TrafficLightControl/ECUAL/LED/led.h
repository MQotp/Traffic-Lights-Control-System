/*
 * led.h
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#ifndef ECUAL_LED_LED_H_
#define ECUAL_LED_LED_H_

#include "../../MCAL/DIO/dio.h"
#include "../../Utilities/common_macros.h"

extern volatile uint8 g_ticks;

/*
 * DIO
 * LED_init, LED_ON and LED_OFF functions
 * */
void LEDcallBackFunc(void);

void LED_interruptInit(void);

void LED_init(uint8 port_number, uint8 pin_number);

void LED_ON(uint8 port_number, uint8 pin_number);

void LED_OFF(uint8 port_number, uint8 pin_number);

void LED_TOGGLE(uint8 port_number, uint8 pin_number);

uint8 LED_IS_ON(uint8 port_number, uint8 pin_number);

#endif /* ECUAL_LED_LED_H_ */
