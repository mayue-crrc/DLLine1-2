#ifndef C_PAGE_BYPASS_STATUS_H
#define C_PAGE_BYPASS_STATUS_H


#include "CPage.h"
#include "DataBuffer.h"

  //EBCutoff	        紧急制动旁路
#define ID_PIBCARS3_LABEL_CAR1EBCUTOFF        0X0100
#define ID_PIBCARS3_LABEL_CAR2EBCUTOFF        0X0101
#define ID_PIBCARS3_LABEL_CAR3EBCUTOFF        0X0102
#define ID_PIBCARS3_LABEL_CAR4EBCUTOFF        0X0103
#define ID_PIBCARS3_LABEL_CAR5EBCUTOFF        0X0104
#define ID_PIBCARS3_LABEL_CAR6EBCUTOFF        0X0105

    //BrkNoRelsCutoff	制动不缓解旁路
#define ID_PIBCARS3_LABEL_CAR1BRKNORELSCUTOFF        0X0110
#define ID_PIBCARS3_LABEL_CAR2BRKNORELSCUTOFF        0X0111
#define ID_PIBCARS3_LABEL_CAR3BRKNORELSCUTOFF        0X0112
#define ID_PIBCARS3_LABEL_CAR4BRKNORELSCUTOFF        0X0113
#define ID_PIBCARS3_LABEL_CAR5BRKNORELSCUTOFF        0X0114
#define ID_PIBCARS3_LABEL_CAR6BRKNORELSCUTOFF        0X0115
    //ParkBrkCutoff	停放制动旁路
#define ID_PIBCARS3_LABEL_CAR1PARBRKCUTOFF        0X0120
#define ID_PIBCARS3_LABEL_CAR2PARBRKCUTOFF        0X0121
#define ID_PIBCARS3_LABEL_CAR3PARBRKCUTOFF        0X0122
#define ID_PIBCARS3_LABEL_CAR4PARBRKCUTOFF        0X0123
#define ID_PIBCARS3_LABEL_CAR5PARBRKCUTOFF        0X0124
#define ID_PIBCARS3_LABEL_CAR6PARBRKCUTOFF        0X0125
    //ATCDoorCutoff	信号门旁路
#define ID_PIBCARS3_LABEL_CAR1ATCDOORCUTOFF        0X0130
#define ID_PIBCARS3_LABEL_CAR2ATCDOORCUTOFF        0X0131
#define ID_PIBCARS3_LABEL_CAR3ATCDOORCUTOFF        0X0132
#define ID_PIBCARS3_LABEL_CAR4ATCDOORCUTOFF        0X0133
#define ID_PIBCARS3_LABEL_CAR5ATCDOORCUTOFF        0X0134
#define ID_PIBCARS3_LABEL_CAR6ATCDOORCUTOFF        0X0135
  //DoorLineCutoff	门安全线旁路
#define ID_PIBCARS3_LABEL_CAR1DOORLINECUTOFF       0X0140
#define ID_PIBCARS3_LABEL_CAR2DOORLINECUTOFF       0X0141
#define ID_PIBCARS3_LABEL_CAR3DOORLINECUTOFF       0X0142
#define ID_PIBCARS3_LABEL_CAR4DOORLINECUTOFF       0X0143
#define ID_PIBCARS3_LABEL_CAR5DOORLINECUTOFF       0X0144
#define ID_PIBCARS3_LABEL_CAR6DOORLINECUTOFF       0X0145
  //AlertCutoff	警惕旁路
#define ID_PIBCARS3_LABEL_CAR1ALERTCUTOFF       0X0150
#define ID_PIBCARS3_LABEL_CAR2ALERTCUTOFF       0X0151
#define ID_PIBCARS3_LABEL_CAR3ALERTCUTOFF       0X0152
#define ID_PIBCARS3_LABEL_CAR4ALERTCUTOFF       0X0153
#define ID_PIBCARS3_LABEL_CAR5ALERTCUTOFF       0X0154
#define ID_PIBCARS3_LABEL_CAR6ALERTCUTOFF       0X0155
    //ATCCutoff	        ATC切除
#define ID_PIBCARS3_LABEL_CAR1ATCCUTOFF       0X0160
#define ID_PIBCARS3_LABEL_CAR6ATCCUTOFF       0X0165
// EBisOff       电制动切除
#define ID_PIBCARS3_LABEL_CAR1EBISOFF       0X0170
#define ID_PIBCARS3_LABEL_CAR2EBISOFF       0X0171
#define ID_PIBCARS3_LABEL_CAR3EBISOFF       0X0172
#define ID_PIBCARS3_LABEL_CAR4EBISOFF       0X0173
#define ID_PIBCARS3_LABEL_CAR5EBISOFF       0X0174
#define ID_PIBCARS3_LABEL_CAR6EBISOFF       0X0175

