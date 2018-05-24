#ifndef C_PAGE_BRAKE_STATUS3_H
#define C_PAGE_BRAKE_STATUS3_H



#include "CPage.h"
#include "DataBuffer.h"
#include "CRealTimeFaultsWarnningDialog.h"
//183 diameter input ready
#define ID_PIBBRAKESTATE3_LABEL_CAR1DIAINREADY                0X0100
#define ID_PIBBRAKESTATE3_LABEL_CAR6DIAINREADY                0X0105
//213 diameter input status
#define ID_PIBBRAKESTATE3_LABEL_CAR1DIAINSTATUS                0X0106
#define ID_PIBBRAKESTATE3_LABEL_CAR6DIAINSTATUS                0X010B
//243 wheel diameter active
#define ID_PIBBRAKESTATE3_LABEL_CAR1WDACTIVE                0X010C
#define ID_PIBBRAKESTATE3_LABEL_CAR6WDACTIVE                0X0111
//273 BCU_A1 wheel diameter
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUA1WD                0X0112
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUA1WD                0X0113
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUA1WD                0X0114
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUA1WD                0X0115
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUA1WD                0X0116
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUA1WD                0X0117
//303 EP possible
#define ID_PIBBRAKESTATE3_LABEL_CAR1EPPOSSIBLE1                  0X0118
#define ID_PIBBRAKESTATE3_LABEL_CAR1EPPOSSIBLE2                  0X0119
#define ID_PIBBRAKESTATE3_LABEL_CAR2EPPOSSIBLE1                  0X011A
#define ID_PIBBRAKESTATE3_LABEL_CAR2EPPOSSIBLE2                  0X011B
#define ID_PIBBRAKESTATE3_LABEL_CAR3EPPOSSIBLE1                  0X011C
#define ID_PIBBRAKESTATE3_LABEL_CAR3EPPOSSIBLE2                  0X011D
#define ID_PIBBRAKESTATE3_LABEL_CAR4EPPOSSIBLE1                  0X011E
#define ID_PIBBRAKESTATE3_LABEL_CAR4EPPOSSIBLE2                  0X011F
#define ID_PIBBRAKESTATE3_LABEL_CAR5EPPOSSIBLE1                  0X0120
#define ID_PIBBRAKESTATE3_LABEL_CAR5EPPOSSIBLE2                  0X0121
#define ID_PIBBRAKESTATE3_LABEL_CAR6EPPOSSIBLE1                  0X0122
#define ID_PIBBRAKESTATE3_LABEL_CAR6EPPOSSIBLE2                  0X0123

//333
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUA1SPEED1                0X0124
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUA1SPEED1                0X0125
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUA1SPEED1                0X0126
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUA1SPEED1                0X0127
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUA1SPEED1                0X0128
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUA1SPEED1                0X0129
//363
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUA1SPEED2                0X012A
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUA1SPEED2                0X012B
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUA1SPEED2                0X012C
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUA1SPEED2                0X012D
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUA1SPEED2                0X012E
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUA1SPEED2                0X012F
//393
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUA1SPEED3                0X0130
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUA1SPEED3                0X0131
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUA1SPEED3                0X0132
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUA1SPEED3                0X0133
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUA1SPEED3                0X0134
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUA1SPEED3                0X0135
//423
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUA1SPEED4                0X0136
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUA1SPEED4                0X0137
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUA1SPEED4                0X0138
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUA1SPEED4                0X0139
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUA1SPEED4                0X013A
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUA1SPEED4                0X013B


