#ifndef __MOTOR_H__
#define __MOTOR_H__


#include<reg52.h>

sbit la=P1^0;
sbit lb=P1^1;
sbit ra=P1^2;
sbit rb=P1^3;

sbit red_l=P1^4;
sbit red_r=P1^5;

void go_on(void);
void go_after(void);
void p_down(void);

void go_l(void);
void go_r(void);

#endif
