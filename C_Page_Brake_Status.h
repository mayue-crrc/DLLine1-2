#ifndef C_PAGE_BRAKE_STATUS_H
#define C_PAGE_BRAKE_STATUS_H



#include "CPage.h"
#include "DataBuffer.h"
#include "CRealTimeFaultsWarnningDialog.h"

//brake applied
#define ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied1            0X0009
#define ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied2            0X0034
#define ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied1            0X0035
#define ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied2            0X0036
#define ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied1            0X0037//ADD
#define ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied2            0X000A
#define ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied1            0X000B
#define ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied2            0X000C
#define ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied1            0X000D
#define ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied2            0X000E
#define ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied1            0X000F
#define ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied2            0X0010
//BRK_CLY_Pressure
#define ID_PIBBRAKESTATE_LABEL_CAR1BRKCYLPRESSURE1              0X0039
#define ID_PIBBRAKESTATE_LABEL_CAR1BRKCYLPRESSURE2              0X003A
#define ID_PIBBRAKESTATE_LABEL_CAR2BRKCYLPRESSURE1              0X003B
#define ID_PIBBRAKESTATE_LABEL_CAR2BRKCYLPRESSURE2              0X003C
#define ID_PIBBRAKESTATE_LABEL_CAR3BRKCYLPRESSURE1              0X003D
#define ID_PIBBRAKESTATE_LABEL_CAR3BRKCYLPRESSURE2              0X003E
#define ID_PIBBRAKESTATE_LABEL_CAR4BRKCYLPRESSURE1              0X003F
#define ID_PIBBRAKESTATE_LABEL_CAR4BRKCYLPRESSURE2              0X0040
#define ID_PIBBRAKESTATE_LABEL_CAR5BRKCYLPRESSURE1              0X0041
#define ID_PIBBRAKESTATE_LABEL_CAR5BRKCYLPRESSURE2              0X0042
#define ID_PIBBRAKESTATE_LABEL_CAR6BRKCYLPRESSURE1              0X0043
#define ID_PIBBRAKESTATE_LABEL_CAR6BRKCYLPRESSURE2              0X0044
//BSR_Pressure
#define ID_PIBBRAKESTATE_LABEL_CAR1BSRPRESSURE1            0X0101
#define ID_PIBBRAKESTATE_LABEL_CAR1BSRPRESSURE2            0X0102
#define ID_PIBBRAKESTATE_LABEL_CAR2BSRPRESSURE1            0X0103
#define ID_PIBBRAKESTATE_LABEL_CAR2BSRPRESSURE2            0X0104
#define ID_PIBBRAKESTATE_LABEL_CAR3BSRPRESSURE1            0X0105
#define ID_PIBBRAKESTATE_LABEL_CAR3BSRPRESSURE2            0X0106
#define ID_PIBBRAKESTATE_LABEL_CAR4BSRPRESSURE1            0X0107
#define ID_PIBBRAKESTATE_LABEL_CAR4BSRPRESSURE2            0X0108
#define ID_PIBBRAKESTATE_LABEL_CAR5BSRPRESSURE1            0X0109
#define ID_PIBBRAKESTATE_LABEL_CAR5BSRPRESSURE2            0X010A
#define ID_PIBBRAKESTATE_LABEL_CAR6BSRPRESSURE1            0X010B
#define ID_PIBBRAKESTATE_LABEL_CAR6BSRPRESSURE2            0X010C
//MRE_Pressure
#define ID_PIBBRAKESTATE_LABEL_CAR1MREPRESSURE            0X0110
#define ID_PIBBRAKESTATE_LABEL_CAR6MREPRESSURE            0X0111
#define ID_PIBBRAKESTATE_LABEL_CAR2BPPRESSURE             0X0112
#define ID_PIBBRAKESTATE_LABEL_CAR5BPPRESSURE             0X0113
//Park Pressure
#define ID_PIBBRAKESTATE_LABEL_CAR1PARKPRESSURE           0X0120
#define ID_PIBBRAKESTATE_LABEL_CAR2PARKPRESSURE           0X0121
#define ID_PIBBRAKESTATE_LABEL_CAR3PARKPRESSURE           0X0122
#define ID_PIBBRAKESTATE_LABEL_CAR4PARKPRESSURE           0X0123
#define ID_PIBBRAKESTATE_LABEL_CAR5PARKPRESSURE           0X0124
#define ID_PIBBRAKESTATE_LABEL_CAR6PARKPRESSURE           0X0125
//Air Spring Pressure
#define ID_PIBBRAKESTATE_LABEL_CAR1AIRSPRPRESSURE1          0X0130
#define ID_PIBBRAKESTATE_LABEL_CAR1AIRSPRPRESSURE2          0X0131
#define ID_PIBBRAKESTATE_LABEL_CAR2AIRSPRPRESSURE1          0X0132
#define ID_PIBBRAKESTATE_LABEL_CAR2AIRSPRPRESSURE2          0X0133
#define ID_PIBBRAKESTATE_LABEL_CAR3AIRSPRPRESSURE1          0X0134
#define ID_PIBBRAKESTATE_LABEL_CAR3AIRSPRPRESSURE2          0X0135
#define ID_PIBBRAKESTATE_LABEL_CAR4AIRSPRPRESSURE1          0X0136
#define ID_PIBBRAKESTATE_LABEL_CAR4AIRSPRPRESSURE2          0X0137
#define ID_PIBBRAKESTATE_LABEL_CAR5AIRSPRPRESSURE1          0X0138
#define ID_PIBBRAKESTATE_LABEL_CAR5AIRSPRPRESSURE2          0X0139
#define ID_PIBBRAKESTATE_LABEL_CAR6AIRSPRPRESSURE1          0X0140
#define ID_PIBBRAKESTATE_LABEL_CAR6AIRSPRPRESSURE2          0X0141
//Emergency Brake
#define ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK1          0X0142
#define ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK2          0X0143
#define ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK1          0X0144
#define ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK2          0X0145
#define ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK1          0X0146
#define ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK2          0X0147
#define ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK1          0X0148
#define ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK2          0X0149
#define ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK1          0X0150
#define ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK2          0X0151
#define ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK1          0X0152
#define ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK2          0X0153
//Selftest expired 24h
#define ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H1        0X0155
#define ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H2        0X0156




