#include "digital_pipe.h"
#include "delay.h"
unsigned char ch[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};


void display(int WEI,int number,int dos)
{
		switch(WEI)
		{
			case WEI0:
				D_1=0;
				if(dos==0)
				{
					P0=ch[number%10];
				}
				else
					P0=ch[number%10]-0x80;
				delay_ms(1);
				D_1=1;
				break;
			case WEI1:
				D_2=0;
				if(dos==0)
				{
					P0=ch[number%10];
				}
				else
					P0=ch[number%10]-0x80;
				delay_ms(1);
				D_2=1;
				break;
			case WEI2:
				D_3=0;
				if(dos==0)
				{
					P0=ch[number%10];
				}
				else
					P0=ch[number%10]-0x80;
			delay_ms(1);
				D_3=1;
				break;
			case WEI3:
				D_4=0;
				if(dos==0)
				{
					P0=ch[number%10];
				}
				else
					P0=ch[number%10]-0x80;
			delay_ms(1);
				D_4=1;
				break;
		}
		
}

