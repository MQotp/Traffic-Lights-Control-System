/*
 * dio.h
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_

 /******************************************************************************
 *                                    Includes                                 *
 *******************************************************************************/
#include "../../Utilities/common_macros.h"
#include "../../Utilities/std_types.h"
#include "../../Utilities/reg.h"

 /******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define NUM_OF_PORTS           4
#define NUM_OF_PINS_PER_PORT   8

#define PORTA_ID               0
#define PORTB_ID               1
#define PORTC_ID               2
#define PORTD_ID               3

 /******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum
{
	PIN_INPUT, PIN_OUTPUT
}DIO_PinDirectionType;


/*******************************************************************************
*                              Functions Prototypes                           *
*******************************************************************************/

void DIO_setupPinDirection(uint8 port_number, uint8 pin_number, uint8 direction);

void DIO_writePin(uint8 port_number, uint8 pin_number, uint8 value);

uint8 DIO_readPin(uint8 port_number, uint8 pin_number);

#endif /* MCAL_DIO_DIO_H_ */
