#ifndef C_PAGE_DOOR_SETTING_H
#define C_PAGE_DOOR_SETTING_H




#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBDS_LABEL_WORKNOMAL                           0X0001
#define ID_PIBDS_LABEL_DORMANCY                            0X0002
#define ID_PIBDS_LABEL_FAULTHAPPEN                         0X0003
#define ID_PIBDS_LABEL_COMMUNICATEABNORMITYORPOWEROFF      0X0004

#define ID_PIBDS_LABEL_SETTING1                            0X0005
#define ID_PIBDS_LABEL_SETTING2                            0X0006
#define ID_PIBDS_LABEL_SETTING3                            0X0007
#define ID_PIBDS_LABEL_SETTING4                            0X0008
#define ID_PIBDS_LABEL_SETTING5                            0X0009
#define ID_PIBDS_LABEL_SETTING6                            0X000A
#define ID_PIBDS_LABEL_SETTING7                            0X000B
#define ID_PIBDS_LABEL_SETTING8                            0X000C
#define ID_PIBDS_LABEL_SETTING9                            0X000D
#define ID_PIBDS_LABEL_SETTING10                            0X000E
#define ID_PIBDS_LABEL_SETTING11                            0X000F
#define ID_PIBDS_LABEL_SETTING12                            0X0010
#define ID_PIBDS_LABEL_SETTING13                            0X0011
#define ID_PIBDS_LABEL_SETTING14                            0X0012

#define ID_PIBDS_BUTTON_UP1                              0X0013
#define ID_PIBDS_BUTTON_DOWN1                            0X0014
#define ID_PIBDS_BUTTON_UP2                              0X0015
#define ID_PIBDS_BUTTON_DOWN2                            0X0016
#define ID_PIBDS_BUTTON_UP3                              0X0017
#define ID_PIBDS_BUTTON_DOWN3                            0X0018
#define ID_PIBDS_BUTTON_UP4                              0X0019
#define ID_PIBDS_BUTTON_DOWN4                            0X001A
#define ID_PIBDS_BUTTON_UP5                              0X001B
#define ID_PIBDS_BUTTON_DOWN5                            0X001C
#define ID_PIBDS_BUTTON_UP6                              0X001D
#define ID_PIBDS_BUTTON_DOWN6                            0X001E
#define ID_PIBDS_BUTTON_UP7                              0X001F
#define ID_PIBDS_BUTTON_DOWN7                            0X0020
#define ID_PIBDS_BUTTON_UP8                              0X0021
#define ID_PIBDS_BUTTON_DOWN8                            0X0022
#define ID_PIBDS_BUTTON_UP9                              0X0023
#define ID_PIBDS_BUTTON_DOWN9                            0X0024
#define ID_PIBDS_BUTTON_UP10                              0X0025
#define ID_PIBDS_BUTTON_DOWN10                            0X0026
#define ID_PIBDS_BUTTON_UP11                              0X0027
#define ID_PIBDS_BUTTON_DOWN11                            0X0028
#define ID_PIBDS_BUTTON_UP12                              0X0029
#define ID_PIBDS_BUTTON_DOWN12                            0X002A
#define ID_PIBDS_BUTTON_UP13                              0X002B
#define ID_PIBDS_BUTTON_DOWN13                            0X002C
#define ID_PIBDS_BUTTON_UP14                              0X002D
#define ID_PIBDS_BUTTON_DOWN14                            0X002E

//#define ID_PIBDS_LABEL_CAR1DOOR1                          0X002F
#define ID_PIBDS_LABEL_CAR1DOOR1                          0X0030
#define ID_PIBDS_LABEL_CAR1DOOR2                          0X0031
#define ID_PIBDS_LABEL_CAR1DOOR3                          0X0032
#define ID_PIBDS_LABEL_CAR1DOOR4                          0X0033
#define ID_PIBDS_LABEL_CAR1DOOR5                          0X0034
#define ID_PIBDS_LABEL_CAR1DOOR6                          0X0035
#define ID_PIBDS_LABEL_CAR1DOOR7                          0X0036
#define ID_PIBDS_LABEL_CAR1DOOR8                          0X0037

#define ID_PIBDS_LABEL_CAR2DOOR1                          0X0038
#define ID_PIBDS_LABEL_CAR2DOOR2                          0X0039
#define ID_PIBDS_LABEL_CAR2DOOR3                          0X003A
#define ID_PIBDS_LABEL_CAR2DOOR4                          0X003B
#define ID_PIBDS_LABEL_CAR2DOOR5                          0X003C
#define ID_PIBDS_LABEL_CAR2DOOR6                          0X003D
#define ID_PIBDS_LABEL_CAR2DOOR7                          0X003E
#define ID_PIBDS_LABEL_CAR2DOOR8                          0X003F

