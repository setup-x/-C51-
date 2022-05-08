#include "track.h"
#include "delay.h"
#include "motor.h"


void xunji()
{
	if(red_l==0&&red_r==0)
			{
				
				go_on();
    				delay_ms(10);
				p_down();
			
				
			}
			if(red_l==0&&red_r==1)	
			{
				
				go_r();
				delay_ms(10);
				p_down();
				
			}
			if(red_l==1&&red_r==0) 
			{
				
				go_l();
				delay_ms(10);
				p_down();
				
			}
}


