#ifndef C_PAGE_TCU_STATUS4_H
#define C_PAGE_TCU_STATUS4_H


#include "CPage.h"
#include "DataBuffer.h"


#define   ID_PIBTCU_4_LABEL_CARNUMBER2        0X0061
#define   ID_PIBTCU_4_LABEL_CARNUMBER3        0X0062
#define   ID_PIBTCU_4_LABEL_CARNUMBER4        0X0063
#define   ID_PIBTCU_4_LABEL_CARNUMBER5        0X0064

//MotorVelocity

#define   ID_PIBTCU_4_LABEL_CRA2MOTORVELOCITY   0X0100
#define   ID_PIBTCU_4_LABEL_CRA3MOTORVELOCITY   0X0101
#define   ID_PIBTCU_4_LABEL_CRA4MOTORVELOCITY   0X0102
#define   ID_PIBTCU_4_LABEL_CRA5MOTORVELOCITY   0X0103

//Motor1Velocity

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR1VELOCITY   0X0104
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR1VELOCITY   0X0105
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR1VELOCITY   0X0106
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR1VELOCITY   0X0107

//Motor2Velocity

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR2VELOCITY   0X0108
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR2VELOCITY   0X0109
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR2VELOCITY   0X010A
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR2VELOCITY   0X010B

//Motor3Velocity

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR3VELOCITY   0X010C
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR3VELOCITY   0X010D
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR3VELOCITY   0X010E
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR3VELOCITY   0X010F

//Motor3Velocity

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY   0X0110
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR4VELOCITY   0X0111
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR4VELOCITY   0X0112
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR4VELOCITY   0X0113

//Motor1Temp

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR1TEMP   0X0114
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR1TEMP   0X0115
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR1TEMP   0X0116
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR1TEMP   0X0117

//Motor2Temp

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR2TEMP  0X0118
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR2TEMP  0X0119
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR2TEMP  0X011A
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR2TEMP  0X011B

//Motor3Temp

#define   ID_PIBTCU_4_LABEL_CRA2MOTOR3TEMP  0X011C
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR3TEMP  0X011D
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR3TEMP  0X011E
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR3TEMP  0X011F

//Motor4Temp
#define   ID_PIBTCU_4_LABEL_CRA2MOTOR4TEMP   0X0120
#define   ID_PIBTCU_4_LABEL_CRA3MOTOR4TEMP   0X0121
#define   ID_PIBTCU_4_LABEL_CRA4MOTOR4TEMP   0X0122
#define   ID_PIBTCU_4_LABEL_CRA5MOTOR4TEMP   0X0123

//Electric Brake Slide
//#define   ID_PIBTCU_4_LABEL_CRA2ELECBRKSLIDE   0X0124
//#define   ID_PIBTCU_4_LABEL_CRA3ELECBRKSLIDE   0X0125
//#define   ID_PIBTCU_4_LABEL_CRA4ELECBRKSLIDE   0X0126
//#define   ID_PIBTCU_4_LABEL_CRA5ELECBRKSLIDE   0X0127

#define  ID_PIBTCU_4_LABEL_DisEBTest      0X0500
#define  ID_PIBTCU_4_LABEL_FAS_status     0X0501
#define  ID_PIBTCU_4_LABEL_ByPass         0X0502



#define   ID_PIBTCU_4_ICON_WARNNING                0X0001
#define   ID_PIBTCU_4_TRAIN                        0X0002
#define   ID_PIBTCU_4_ARROW_RIGHT                  0X0003
#define   ID_PIBTCU_4_ARROW_LEFT                   0X0004
#define   ID_PIBTCU_4_LABEL_ATOMODE                0X0005
#define   ID_PIBTCU_4_BUTTON_EMERGENCYBROADCAST    0X0006
#define   ID_PIBTCU_4_BUTTON_PAGEUP                0X0007
#define   ID_PIBTCU_4_BUTTON_PAGEDOWN              0X0008
#define   ID_PIBTCU_4_LABEL_CRA2DRAWBCUFORCE       0X0009
#define   ID_PIBTCU_4_LABEL_CRA3DRAWBCUFORCE       0X000A
#define   ID_PIBTCU_4_LABEL_CRA4DRAWBCUFORCE       0X000B
#define   ID_PIBTCU_4_LABEL_CRA5DRAWBCUFORCE       0X000C
#define   ID_PIBTCU_4_LABEL_CRA2DYNAMOREV          0X000D
#define   ID_PIBTCU_4_LABEL_CRA3DYNAMOREV          0X000E
#define   ID_PIBTCU_4_LABEL_CRA4DYNAMOREV          0X000F
#define   ID_PIBTCU_4_LABEL_CRA5DYNAMOREV          0X0010
#define   ID_PIBTCU_4_LABEL_CRA2HSCBSTATUS         0X0011
#define   ID_PIBTCU_4_LABEL_CRA3HSCBSTATUS         0X0012
#define   ID_PIBTCU_4_LABEL_CRA6ATC1STATUS         0X0013
#define   ID_PIBTCU_4_LABEL_CRA6ATC2STATUS         0X0014
#define   ID_PIBTCU_4_LABEL_CRA3KICSTATE           0X0015
#define   ID_PIBTCU_4_LABEL_CRA2KCCCSTATE          0X0016
#define   ID_PIBTCU_4_LABEL_CRA3KCCCSTATE          0X0017
#define   ID_PIBTCU_4_LABEL_CRA4KCCCSTATE          0X0018
#define   ID_PIBTCU_4_LABEL_CRA5KCCCSTATE          0X0019
#define   ID_PIBTCU_4_LABEL_CRA1K750STATUS         0X001A
#define   ID_PIBTCU_4_LABEL_CRA6K750STATUS         0X001B
#define   ID_PIBTCU_4_LABEL_CRA1ATC1STATUS         0X001C
#define   ID_PIBTCU_4_LABEL_CRA1ATC2STATUS         0X001D
#define   ID_PIBTCU_4_LABEL_CRA2KICSTATE           0X001E
#define   ID_PIBTCU_4_LABEL_CRA4KICSTATE           0X001F
#define   ID_PIBTCU_4_LABEL_CRA5KICSTATE           0X0028
#define   ID_PIBTCU_4_LABEL_NETVOLTAGE             0X0029
#define   ID_PIBTCU_4_LABEL_NECURRENT              0X002A//ADD
#define   ID_PIBTCU_4_LABEL_DRAWBCUGRADE           0X0020

