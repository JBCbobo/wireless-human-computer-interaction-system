#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
#define PORT GPIOB->IDR 
void KEY_Init(void);		                  //IO��ʼ��
uint8_t scan_MatrixKey(void);	                //���󰴼�ɨ�躯��
void SendKeyMsg(void);
#endif