#define ID_PIBBRAKESTATE_ARROW_RIGHT                         0X0001
#define ID_PIBBRAKESTATE_ARROW_LEFT                          0X0002
#define ID_PIBBRAKESTATE_TRAIN                               0X0003
#define ID_PIBBRAKESTATE_LABEL_ATOMODE                       0X0004
#define ID_PIBBRAKESTATE_LABEL_NETMODE                       0X0005
#define ID_PIBBRAKESTATE_LABEL_CONTRAVARIANTMODE             0X0006
#define ID_PIBBRAKESTATE_LABEL_WASHCARMODE                   0X0007
#define ID_PIBBRAKESTATE_BUTTON_EMERGENCYBROADCAST           0X0008

#define ID_PIBBRAKESTATE_LABEL_CAR2DOOR5                     0X0011
#define ID_PIBBRAKESTATE_LABEL_CAR2DOOR6                     0X0012
#define ID_PIBBRAKESTATE_LABEL_CAR2DOOR7                     0X0013
#define ID_PIBBRAKESTATE_LABEL_CAR2DOOR8                     0X0014
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR1                     0X0015
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR2                     0X0016
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR3                     0X0017
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR4                     0X0018
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR5                     0X0019
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR6                     0X001A
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR7                     0X001B
#define ID_PIBBRAKESTATE_LABEL_CAR3DOOR8                     0X001C
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR1                     0X001D
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR2                     0X001E
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR3                     0X001F
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR4                     0X0020
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR5                     0X0021
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR6                     0X0022
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR7                     0X0023
#define ID_PIBBRAKESTATE_LABEL_CAR4DOOR8                     0X0024
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR1                     0X0025
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR2                     0X0026
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR3                     0X0027
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR4                     0X0028
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR5                     0X0029
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR6                     0X002A
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR7                     0X002B
#define ID_PIBBRAKESTATE_LABEL_CAR5DOOR8                     0X002C
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR1                     0X002D
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR2                     0X002E
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR3                     0X002F
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR4                     0X0030
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR5                     0X0031
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR6                     0X0032
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR7                     0X0033
#define ID_PIBBRAKESTATE_LABEL_CAR6DOOR8                     0X0038

