#include "WM.h"
#include "stdint.h"
#include "stdio.h"

void Wait_page(void);

/*********************************************************************
*
*       _bmWhiteCircle_6x6
*/
static GUI_CONST_STORAGE unsigned long acWhiteCircle_6x6[] = {
  0xF2FFFFFF, 0x81FFFFFF, 0x26FFFFFF, 0x26FFFFFF, 0x81FFFFFF, 0xF2FFFFFF,
  0x7AFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x7CFFFFFF,
  0x23FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x22FFFFFF,
  0x23FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x22FFFFFF,
  0x7BFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x7AFFFFFF,
  0xF1FFFFFF, 0x80FFFFFF, 0x25FFFFFF, 0x25FFFFFF, 0x80FFFFFF, 0xF1FFFFFF
};

static GUI_CONST_STORAGE GUI_BITMAP _bmWhiteCircle_6x6 = {
  6, /* XSize */
  6, /* YSize */
  24, /* BytesPerLine */
  32, /* BitsPerPixel */
  (unsigned char *)acWhiteCircle_6x6,  /* Pointer to picture data */
  NULL,  /* Pointer to palette */
  GUI_DRAW_BMP8888
};

/*********************************************************************
*
*       _bmWhiteCircle_10x10
*/
static GUI_CONST_STORAGE unsigned long acWhiteCircle_10x10[] = {
  0xFFFFFFFF, 0xFEFFFFFF, 0xBCFFFFFF, 0x51FFFFFF, 0x1AFFFFFF, 0x1AFFFFFF, 0x51FFFFFF, 0xBCFFFFFF, 0xFEFFFFFF, 0xFFFFFFFF,
  0xFAFFFFFF, 0x85FFFFFF, 0x07FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x07FFFFFF, 0x85FFFFFF, 0xFAFFFFFF,
  0xAEFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0xAFFFFFFF,
  0x4AFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x4BFFFFFF,
  0x1BFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x17FFFFFF,
  0x1BFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x1AFFFFFF,
  0x4AFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x4AFFFFFF,
  0xAFFFFFFF, 0x01FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x01FFFFFF, 0xAEFFFFFF,
  0xFAFFFFFF, 0x82FFFFFF, 0x05FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x05FFFFFF, 0x82FFFFFF, 0xFAFFFFFF,
  0xFFFFFFFF, 0xFDFFFFFF, 0xBAFFFFFF, 0x50FFFFFF, 0x19FFFFFF, 0x19FFFFFF, 0x4FFFFFFF, 0xBAFFFFFF, 0xFDFFFFFF, 0xFFFFFFFF
};

GUI_CONST_STORAGE GUI_BITMAP _bmWhiteCircle_10x10 = {
  10, /* XSize */
  10, /* YSize */
  40, /* BytesPerLine */
  32, /* BitsPerPixel */
  (unsigned char *)acWhiteCircle_10x10,  /* Pointer to picture data */
  NULL,  /* Pointer to palette */
  GUI_DRAW_BMP8888
};


static uint32_t idx = 0;

static void _cbBk(WM_MESSAGE * pMsg) 
{
	uint16_t   xPos, Step = 20, i;
	const GUI_BITMAP * pBm;

	switch (pMsg->MsgId) 
	{
		/* 桌面窗口的重绘 */
		case WM_PAINT:
			GUI_DrawGradientV(0, 0, LCD_GetXSize()-1, LCD_GetYSize() - 1, GUI_WHITE, GUI_GRAY);   
			for (i = 0, xPos = LCD_GetXSize() / 2 - 2 * Step; i < 5; i++, xPos += Step) 
			{
				pBm = (idx == i) ? &_bmWhiteCircle_10x10 : &_bmWhiteCircle_6x6;
				GUI_DrawBitmap(pBm, xPos - pBm->XSize / 2, 160-pBm->YSize/2);
			}
	    break;
			
	}
}

void Wait_page(void)
{
	
	uint8_t loop = 16 ;
	GUI_RECT Rect = {50, 155, 200, 165};

	/* 设置桌面窗口的回调函数 */
	WM_SetCallback(WM_HBKWIN, _cbBk);

	/* 设置启动界面的动态显示 */
	while (loop--)
	{
		idx = (16- loop) % 5;
		/* 让指定区域无效从而触发回调函数的WM_PAINT重绘消息 */
		WM_InvalidateArea(&Rect);
		GUI_Delay(200);
	}
}
