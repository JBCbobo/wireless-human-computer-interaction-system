#include "delay.h"
#include "key.h"
#include "sys.h"
#include "ILI93xx.h"
#include "usart.h"	 
#include "24cxx.h"
#include "flash.h"
#include "touch.h"
#include "sram.h"
#include "timer.h"
#include "malloc.h"
#include "GUI.h"
#include "FramewinDLG.h"
#include "EmWinHZFont.h"
#include "ff.h"
#include "exfuns.h"
#include "DIALOG.h"
#include "GUIDemo.h"
#include "24l01.h"
#include "led.h"

extern GUI_CONST_STORAGE GUI_FONT GUI_Fontfont12;
/************************************************
 ALIENTEK MiniSTM32开发板STemWin实验
 STemWin 移植实验
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

int main(void)
{	
	GUI_HWIN HWIN;
    
	delay_init();	    	//延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化为115200
    KEY_Init();	 			//按键初始化
	LED_Init();
    TFTLCD_Init();			//LCD初始化	
	TP_Init();				//触摸屏初始化
	TIM3_Int_Init(999,71);	//1KHZ 定时器1ms 
	TIM6_Int_Init(999,719);	//10ms中断
	//TIM2_Int_Init(4999,71);    //500ms中断
	mem_init(); 			//初始化内部内存池
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_CRC,ENABLE);//使能CRC时钟，否则STemWin不能使用 
	WM_SetCreateFlags(WM_CF_MEMDEV);
	LCD_Display_Dir(0);
	NRF24L01_Init();
	GUI_Init();
    while(NRF24L01_Check())
    {
    }
    HWIN = CreateFramewin();
    while(1)
    {
        SendKeyMsg();
        GUI_Delay(20);

    }

}

