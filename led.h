#ifndef __LED_H__
#define __LED_H__

#include<reg52.h>

extern void led_ctrl(int led_num,int led_statu);


#define LED_D1 1
#define LED_D2 2
#define LED_D3 3
#define LED_D4 4
#define LED_D5 5
#define LED_D6 6
#define LED_D7 7
#define LED_D8 8


sbit D1=P1^0;
sbit D2=P1^1;
sbit D3=P1^2;
sbit D4=P1^3;
sbit D5=P1^4;
sbit D6=P1^5;
sbit D7=P1^6;
sbit D8=P1^7;

#define LED_ON 0
#define LED_OFF 1

extern void my_delay(int num);

#endif