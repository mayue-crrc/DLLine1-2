#ifndef CTractionSystemTestPage_H
#define CTractionSystemTestPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_TRACTSYSTEST_LABEL_CONDITION2 0x0001
#define ID_TRACTSYSTEST_LABEL_CONDITION3 0x0002
#define ID_TRACTSYSTEST_LABEL_CONDITION4 0x0003
#define ID_TRACTSYSTEST_LABEL_CONDITION5 0x0004

#define ID_TRACTSYSTEST_LABEL_HVAC_HEATING1 0x0005
#define ID_TRACTSYSTEST_LABEL_HVAC_HEATING2 0x0006
#define ID_TRACTSYSTEST_LABEL_HVAC_HEATING3 0x0007
#define ID_TRACTSYSTEST_LABEL_HVAC_HEATING4 0x0008

#define ID_TRACTSYSTEST_LABEL_HVAC_HEATING5 0x0009
#define ID_TRACTSYSTEST_LABEL_HVAC_HEATING6 0x000A
#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION4 0x000B
#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION5 0x000C

#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE2 0x000D
#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE3 0x000E
#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE4 0x000F
#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE5 0x0010

#define ID_TRACTSYSTEST_BUTTON_HIGHPREESURE 0x0011
#define ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE 0x0012

#define ID_TRACTSYSTEST_TRAIN             0x0013
#define ID_TRACTSYSTEST_ARROW_RIGHT       0x0014
#define ID_TRACTSYSTEST_ARROW_LEFT        0x0015

#define ID_TRACTSYSTEST_LABEL_TCUVERSION1       0x0016
#define ID_TRACTSYSTEST_LABEL_TCUVERSION2       0x0017
#define ID_TRACTSYSTEST_LABEL_TCUVERSION3       0x0018
#define ID_TRACTSYSTEST_LABEL_TCUVERSION4       0x0019

#define ID_TRACTSYSTEST_LABEL_HELP1       0x0020
#define ID_TRACTSYSTEST_LABEL_HELP2       0x0021

#define ID_TRACTSYSTEST_LABEL_TCUVERSION5       0x0022
#define ID_TRACTSYSTEST_LABEL_TCUVERSION6       0x0023

#define ID_TRACTSYSTEST_LABEL_CONDITION6 0x0024
#define ID_TRACTSYSTEST_LABEL_CONDITION7 0x0025

#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE6 0x0026
#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE7 0x0027

#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION6 0x0028
#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION7 0x0029

#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE6 0x002A
#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE7 0x002B

#define ID_TRACTSYSTEST_LABEL_TESTSTEP       0x002C

#define ID_TRACTSYSTEST_LABEL_SETTING6       0x002D
#define ID_TRACTSYSTEST_LABEL_SETTING7       0x002E
#define ID_TRACTSYSTEST_BUTTON_UP6           0x002F
#define ID_TRACTSYSTEST_BUTTON_DOWN6         0x0030
#define ID_TRACTSYSTEST_BUTTON_UP7           0x0031
#define ID_TRACTSYSTEST_BUTTON_DOWN7         0x0032




class CTractionSystemTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CTractionSystemTestPage)
public:
    CTractionSystemTestPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnLeavePage();
    void OnInitPage();
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
    void OnHighTestStartBtnClk();
    void OnLowerTestStartBtnClk();

    void OnDoorParaSetUp6Clk();
    void OnDoorParaSetUp7Clk();

    void OnDoorParaSetDown6Clk();
    void OnDoorParaSetDown7Clk();

private:
    bool m_bHighTestStartBtnDown;
    bool m_bLowTestStartBtnDown;
    void UpHeating();
    void UpHighPressTest();
    void UpLowerPressTest();
    void UpPressTestStatus();
    void SetPTStatusColor(int id, int colorVal);
    void SetTCUVersion(int id, QString vVal);
    void SetPressTestValue(int id, QString rValue);
    void SetPTColor(int id, int colorVal);
    void ResetUI();
    bool m_MakeSure;
};

#endif // CTractionSystemTestPage_H