#define ID_PIBBRAKESTATE3_ARROW_RIGHT                         0X0001
#define ID_PIBBRAKESTATE3_ARROW_LEFT                          0X0002
#define ID_PIBBRAKESTATE3_TRAIN                               0X0003
#define ID_PIBBRAKESTATE3_LABEL_ATOMODE                       0X0004
#define ID_PIBBRAKESTATE3_LABEL_NETMODE                       0X0005
#define ID_PIBBRAKESTATE3_LABEL_CONTRAVARIANTMODE             0X0006
#define ID_PIBBRAKESTATE3_LABEL_WASHCARMODE                   0X0007
#define ID_PIBBRAKESTATE3_BUTTON_EMERGENCYBROADCAST           0X0008
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR1                     0X0009
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR2                     0X0034
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR3                     0X0035
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR4                     0X0036
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR5                     0X0037//ADD
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR6                     0X000A
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR7                     0X000B
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR8                     0X000C
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR1                     0X000D
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR2                     0X000E
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR3                     0X000F
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR4                     0X0010
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR5                     0X0011
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR6                     0X0012
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR7                     0X0013
#define ID_PIBBRAKESTATE3_LABEL_CAR2DOOR8                     0X0014
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR1                     0X0015
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR2                     0X0016
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR3                     0X0017
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR4                     0X0018
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR5                     0X0019
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR6                     0X001A
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR7                     0X001B
#define ID_PIBBRAKESTATE3_LABEL_CAR3DOOR8                     0X001C
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR1                     0X001D
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR2                     0X001E
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR3                     0X001F
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR4                     0X0020
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR5                     0X0021
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR6                     0X0022
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR7                     0X0023
#define ID_PIBBRAKESTATE3_LABEL_CAR4DOOR8                     0X0024
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR1                     0X0025
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR2                     0X0026
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR3                     0X0027
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR4                     0X0028
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR5                     0X0029
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR6                     0X002A
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR7                     0X002B
#define ID_PIBBRAKESTATE3_LABEL_CAR5DOOR8                     0X002C
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR1                     0X002D
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR2                     0X002E
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR3                     0X002F
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR4                     0X0030
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR5                     0X0031
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR6                     0X0032
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR7                     0X0033
#define ID_PIBBRAKESTATE3_LABEL_CAR6DOOR8                     0X0038
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUPRESSURE1              0X0039
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUPRESSURE2              0X003A
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUPRESSURE1              0X003B
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUPRESSURE2              0X003C
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUPRESSURE1              0X003D
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUPRESSURE2              0X003E
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUPRESSURE1              0X003F
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUPRESSURE2              0X0040
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUPRESSURE1              0X0041
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUPRESSURE2              0X0042
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUPRESSURE1              0X0043
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUPRESSURE2              0X0044
#define ID_PIBBRAKESTATE3_LABEL_CAR1ASPRESSURE1               0X0045
#define ID_PIBBRAKESTATE3_LABEL_CAR1ASPRESSURE2               0X0046
#define ID_PIBBRAKESTATE3_LABEL_CAR2ASPRESSURE1               0X0047
#define ID_PIBBRAKESTATE3_LABEL_CAR2ASPRESSURE2               0X0048
#define ID_PIBBRAKESTATE3_LABEL_CAR3ASPRESSURE1               0X0049
#define ID_PIBBRAKESTATE3_LABEL_CAR3ASPRESSURE2               0X004A
#define ID_PIBBRAKESTATE3_LABEL_CAR4ASPRESSURE1               0X004B
#define ID_PIBBRAKESTATE3_LABEL_CAR4ASPRESSURE2               0X004C
#define ID_PIBBRAKESTATE3_LABEL_CAR5ASPRESSURE1               0X004D
#define ID_PIBBRAKESTATE3_LABEL_CAR5ASPRESSURE2               0X004E
#define ID_PIBBRAKESTATE3_LABEL_CAR6ASPRESSURE1               0X004F
#define ID_PIBBRAKESTATE3_LABEL_CAR6ASPRESSURE2               0X0050
#define ID_PIBBRAKESTATE3_LABEL_CAR1SIDETEMP                  0X0051
#define ID_PIBBRAKESTATE3_LABEL_CAR2SIDETEMP                  0X0052
#define ID_PIBBRAKESTATE3_LABEL_CAR3SIDETEMP                  0X0053
#define ID_PIBBRAKESTATE3_LABEL_CAR4SIDETEMP                  0X0054
#define ID_PIBBRAKESTATE3_LABEL_CAR5SIDETEMP                  0X0055
#define ID_PIBBRAKESTATE3_LABEL_CAR6SIDETEMP                  0X0056
#define ID_PIBBRAKESTATE3_LABEL_CAR1PLACESTATE                0X0057
#define ID_PIBBRAKESTATE3_LABEL_CAR2PLACESTATE                0X0058
#define ID_PIBBRAKESTATE3_LABEL_CAR3PLACESTATE                0X0059
#define ID_PIBBRAKESTATE3_LABEL_CAR4PLACESTATE                0X005A
#define ID_PIBBRAKESTATE3_LABEL_CAR5PLACESTATE                0X005B
#define ID_PIBBRAKESTATE3_LABEL_CAR6PLACESTATE                0X005C
#define ID_PIBBRAKESTATE3_LABEL_CAR1WARNING1                  0X005D
#define ID_PIBBRAKESTATE3_LABEL_CAR1WARNING2                  0X005E
#define ID_PIBBRAKESTATE3_LABEL_CAR2WARNING1                  0X005F
#define ID_PIBBRAKESTATE3_LABEL_CAR2WARNING2                  0X0060
#define ID_PIBBRAKESTATE3_LABEL_CAR3WARNING1                  0X0061
#define ID_PIBBRAKESTATE3_LABEL_CAR3WARNING2                  0X0062
#define ID_PIBBRAKESTATE3_LABEL_CAR4WARNING1                  0X0063
#define ID_PIBBRAKESTATE3_LABEL_CAR4WARNING2                  0X0064
#define ID_PIBBRAKESTATE3_LABEL_CAR5WARNING1                  0X0065
#define ID_PIBBRAKESTATE3_LABEL_CAR5WARNING2                  0X0066
#define ID_PIBBRAKESTATE3_LABEL_CAR6WARNING1                  0X0067
#define ID_PIBBRAKESTATE3_LABEL_CAR6WARNING2                  0X0068
#define ID_PIBBRAKESTATE3_ICON_WARNNING                       0X0069
#define ID_PIBBRAKESTATE3_LABEL_CAR2DRAWSYSSTATE              0X006A
#define ID_PIBBRAKESTATE3_LABEL_CAR3DRAWSYSSTATE              0X006B
#define ID_PIBBRAKESTATE3_LABEL_CAR4DRAWSYSSTATE              0X006C
#define ID_PIBBRAKESTATE3_LABEL_CAR5DRAWSYSSTATE              0X006D
#define ID_PIBBRAKESTATE3_LABEL_CAR1AIRCOMPRESSORSTATE        0X006E
#define ID_PIBBRAKESTATE3_LABEL_CAR6AIRCOMPRESSORSTATE        0X006F
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUSEPARATE1              0X0070
#define ID_PIBBRAKESTATE3_LABEL_CAR1BCUSEPARATE2              0X0071
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUSEPARATE1              0X0072
#define ID_PIBBRAKESTATE3_LABEL_CAR2BCUSEPARATE2              0X0073
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUSEPARATE1              0X0074
#define ID_PIBBRAKESTATE3_LABEL_CAR3BCUSEPARATE2              0X0075
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUSEPARATE1              0X0076
#define ID_PIBBRAKESTATE3_LABEL_CAR4BCUSEPARATE2              0X0077
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUSEPARATE1              0X0078
#define ID_PIBBRAKESTATE3_LABEL_CAR5BCUSEPARATE2              0X0079
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUSEPARATE1              0X007A
#define ID_PIBBRAKESTATE3_LABEL_CAR6BCUSEPARATE2              0X007B
#define ID_PIBBRAKESTATE3_LABEL_TERMINALSTATION               0X007C
#define ID_PIBBRAKESTATE3_LABEL1_ARRIVETERMINALFLAG           0X007D
//#define ID_PIBBRAKESTATE3_LABEL2_ARRIVETERMINALFLAG           0X0083//ADD
#define ID_PIBBRAKESTATE3_LABEL_DRAWBCUGRADE                  0X007E