#define ID_PIBBRAKESTATE_LABEL_CAR1ASPRESSURE1               0X0045
#define ID_PIBBRAKESTATE_LABEL_CAR1ASPRESSURE2               0X0046
#define ID_PIBBRAKESTATE_LABEL_CAR2ASPRESSURE1               0X0047
#define ID_PIBBRAKESTATE_LABEL_CAR2ASPRESSURE2               0X0048
#define ID_PIBBRAKESTATE_LABEL_CAR3ASPRESSURE1               0X0049
#define ID_PIBBRAKESTATE_LABEL_CAR3ASPRESSURE2               0X004A
#define ID_PIBBRAKESTATE_LABEL_CAR4ASPRESSURE1               0X004B
#define ID_PIBBRAKESTATE_LABEL_CAR4ASPRESSURE2               0X004C
#define ID_PIBBRAKESTATE_LABEL_CAR5ASPRESSURE1               0X004D
#define ID_PIBBRAKESTATE_LABEL_CAR5ASPRESSURE2               0X004E
#define ID_PIBBRAKESTATE_LABEL_CAR6ASPRESSURE1               0X004F
#define ID_PIBBRAKESTATE_LABEL_CAR6ASPRESSURE2               0X0050
#define ID_PIBBRAKESTATE_LABEL_CAR1SIDETEMP                  0X0051
#define ID_PIBBRAKESTATE_LABEL_CAR2SIDETEMP                  0X0052
#define ID_PIBBRAKESTATE_LABEL_CAR3SIDETEMP                  0X0053
#define ID_PIBBRAKESTATE_LABEL_CAR4SIDETEMP                  0X0054
#define ID_PIBBRAKESTATE_LABEL_CAR5SIDETEMP                  0X0055
#define ID_PIBBRAKESTATE_LABEL_CAR6SIDETEMP                  0X0056

