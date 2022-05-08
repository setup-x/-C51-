#include"lcd1602.h"

#define     LCD_DATA_P_K   P2
#define     L               0
#define     H               1

sbit LCD_E          =       P0 ^ 2;
sbit LCD_WR         =       P0 ^ 3;
sbit LCD_RS         =       P0 ^ 4;



void Lcd_Config()
{
    Lcd_W_Cmd(0x38);
    Lcd_W_Cmd(0x0c);
    Lcd_W_Cmd(0x06);
    delay_ms(1);
}

void Lcd_Clear()
{
    Lcd_W_Cmd(0x01);
    delay_ms(1);
}


void Lcd_W_Cmd(char lcd_cmd)
{
    LCD_RS = L;
    LCD_WR = L;
    LCD_DATA_P_K = lcd_cmd;
    LCD_E = 0;
    LCD_E = 1;
    delay_ms(1);
    LCD_E = 0;
}

void Lcd_W_Data(char lcd_data)
{
    LCD_RS = H;
    LCD_WR = L;
    LCD_DATA_P_K = lcd_data;
    LCD_E = 0;
    LCD_E = 1;
    delay_ms(1);
    LCD_E = 0;
    //delay_ms(1);
}


void Lcd_Draw_hollow()
{
    Lcd_W_Data(0x48);
    Lcd_W_Data(0x6f);
    Lcd_W_Data(0x6c);
    Lcd_W_Data(0x6c);
    Lcd_W_Data(0x6f);
    Lcd_W_Data(0x77);

    Lcd_W_Data(0xa0);

    Lcd_W_Data(0x57);
    Lcd_W_Data(0x6f);
    Lcd_W_Data(0x72);
    Lcd_W_Data(0x6c);
    Lcd_W_Data(0x64);

    Lcd_W_Data(0xa0);

    Lcd_W_Data(0xa5);
}

