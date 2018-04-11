#ifndef __FramewinDLG_H_
#define __FramewinDLG_H_

#include "DIALOG.h"


#define MSG_UPDATE_DATA (WM_USER + 5)


#define ID_FRAMEWIN_0 (GUI_ID_USER + 0x00)
#define ID_DROPDOWN_0 (GUI_ID_USER + 0x01)
#define ID_BUTTON_0 (GUI_ID_USER + 0x02)
#define ID_TEXT_0 (GUI_ID_USER + 0x03)
#define ID_BUTTON_1 (GUI_ID_USER + 0x04)
#define ID_TEXT_1 (GUI_ID_USER + 0x05)
#define ID_EDIT_0 (GUI_ID_USER + 0x06)
#define ID_TEXT_2 (GUI_ID_USER + 0x07)
#define ID_TEXT_3 (GUI_ID_USER + 0x08)
#define ID_TEXT_4 (GUI_ID_USER + 0x09)
#define ID_TEXT_5 (GUI_ID_USER + 0x0A)
#define ID_EDIT_1 (GUI_ID_USER + 0x0B)
#define ID_EDIT_2 (GUI_ID_USER + 0x0C)
#define ID_EDIT_3 (GUI_ID_USER + 0x0D)
#define ID_TEXT_6 (GUI_ID_USER + 0x0E)
#define ID_TEXT_7 (GUI_ID_USER + 0x0F)
#define ID_EDIT_4 (GUI_ID_USER + 0x10)
#define ID_EDIT_5 (GUI_ID_USER + 0x11)
#define ID_BUTTON_2 (GUI_ID_USER + 0x12)
#define ID_BUTTON_3 (GUI_ID_USER + 0x13)
#define ID_BUTTON_4 (GUI_ID_USER + 0x14)
#define ID_BUTTON_5 (GUI_ID_USER + 0x15)


WM_HWIN CreateFramewin(void);
void _SendMsg(void);

#endif