#define ID_PIBBRAKESTATE_LABEL_CAR1WARNING1                  0X005D
#define ID_PIBBRAKESTATE_LABEL_CAR1WARNING2                  0X005E
#define ID_PIBBRAKESTATE_LABEL_CAR2WARNING1                  0X005F
#define ID_PIBBRAKESTATE_LABEL_CAR2WARNING2                  0X0060
#define ID_PIBBRAKESTATE_LABEL_CAR3WARNING1                  0X0061
#define ID_PIBBRAKESTATE_LABEL_CAR3WARNING2                  0X0062
#define ID_PIBBRAKESTATE_LABEL_CAR4WARNING1                  0X0063
#define ID_PIBBRAKESTATE_LABEL_CAR4WARNING2                  0X0064
#define ID_PIBBRAKESTATE_LABEL_CAR5WARNING1                  0X0065
#define ID_PIBBRAKESTATE_LABEL_CAR5WARNING2                  0X0066
#define ID_PIBBRAKESTATE_LABEL_CAR6WARNING1                  0X0067
#define ID_PIBBRAKESTATE_LABEL_CAR6WARNING2                  0X0068
#define ID_PIBBRAKESTATE_ICON_WARNNING                       0X0069
#define ID_PIBBRAKESTATE_LABEL_CAR2DRAWSYSSTATE              0X006A
#define ID_PIBBRAKESTATE_LABEL_CAR3DRAWSYSSTATE              0X006B
#define ID_PIBBRAKESTATE_LABEL_CAR4DRAWSYSSTATE              0X006C
#define ID_PIBBRAKESTATE_LABEL_CAR5DRAWSYSSTATE              0X006D
#define ID_PIBBRAKESTATE_LABEL_CAR1AIRCOMPRESSORSTATE        0X006E
#define ID_PIBBRAKESTATE_LABEL_CAR6AIRCOMPRESSORSTATE        0X006F
#define ID_PIBBRAKESTATE_LABEL_CAR1BCUSEPARATE1              0X0070
#define ID_PIBBRAKESTATE_LABEL_CAR1BCUSEPARATE2              0X0071
#define ID_PIBBRAKESTATE_LABEL_CAR2BCUSEPARATE1              0X0072
#define ID_PIBBRAKESTATE_LABEL_CAR2BCUSEPARATE2              0X0073
#define ID_PIBBRAKESTATE_LABEL_CAR3BCUSEPARATE1              0X0074
#define ID_PIBBRAKESTATE_LABEL_CAR3BCUSEPARATE2              0X0075
#define ID_PIBBRAKESTATE_LABEL_CAR4BCUSEPARATE1              0X0076
#define ID_PIBBRAKESTATE_LABEL_CAR4BCUSEPARATE2              0X0077
#define ID_PIBBRAKESTATE_LABEL_CAR5BCUSEPARATE1              0X0078
#define ID_PIBBRAKESTATE_LABEL_CAR5BCUSEPARATE2              0X0079
#define ID_PIBBRAKESTATE_LABEL_CAR6BCUSEPARATE1              0X007A
#define ID_PIBBRAKESTATE_LABEL_CAR6BCUSEPARATE2              0X007B
#define ID_PIBBRAKESTATE_LABEL_TERMINALSTATION               0X007C
#define ID_PIBBRAKESTATE_LABEL1_ARRIVETERMINALFLAG           0X007D
//#define ID_PIBBRAKESTATE_LABEL2_ARRIVETERMINALFLAG           0X0083//ADD
#define ID_PIBBRAKESTATE_LABEL_DRAWBCUGRADE                  0X007E

#define ID_PIBBRAKESTATE_LABEL_CURRENTORNEXTSTATION1         0X0080
#define ID_PIBBRAKESTATE_LABEL_NETVOLTAGE                    0X0081
#define ID_PIBBRAKESTATE_LABEL_NETCURRENT                    0X0082
#define ID_PIBBRAKESTATE_LABEL_V                             0X0084
#define ID_PIBBRAKESTATE_LABEL_CURRENTORNEXTSTATION2         0X0085
#define ID_PIBBRAKESTATE_LABEL_NUM1                          0X0086
#define ID_PIBBRAKESTATE_LABEL_NUM2                          0X0087
#define ID_PIBBRAKESTATE_INTERRUPT                           0X0088

#define ID_PIBBRAKESTATE_LABEL_A                            0X0089
#define ID_PIBBRAKESTATE_LABEL_TRACTIONMODEL                0X008A
#define ID_PIBBRAKESTATE_LABEL_SPEED                        0X008B

#define ID_PIBBRAKESTATE_BUTTON_EMERGENCYRESCUE             0X008C
#define ID_PIBBRAKESTATE_LABEL_TCU_ENABLE1                   0X008D
#define ID_PIBBRAKESTATE_LABEL_TCU_ENABLE2                   0X008E

#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR1                     0X008F
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR2                     0X0090
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR3                     0X0091
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR4                     0X0092
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR5                     0X0093
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR6                     0X0094
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR7                     0X0095
#define ID_PIBBRAKESTATE_LABEL_CAR7DOOR8                     0X0096
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR1                     0X0097
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR2                     0X0098
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR3                     0X0099
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR4                     0X009A
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR5                     0X009B
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR6                     0X009C
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR7                     0X009D
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR8                     0X009E

#define ID_PIBBRAKESTATE_LABEL_CAR7BCUPRESSURE1              0X009F
#define ID_PIBBRAKESTATE_LABEL_CAR7BCUPRESSURE2              0X00A0
#define ID_PIBBRAKESTATE_LABEL_CAR8BCUPRESSURE1              0X00A1
#define ID_PIBBRAKESTATE_LABEL_CAR8BCUPRESSURE2              0X00A2

