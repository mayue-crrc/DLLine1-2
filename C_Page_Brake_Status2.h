#ifndef C_PAGE_BRAKE_STATUS2_H
#define C_PAGE_BRAKE_STATUS2_H



#include "CPage.h"
#include "DataBuffer.h"
#include "CRealTimeFaultsWarnningDialog.h"


//active slide
#define ID_PIBBRAKESTATE2_LABEL_CAR1ACTIVESLIDE1              0X0139
#define ID_PIBBRAKESTATE2_LABEL_CAR1ACTIVESLIDE2              0X013A
#define ID_PIBBRAKESTATE2_LABEL_CAR2ACTIVESLIDE1              0X013B
#define ID_PIBBRAKESTATE2_LABEL_CAR2ACTIVESLIDE2              0X013C
#define ID_PIBBRAKESTATE2_LABEL_CAR3ACTIVESLIDE1              0X013D
#define ID_PIBBRAKESTATE2_LABEL_CAR3ACTIVESLIDE2              0X013E
#define ID_PIBBRAKESTATE2_LABEL_CAR4ACTIVESLIDE1              0X013F
#define ID_PIBBRAKESTATE2_LABEL_CAR4ACTIVESLIDE2              0X0140
#define ID_PIBBRAKESTATE2_LABEL_CAR5ACTIVESLIDE1              0X0141
#define ID_PIBBRAKESTATE2_LABEL_CAR5ACTIVESLIDE2              0X0142
#define ID_PIBBRAKESTATE2_LABEL_CAR6ACTIVESLIDE1              0X0143
#define ID_PIBBRAKESTATE2_LABEL_CAR6ACTIVESLIDE2              0X0144
//remote release
#define ID_PIBBRAKESTATE2_LABEL_CAR1REMOTERELEAE1              0X0145
#define ID_PIBBRAKESTATE2_LABEL_CAR1REMOTERELEAE2              0X0146
#define ID_PIBBRAKESTATE2_LABEL_CAR2REMOTERELEAE1              0X0147
#define ID_PIBBRAKESTATE2_LABEL_CAR2REMOTERELEAE2              0X0148
#define ID_PIBBRAKESTATE2_LABEL_CAR3REMOTERELEAE1              0X0149
#define ID_PIBBRAKESTATE2_LABEL_CAR3REMOTERELEAE2              0X014A
#define ID_PIBBRAKESTATE2_LABEL_CAR4REMOTERELEAE1              0X014B
#define ID_PIBBRAKESTATE2_LABEL_CAR4REMOTERELEAE2              0X014C
#define ID_PIBBRAKESTATE2_LABEL_CAR5REMOTERELEAE1              0X014D
#define ID_PIBBRAKESTATE2_LABEL_CAR5REMOTERELEAE2              0X014E
#define ID_PIBBRAKESTATE2_LABEL_CAR6REMOTERELEAE1              0X014F
#define ID_PIBBRAKESTATE2_LABEL_CAR6REMOTERELEAE2              0X0150
//EP_OK
#define ID_PIBBRAKESTATE2_LABEL_CAR1EPOK1              0X0151
#define ID_PIBBRAKESTATE2_LABEL_CAR1EPOK2              0X0152
#define ID_PIBBRAKESTATE2_LABEL_CAR2EPOK1              0X0153
#define ID_PIBBRAKESTATE2_LABEL_CAR2EPOK2              0X0154
#define ID_PIBBRAKESTATE2_LABEL_CAR3EPOK1              0X0155
#define ID_PIBBRAKESTATE2_LABEL_CAR3EPOK2              0X0156
#define ID_PIBBRAKESTATE2_LABEL_CAR4EPOK1              0X0157
#define ID_PIBBRAKESTATE2_LABEL_CAR4EPOK2              0X0158
#define ID_PIBBRAKESTATE2_LABEL_CAR5EPOK1              0X0159
#define ID_PIBBRAKESTATE2_LABEL_CAR5EPOK2              0X016A
#define ID_PIBBRAKESTATE2_LABEL_CAR6EPOK1              0X016B
#define ID_PIBBRAKESTATE2_LABEL_CAR6EPOK2              0X016C
//Train loading
#define ID_PIBBRAKESTATE2_LABEL_CAR1LOADING1              0X016D
#define ID_PIBBRAKESTATE2_LABEL_CAR1LOADING2              0X016E
#define ID_PIBBRAKESTATE2_LABEL_CAR2LOADING1              0X016F
#define ID_PIBBRAKESTATE2_LABEL_CAR2LOADING2              0X0170
#define ID_PIBBRAKESTATE2_LABEL_CAR3LOADING1              0X0171
#define ID_PIBBRAKESTATE2_LABEL_CAR3LOADING2              0X0172
#define ID_PIBBRAKESTATE2_LABEL_CAR4LOADING1              0X0173
#define ID_PIBBRAKESTATE2_LABEL_CAR4LOADING2              0X0174
#define ID_PIBBRAKESTATE2_LABEL_CAR5LOADING1              0X0175
#define ID_PIBBRAKESTATE2_LABEL_CAR5LOADING2              0X0176
#define ID_PIBBRAKESTATE2_LABEL_CAR6LOADING1              0X0177
#define ID_PIBBRAKESTATE2_LABEL_CAR6LOADING2              0X0178
//EB_active_in_CAN
#define ID_PIBBRAKESTATE2_LABEL_CAR1EBACTIVEINCAN         0X0179
#define ID_PIBBRAKESTATE2_LABEL_CAR2EBACTIVEINCAN         0X017A
//CAN_ID
#define ID_PIBBRAKESTATE2_LABEL_CAR1CANID                0X0057
//#define ID_PIBBRAKESTATE2_LABEL_CAR2CANID                0X0058
//#define ID_PIBBRAKESTATE2_LABEL_CAR3CANID                0X0059
//#define ID_PIBBRAKESTATE2_LABEL_CAR4CANID                0X005A
//#define ID_PIBBRAKESTATE2_LABEL_CAR5CANID                0X005B
#define ID_PIBBRAKESTATE2_LABEL_CAR6CANID                0X005C
//Prime_GV
#define ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV                0X017B
#define ID_PIBBRAKESTATE2_LABEL_CAR2PRIMEGV                0X017C
#define ID_PIBBRAKESTATE2_LABEL_CAR3PRIMEGV                0X017D
#define ID_PIBBRAKESTATE2_LABEL_CAR4PRIMEGV                0X017E
#define ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV                0X017F
#define ID_PIBBRAKESTATE2_LABEL_CAR6PRIMEGV                0X0180
//ED_Cutout
//#define ID_PIBBRAKESTATE2_LABEL_CAR1EDCUTOUT                0X0181
#define ID_PIBBRAKESTATE2_LABEL_CAR2EDCUTOUT                0X0182
#define ID_PIBBRAKESTATE2_LABEL_CAR3EDCUTOUT                0X0183
#define ID_PIBBRAKESTATE2_LABEL_CAR4EDCUTOUT                0X0184
#define ID_PIBBRAKESTATE2_LABEL_CAR5EDCUTOUT                0X0185
//#define ID_PIBBRAKESTATE2_LABEL_CAR6EDCUTOUT                0X0186
//ED_Brake_Effort_valid
//#define ID_PIBBRAKESTATE2_LABEL_CAR1EDBRKVALID                0X0187
#define ID_PIBBRAKESTATE2_LABEL_CAR2EDBRKVALID                0X0188
#define ID_PIBBRAKESTATE2_LABEL_CAR3EDBRKVALID                0X0189
#define ID_PIBBRAKESTATE2_LABEL_CAR4EDBRKVALID                0X018A
#define ID_PIBBRAKESTATE2_LABEL_CAR5EDBRKVALID                0X018B
//#define ID_PIBBRAKESTATE2_LABEL_CAR6EDBRKVALID                0X018C
//ED_Brake_Effort
//#define ID_PIBBRAKESTATE2_LABEL_CAR1EDBRKEFF                0X018D
#define ID_PIBBRAKESTATE2_LABEL_CAR2EDBRKEFF                0X018E
#define ID_PIBBRAKESTATE2_LABEL_CAR3EDBRKEFF                0X018F
#define ID_PIBBRAKESTATE2_LABEL_CAR4EDBRKEFF                0X0190
#define ID_PIBBRAKESTATE2_LABEL_CAR5EDBRKEFF                0X0191
//#define ID_PIBBRAKESTATE2_LABEL_CAR6EDBRKEFF                0X0191