#define ID_PIBBRAKESTATE3_LABEL_CURRENTORNEXTSTATION1         0X0080
#define ID_PIBBRAKESTATE3_LABEL_NETVOLTAGE                    0X0081
#define ID_PIBBRAKESTATE3_LABEL_NETCURRENT                    0X0082
#define ID_PIBBRAKESTATE3_LABEL_V                             0X0084
#define ID_PIBBRAKESTATE3_LABEL_CURRENTORNEXTSTATION2         0X0085
#define ID_PIBBRAKESTATE3_LABEL_NUM1                          0X0086
#define ID_PIBBRAKESTATE3_LABEL_NUM2                          0X0087
#define ID_PIBBRAKESTATE3_INTERRUPT                           0X0088

#define ID_PIBBRAKESTATE3_LABEL_A                            0X0089
#define ID_PIBBRAKESTATE3_LABEL_TRACTIONMODEL                0X008A
#define ID_PIBBRAKESTATE3_LABEL_SPEED                        0X008B

#define ID_PIBBRAKESTATE3_BUTTON_EMERGENCYRESCUE             0X008C
#define ID_PIBBRAKESTATE3_LABEL_TCU_ENABLE1                   0X008D
#define ID_PIBBRAKESTATE3_LABEL_TCU_ENABLE2                   0X008E

