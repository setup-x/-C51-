#ifndef __KEY_H__
#define __KEY_H__

#include<reg52.h>

#define KEY1 1
#define KEY2 2
#define KEY3 3
#define KEY4 4

sbit k1=P3^3;
sbit k2=P3^4;
sbit k3=P3^6;
sbit k4=P3^7;
extern int key_ctrl(int key_num);

extern int is_all(void);
#endif