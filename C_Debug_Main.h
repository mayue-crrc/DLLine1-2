#ifndef C_DEBUG_MAIN_H
#define C_DEBUG_MAIN_H


#include <QDialog>
#include "CGlobal.h"
#include <qevent.h>
#include <qmutex.h>
#include <qtimer.h>
#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBDM_BUTTON_VERINF       0x0001
#define ID_PIBDM_BUTTON_LIFESINGAL   0x0002
#define ID_PIBDM_BUTTON_RIOMDEBUG    0x0003
#define ID_PIBDM_BUTTON_FRESHTIME    0x0004
#define ID_PIBDM_BUTTON_DATACONTROL  0x0005
#define ID_PIBDM_BUTTON_RETURN       0x0006
#define ID_PIBDM_BUTTON_RIOMDEBUGINFO 0x0007
#define ID_PIBDM_LABEL_TEMP_IN_HMI   0x0008
#define ID_PIBDM_LABEL_UDP_NUM       0x0009
#define ID_PIBDM_LABEL_HMI_TC1orTC2  0x000A
#define ID_PIBDM_LABEL_MVBorUDP      0x000B
//#define ID_PIBDM_BUTTON_SCREENRECTIFY      0x000C
#define ID_PIBDM_BUTTON_RAWSETTING      0x000D
#define  ID_PIBDM_LABEL_NUM1          0x0011
#define  ID_PIBDM_LABEL_NUM2          0x0012
#define  ID_PIBDM_LABEL_NUM3         0x0013
#define  ID_PIBDM_LABEL_NUM4          0x0014
#define  ID_PIBDM_LABEL_NUM5         0x0015
#define  ID_PIBDM_LABEL_NUM6          0x0016
#define  ID_PIBDM_LABEL_NUM7          0x0017
#define  ID_PIBDM_LABEL_NUM8          0x0018
#define  ID_PIBDM_LABEL_NUM9          0x0019
#define  ID_PIBDM_LABEL_NUM10          0x001a
#define  ID_PIBDM_LABEL_NUM11          0x001b
#define  ID_PIBDM_LABEL_NUM12          0x001c
#define  ID_PIBDM_LABEL_NUM13          0x001d
#define  ID_PIBDM_LABEL_NUM14          0x001e
#define  ID_PIBDM_LABEL_NUM15          0x001f
#define  ID_PIBDM_LABEL_NUM16          0x0020
#define  ID_PIBDM_LABEL_NUM17          0x0021
#define  ID_PIBDM_LABEL_NUM18          0x0022
#define  ID_PIBDM_LABEL_NUM19          0x0023
#define ID_PIBDM_BUTTON_ATCTEST        0x0024

class CDebugMainPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDebugMainPage)


public:
    CDebugMainPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnBtn1Clk();
    void OnBtn2Clk();
    void OnBtn3Clk();
    void OnBtn4Clk();
    void OnBtn5Clk();
    void OnBtn6Clk();
    void OnBtn7Clk();
    //void OnBtn8Clk();
    void OnBtn9Clk();
    void OnBtn10Clk();

};


#endif // C_DEBUG_MAIN_H
