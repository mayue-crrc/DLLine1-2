#ifndef C_PAGE_EMERGENCY_BROADCAST_H
#define C_PAGE_EMERGENCY_BROADCAST_H


#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;
#define ID_PIBIB_BUTTON_L1R1         0x0001
#define ID_PIBIB_BUTTON_L1R2         0x0002
#define ID_PIBIB_BUTTON_L1R3         0x0003
#define ID_PIBIB_BUTTON_L1R4         0x0004
#define ID_PIBIB_BUTTON_L1R5         0x0005
#define ID_PIBIB_BUTTON_L2R1         0x0006
#define ID_PIBIB_BUTTON_L2R2         0x0007
#define ID_PIBIB_BUTTON_L2R3         0x0008
#define ID_PIBIB_BUTTON_L2R4         0x0009
#define ID_PIBIB_BUTTON_L2R5         0x000A
#define ID_PIBIB_BUTTON_L3R1         0x000B
#define ID_PIBIB_BUTTON_L3R2         0x000C
#define ID_PIBIB_BUTTON_L3R3         0x000D
#define ID_PIBIB_BUTTON_L3R4         0x000E
#define ID_PIBIB_BUTTON_L3R5         0x000F
#define ID_PIBIB_BUTTON_L4R1         0x0010
#define ID_PIBIB_BUTTON_L4R2         0x0011
#define ID_PIBIB_BUTTON_L4R3         0x0012
#define ID_PIBIB_BUTTON_L4R4         0x0013
#define ID_PIBIB_BUTTON_L4R5         0x0014
#define ID_PIBIB_BUTTON_L5R1         0x0015
#define ID_PIBIB_BUTTON_L5R2         0x0016
#define ID_PIBIB_BUTTON_L5R3         0x0017
#define ID_PIBIB_BUTTON_L5R4         0x0018
#define ID_PIBIB_BUTTON_L5R5         0x0019

#define ID_PIBIB_BUTTON_IBSTOP       0x001A



class CInstancyBroadcastPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CInstancyBroadcastPage)
public:
    CInstancyBroadcastPage();

private:
    void SetBtnDown(int nBtnID);

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void On1BtnClk();
    void On2BtnClk();
    void On3BtnClk();
    void On4BtnClk();
    void On5BtnClk();
    void On6BtnClk();
    void On7BtnClk();
    void On8BtnClk();
    void OnIBCStopBpBtnClk();
    int m_Emergency_PrePageIndex;

    bool m_bStart_FireAlarm;
    bool m_bStart_EmergEvacuation;
    bool m_bStart_WaitRescue;


    int set_timer_FireAlarm;
    int set_timer_EmergEvacuation;
    int set_timer_WaitRescue;


};

#endif // C_PAGE_EMERGENCY_BROADCAST_H
