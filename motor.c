#include "motor.h"
#include "delay.h"

void go_on(void)
{
	la=1;
	lb=0;
	ra=1;
	rb=0;


}



void go_after(void)
{
	
	la=0;
	lb=1;
	ra=0;
	rb=1;

}

void p_down(void)
{
	
	la=0;
	lb=0;
	ra=0;
	rb=0;



}

void go_l(void)
{
	
	ra=1;
	rb=0;
	
	la=0;
	lb=0;

}
void go_r(void)
{
	la=1;
	lb=0;
	
	ra=0;
	rb=0;
}

