#include "beep.h"

sbit beep=P0 ^ 7; 

void beep_ctrl(int beep_statu)
{
	beep=beep_statu;

}