#define ID_PIBBRAKESTATE2_ARROW_RIGHT                         0X0001
#define ID_PIBBRAKESTATE2_ARROW_LEFT                          0X0002
#define ID_PIBBRAKESTATE2_TRAIN                               0X0003
#define ID_PIBBRAKESTATE2_LABEL_ATOMODE                       0X0004
#define ID_PIBBRAKESTATE2_LABEL_NETMODE                       0X0005
#define ID_PIBBRAKESTATE2_LABEL_CONTRAVARIANTMODE             0X0006
#define ID_PIBBRAKESTATE2_LABEL_WASHCARMODE                   0X0007
#define ID_PIBBRAKESTATE2_BUTTON_EMERGENCYBROADCAST           0X0008
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR1                     0X0009
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR2                     0X0034
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR3                     0X0035
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR4                     0X0036
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR5                     0X0037//ADD
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR6                     0X000A
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR7                     0X000B
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR8                     0X000C
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR1                     0X000D
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR2                     0X000E
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR3                     0X000F
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR4                     0X0010
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR5                     0X0011
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR6                     0X0012
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR7                     0X0013
#define ID_PIBBRAKESTATE2_LABEL_CAR2DOOR8                     0X0014
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR1                     0X0015
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR2                     0X0016
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR3                     0X0017
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR4                     0X0018
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR5                     0X0019
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR6                     0X001A
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR7                     0X001B
#define ID_PIBBRAKESTATE2_LABEL_CAR3DOOR8                     0X001C
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR1                     0X001D
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR2                     0X001E
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR3                     0X001F
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR4                     0X0020
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR5                     0X0021
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR6                     0X0022
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR7                     0X0023
#define ID_PIBBRAKESTATE2_LABEL_CAR4DOOR8                     0X0024
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR1                     0X0025
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR2                     0X0026
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR3                     0X0027
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR4                     0X0028
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR5                     0X0029
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR6                     0X002A
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR7                     0X002B
#define ID_PIBBRAKESTATE2_LABEL_CAR5DOOR8                     0X002C
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR1                     0X002D
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR2                     0X002E
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR3                     0X002F
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR4                     0X0030
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR5                     0X0031
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR6                     0X0032
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR7                     0X0033
#define ID_PIBBRAKESTATE2_LABEL_CAR6DOOR8                     0X0038

