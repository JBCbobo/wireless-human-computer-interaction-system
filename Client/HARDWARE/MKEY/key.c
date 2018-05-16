#include "key.h"
#include "stdlib.h"
#include "GUI.h"
#include "WM.h"
#include "delay.h"
#include "sys.h" 


uint8_t KeyDesk[] = 
{	
	
	'H',  'E',  'Y',  'T',     //'Y'��ʾyes        ȷ����	
};
 
//IO��4λ����͵�ƽ
static void GPIO_Configuration1(void)
{
	//8λΪ�������
	GPIOC->CRL &= 0X00000000;
	GPIOC->CRL |= 0X33333333;//�������ٶ�50M
    
	//��ֵ:��4λΪ��,�ε�4λΪ��
	GPIOC->ODR &= 0XFF00;
	GPIOC->ODR |= 0X00F0;
    
	//�ε�4λΪ��������
	GPIOC->CRL &= 0X0000FFFF;
	GPIOC->CRL |= 0X88880000;
}

//IO�ڵ�4λ����ߵ�ƽ
static void GPIO_Configuration2(void)
{
	//8λΪ�������
	GPIOC->CRL &= 0X00000000;
	GPIOC->CRL |= 0X33333333;
    
	//��ת:��4λΪ��,�ε�4λΪ��
	GPIOC->ODR &= 0XFF00;
	GPIOC->ODR |= 0X000F;
    
	//��4λΪ��������
	GPIOC->CRL &= 0XFFFF0000;
	GPIOC->CRL |= 0X00008888; 
}

//������ʼ������
void KEY_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_Configuration1();
} 

//stm32������̷�תɨ�跨
//���˾������ɨ�������ڶ�ʱ���жϷ��������
//ÿ10ms����һ���жϷ������
uint8_t scan_MatrixKey(void)
{
	uint16_t column=0;//��
	uint16_t row=0;//��
	uint16_t tmp=0;//��ʱ����
	uint8_t MatrixKey_value = '*';//��ʼֵ����Ϊ0~15�����ؼ�ֵ
	GPIO_Configuration1();
	tmp = PORT;
	if((PORT&0X00F0)!=0X00F0)//�����������
	{
        delay_us(100);
		tmp = PORT;
		if((PORT&0X00F0)!=0X00F0)//��ʱ����
		{   	
	        column = tmp & 0X00F0;//��ȡ�к� 
	        GPIO_Configuration2();
	        row = PORT & 0X000F;//��ȡ�к�    	
	        switch ((uint8_t)((column | row)))//column|rowΪ���������¶�Ӧ�˿ڵı��� ע��IOʹ�õ��Ǹ߰�λ���ǵͰ�λ��
	        {   
				case 0xE5: MatrixKey_value = KeyDesk[3];break;
				case 0xD5: MatrixKey_value = KeyDesk[2];break;
				case 0xB5: MatrixKey_value = KeyDesk[1];break;
				case 0x75: MatrixKey_value = KeyDesk[0];break;
	            default:   break;     
	        }
		while((PORT&0x000F)!=0x000F);			//���ּ��		
		}

    }
	return MatrixKey_value;
}


void SendKeyMsg(void)
{
    char key_value;
    key_value = scan_MatrixKey();
    switch(key_value)
    {
        case '*':break;
        case 'T':GUI_SendKeyMsg(GUI_KEY_TAB ,1);break;
        case 'Y':GUI_SendKeyMsg(GUI_KEY_ENTER,1);break;
    }
}







