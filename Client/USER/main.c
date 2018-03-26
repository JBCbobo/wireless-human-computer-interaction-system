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
#include "fontupd.h"
#include "exfuns.h"
#include "DIALOG.h"
#include "GUIDemo.h"
#include "24l01.h"
#include "led.h"


/************************************************
 ALIENTEK MiniSTM32������STemWinʵ��
 STemWin ��ֲʵ��
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/

int main(void)
{	
    GUI_HWIN HWIN;
 	delay_init();	    	//��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200
	TFTLCD_Init();			//LCD��ʼ��	
	KEY_Init();	 			//������ʼ��
    LED_Init();
 	TP_Init();				//��������ʼ��
	TIM3_Int_Init(999,71);	//1KHZ ��ʱ��1ms 
	TIM6_Int_Init(999,719);	//10ms�ж�
	mem_init(); 			//��ʼ���ڲ��ڴ��
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_CRC,ENABLE);//ʹ��CRCʱ�ӣ�����STemWin����ʹ�� 
	WM_SetCreateFlags(WM_CF_MEMDEV);
    LCD_Display_Dir(0);
    exfuns_init();
    f_mount(fs[1],"1",1);
    font_init();
    NRF24L01_Init();
	GUI_Init();
    
    while(NRF24L01_Check())
    {
        GUI_SetBkColor(BLACK);
        GUI_SetColor(WHITE);
        GUI_SetFont(&GUI_FontHZ24);
        GUI_Clear();
        GUI_DispStringHCenterAt("������",120,50);
        GUI_Delay(1000);
    }
    HWIN = CreateFramewin();
    while(1)
    {
        SendKeyMsg();
        GUI_Delay(20);
    }

}