#define   ID_PIBTCU_4_LABEL_CRA1DRAWBCUFORCE       0X0022
#define   ID_PIBTCU_4_LABEL_CRA4HSCBSTATUS         0X0023
#define   ID_PIBTCU_4_LABEL_CRA5HSCBSTATUS         0X0024
#define   ID_PIBTCU_4_LABEL_CRA1PISSTATUS          0X0025
#define   ID_PIBTCU_4_LABEL_CRA6PISSTATUS          0X0026
#define   ID_PIBTCU_4_LABEL_CRA6DRAWBCUFORCE       0X0027
#define   ID_PIBTCU_4_COMMINTERRUPT                0X002B
#define   ID_PIBTCU_4_LABEL_V                      0X002C
#define   ID_PIBTCU_4_LABEL_NETMODE                0X002D
#define   ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE      0X002E
#define   ID_PIBTCU_4_LABEL_WASHCARMODE            0X002F

#define ID_PIBTCU_4_LABEL_A                   0X0030
#define ID_PIBTCU_4_LABEL_TRACTIONMODEL       0X0031
#define ID_PIBTCU_4_LABEL_SPEED               0X0032

#define ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE    0X0033
#define ID_PIBTCU_4_BUTTON_FASPAGE            0X0034

#define ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE              0X0035
#define ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE              0X0036
#define ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE              0X0037
#define ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE              0X0038
#define ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE              0X0039
#define ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE              0X003A
#define ID_PIBTCU_4_LABEL_TCU_ENABLE1                   0X003B
#define ID_PIBTCU_4_LABEL_TCU_ENABLE2                   0X003C

#define   ID_PIBTCU_4_LABEL_CRA7DRAWBCUFORCE       0X003D
#define   ID_PIBTCU_4_LABEL_CRA8DRAWBCUFORCE       0X003E

#define   ID_PIBTCU_4_LABEL_CRA6DYNAMOREV          0X003F
#define   ID_PIBTCU_4_LABEL_CRA7DYNAMOREV          0X0040

#define   ID_PIBTCU_4_LABEL_CRA6HSCBSTATUS         0X0041
#define   ID_PIBTCU_4_LABEL_CRA7HSCBSTATUS         0X0042

#define   ID_PIBTCU_4_LABEL_CRA6KICSTATE           0X0043
#define   ID_PIBTCU_4_LABEL_CRA7KICSTATE           0X0044

#define   ID_PIBTCU_4_LABEL_CRA6KCCCSTATE          0X0045
#define   ID_PIBTCU_4_LABEL_CRA7KCCCSTATE          0X0046

#define   ID_PIBTCU_4_LABEL_CAR1IESSTATE           0X0047
#define   ID_PIBTCU_4_LABEL_CAR8IESSTATE           0X0048

#define   ID_PIBTCU_4_LABEL_CAR2Mainfuse1           0X0049
#define   ID_PIBTCU_4_LABEL_CAR4Mainfuse1           0X004A
#define   ID_PIBTCU_4_LABEL_CAR7Mainfuse1           0X004B

//#define   ID_PIBTCU_4_LABEL_TOWMODE                0X004C

#define   ID_PIBTCU_4_LABEL_CAR2Mainfuse2           0X004D
#define   ID_PIBTCU_4_LABEL_CAR4Mainfuse2           0X004E
#define   ID_PIBTCU_4_LABEL_CAR7Mainfuse2           0X004F

#define   ID_PIBTCU_4_LABEL_CAR4IESSTATE           0X0050

#define ID_PIBTCU_4_BUTTON_PGUP               0X0051
#define ID_PIBTCU_4_BUTTON_PGDN               0X0052


extern vector<CPage*>  g_PageVec;

class C_Page_TCU_Status4 : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_TCU_Status4)
public:
    C_Page_TCU_Status4();

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


    void UpdateByPass_Hide();
    void UpdateMotorVelocity();
    void UpdateMotor1Velocity();
    void UpdateMotor2Velocity();
    void UpdateMotor3Velocity();
    void UpdateMotor4Velocity();
    void UpdateMotor1Temp();
    void UpdateMotor2Temp();
    void UpdateMotor3Temp();
    void UpdateMotor4Temp();
    void SetLabelColor(int id,int colorVal);



    void OnRealTimeFaultsWarnningIconClk();

   // void UpdateHSCB();
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

    void UpdateTCU_Online();
    void SetOnlineLabelColor(int id,int colorVal);



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
    //void UpdateTCUStatus();

    void OnPageUpBtnClk();
    void OnPageDownBtnClk();

};


#endif // C_PAGE_TCU_STATUS4_H
