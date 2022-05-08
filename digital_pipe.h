#ifndef __DIGITALPIPE_H__
#define __DIGITALPIPE_H__

#include<reg52.h>

sbit D_1=P1^0;
sbit D_2=P1^1;
sbit D_3=P1^2;
sbit D_4=P1^3;

#define WEI0 1
#define WEI1 2
#define WEI2 3
#define WEI3 4



void display(int w,int n,int d);

#endif