#ifndef C_PAGE_TCU_STATUS_H
#define C_PAGE_TCU_STATUS_H


#include "CPage.h"
#include "DataBuffer.h"

//DCU main cut enable
#define   ID_PIBTCU_1_LABEL_CRA2DCUMAINCUTENABLE   0X0100
#define   ID_PIBTCU_1_LABEL_CRA3DCUMAINCUTENABLE   0X0101
#define   ID_PIBTCU_1_LABEL_CRA4DCUMAINCUTENABLE   0X0102
#define   ID_PIBTCU_1_LABEL_CRA5DCUMAINCUTENABLE   0X0103
//Main cut sate
#define   ID_PIBTCU_1_LABEL_CRA2MAINCUTSTATE   0X0104
#define   ID_PIBTCU_1_LABEL_CRA3MAINCUTSTATE   0X0105
#define   ID_PIBTCU_1_LABEL_CRA4MAINCUTSTATE   0X0106
#define   ID_PIBTCU_1_LABEL_CRA5MAINCUTSTATE   0X0107
//Real trace Or Brake Force
#define   ID_PIBTCU_1_LABEL_CRA2REALTRAORBRKF   0X0108
#define   ID_PIBTCU_1_LABEL_CRA3REALTRAORBRKF   0X0109
#define   ID_PIBTCU_1_LABEL_CRA4REALTRAORBRKF   0X010A
#define   ID_PIBTCU_1_LABEL_CRA5REALTRAORBRKF   0X010B
//Electric brake force
#define   ID_PIBTCU_1_LABEL_CRA2ELECTBRKF   0X010C
#define   ID_PIBTCU_1_LABEL_CRA3ELECTBRKF   0X010D
#define   ID_PIBTCU_1_LABEL_CRA4ELECTBRKF   0X010E
#define   ID_PIBTCU_1_LABEL_CRA5ELECTBRKF   0X010F
//Line voltage
#define   ID_PIBTCU_1_LABEL_CRA2LINEVOLTAGE   0X0110
#define   ID_PIBTCU_1_LABEL_CRA3LINEVOLTAGE   0X0111
#define   ID_PIBTCU_1_LABEL_CRA4LINEVOLTAGE   0X0112
#define   ID_PIBTCU_1_LABEL_CRA5LINEVOLTAGE   0X0113
//Inverse current
#define   ID_PIBTCU_1_LABEL_CRA2INVERSECURRENT   0X0114
#define   ID_PIBTCU_1_LABEL_CRA3INVERSECURRENT   0X0115
#define   ID_PIBTCU_1_LABEL_CRA4INVERSECURRENT   0X0116
#define   ID_PIBTCU_1_LABEL_CRA5INVERSECURRENT   0X0117
//Current chop 1
#define   ID_PIBTCU_1_LABEL_CRA2CURRENTCHOP1   0X0118
#define   ID_PIBTCU_1_LABEL_CRA3CURRENTCHOP1   0X0119
#define   ID_PIBTCU_1_LABEL_CRA4CURRENTCHOP1   0X011A
#define   ID_PIBTCU_1_LABEL_CRA5CURRENTCHOP1   0X011B
//Current chop 2
#define   ID_PIBTCU_1_LABEL_CRA2CURRENTCHOP2   0X011C
#define   ID_PIBTCU_1_LABEL_CRA3CURRENTCHOP2   0X011D
#define   ID_PIBTCU_1_LABEL_CRA4CURRENTCHOP2   0X011E
#define   ID_PIBTCU_1_LABEL_CRA5CURRENTCHOP2   0X011F
//MCC
#define   ID_PIBTCU_1_LABEL_CRA2MCCSTARTORSTOPCMB   0X0120
#define   ID_PIBTCU_1_LABEL_CRA3MCCSTARTORSTOPCMB   0X0121
#define   ID_PIBTCU_1_LABEL_CRA4MCCSTARTORSTOPCMB   0X0122
#define   ID_PIBTCU_1_LABEL_CRA5MCCSTARTORSTOPCMB   0X0123

#define  ID_PIBTCU_1_LABEL_DisEBTest      0X0500
#define  ID_PIBTCU_1_LABEL_FAS_status     0X0501
#define  ID_PIBTCU_1_LABEL_ByPass         0X0502


