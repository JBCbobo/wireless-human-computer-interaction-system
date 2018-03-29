#include "key.h"
#include "stdlib.h"
#include "GUI.h"
#include "WM.h"
#include "delay.h"
#include "sys.h" 


uint8_t KeyDesk[] = 
{	
	
	'M',  '9',  '8',  '7',     //'Y'��ʾyes        ȷ����	
	
	'D',  '6',  '5',  '4',     //'D'��ʾdelete     ��ɾ��
	
	'E',  '3',  '2',  '1',     //'E'��ʾeliminate  �����
	
	'Y',  'C',  '.',  '0'      //'C'��ʾcancle     ȡ����
};
 
//IO��4λ����͵�ƽ
static void GPIO_Configuration1(void)
{
	//8λΪ�������
	GPIOB->CRH &= 0X00000000;
	GPIOB->CRH |= 0X33333333;//�������ٶ�50M
    
	//��ֵ:��4λΪ��,�ε�4λΪ��
	GPIOB->ODR &= 0X00FF;
	GPIOB->ODR |= 0XF000;
    
	//�ε�4λΪ��������
	GPIOB->CRH &= 0X0000FFFF;
	GPIOB->CRH |= 0X88880000;
}

//IO�ڵ�4λ����ߵ�ƽ
static void GPIO_Configuration2(void)
{
	//8λΪ�������
	GPIOB->CRH &= 0X00000000;
	GPIOB->CRH |= 0X33333333;
    
	//��ת:��4λΪ��,�ε�4λΪ��
	GPIOB->ODR &= 0X00FF;
	GPIOB->ODR |= 0X0F00;
    
	//��4λΪ��������
	GPIOB->CRH &= 0XFFFF0000;
	GPIOB->CRH |= 0X00008888; 
}

//������ʼ������
void KEY_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
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
	if((PORT&0XF000)!=0XF000)//�����������
	{
        delay_us(100);
		tmp = PORT;
		if((PORT&0XF000)!=0XF000)//��ʱ����
		{   	
	        column = tmp & 0XF000;//��ȡ�к� 
	        GPIO_Configuration2();
	        row = PORT & 0X0F00;//��ȡ�к�                                         
	        switch ((uint8_t)((column | row)>>8))//column|rowΪ���������¶�Ӧ�˿ڵı��� ע��IOʹ�õ��Ǹ߰�λ���ǵͰ�λ��
	        {   
	            //������Ӧ�����
				case 0XEE: MatrixKey_value = KeyDesk[15]; break;
	            case 0XDE: MatrixKey_value = KeyDesk[14]; break;
	            case 0XBE: MatrixKey_value = KeyDesk[13]; break;                
	            case 0X7E: MatrixKey_value = KeyDesk[12]; break;                                              
	            case 0XED: MatrixKey_value = KeyDesk[11]; break;
	            case 0XDD: MatrixKey_value = KeyDesk[10]; break;
	            case 0XBD: MatrixKey_value = KeyDesk[9];  break;
	            case 0X7D: MatrixKey_value = KeyDesk[8];  break;                                  
	            case 0XEB: MatrixKey_value = KeyDesk[7];  break;
	            case 0XDB: MatrixKey_value = KeyDesk[6];  break;
	            case 0XBB: MatrixKey_value = KeyDesk[5];  break;
	            case 0X7B: MatrixKey_value = KeyDesk[4];  break;                                    
	            case 0XE7: MatrixKey_value = KeyDesk[3];  break;
	            case 0XD7: MatrixKey_value = KeyDesk[2];  break;
	            case 0XB7: MatrixKey_value = KeyDesk[1];  break;
	            case 0X77: MatrixKey_value = KeyDesk[0];  break;
	            default:   break;     
	        }
		while((PORT&0x0F00)!=0x0F00);			//���ּ��		
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
        case 'M':GUI_SendKeyMsg(GUI_KEY_INSERT,1);break;
        case 'D':GUI_SendKeyMsg(GUI_KEY_RIGHT,1);break;
        case 'E':GUI_SendKeyMsg(GUI_KEY_LEFT,1);break;
        case 'C':GUI_SendKeyMsg(GUI_KEY_BACKSPACE,1);break;
        case 'Y':GUI_SendKeyMsg(GUI_KEY_ENTER,1);break;
        default:GUI_SendKeyMsg(key_value,1);break;
    }
}