#define ID_PIBBRAKESTATE2_LABEL_CAR1ASPRESSURE1               0X0045
#define ID_PIBBRAKESTATE2_LABEL_CAR1ASPRESSURE2               0X0046
#define ID_PIBBRAKESTATE2_LABEL_CAR2ASPRESSURE1               0X0047
#define ID_PIBBRAKESTATE2_LABEL_CAR2ASPRESSURE2               0X0048
#define ID_PIBBRAKESTATE2_LABEL_CAR3ASPRESSURE1               0X0049
#define ID_PIBBRAKESTATE2_LABEL_CAR3ASPRESSURE2               0X004A
#define ID_PIBBRAKESTATE2_LABEL_CAR4ASPRESSURE1               0X004B
#define ID_PIBBRAKESTATE2_LABEL_CAR4ASPRESSURE2               0X004C
#define ID_PIBBRAKESTATE2_LABEL_CAR5ASPRESSURE1               0X004D
#define ID_PIBBRAKESTATE2_LABEL_CAR5ASPRESSURE2               0X004E
#define ID_PIBBRAKESTATE2_LABEL_CAR6ASPRESSURE1               0X004F
#define ID_PIBBRAKESTATE2_LABEL_CAR6ASPRESSURE2               0X0050
#define ID_PIBBRAKESTATE2_LABEL_CAR1SIDETEMP                  0X0051
#define ID_PIBBRAKESTATE2_LABEL_CAR2SIDETEMP                  0X0052
#define ID_PIBBRAKESTATE2_LABEL_CAR3SIDETEMP                  0X0053
#define ID_PIBBRAKESTATE2_LABEL_CAR4SIDETEMP                  0X0054
#define ID_PIBBRAKESTATE2_LABEL_CAR5SIDETEMP                  0X0055
#define ID_PIBBRAKESTATE2_LABEL_CAR6SIDETEMP                  0X0056



