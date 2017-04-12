/*
PROJECT Name: LED
Author      : Etiq Technologies
Created on  :16 April 2016
Description:  The Project is a demo project for the AT89S8253 programming.
              The code blinks the LEDs connected to all ports of the AT89S8253 
							controller.Since inbuilt delay routine is not available a delay                                                 
					 		library using the timer modules of the controller is created and 
							attached with the project.only delays in milliseconds greater and
							multiples of 50 should be passed to the funcion.

*/


#include <REG8253.H>
#include "delay.h"           //delay header


void main()
{
	/*All LEDs blink with 250ms delay*/
	while(1)
	{

	P0=0x00;
	P1=0x00;
	P2=0x00;
	P3=0x00;   
	delay_ms(250);
	P0=0xFF;
	P1=0xFF;
	P2=0xFF;
	P3=0xFF;
	delay_ms(250);

	}
}
