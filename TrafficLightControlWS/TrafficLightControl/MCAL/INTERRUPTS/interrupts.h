/*
 * interrupts.h
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#ifndef MCAL_INTERRUPTS_INTERRUPTS_H_
#define MCAL_INTERRUPTS_INTERRUPTS_H_

								/* ISR Macro */
#  define ISR(vector,...)            \
void vector (void) __attribute__ ((signal))__VA_ARGS__ ; \
void vector (void)

						/* External Interrupt 0 Request */
#define INT0_vect			__vector_1

						/* Timer/Counter1 Compare Match A */
#define TIMER1_COMPA_vect		__vector_7


void INT0_init(void);

#endif /* MCAL_INTERRUPTS_INTERRUPTS_H_ */
