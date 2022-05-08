#include "key.h"

int key_ctrl(int key_num)
{
		switch(key_num)
		{
			case KEY1:
				return k1;
			case KEY2:
				return k2;
			case KEY3:
				return k3;
			case KEY4:
				return k4;
		
		}
		return 1;



}

int is_all(void)
{
	int i=0;
	i=key_ctrl(KEY1)+key_ctrl(KEY2)+key_ctrl(KEY3)+key_ctrl(KEY4);
	
	if(i<=2)
		return 0;
	else
		return 1;

}
	