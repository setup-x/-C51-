#include "delay.h"

//定时一个全局变量 cnt,表示要延时多少个毫秒
    int cnt = 0;

    //比较精准的延时 n 个毫秒
    void delay_ms(int n)
    {
        cnt = n;

        // 1. 配置T0,让它每隔1ms产生一次中断。 方式0
        TMOD = TMOD &  ~0X0F; //保留TMOD的高4位，把低四位清0
                // GATE  C/T# M1 M0
                //  0     0    0  0 
        TH0 = 0XE3;
        TL0 = 0X07;

        ET0 = 1; //定时器T0的中断开关 打开
        EA = 1;  //中断总开关 打开

        TR0 = 1; //启动定时器 T0

        // 2. 等 cnt 变0
        while (cnt > 0);

        // 3. 关闭定时器T0
        TR0 = 0;
    }


    //配置T0每隔1ms产生一次T0溢出中断
    void T0_ISR(void) interrupt 1
    {
        TH0 = 0XE3;
        TL0 = 0X07;

        if (cnt > 0)
        {
            cnt--;
        }
    }

