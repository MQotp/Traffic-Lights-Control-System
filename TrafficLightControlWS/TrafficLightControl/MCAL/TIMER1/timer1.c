/*
 * timer1.c
 *
 *  Created on: Oct 28, 2022
 *      Author: Mahmoud Qotp
 */

#include "../../Utilities/reg.h"
#include "../INTERRUPTS/interrupts.h"
#include "timer1.h"
#include "../../Utilities/std_types.h"

/*******************************************************************************
 *                           Global Variables                                  *
 *******************************************************************************/

/* Global variables to hold the address of the call back function in the application */
static volatile void(*g_callBackPtr)(void) = NULL_PTR;


/*******************************************************************************
 *                       Interrupt Service Routines                            *
 *******************************************************************************/

ISR(TIMER1_COMPA_vect)
{
	if (g_callBackPtr != NULL_PTR) {
		(*g_callBackPtr)();
	}
}


/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/
/*
 * Description : Timer 1 Initialization Function, Compare mode.
 * 1. The Timer1 Driver designed using the Interrupts with the callback’s technique.
 * 2. The Timer1 Driver supports compare mode.
 * Inputs: No inputs.
 * Outputs: No outputs.
 */

void Timer1_init(void)
{
	/* Non PWM Mode */
	TCCR1A = (1<<FOC1A);


	OCR1A = 15624; /*Done*/

	/* Setting the value of the prescaler. */
	TCCR1B = F_CPU_64;


	/*Mode 4: CTC with Top: OCR1A*/
	TCCR1B |= (1<<WGM12);


	/* Setting The initial value of the timer. */
	TCNT1 = 0;

	/* COMPARE MODE interrupt enable*/
	TIMSK |= (1<<OCIE1A);





}


/*
 * Description : Timer 1 De-Initialization Function, Valid for any mode.
 * Inputs: No Inputs
 * Outputs: No outputs.
 */

void Timer1_deInit(void)
{
	/* Getting all Timer1 Registers back to their Initial value (OFF Mode). */
	/* Deactivates All modes. */
	TCCR1A = 0;
	TCCR1B = 0;
	TCNT1 = 0;
	OCR1A = 0;
	OCR1B = 0;
	TIMSK &=~(0x3C);
}

/*
 * Description : Timer 1 Setting call back function, to permit timer to use Application function.
 * Inputs: Address of a function.
 * Outputs: No outputs.
 */

void Timer1_setCallBack(void(*a_ptr)(void))
{
	g_callBackPtr = a_ptr;
}
