/*
 * main.c
 *
 *  Created on: Jan 1, 2023
 *      Author: Mahmoud Qotp
 */
#include "Application/app.h"

int main(void)
{
	app_Init();
	while(1)
	{
		app_Start();
	}
}

/*void timer_interrupts_test(void)
{
	LED_ON(PORTA_ID,PIN0);
	g_ticks = 0;
	while(g_ticks < 3); 			//Timer interrupt check
	LED_OFF(PORTA_ID,PIN0);
	g_ticks = 0;
	while(g_ticks < 3);

	if(g_test)
	{
		LED_ON(PORTA_ID,PIN0);
	}
	else
	{
		LED_OFF(PORTA_ID,PIN0);
	}

}*/

/*int main(void)
{
	//Test main
	LED_init(PORTA_ID,PIN0);
	button_init(PORTD_ID,PIN2);
	INT0_init();
	Timer1_init();
	Timer1_setCallBack(callBackFunc);
	while(1)
	{
		//DIO_test();
		//button_test();
		//LED_test();
		timer_interrupts_test();
	}
}*/
