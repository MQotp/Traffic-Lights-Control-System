/*
 * reg.h
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#ifndef UTILITIES_REG_H_
#define UTILITIES_REG_H_

#include "std_types.h"
/*******************************************************************************
*                                Definitions                                   *
*******************************************************************************/
							/* Pins Definitions */
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

					/* General Registers Definitions */
#define SREG 	  (*(volatile uint8*)(0x5F))
#define GICR 	  (*(volatile uint8*)(0x5B))
#define INT1 7
#define INT0 6
#define INT2 5

#define MCUCR 	  (*(volatile uint8*)(0x55))
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3
#define SM0 4
#define SM1 5
#define SM2 6
#define SE 7
						/* DIO Registers Definitions */
/*PORTA registers*/
#define DDRA 	  (*(volatile uint8*)(0x3A))
#define PORTA 	  (*(volatile uint8*)(0x3B))
#define PINA 	  (*(volatile uint8*)(0x39))

/*PORTB registers*/
#define DDRB 	  (*(volatile uint8*)(0x37))
#define PORTB 	  (*(volatile uint8*)(0x38))
#define PINB 	  (*(volatile uint8*)(0x36))

/*PORTC registers*/
#define DDRC 	  (*(volatile uint8*)(0x34))
#define PORTC 	  (*(volatile uint8*)(0x35))
#define PINC 	  (*(volatile uint8*)(0x33))

/*PORTD registers*/
#define DDRD 	  (*(volatile uint8*)(0x31))
#define PORTD 	  (*(volatile uint8*)(0x32))
#define PIND 	  (*(volatile uint8*)(0x30))

							/*TIMER1 registers*/
#define OCR1A     (*(volatile uint16*)0x4A)
#define OCR1AL    (*(volatile uint8*)0x4A)
#define OCR1AH    (*(volatile uint8*)0x4B)
#define OCR1B	  (*(volatile uint8*)0x48)
#define OCR1BL    (*(volatile uint8*)0x48)
#define OCR1BH    (*(volatile uint8*)0x49)
#define TCNT1     (*(volatile uint16*)0x4C)
#define TCNT1L    (*(volatile uint8*)0x4C)
#define TCNT1H    (*(volatile uint8*)0x4D)
#define ICR1 	  (*(volatile uint8*)0x46))
#define ICR1H 	  (*(volatile uint8*)0x47))
#define ICR1L 	  (*(volatile uint8*)0x46))

#define TCCR1B	  (*(volatile uint8*)(0x4E))
#define CS10 0
#define CS11 1
#define CS12 2
#define WGM12 3
#define WGM13 4
/*Bit 5 is reserved*/
#define ICES1 6
#define ICNC1 7

#define TCCR1A	  (*(volatile uint8*)(0x4F))
#define WGM10 0
#define WGM11 1
#define FOC1B 2
#define FOC1A 3
#define COM1B0 4
#define COM1B1 5
#define COM1A0 6
#define COM1A1 7

#define TIMSK 	  (*(volatile uint8*)(0x59))
#define TOIE0 0
#define OCIE0 1
#define TOIE1 2
#define OCIE1B 3
#define OCIE1A 4
#define TICIE1 5
#define TOIE2 6
#define OCIE2 7

#endif /* UTILITIES_REG_H_ */