#define ID_PIBBRAKESTATE2_LABEL_CAR1WARNING1                  0X005D
#define ID_PIBBRAKESTATE2_LABEL_CAR1WARNING2                  0X005E
#define ID_PIBBRAKESTATE2_LABEL_CAR2WARNING1                  0X005F
#define ID_PIBBRAKESTATE2_LABEL_CAR2WARNING2                  0X0060
#define ID_PIBBRAKESTATE2_LABEL_CAR3WARNING1                  0X0061
#define ID_PIBBRAKESTATE2_LABEL_CAR3WARNING2                  0X0062
#define ID_PIBBRAKESTATE2_LABEL_CAR4WARNING1                  0X0063
#define ID_PIBBRAKESTATE2_LABEL_CAR4WARNING2                  0X0064
#define ID_PIBBRAKESTATE2_LABEL_CAR5WARNING1                  0X0065
#define ID_PIBBRAKESTATE2_LABEL_CAR5WARNING2                  0X0066
#define ID_PIBBRAKESTATE2_LABEL_CAR6WARNING1                  0X0067
#define ID_PIBBRAKESTATE2_LABEL_CAR6WARNING2                  0X0068
#define ID_PIBBRAKESTATE2_ICON_WARNNING                       0X0069
#define ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE              0X006A
#define ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE              0X006B
#define ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE              0X006C
#define ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE              0X006D
#define ID_PIBBRAKESTATE2_LABEL_CAR1AIRCOMPRESSORSTATE        0X006E
#define ID_PIBBRAKESTATE2_LABEL_CAR6AIRCOMPRESSORSTATE        0X006F
/*#define ID_PIBBRAKESTATE2_LABEL_CAR1BCUSEPARATE1              0X0070
#define ID_PIBBRAKESTATE2_LABEL_CAR1BCUSEPARATE2              0X0071
#define ID_PIBBRAKESTATE2_LABEL_CAR2BCUSEPARATE1              0X0072
#define ID_PIBBRAKESTATE2_LABEL_CAR2BCUSEPARATE2              0X0073
#define ID_PIBBRAKESTATE2_LABEL_CAR3BCUSEPARATE1              0X0074
#define ID_PIBBRAKESTATE2_LABEL_CAR3BCUSEPARATE2              0X0075
#define ID_PIBBRAKESTATE2_LABEL_CAR4BCUSEPARATE1              0X0076
#define ID_PIBBRAKESTATE2_LABEL_CAR4BCUSEPARATE2              0X0077
#define ID_PIBBRAKESTATE2_LABEL_CAR5BCUSEPARATE1              0X0078
#define ID_PIBBRAKESTATE2_LABEL_CAR5BCUSEPARATE2              0X0079
#define ID_PIBBRAKESTATE2_LABEL_CAR6BCUSEPARATE1              0X007A
#define ID_PIBBRAKESTATE2_LABEL_CAR6BCUSEPARATE2              0X007B*/
#define ID_PIBBRAKESTATE2_LABEL_TERMINALSTATION               0X007C
#define ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG           0X007D
//#define ID_PIBBRAKESTATE2_LABEL2_ARRIVETERMINALFLAG           0X0083//ADD
#define ID_PIBBRAKESTATE2_LABEL_DRAWBCUGRADE                  0X007E

#define ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1         0X0080
#define ID_PIBBRAKESTATE2_LABEL_NETVOLTAGE                    0X0081
#define ID_PIBBRAKESTATE2_LABEL_NETCURRENT                    0X0082
#define ID_PIBBRAKESTATE2_LABEL_V                             0X0084
#define ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2         0X0085
#define ID_PIBBRAKESTATE2_LABEL_NUM1                          0X0086
#define ID_PIBBRAKESTATE2_LABEL_NUM2                          0X0087
#define ID_PIBBRAKESTATE2_INTERRUPT                           0X0088

#define ID_PIBBRAKESTATE2_LABEL_A                            0X0089
#define ID_PIBBRAKESTATE2_LABEL_TRACTIONMODEL                0X008A
#define ID_PIBBRAKESTATE2_LABEL_SPEED                        0X008B

#define ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE             0X008C
#define ID_PIBBRAKESTATE2_LABEL_TCU_ENABLE1                   0X008D
#define ID_PIBBRAKESTATE2_LABEL_TCU_ENABLE2                   0X008E

#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR1                     0X008F
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR2                     0X0090
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR3                     0X0091
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR4                     0X0092
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR5                     0X0093
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR6                     0X0094
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR7                     0X0095
#define ID_PIBBRAKESTATE2_LABEL_CAR7DOOR8                     0X0096
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR1                     0X0097
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR2                     0X0098
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR3                     0X0099
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR4                     0X009A
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR5                     0X009B
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR6                     0X009C
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR7                     0X009D
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR8                     0X009E

#define ID_PIBBRAKESTATE2_LABEL_CAR7BCUPRESSURE1              0X009F
#define ID_PIBBRAKESTATE2_LABEL_CAR7BCUPRESSURE2              0X00A0
#define ID_PIBBRAKESTATE2_LABEL_CAR8BCUPRESSURE1              0X00A1
#define ID_PIBBRAKESTATE2_LABEL_CAR8BCUPRESSURE2              0X00A2

#define ID_PIBBRAKESTATE2_LABEL_CAR7ASPRESSURE1               0X00A3
#define ID_PIBBRAKESTATE2_LABEL_CAR7ASPRESSURE2               0X00A4
#define ID_PIBBRAKESTATE2_LABEL_CAR8ASPRESSURE1               0X00A5
#define ID_PIBBRAKESTATE2_LABEL_CAR8ASPRESSURE2               0X00A6

