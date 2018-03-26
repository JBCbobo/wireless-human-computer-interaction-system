#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
#define PORT GPIOB->IDR 
void KEY_Init(void);		                  //IO初始化
uint8_t scan_MatrixKey(void);	                //矩阵按键扫描函数
void SendKeyMsg(void);
#endif
