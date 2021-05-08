#include "led.h"
#include "delay.h"
#include "sys.h"
//ALIENTEK miniSTM32������ʵ��1
//������ʵ��  
//����֧�֣�www.openedv.com
//�������������ӿƼ����޹�˾
 int main(void)
 {	
	delay_init();	    	 //��ʱ������ʼ��	  
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	while(1)
	{
		LED0=0;
		LED1=1;
		delay_ms(300);	 //��ʱ300ms
		LED0=1;
		LED1=0;
		delay_ms(300);	//��ʱ300ms
	}
 }