#define ID_PIBBRAKESTATE_LABEL_CAR7ASPRESSURE1               0X00A3
#define ID_PIBBRAKESTATE_LABEL_CAR7ASPRESSURE2               0X00A4
#define ID_PIBBRAKESTATE_LABEL_CAR8ASPRESSURE1               0X00A5
#define ID_PIBBRAKESTATE_LABEL_CAR8ASPRESSURE2               0X00A6

#define ID_PIBBRAKESTATE_LABEL_CAR7SIDETEMP                  0X00A7
#define ID_PIBBRAKESTATE_LABEL_CAR8SIDETEMP                  0X00A8

#define ID_PIBBRAKESTATE_LABEL_CAR7PLACESTATE                0X00A9
#define ID_PIBBRAKESTATE_LABEL_CAR8PLACESTATE                0X00AA

#define ID_PIBBRAKESTATE_LABEL_CAR7WARNING1                  0X00AB
#define ID_PIBBRAKESTATE_LABEL_CAR7WARNING2                  0X00AC
#define ID_PIBBRAKESTATE_LABEL_CAR8WARNING1                  0X00AD
#define ID_PIBBRAKESTATE_LABEL_CAR8WARNING2                  0X00AE

#define ID_PIBBRAKESTATE_LABEL_CAR6DRAWSYSSTATE              0X00AF
#define ID_PIBBRAKESTATE_LABEL_CAR7DRAWSYSSTATE              0X00B0

#define ID_PIBBRAKESTATE_LABEL_CAR7BCUSEPARATE1              0X00B1
#define ID_PIBBRAKESTATE_LABEL_CAR7BCUSEPARATE2              0X00B2
#define ID_PIBBRAKESTATE_LABEL_CAR8BCUSEPARATE1              0X00B3
#define ID_PIBBRAKESTATE_LABEL_CAR8BCUSEPARATE2              0X00B4

#define   ID_PIBBRAKESTATE_LABEL_CAR1RIDINGRATE         0X00B5
#define   ID_PIBBRAKESTATE_LABEL_CAR2RIDINGRATE         0X00B6
#define   ID_PIBBRAKESTATE_LABEL_CAR3RIDINGRATE         0X00B7
#define   ID_PIBBRAKESTATE_LABEL_CAR4RIDINGRATE         0X00B8
#define   ID_PIBBRAKESTATE_LABEL_CAR5RIDINGRATE         0X00B9
#define   ID_PIBBRAKESTATE_LABEL_CAR6RIDINGRATE         0X00BA
#define   ID_PIBBRAKESTATE_LABEL_CAR7RIDINGRATE         0X00BB
#define   ID_PIBBRAKESTATE_LABEL_CAR8RIDINGRATE         0X00BC
#define   ID_PIBBRAKESTATE_BUTTON_FASPAGE               0X00BD
#define   ID_PIBBRAKESTATE_LABEL_CAR1ASSISTSYS_V          0X00BE
#define   ID_PIBBRAKESTATE_LABEL_CAR8ASSISTSYS_V          0X00BF
#define   ID_PIBBRAKESTATE_LABEL_CAR4KAUXSTATE          0X00C0

#define ID_PIBBRAKESTATE_LABEL_ByPass                   0X00C1
#define ID_PIBBRAKESTATE_LABEL_FAS_status               0X00C2

#define ID_PIBBRAKESTATE_LABEL_CAR1DOOR9                0X00C3
#define ID_PIBBRAKESTATE_LABEL_CAR1DOOR10               0X00C4
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR9                0X00C5
#define ID_PIBBRAKESTATE_LABEL_CAR8DOOR10               0X00C6

//#define ID_PIBBRAKESTATE_LABEL_TOWMODE                   0X00C7

#define ID_PIBBRAKESTATE_LABEL_DisEBTest               0X00C8

#define ID_PIBBRAKESTATE_BUTTON_PGUP               0X00C9
#define ID_PIBBRAKESTATE_BUTTON_PGDN               0X00CA

#define ID_PIBBRAKESTATE_BUTTON_BRKTESTSELF       0X00CB

