/*
 * main.c
 *
 *  Created on: Sep 2, 2022
 *      Author: Mokhtar
 */
#include"STD_TYPES.h"
#include<avr/io.h>
#include"BIT_MATH.h"
#include <util/delay.h>

int main(void)
{
DDRA=0xff;


	while(1)
	{
#if 0
		for(int i=0;i<=7;i++)
		{
		SET_BIT(PORTA,i);
		_delay_ms(500);
		}
		for(int i=0;i<=7;i++)
		{
			CLR_BIT(PORTA,i);
			_delay_ms(500);
		}
#endif
		for(int i=0;i<=7;i++)
				{
				SET_BIT(PORTA,i);
				_delay_ms(500);
				CLR_BIT(PORTA,i);
				_delay_ms(500);
				}
		}

}

