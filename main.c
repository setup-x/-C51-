

#include <reg52.h>
#include "led.h"
#include "beep.h"
#include "key.h"
#include "delay.h"
#include "digital_pipe.h"
#include "motor.h"
#include  "uart.h"
#include "track.h"
#include "lcd1602.h"

//unsigned char ch[8]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
extern unsigned int flag;
void main()
{	
		
		uart_init();
		Lcd_Config();
		Lcd_Clear();
		Lcd_Draw_hollow();
	
		while(1)
		{
			if(flag==1)
			xunji();
			//Lcd_Draw_hollow();
			//delay_ms(5000);

		}
		Lcd_Clear();
	
}
