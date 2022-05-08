#include "uart.h"
#include "led.h"
#include "delay.h"
#include "motor.h"
#include "beep.h"

void uart_init(void)
{


	SCON = 0x50;
         // SM0 SM1 SM2 REN TB8 RB0 TI RI
         // 0   1   0   1    0   0   0  0  
         //串口模式方式1， 使能接收(REN = 1)
   //串口波特率 为 9600 => T1的配置
   // T1: GATE   C/T  M1 M0
   //      0     0    1  0   方式2
     //SMOD = 0;  PCON.7
   PCON &=  ~(1 << 7) ;

   TMOD &= ~0Xf0; 
       //  TMOD = TMOE &  00001111
   TMOD |= 1 << 5;// 

   TH1 = 0XFD;

   TR1 =1 ; //使能定时器
   //中断使能

   ES = 1;
   EA = 1;
}


  unsigned char d;
	unsigned int flag=0;
 void uart_isr(void) interrupt 4
   {
      if (RI == 1)
      {
         d = SBUF;
				if(d=='0')
				{
						flag=1;
				
				}
				 if(d=='1')
				 {
				 /*
					led_ctrl(LED_D1,LED_ON);
					
					led_ctrl(LED_D2,LED_ON);
					
					led_ctrl(LED_D3,LED_ON);
					
					led_ctrl(LED_D4,LED_ON);
				
					led_ctrl(LED_D5,LED_ON);
					
					led_ctrl(LED_D6,LED_ON);
					
					led_ctrl(LED_D7,LED_ON);
					
					led_ctrl(LED_D8,LED_ON);
					*/

					go_on();
				 }
				 if(d=='2')
				 {
						/*
						led_ctrl(LED_D1,LED_OFF);
						
						led_ctrl(LED_D2,LED_OFF);
						
						led_ctrl(LED_D3,LED_OFF);
						
						led_ctrl(LED_D4,LED_OFF);
						
						led_ctrl(LED_D5,LED_OFF);
						
						led_ctrl(LED_D6,LED_OFF);
						
						led_ctrl(LED_D7,LED_OFF);
						
						led_ctrl(LED_D8,LED_OFF);
						*/
						go_after();
						
				}
				if(d=='3')
				{
						//beep_ctrl(BEEP_ON);
						p_down();
				
				}
				

				if(d=='4')
				{
						go_l();
				
				}
				if(d=='5')
				{
						go_r();
				
				}
				if(d=='6')
				{
						flag=0;
				
				}
		//				
//		 

//         SBUF = d;

         RI = 0;
      }
   }