#define   ID_PIBCARS3_ICON_WARNNING                0X0001
#define   ID_PIBCARS3_TRAIN                        0X0002
#define   ID_PIBCARS3_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS3_ARROW_LEFT                   0X0004
#define   ID_PIBCARS3_LABEL_ATOMODE               0X0005
#define   ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST    0X0006
#define   ID_PIBCARS3_BUTTON_PAGEUP                0X0007
#define   ID_PIBCARS3_BUTTON_PAGEDOWN              0X0008
#define   ID_PIBCARS3_LABEL_NETVOLTAGE             0X0009
#define   ID_PIBCARS3_LABEL_NECURRENT              0X000A
#define   ID_PIBCARS3_LABEL_DRAWBCUGRADE           0X000B

#define   ID_PIBCARS3_LABEL_CAR1AEROSPEED          0X000D
#define   ID_PIBCARS3_LABEL_CAR6AEROSPEED          0X000E
#define   ID_PIBCARS3_LABEL_CAR1DOOR               0X000F
#define   ID_PIBCARS3_LABEL_CAR6DOOR               0X0010
#define   ID_PIBCARS3_LABEL_CAR1PLACEREMIT         0X0011
#define   ID_PIBCARS3_LABEL_CAR6PLACEREMIT         0X0012
#define   ID_PIBCARS3_LABEL_CAR1COMMONUSEREMIT     0X0013
#define   ID_PIBCARS3_LABEL_CAR6COMMONUSEREMIT     0X0014
#define   ID_PIBCARS3_LABEL_CAR1WINDPRESSLOW       0X0015
#define   ID_PIBCARS3_LABEL_CAR6WINDPRESSLOW       0X0016
#define   ID_PIBCARS3_COMMINTERRUPT                0X0017
#define   ID_PIBCARS3_LABEL_V                      0X0018
#define   ID_PIBCARS3_LABEL_NETMODE                0X0019
#define   ID_PIBCARS3_LABEL_CONTRAVARIANTMODE      0X001A
#define   ID_PIBCARS3_LABEL_WASHCARMODE            0X001B
#define   ID_PIBCARS3_LABEL_A                      0X001C
#define   ID_PIBCARS3_LABEL_TRACTIONMODEL          0X001D
#define   ID_PIBCARS3_LABEL_SPEED                  0X001E
#define   ID_PIBCARS3_BUTTON_EMERGENCYRESCUE       0X001F
#define   ID_PIBCARS3_LABEL_CAR1JJZDHL             0x0020
#define   ID_PIBCARS3_LABEL_CAR6JJZDHL             0x0021

#define     ID_PIBCARS3_BUTTON_FASPAGE             0X0022

#define   ID_PIBCARS3_LABEL_CAR1ATPCUT             0x0023
#define   ID_PIBCARS3_LABEL_CAR6ATPCUT             0x0024

#define   ID_PIBCARS3_LABEL_CAR1ZVBACUT            0x0025
#define   ID_PIBCARS3_LABEL_CAR6ZVBACUT            0x0026

//#define   ID_PIBCARS3_LABEL_TOWMODE                0X0027

#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass1          0x0028
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass2          0x0029
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass3          0x002A
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass4          0x002B
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass5          0x002C
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass6          0x002D
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass7          0x002E
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass8          0x002F


#define   ID_PIBCARS3_LABEL_CommonBrakeRelBypass1          0x0030
#define   ID_PIBCARS3_LABEL_CommonBrakeRelBypass2          0x0031
#define   ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST           0X0032
#define   ID_PIBCARS3_LABEL_FAS_status                     0x0033


extern vector<CPage*>  g_PageVec;

class CCarStatus3Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus3Page)
public:
    CCarStatus3Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
    void OnBroadCastBtnCl();

       void UpdateEBCutoff();
       void UpdateBrkNoRelsCutoff();
       void UpdateParkBrkCutoff();
       void UpdateATCDoorCutoff();
       void UpdateDoorLineCutoff();
       void UpdateAlertCutoff();
       void UpdateATCCutoff();
       void UpdateEBisOff();



    void OnPageDownBtnClk();
    void OnRealTimeFaultsWarnningIconClk();
    //void UpdateColor();
    void UpdateATOMode();
    void UpdateNETMode();
    void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateTowMode();
    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
//    void UpdateEmergencyBroadcast();

    void SetLabelColor(int id, int colorVal);
    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();

};



#endif // C_PAGE_BYPASS_STATUS_H
