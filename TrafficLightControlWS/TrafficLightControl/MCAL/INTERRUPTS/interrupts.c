/*
 * interrupts.c
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#include "../../Utilities/reg.h"
#include "interrupts.h"

void INT0_init(void)
{
	//DDRD  &= (~(1<<PIN2));              /*Configure INT0/PD2 as input pin */
	MCUCR |= (1<<ISC00) | (1<<ISC01);   /*Trigger INT0 with the raising edge*/
	GICR  |= (1<<INT0);                 /*Enable external interrupt pin INT0*/
	SREG  |= (1<<7);                    /*Enable interrupts by setting I-bit*/
}
