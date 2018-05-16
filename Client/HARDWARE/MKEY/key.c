#include "key.h"
#include "stdlib.h"
#include "GUI.h"
#include "WM.h"
#include "delay.h"
#include "sys.h" 


uint8_t KeyDesk[] = 
{	
	
	'H',  'E',  'Y',  'T',     //'Y'表示yes        确定键	
};
 
//IO低4位输出低电平
static void GPIO_Configuration1(void)
{
	//8位为推挽输出
	GPIOC->CRL &= 0X00000000;
	GPIOC->CRL |= 0X33333333;//最大输出速度50M
    
	//初值:低4位为低,次低4位为高
	GPIOC->ODR &= 0XFF00;
	GPIOC->ODR |= 0X00F0;
    
	//次低4位为上拉输入
	GPIOC->CRL &= 0X0000FFFF;
	GPIOC->CRL |= 0X88880000;
}

//IO口低4位输出高电平
static void GPIO_Configuration2(void)
{
	//8位为推挽输出
	GPIOC->CRL &= 0X00000000;
	GPIOC->CRL |= 0X33333333;
    
	//翻转:低4位为高,次低4位为低
	GPIOC->ODR &= 0XFF00;
	GPIOC->ODR |= 0X000F;
    
	//低4位为上拉输入
	GPIOC->CRL &= 0XFFFF0000;
	GPIOC->CRL |= 0X00008888; 
}

//按键初始化函数
void KEY_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_Configuration1();
} 

//stm32矩阵键盘翻转扫描法
//将此矩阵键盘扫描程序放在定时器中断服务程序里
//每10ms进入一次中断服务程序
uint8_t scan_MatrixKey(void)
{
	uint16_t column=0;//列
	uint16_t row=0;//行
	uint16_t tmp=0;//临时变量
	uint8_t MatrixKey_value = '*';//初始值不能为0~15，返回键值
	GPIO_Configuration1();
	tmp = PORT;
	if((PORT&0X00F0)!=0X00F0)//如果按键按下
	{
        delay_us(100);
		tmp = PORT;
		if((PORT&0X00F0)!=0X00F0)//延时消抖
		{   	
	        column = tmp & 0X00F0;//获取列号 
	        GPIO_Configuration2();
	        row = PORT & 0X000F;//获取行号    	
	        switch ((uint8_t)((column | row)))//column|row为按键被按下对应端口的编码 注意IO使用的是高八位还是低八位。
	        {   
				case 0xE5: MatrixKey_value = KeyDesk[3];break;
				case 0xD5: MatrixKey_value = KeyDesk[2];break;
				case 0xB5: MatrixKey_value = KeyDesk[1];break;
				case 0x75: MatrixKey_value = KeyDesk[0];break;
	            default:   break;     
	        }
		while((PORT&0x000F)!=0x000F);			//松手检测		
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