#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR1                     0X008F
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR2                     0X0090
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR3                     0X0091
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR4                     0X0092
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR5                     0X0093
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR6                     0X0094
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR7                     0X0095
#define ID_PIBBRAKESTATE3_LABEL_CAR7DOOR8                     0X0096
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR1                     0X0097
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR2                     0X0098
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR3                     0X0099
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR4                     0X009A
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR5                     0X009B
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR6                     0X009C
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR7                     0X009D
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR8                     0X009E

#define ID_PIBBRAKESTATE3_LABEL_CAR7BCUPRESSURE1              0X009F
#define ID_PIBBRAKESTATE3_LABEL_CAR7BCUPRESSURE2              0X00A0
#define ID_PIBBRAKESTATE3_LABEL_CAR8BCUPRESSURE1              0X00A1
#define ID_PIBBRAKESTATE3_LABEL_CAR8BCUPRESSURE2              0X00A2

#define ID_PIBBRAKESTATE3_LABEL_CAR7ASPRESSURE1               0X00A3
#define ID_PIBBRAKESTATE3_LABEL_CAR7ASPRESSURE2               0X00A4
#define ID_PIBBRAKESTATE3_LABEL_CAR8ASPRESSURE1               0X00A5
#define ID_PIBBRAKESTATE3_LABEL_CAR8ASPRESSURE2               0X00A6

#define ID_PIBBRAKESTATE3_LABEL_CAR7SIDETEMP                  0X00A7
#define ID_PIBBRAKESTATE3_LABEL_CAR8SIDETEMP                  0X00A8

#define ID_PIBBRAKESTATE3_LABEL_CAR7PLACESTATE                0X00A9
#define ID_PIBBRAKESTATE3_LABEL_CAR8PLACESTATE                0X00AA

#define ID_PIBBRAKESTATE3_LABEL_CAR7WARNING1                  0X00AB
#define ID_PIBBRAKESTATE3_LABEL_CAR7WARNING2                  0X00AC
#define ID_PIBBRAKESTATE3_LABEL_CAR8WARNING1                  0X00AD
#define ID_PIBBRAKESTATE3_LABEL_CAR8WARNING2                  0X00AE

#define ID_PIBBRAKESTATE3_LABEL_CAR6DRAWSYSSTATE              0X00AF
#define ID_PIBBRAKESTATE3_LABEL_CAR7DRAWSYSSTATE              0X00B0

#define ID_PIBBRAKESTATE3_LABEL_CAR7BCUSEPARATE1              0X00B1
#define ID_PIBBRAKESTATE3_LABEL_CAR7BCUSEPARATE2              0X00B2
#define ID_PIBBRAKESTATE3_LABEL_CAR8BCUSEPARATE1              0X00B3
#define ID_PIBBRAKESTATE3_LABEL_CAR8BCUSEPARATE2              0X00B4

#define   ID_PIBBRAKESTATE3_LABEL_CAR1RIDINGRATE         0X00B5
#define   ID_PIBBRAKESTATE3_LABEL_CAR2RIDINGRATE         0X00B6
#define   ID_PIBBRAKESTATE3_LABEL_CAR3RIDINGRATE         0X00B7
#define   ID_PIBBRAKESTATE3_LABEL_CAR4RIDINGRATE         0X00B8
#define   ID_PIBBRAKESTATE3_LABEL_CAR5RIDINGRATE         0X00B9
#define   ID_PIBBRAKESTATE3_LABEL_CAR6RIDINGRATE         0X00BA
#define   ID_PIBBRAKESTATE3_LABEL_CAR7RIDINGRATE         0X00BB
#define   ID_PIBBRAKESTATE3_LABEL_CAR8RIDINGRATE         0X00BC
#define   ID_PIBBRAKESTATE3_BUTTON_FASPAGE               0X00BD
#define   ID_PIBBRAKESTATE3_LABEL_CAR1ASSISTSYS_V          0X00BE
#define   ID_PIBBRAKESTATE3_LABEL_CAR8ASSISTSYS_V          0X00BF
#define   ID_PIBBRAKESTATE3_LABEL_CAR4KAUXSTATE          0X00C0

