#include "key.h"
#include "stdlib.h"
#include "GUI.h"
#include "WM.h"
#include "delay.h"
#include "sys.h" 


uint8_t KeyDesk[] = 
{	
	
	'.',  '0',  'E',  'D',     //'Y'表示yes        确定键	
	
	'3',  '2',  '1',  'C',     //'D'表示delete     回删键
	
	'6',  '5',  '4',  'B',     //'E'表示eliminate  清除键
	
	'9',  '8',  '7',  'A'      //'C'表示cancle     取消键
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
	            //按键对应的码表
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
        case 'M':GUI_SendKeyMsg(GUI_KEY_INSERT,1);break;
        case 'D':GUI_SendKeyMsg(GUI_KEY_RIGHT,1);break;
        case 'E':GUI_SendKeyMsg(GUI_KEY_TAB ,1);break;
        
        case 'C':GUI_SendKeyMsg(GUI_KEY_BACKSPACE,1);break;
        case 'Y':GUI_SendKeyMsg(GUI_KEY_ENTER,1);break;
        default:GUI_SendKeyMsg(key_value,1);break;
    }
}







