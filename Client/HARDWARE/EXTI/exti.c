#include "exti.h"
#include "24l01.h"
#include "delay.h"
#include "stdio.h"

//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//Mini STM32开发板
//外部中断 驱动代码			   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2010/12/01  
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved	  
////////////////////////////////////////////////////////////////////////////////// 	  
 
 
//外部中断初始化函数
void EXTIX_Init(void)
{
 
    EXTI_InitTypeDef EXTI_InitStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);//外部中断，需要使能AFIO时钟

  	GPIO_EXTILineConfig(GPIO_PortSourceGPIOD,GPIO_PinSource2);

  	EXTI_InitStructure.EXTI_Line=EXTI_Line2;
  	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;	
  	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;//下降沿触发
  	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  	EXTI_Init(&EXTI_InitStructure);	 	//根据EXTI_InitStruct中指定的参数初始化外设EXTI寄存器

  	NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;			//使能按键所在的外部中断通道
  	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;	//抢占优先级2 
  	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;					//子优先级1
  	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;								//使能外部中断通道
  	NVIC_Init(&NVIC_InitStructure);  	  //根据NVIC_InitStruct中指定的参数初始化外设NVIC寄存器	
}

volatile u8 RT_flag;
extern u8 buf[32];

void EXTI2_IRQHandler(void)
{

	u8 sta;
    delay_ms(10);
	if(EXTI_GetITStatus(EXTI_Line2) != RESET) 
	{
		sta=NRF24L01_Read_Reg(STATUS);  //读取状态寄存器的值	   
		NRF24L01_Write_Reg(NRF_WRITE_REG+STATUS,sta); //清除TX_DS或MAX_RT中断标志
		if(sta&MAX_TX)//达到最大重发次数
		{
			NRF24L01_Write_Reg(FLUSH_TX,0xff);//清除TX FIFO寄存器 
			NRF24L01_Write_Reg(STATUS,MAX_TX);
			RT_flag =  MAX_TX; 
		}
		else if(sta&TX_OK)//发送完成
		{
			RT_flag = TX_OK;
		}
		else if(sta&RX_OK)//接收到数据
		{
			NRF24L01_Read_Buf(RD_RX_PLOAD,buf,RX_PLOAD_WIDTH);//读取数据
			NRF24L01_Write_Reg(FLUSH_RX,0xff);//清除RX FIFO寄存器 
			RT_flag = RX_OK; 
		}	 
		else
		{
			RT_flag = 0xff;
		}
	  
		printf("%x\t",RT_flag);
	}
	EXTI_ClearITPendingBit(EXTI_Line2);  //清除EXTI0线路挂起位
}
