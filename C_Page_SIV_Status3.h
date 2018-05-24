#ifndef C_PAGE_SIV_STATUS3_H
#define C_PAGE_SIV_STATUS3_H


#include "CPage.h"
#include "DataBuffer.h"

#define   ID_PIBCARS1_3_LABEL1_CAR1ACUOK                0X0100
#define   ID_PIBCARS1_3_LABEL1_CAR6ACUOK                0X0101
#define   ID_PIBCARS1_3_LABEL1_CAR1INPUTVOLTAGEUD                     0X0102
#define   ID_PIBCARS1_3_LABEL1_CAR6INPUTVOLTAGEUD                     0X0103
#define   ID_PIBCARS1_3_LABEL1_CAR1INPUTCURRENTID                    0X0104
#define   ID_PIBCARS1_3_LABEL1_CAR6INPUTCURRENTID                    0X0105
#define   ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTIA                    0X0106
#define   ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTIA                    0X0107
#define   ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTIC                      0X0108
#define   ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTIC                      0X0109
#define   ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEU                     0X010A
#define   ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEU                      0X010B
#define   ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTU                   0X010C
#define   ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTU                   0X010D
#define   ID_PIBCARS1_3_LABEL1_CAR1INVERSEFREQUENCY                    0X010E
#define   ID_PIBCARS1_3_LABEL1_CAR6INVERSEFREQUENCY                    0X010F
#define   ID_PIBCARS1_3_LABEL1_CAR1CHARGEDIRECTCURRENT                    0X0110
#define   ID_PIBCARS1_3_LABEL1_CAR6CHARGEDIRECTCURRENT                    0X0111

#define   ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEV                     0X0112
#define   ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEV                     0X0113
#define   ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTV                  0X0114
#define   ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTV                  0X0115
#define   ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEW                     0X0116
#define   ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEW                     0X0117
#define   ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTW                  0X0118
#define   ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTW                  0X0119


#define   ID_PIBCARS1_3_ICON_WARNNING                0X0001
#define   ID_PIBCARS1_3_TRAIN                        0X0002
#define   ID_PIBCARS1_3_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS1_3_ARROW_LEFT                   0X0004
#define   ID_PIBCARS1_3_LABEL_ATOMODE                0X0005
#define   ID_PIBCARS1_3_LABEL_NETMODE                0X0006
#define   ID_PIBCARS1_3_LABEL_CONTRAVARIANTMODE     0X0007
#define   ID_PIBCARS1_3_LABEL_WASHCARMODE            0X0008
#define   ID_PIBCARS1_3_LABEL_EMERGENCYBROADCAST     0X0009
#define   ID_PIBCARS1_3_BUTTON_PAGEUP                0X000A
#define   ID_PIBCARS1_3_BUTTON_PAGEDOWN              0X000B
#define   ID_PIBCARS1_3_LABEL_CAR1IESSTATE           0X000C
#define   ID_PIBCARS1_3_LABEL_CAR6IESSTATE           0X000D
#define   ID_PIBCARS1_3_LABEL_CAR1RIDINGRATE         0X000E
#define   ID_PIBCARS1_3_LABEL_CAR2RIDINGRATE         0X000F
#define   ID_PIBCARS1_3_LABEL_CAR3RIDINGRATE         0X0010
#define   ID_PIBCARS1_3_LABEL_CAR4RIDINGRATE         0X0011
#define   ID_PIBCARS1_3_LABEL_CAR5RIDINGRATE         0X0012
#define   ID_PIBCARS1_3_LABEL_CAR6RIDINGRATE         0X0013
#define   ID_PIBCARS1_3_LABEL_CAR3KAUXSTATE          0X0014
#define   ID_PIBCARS1_3_LABEL_CAR1VOLTAGE            0X0015
#define   ID_PIBCARS1_3_LABEL_CAR6VOLTAGE            0X0016
#define   ID_PIBCARS1_3_LABEL_CAR1CHARGECURRENT      0X0017
#define   ID_PIBCARS1_3_LABEL_CAR6CHARGECURRENT      0X0018
#define   ID_PIBCARS1_3_LABEL_CAR1BATTERTEMP         0X0019
#define   ID_PIBCARS1_3_LABEL_CAR6BATTERTEMP         0X001A

#define   ID_PIBCARS1_3_LABEL_DRAWBCUGRADE           0X001D

