#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "myiic.h"

int main(void)
{
	delay_init();            //��ʱ������ʼ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�����ж����ȼ�����Ϊ��2��2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);      //���ڳ�ʼ��Ϊ115200
	IIC_Init();         //IIC��ʼ��


	while(1)
	{
		scan_key(); //ɨ�谴��
		delay_ms(1000);

	}
}








