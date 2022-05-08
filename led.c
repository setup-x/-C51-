#include "led.h"

void led_ctrl(int led_num,int led_statu)
{
		switch(led_num)
		{
			case LED_D1:
				D1 = led_statu;
				break;
			case LED_D2:
				D2 = led_statu;
				break;
			case LED_D3:
				D3 = led_statu;
				break;
			case LED_D4:
				D4 = led_statu;
				break;
			case LED_D5:
				D5 = led_statu;
				break;
			case LED_D6:
				D6 = led_statu;
				break;
			case LED_D7:
				D7 = led_statu;
				break;
			case LED_D8:
				D8 = led_statu;
				break;
		
		}



}