#define   ID_PIBCARS2_ICON_WARNNING                0X0001
#define   ID_PIBCARS2_TRAIN                        0X0002
#define   ID_PIBCARS2_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS2_ARROW_LEFT                   0X0004
#define   ID_PIBCARS2_LABEL_ATOMODE                0X0005
#define   ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST    0X0006
#define   ID_PIBCARS2_BUTTON_PAGEUP                0X0007
#define   ID_PIBCARS2_BUTTON_PAGEDOWN              0X0008
#define   ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE       0X0009
#define   ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE       0X000A
#define   ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE       0X000B
#define   ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE       0X000C
#define   ID_PIBCARS2_LABEL_CRA2DYNAMOREV          0X000D
#define   ID_PIBCARS2_LABEL_CRA3DYNAMOREV          0X000E
#define   ID_PIBCARS2_LABEL_CRA4DYNAMOREV          0X000F
#define   ID_PIBCARS2_LABEL_CRA5DYNAMOREV          0X0010
#define   ID_PIBCARS2_LABEL_CRA2HSCBSTATUS         0X0011
#define   ID_PIBCARS2_LABEL_CRA3HSCBSTATUS         0X0012
#define   ID_PIBCARS2_LABEL_CRA6ATC1STATUS         0X0013
#define   ID_PIBCARS2_LABEL_CRA6ATC2STATUS         0X0014
#define   ID_PIBCARS2_LABEL_CRA3KICSTATE           0X0015
#define   ID_PIBCARS2_LABEL_CRA2KCCCSTATE          0X0016
#define   ID_PIBCARS2_LABEL_CRA3KCCCSTATE          0X0017
#define   ID_PIBCARS2_LABEL_CRA4KCCCSTATE          0X0018
#define   ID_PIBCARS2_LABEL_CRA5KCCCSTATE          0X0019
#define   ID_PIBCARS2_LABEL_CRA1K750STATUS         0X001A
#define   ID_PIBCARS2_LABEL_CRA6K750STATUS         0X001B
#define   ID_PIBCARS2_LABEL_CRA1ATC1STATUS         0X001C
#define   ID_PIBCARS2_LABEL_CRA1ATC2STATUS         0X001D
#define   ID_PIBCARS2_LABEL_CRA2KICSTATE           0X001E
#define   ID_PIBCARS2_LABEL_CRA4KICSTATE           0X001F
#define   ID_PIBCARS2_LABEL_CRA5KICSTATE           0X0028
#define   ID_PIBCARS2_LABEL_NETVOLTAGE             0X0029
#define   ID_PIBCARS2_LABEL_NECURRENT              0X002A//ADD
#define   ID_PIBCARS2_LABEL_DRAWBCUGRADE           0X0020

#define   ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE       0X0022
#define   ID_PIBCARS2_LABEL_CRA4HSCBSTATUS         0X0023
#define   ID_PIBCARS2_LABEL_CRA5HSCBSTATUS         0X0024
#define   ID_PIBCARS2_LABEL_CRA1PISSTATUS          0X0025
#define   ID_PIBCARS2_LABEL_CRA6PISSTATUS          0X0026
#define   ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE       0X0027
#define   ID_PIBCARS2_COMMINTERRUPT                0X002B
#define   ID_PIBCARS2_LABEL_V                      0X002C
#define   ID_PIBCARS2_LABEL_NETMODE                0X002D
#define   ID_PIBCARS2_LABEL_CONTRAVARIANTMODE      0X002E
#define   ID_PIBCARS2_LABEL_WASHCARMODE            0X002F

#define ID_PIBCARS2_LABEL_A                   0X0030
#define ID_PIBCARS2_LABEL_TRACTIONMODEL       0X0031
#define ID_PIBCARS2_LABEL_SPEED               0X0032

#define ID_PIBCARS2_BUTTON_EMERGENCYRESCUE    0X0033
#define ID_PIBCARS2_BUTTON_FASPAGE            0X0034

#define ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE              0X0035
#define ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE              0X0036
#define ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE              0X0037
#define ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE              0X0038
#define ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE              0X0039
#define ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE              0X003A
#define ID_PIBCARS2_LABEL_TCU_ENABLE1                   0X003B
#define ID_PIBCARS2_LABEL_TCU_ENABLE2                   0X003C