#define ID_PIBDS_LABEL_CAR3DOOR1                          0X0040
#define ID_PIBDS_LABEL_CAR3DOOR2                          0X0041
#define ID_PIBDS_LABEL_CAR3DOOR3                          0X0042
#define ID_PIBDS_LABEL_CAR3DOOR4                          0X0043
#define ID_PIBDS_LABEL_CAR3DOOR5                          0X0044
#define ID_PIBDS_LABEL_CAR3DOOR6                          0X0045
#define ID_PIBDS_LABEL_CAR3DOOR7                          0X0046
#define ID_PIBDS_LABEL_CAR3DOOR8                          0X0047

#define ID_PIBDS_LABEL_CAR4DOOR1                          0X0048
#define ID_PIBDS_LABEL_CAR4DOOR2                          0X0049
#define ID_PIBDS_LABEL_CAR4DOOR3                          0X004A
#define ID_PIBDS_LABEL_CAR4DOOR4                          0X004B
#define ID_PIBDS_LABEL_CAR4DOOR5                          0X004C
#define ID_PIBDS_LABEL_CAR4DOOR6                          0X004D
#define ID_PIBDS_LABEL_CAR4DOOR7                          0X004E
#define ID_PIBDS_LABEL_CAR4DOOR8                          0X004F

#define ID_PIBDS_LABEL_CAR5DOOR1                          0X0050
#define ID_PIBDS_LABEL_CAR5DOOR2                          0X0051
#define ID_PIBDS_LABEL_CAR5DOOR3                          0X0052
#define ID_PIBDS_LABEL_CAR5DOOR4                          0X0053
#define ID_PIBDS_LABEL_CAR5DOOR5                          0X0054
#define ID_PIBDS_LABEL_CAR5DOOR6                          0X0055
#define ID_PIBDS_LABEL_CAR5DOOR7                          0X0056
#define ID_PIBDS_LABEL_CAR5DOOR8                          0X0057

#define ID_PIBDS_LABEL_CAR6DOOR1                          0X0058
#define ID_PIBDS_LABEL_CAR6DOOR2                          0X0059
#define ID_PIBDS_LABEL_CAR6DOOR3                          0X005A
#define ID_PIBDS_LABEL_CAR6DOOR4                          0X005B
#define ID_PIBDS_LABEL_CAR6DOOR5                          0X005C
#define ID_PIBDS_LABEL_CAR6DOOR6                          0X005D
#define ID_PIBDS_LABEL_CAR6DOOR7                          0X005E
#define ID_PIBDS_LABEL_CAR6DOOR8                          0X005F

//#define ID_PIBDS_BUTTON_MAKESURE                          0X0030

//#define ID_PIBCSH_LABEL_BCUCANTRANSFERNOMAL                 0X0005
//#define ID_PIBCSH_LABEL_BCUCANTRANSFERABNORMITY             0X0006

extern vector<CPage*>  g_PageVec;

class C_Page_Door_Setting : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_Door_Setting)
public:
    C_Page_Door_Setting();


protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();

    void OnUpdateDoorPara1();

    void UpDateDrObsCloseForce1();
    void UpDateDrObsCloseForce2();
    void UpDateDrObsCloseForce3();
    void UpDateDrObsCloseForce4();
    void UpDateDrObsCloseForce5();
    void UpDateDrOpenTime();
    void UpDateDrCloSetDrime();
    void UpDateDrObsNumber();
    void UpDateDrOpenWidthOnObs();
    void UpDateDrObsDetectionDelay();
    void UpDateDrDelayTimeForOpen();
    void UpDateDrDelayTimeForClose();
    void UpDateDrObsRecloseDelay();
    void UpDateDrSetOK();

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
    void OnDoorParaSetUp1Clk();
    void OnDoorParaSetUp2Clk();
    void OnDoorParaSetUp3Clk();
    void OnDoorParaSetUp4Clk();
    void OnDoorParaSetUp5Clk();
    void OnDoorParaSetUp6Clk();
    void OnDoorParaSetUp7Clk();
    void OnDoorParaSetUp8Clk();
    void OnDoorParaSetUp9Clk();
    void OnDoorParaSetUp10Clk();
    void OnDoorParaSetUp11Clk();
    void OnDoorParaSetUp12Clk();
    void OnDoorParaSetUp13Clk();

    void OnDoorParaSetDown1Clk();
    void OnDoorParaSetDown2Clk();
    void OnDoorParaSetDown3Clk();
    void OnDoorParaSetDown4Clk();
    void OnDoorParaSetDown5Clk();
    void OnDoorParaSetDown6Clk();
    void OnDoorParaSetDown7Clk();
    void OnDoorParaSetDown8Clk();
    void OnDoorParaSetDown9Clk();
    void OnDoorParaSetDown10Clk();
    void OnDoorParaSetDown11Clk();
    void OnDoorParaSetDown12Clk();
    void OnDoorParaSetDown13Clk();

    void OnDoorConfirmClk();
    bool m_DChange;
    bool m_MakeSure;
};




#endif // C_PAGE_DOOR_SETTING_H
