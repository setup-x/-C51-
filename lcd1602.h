#ifndef  __LCD1602_H__
#define  __LCD1602_H__

#include<reg52.h>
#include"delay.h"

void Lcd_Config();

void Lcd_W_Cmd(char lcd_cmd);

void Lcd_W_Data(char lcd_data);
void Lcd_Draw_hollow();

void Lcd_Clear();

#endif