#define ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE1       0X00CC
#define ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE2       0X00CD
//#define ID_PIBBRAKESTATE_BUTTON_BRKTESTSELFSTOP       0X00CE


#define ID_PIBBRAKESTATE_LABEL_CARNUMBER1        0X00D1
#define ID_PIBBRAKESTATE_LABEL_CARNUMBER2        0X00D2
#define ID_PIBBRAKESTATE_LABEL_CARNUMBER3        0X00D3
#define ID_PIBBRAKESTATE_LABEL_CARNUMBER4        0X00D4
#define ID_PIBBRAKESTATE_LABEL_CARNUMBER5        0X00D5
#define ID_PIBBRAKESTATE_LABEL_CARNUMBER6        0X00D6

#define ID_PIBBRAKESTATE_LABEL_EMGBRK1               0X00E0
#define ID_PIBBRAKESTATE_LABEL_EMGBRK2               0X00E1
extern vector<CPage*>  g_PageVec;

class C_Page_Brake_Status : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_Brake_Status)
public:
    C_Page_Brake_Status();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();
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
    void OnBRKTestSelfClk();
    void OnBRKTestSelfStop();
    void UpdateBrake_Applied();
    void UpdateBRKCYLPressure();
    void UpdateBSRPressure();
    void UpdateMREPressure();
    void UpdateParkPressure();
    void UpdateAirSpringPressure();
    void UpdateEmergencyBrake();
    void UpdateSelftestExp24h();
    void UpdateBCU_selftest_test();
    void UpdateBCU_Online();
    bool m_BRKStart;
    int time_set_timer;






    void OnBroadCastBtnClk();



    void UpdateCompressorStatus();
    void UpdateTCUStatus();
    void UpdateWarning();
    void UpdateASPressure();
    //void UpdatePlaceStatus();
    void UpdateBCUSeparater();
    void UpdateNETMode();
    void UpdateATOMode();

    void UpdateStation();
    void UpdateCarTem();
    void UpdateDoor();
    void UpdateContravariant();
    void UpdateWashCarMode();
   // void UpdateTowMode();
    void UpdateTcu_Enable();

    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateFAS_status_Hide();
    void UpdateByPass_Hide();
    void UpdateSpeed();
    void UpdateEmergencyBroadcast();

    void UpdateDisEBTest();

    void SetBRKCYLPressureLabelColor(int id, int colorVal);
    void SetBSRPressureLabelColor(int id, int colorVal);

    void SetCompressorStatusLabelColor(int id, int colorVal);
    void SetTCUStatusLabelColor(int id, int colorVal);

    void SetWarningLabelColor(int id, int colorVal);
    void SetASPressureLabelColor(int id, int colorVal);
    void SetPlaceStatusLabelColor(int id, int colorVal);
    void SetBCUSeparaterLabelColor(int id, int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void SetATOModeLabelColor(int id, int colorVal);
    void SetTCUStatusLsbelColor(int id,int colorVal);

    void SetBrakeSelectLabelColor(int id, int colorVal);
    void SetVoltageTxtColor(int id,int colorVal);
    void SetCommInterruptLabelColor(int id, int colorVal);

    void SetStation(int id, QString station);
    void SetDoorLabelColor(int id,int colorVal);
    void SetCurrentTxt(int id,int value);

    void SetOnlineLabelColor(int id, int colorVal);
    void SetAcuLabelColor(int id, int colorVal);
    void SetKauxLabelColor(int id, int colorVal);

    void OnEmergencyResuce();
    void OnPageUpBtnClk();
    void OnPageDownBtnClk();

    void OnFASpageBtnClk();

    void updateArrFinalStation();
    void OnRealTimeFaultsWarnningIconClk();

    void UpdateRidingRate();
    void SetLabelColor(int id, int colorVal);
    void SetBoolLabelColor(int id, int colorVal);


    void SetBCU_selftest_resultColor(int id, int colorVal);
    void SetBCU_selftest_LabelString(int id, QString StringVal);

};




#endif // C_PAGE_BRAKE_STATUS_H