#define   ID_PIBCARS1_3_LABEL_CAR1VEER1LOAD          0X001F
#define   ID_PIBCARS1_3_LABEL_CAR1VEER2LOAD          0X0020
#define   ID_PIBCARS1_3_LABEL_CAR2VEER1LOAD          0X0021
#define   ID_PIBCARS1_3_LABEL_CAR2VEER2LOAD          0X0022
#define   ID_PIBCARS1_3_LABEL_CAR3VEER1LOAD          0X0023
#define   ID_PIBCARS1_3_LABEL_CAR3VEER2LOAD          0X0024
#define   ID_PIBCARS1_3_LABEL_CAR4VEER1LOAD          0X0025
#define   ID_PIBCARS1_3_LABEL_CAR4VEER2LOAD          0X0026
#define   ID_PIBCARS1_3_LABEL_CAR5VEER1LOAD          0X0027
#define   ID_PIBCARS1_3_LABEL_CAR5VEER2LOAD          0X0028
#define   ID_PIBCARS1_3_LABEL_CAR6VEER1LOAD          0X0029
#define   ID_PIBCARS1_3_LABEL_CAR6VEER2LOAD          0X002A
//#define   ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS         0X002B
//#define   ID_PIBCARS1_3_LABEL2_CAR1ASSISTSYS         0X002C
//#define   ID_PIBCARS1_3_LABEL3_CAR1ASSISTSYS         0X002D
//#define   ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS         0X002E
//#define   ID_PIBCARS1_3_LABEL2_CAR6ASSISTSYS         0X002F
//#define   ID_PIBCARS1_3_LABEL3_CAR6ASSISTSYS         0X0030
#define   ID_PIBCARS1_3_COMMINTERRUPT                0X0031
#define   ID_PIBCARS1_3_LABEL_VOLTAGEVALUE           0X0032
#define   ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS_V       0X0033
#define   ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS_A       0X0034
#define   ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS_V       0X0035
#define   ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS_A       0X0036
#define   ID_PIBCARS1_3_LABEL_CAR1SIGN               0X0037
#define   ID_PIBCARS1_3_LABEL_CAR6SIGN               0X0038
#define   ID_PIBCARS1_3_LABEL_DRAWBCU                0X0039
#define   ID_PIBCARS1_3_LABEL_DRAWBCUPERCENT         0X003A

#define ID_PIBCARS1_3_LABEL_V                   0X003B
#define ID_PIBCARS1_3_LABEL_A                   0X003C
#define ID_PIBCARS1_3_LABEL_TRACTIONMODEL       0X003D
#define ID_PIBCARS1_3_LABEL_SPEED               0X003E
#define ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE    0X003F
#define ID_PIBCARS1_3_BUTTON_BROADCAST          0x0040

#define ID_PIBCARS1_3_BUTTON_ACURESET           0x0041

//#define ID_PIBCARS1_3_LABEL_InhibitKAUXClose1       0X0042
//#define ID_PIBCARS1_3_LABEL_InhibitKAUXClose2       0X0043

#define ID_PIBCARS1_3_LABEL_CAR2Pantograph           0X0044
#define ID_PIBCARS1_3_LABEL_CAR4Pantograph           0X0045
#define ID_PIBCARS1_3_LABEL_CAR7Pantograph           0X0046

#define   ID_PIBCARS1_3_LABEL_CAR7RIDINGRATE         0X0047
#define   ID_PIBCARS1_3_LABEL_CAR8RIDINGRATE         0X0048

#define   ID_PIBCARS1_3_LABEL_CAR7VEER1LOAD          0X0049
#define   ID_PIBCARS1_3_LABEL_CAR7VEER2LOAD          0X004A
#define   ID_PIBCARS1_3_LABEL_CAR8VEER1LOAD          0X004B
#define   ID_PIBCARS1_3_LABEL_CAR8VEER2LOAD          0X004C

#define   ID_PIBCARS1_3_BUTTON_FASPAGE             0X004D

#define   ID_PIBCARS1_3_LABEL_CAR1ESCAPEDOOR         0X004E
#define   ID_PIBCARS1_3_LABEL_CAR8ESCAPEDOOR         0X004F

//#define ID_PIBCARS1_3_LABEL_TOWMODE                   0X0050

#define ID_PIBCARS1_3_BUTTON_PGUP               0X0051
#define ID_PIBCARS1_3_BUTTON_PGDN               0X0052
#define ID_PIBCARS1_3_BUTTON_EMERGENCYBROADCAST    0X0053

#define ID_PIBCARS1_3_LABEL1_CARNUMBER1     0X0061
#define ID_PIBCARS1_3_LABEL1_CARNUMBER2     0X0062

#define  ID_PIBCARS1_3_LABEL_DisEBTest      0X0500
#define  ID_PIBCARS1_3_LABEL_FAS_status     0X0501
#define  ID_PIBCARS1_3_LABEL_ByPass         0X0502


extern vector<CPage*>  g_PageVec;

class C_Page_SIV_Status3 : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_SIV_Status3)
public:
    C_Page_SIV_Status3();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();

private:
    bool m_bResetACU;
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

       void UpdateByPass_Hide();
       void UpdateACU_OK();
       void UpdateInputLineVoltageUd();
       void UpdateInputCurrentId();
       void UpdateInverseCurrentIa();
       void UpdateInverseCurrentIc();
       void UpdateOutputVoltageUuvw();
       void UpdateInverseCurrentIuvw();
       void UpdateInverseFrequency();
       void UpdateChargeDirectCurrent();
       void SetLabelColor(int id,int colorVal);



       void UpdateSIV_Online();
       void SetOnlineLabelColor(int id,int colorVal);



    void OnACUReset();
    void OnRealTimeFaultsWarnningIconClk();
    //void UpdateACU();
    void UpdateIES();
    void UpdateKAUX();
    void UpdateVeerLoad();
    void UpdateRidingRate();
    //void UpdateInhibitKAUXClose();

    void UpdateATOMode();
    //void UpdateChargeCurrent();
    //void Update110Voltage();
    //void UpdateBatteryTemp();

    void UpdateNETMode();
    void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateTowMode();

    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
    void UpdatePantographStatus();
    void UpdateEscapeDoor();
//    void UpdateEmergencyBroadcast();

    void SetAcuLabelColor(int id, int colorVal);
    void SetKauxLabelColor(int id, int colorVal);
    void SetVeerLoadLabelColor(int id, int colorVal);

    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();

    void OnPageUpBtnClk();
    void OnPageDownBtnClk();
};


#endif // C_PAGE_SIV_STATUS3_H