#define ID_PIBBRAKESTATE2_LABEL_CAR7SIDETEMP                  0X00A7
#define ID_PIBBRAKESTATE2_LABEL_CAR8SIDETEMP                  0X00A8

#define ID_PIBBRAKESTATE2_LABEL_CAR7PLACESTATE                0X00A9
#define ID_PIBBRAKESTATE2_LABEL_CAR8PLACESTATE                0X00AA

#define ID_PIBBRAKESTATE2_LABEL_CAR7WARNING1                  0X00AB
#define ID_PIBBRAKESTATE2_LABEL_CAR7WARNING2                  0X00AC
#define ID_PIBBRAKESTATE2_LABEL_CAR8WARNING1                  0X00AD
#define ID_PIBBRAKESTATE2_LABEL_CAR8WARNING2                  0X00AE

#define ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE              0X00AF
#define ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE              0X00B0

#define ID_PIBBRAKESTATE2_LABEL_CAR7BCUSEPARATE1              0X00B1
#define ID_PIBBRAKESTATE2_LABEL_CAR7BCUSEPARATE2              0X00B2
#define ID_PIBBRAKESTATE2_LABEL_CAR8BCUSEPARATE1              0X00B3
#define ID_PIBBRAKESTATE2_LABEL_CAR8BCUSEPARATE2              0X00B4

#define   ID_PIBBRAKESTATE2_LABEL_CAR1RIDINGRATE         0X00B5
#define   ID_PIBBRAKESTATE2_LABEL_CAR2RIDINGRATE         0X00B6
#define   ID_PIBBRAKESTATE2_LABEL_CAR3RIDINGRATE         0X00B7
#define   ID_PIBBRAKESTATE2_LABEL_CAR4RIDINGRATE         0X00B8
#define   ID_PIBBRAKESTATE2_LABEL_CAR5RIDINGRATE         0X00B9
#define   ID_PIBBRAKESTATE2_LABEL_CAR6RIDINGRATE         0X00BA
#define   ID_PIBBRAKESTATE2_LABEL_CAR7RIDINGRATE         0X00BB
#define   ID_PIBBRAKESTATE2_LABEL_CAR8RIDINGRATE         0X00BC
#define   ID_PIBBRAKESTATE2_BUTTON_FASPAGE               0X00BD
#define   ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V          0X00BE
#define   ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V          0X00BF
#define   ID_PIBBRAKESTATE2_LABEL_CAR4KAUXSTATE          0X00C0

#define ID_PIBBRAKESTATE2_LABEL_ByPass                   0X00C1
#define ID_PIBBRAKESTATE2_LABEL_FAS_status               0X00C2

#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR9                0X00C3
#define ID_PIBBRAKESTATE2_LABEL_CAR1DOOR10               0X00C4
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR9                0X00C5
#define ID_PIBBRAKESTATE2_LABEL_CAR8DOOR10               0X00C6

//#define ID_PIBBRAKESTATE2_LABEL_TOWMODE                   0X00C7

#define ID_PIBBRAKESTATE2_LABEL_DisEBTest               0X00C8

#define ID_PIBBRAKESTATE2_BUTTON_PGUP               0X00C9
#define ID_PIBBRAKESTATE2_BUTTON_PGDN               0X00CA

#define ID_PIBBRAKESTATE2_LABEL_CARNUMBER1        0X00D1
#define ID_PIBBRAKESTATE2_LABEL_CARNUMBER2        0X00D2
#define ID_PIBBRAKESTATE2_LABEL_CARNUMBER3        0X00D3
#define ID_PIBBRAKESTATE2_LABEL_CARNUMBER4        0X00D4
#define ID_PIBBRAKESTATE2_LABEL_CARNUMBER5        0X00D5
#define ID_PIBBRAKESTATE2_LABEL_CARNUMBER6        0X00D6


extern vector<CPage*>  g_PageVec;

class C_Page_Brake_Status2 : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_Brake_Status2)
public:
    C_Page_Brake_Status2();

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
    void UpdateActiveSlide();
    void UpdateRemoteRelease();
    void UpdateEP();
    void UpdateTrainLoading();
    void UpdateEBActiveInCAN();
    void UpdateCANID();
    void UpdatePrimeGV();
    void UpdateEDCutout();
    void UpdateEDBrakeEffortValid();
    void UpdateEDBrakeEffort();
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
    void SetBcuLabelColor(int id, int colorVal);

};



#endif // C_PAGE_BRAKE_STATUS2_H
