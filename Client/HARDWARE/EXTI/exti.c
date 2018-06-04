#include "exti.h"
#include "24l01.h"
#include "delay.h"
#include "stdio.h"

//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//Mini STM32������
//�ⲿ�ж� ��������			   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2010/12/01  
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2009-2019
//All rights reserved	  
////////////////////////////////////////////////////////////////////////////////// 	  
 
 
//�ⲿ�жϳ�ʼ������
void EXTIX_Init(void)
{
 
    EXTI_InitTypeDef EXTI_InitStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);//�ⲿ�жϣ���Ҫʹ��AFIOʱ��

  	GPIO_EXTILineConfig(GPIO_PortSourceGPIOD,GPIO_PinSource2);

  	EXTI_InitStructure.EXTI_Line=EXTI_Line2;
  	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;	
  	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;//�½��ش���
  	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
  	EXTI_Init(&EXTI_InitStructure);	 	//����EXTI_InitStruct��ָ���Ĳ�����ʼ������EXTI�Ĵ���

  	NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;			//ʹ�ܰ������ڵ��ⲿ�ж�ͨ��
  	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;	//��ռ���ȼ�2 
  	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;					//�����ȼ�1
  	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;								//ʹ���ⲿ�ж�ͨ��
  	NVIC_Init(&NVIC_InitStructure);  	  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ���	
}

volatile u8 RT_flag;
extern u8 buf[32];

void EXTI2_IRQHandler(void)
{

	u8 sta;
    delay_ms(10);
	if(EXTI_GetITStatus(EXTI_Line2) != RESET) 
	{
		sta=NRF24L01_Read_Reg(STATUS);  //��ȡ״̬�Ĵ�����ֵ	   
		NRF24L01_Write_Reg(NRF_WRITE_REG+STATUS,sta); //���TX_DS��MAX_RT�жϱ�־
		if(sta&MAX_TX)//�ﵽ����ط�����
		{
			NRF24L01_Write_Reg(FLUSH_TX,0xff);//���TX FIFO�Ĵ��� 
			NRF24L01_Write_Reg(STATUS,MAX_TX);
			RT_flag =  MAX_TX; 
		}
		else if(sta&TX_OK)//�������
		{
			RT_flag = TX_OK;
		}
		else if(sta&RX_OK)//���յ�����
		{
			NRF24L01_Read_Buf(RD_RX_PLOAD,buf,RX_PLOAD_WIDTH);//��ȡ����
			NRF24L01_Write_Reg(FLUSH_RX,0xff);//���RX FIFO�Ĵ��� 
			RT_flag = RX_OK; 
		}	 
		else
		{
			RT_flag = 0xff;
		}
	  
		printf("%x\t",RT_flag);
	}
	EXTI_ClearITPendingBit(EXTI_Line2);  //���EXTI0��·����λ
}
