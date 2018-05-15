#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "myiic.h"

int main(void)
{
	delay_init();            //延时函数初始化
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
	uart_init(115200);      //串口初始化为115200
	IIC_Init();         //IIC初始化


	while(1)
	{
		scan_key(); //扫描按键
		delay_ms(1000);

	}
}