#define ID_PIBBRAKESTATE3_LABEL_ByPass                   0X00C1
#define ID_PIBBRAKESTATE3_LABEL_FAS_status               0X00C2

#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR9                0X00C3
#define ID_PIBBRAKESTATE3_LABEL_CAR1DOOR10               0X00C4
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR9                0X00C5
#define ID_PIBBRAKESTATE3_LABEL_CAR8DOOR10               0X00C6

//#define ID_PIBBRAKESTATE3_LABEL_TOWMODE                   0X00C7

#define ID_PIBBRAKESTATE3_LABEL_DisEBTest               0X00C8

#define ID_PIBBRAKESTATE3_BUTTON_PGUP               0X00C9
#define ID_PIBBRAKESTATE3_BUTTON_PGDN               0X00CA


#define ID_PIBBRAKESTATE3_LABEL_CARNUMBER1        0X00D1
#define ID_PIBBRAKESTATE3_LABEL_CARNUMBER2        0X00D2
#define ID_PIBBRAKESTATE3_LABEL_CARNUMBER3        0X00D3
#define ID_PIBBRAKESTATE3_LABEL_CARNUMBER4        0X00D4
#define ID_PIBBRAKESTATE3_LABEL_CARNUMBER5        0X00D5
#define ID_PIBBRAKESTATE3_LABEL_CARNUMBER6        0X00D6


//#define ID_PIBBRAKESTATE3_BUTTON_EMERGENCYBROADCAS     0X00CB

extern vector<CPage*>  g_PageVec;

class C_Page_Brake_Status3 : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_Brake_Status3)
public:
    C_Page_Brake_Status3();

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

    void UpdateWDINReady();
    void UpdateWDINStatus();
    void UpdateBCUA1WDActive();
    void UpdateBCUA1WD();
    void UpdateEPPossitive();
    void UpdateBCUA1Speed1();
    void UpdateBCUA1Speed2();
    void UpdateBCUA1Speed3();
    void UpdateBCUA1Speed4();

    void UpdateBCU_Online();
    void SetOnlineLabelColor(int id, int colorVal);

    void SetLabelColor(int id, int colorVal);
    void SetBoolLabelColor(int id, int colorVal);


    void OnBroadCastBtnClk();

    void UpdateACU();

    void UpdateCompressorStatus();
    void UpdateTCUStatus();
    //void UpdateBCUPressure();
    void UpdateWarning();
    void UpdateASPressure();
    //void UpdatePlaceStatus();
    //void UpdateBCUSeparater();
    void UpdateNETMode();
    void UpdateATOMode();

    void UpdateStation();
    void UpdateCarTem();
    void UpdateDoor();
    void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateTowMode();
    void UpdateTcu_Enable();

    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateFAS_status_Hide();
    void UpdateByPass_Hide();
    void UpdateSpeed();
    void UpdateEmergencyBroadcast();

    void UpdateDisEBTest();

    void SetCompressorStatusLabelColor(int id, int colorVal);
    void SetTCUStatusLabelColor(int id, int colorVal);
    void SetBCUPressureLabelColor(int id, int colorVal);
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

    void SetAcuLabelColor(int id, int colorVal);
    void SetKauxLabelColor(int id, int colorVal);

    void OnEmergencyResuce();
    void OnFASpageBtnClk();
    void OnPageUpBtnClk();
    void OnPageDownBtnClk();

    void updateArrFinalStation();
    void OnRealTimeFaultsWarnningIconClk();

    void UpdateRidingRate();

};


#endif // C_PAGE_BRAKE_STATUS3_H