#define   ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE       0X003D
#define   ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE       0X003E

#define   ID_PIBCARS2_LABEL_CRA6DYNAMOREV          0X003F
#define   ID_PIBCARS2_LABEL_CRA7DYNAMOREV          0X0040

#define   ID_PIBCARS2_LABEL_CRA6HSCBSTATUS         0X0041
#define   ID_PIBCARS2_LABEL_CRA7HSCBSTATUS         0X0042

#define   ID_PIBCARS2_LABEL_CRA6KICSTATE           0X0043
#define   ID_PIBCARS2_LABEL_CRA7KICSTATE           0X0044

#define   ID_PIBCARS2_LABEL_CRA6KCCCSTATE          0X0045
#define   ID_PIBCARS2_LABEL_CRA7KCCCSTATE          0X0046

#define   ID_PIBCARS2_LABEL_CAR1IESSTATE           0X0047
#define   ID_PIBCARS2_LABEL_CAR8IESSTATE           0X0048

#define   ID_PIBCARS2_LABEL_CAR2Mainfuse1           0X0049
#define   ID_PIBCARS2_LABEL_CAR4Mainfuse1           0X004A
#define   ID_PIBCARS2_LABEL_CAR7Mainfuse1           0X004B

//#define   ID_PIBCARS2_LABEL_TOWMODE                0X004C

#define   ID_PIBCARS2_LABEL_CAR2Mainfuse2           0X004D
#define   ID_PIBCARS2_LABEL_CAR4Mainfuse2           0X004E
#define   ID_PIBCARS2_LABEL_CAR7Mainfuse2           0X004F

#define   ID_PIBCARS2_LABEL_CAR4IESSTATE           0X0050

#define ID_PIBCARS2_BUTTON_PGUP               0X0051
#define ID_PIBCARS2_BUTTON_PGDN               0X0052

#define ID_PIBCARS2_LABEL_CARNUMBER2          0X0061
#define ID_PIBCARS2_LABEL_CARNUMBER3          0X0062
#define ID_PIBCARS2_LABEL_CARNUMBER4          0X0063
#define ID_PIBCARS2_LABEL_CARNUMBER5          0X0064


extern vector<CPage*>  g_PageVec;

class CCarStatus2Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus2Page)
public:
    CCarStatus2Page();

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
    void OnBroadCastBtnClk();
    void OnRealTimeFaultsWarnningIconClk();


        void UpdateDCUMainCutEnable();
        void UpdateMainCutState();
        void UpdateRealTracOrBrakeF();
        void UpdateElecBRKF();
        void UpdateLineVoltage();
        void UpdateInverseCurrent();
        void UpdateCurrentChop1();
        void UpdateCurrentChop2();
        void UpdateMCCStartOrStopCmd();

        void UpdateTCU_Online();
        void SetOnlineLabelColor(int id,int colorVal);

        void SetLabelColor(int id,int colorVal);

        void UpdateByPass_Hide();
    //void UpdateHSCB();
    void UpdateKIC();
    void UpdateKCCC();
    void UpdateK750();
    void UpdateATC();
    void UpdatePIS();
    //void UpdateDrawBCUForce();
    //void UpdateDynamorev();
    void UpdateMainfuse();

    void UpdateATOMode();

    void UpdateNETMode();
    void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateTowMode();
    void UpdateIES();


    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
//    void UpdateEmergencyBroadcast();

    void SetHscbLabelColor(int id, int colorVal);
    void SetKicLabelColor(int id, int colorVal);
    void SetKcccLabelColor(int id, int colorVal);
    void SetK750LabelColor(int id, int colorVal);
    void SetAtcLabelColor(int id, int colorVal);
    void SetPisLabelColor(int id, int colorVal);
    void SetTCUStatusLsbelColor(int id,int colorVal);
    void SetMainfuseLabelColor(int id, int colorVal);


    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void SetCommInterruptLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();
    void UpdateTcu_Enable();
    void UpdateTCUStatus();

    void OnPageUpBtnClk();
    void OnPageDownBtnClk();

};

#endif // CCarStatus2Page_H
