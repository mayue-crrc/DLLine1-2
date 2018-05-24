#ifndef C_PAGE_BRAKE_SELF_TEST_H
#define C_PAGE_BRAKE_SELF_TEST_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBCAR2BCU_TRAIN              0x0001
/*
#define ID_PIBBST_LABEL_ASPRESSURE1      0x0002
#define ID_PIBBST_LABEL_ASPRESSURE2      0x0003
#define ID_PIBBST_LABEL_ASPRESSURE3      0x0004
#define ID_PIBBST_LABEL_ASPRESSURE4      0x0005
#define ID_PIBBST_LABEL_ASPRESSURE5      0x0006
#define ID_PIBBST_LABEL_ASPRESSURE6      0x0007
#define ID_PIBBST_LABEL_ASPRESSURE7      0x0008
#define ID_PIBBST_LABEL_ASPRESSURE8      0x0009
#define ID_PIBBST_LABEL_ASPRESSURE9      0x000A
#define ID_PIBBST_LABEL_ASPRESSURE10     0x000B
#define ID_PIBBST_LABEL_ASPRESSURE11     0x000C
#define ID_PIBBST_LABEL_ASPRESSURE12     0x000D
*/

#define ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1          0X0230
#define ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2          0X0231
#define ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1          0X0232
#define ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2          0X0233
#define ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1          0X0234
#define ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2          0X0235
#define ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1          0X0236
#define ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2          0X0237
#define ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1          0X0238
#define ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2          0X0239
#define ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1          0X0240
#define ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2          0X0241

#define ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1              0X0139
#define ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2              0X013A
#define ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1              0X013B
#define ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2              0X013C
#define ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1              0X013D
#define ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2              0X013E
#define ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1              0X013F
#define ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2              0X0140
#define ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1              0X0141
#define ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2              0X0142
#define ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1              0X0143
#define ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2              0X0144
/*
#define ID_PIBBST_LABEL_BSRLOW1          0x000E
#define ID_PIBBST_LABEL_BSRLOW2          0x000F
#define ID_PIBBST_LABEL_BSRLOW3          0x0010
#define ID_PIBBST_LABEL_BSRLOW4          0x0011
#define ID_PIBBST_LABEL_BSRLOW5          0x0012
#define ID_PIBBST_LABEL_BSRLOW6          0x0013
#define ID_PIBBST_LABEL_BSRLOW7          0x0014
#define ID_PIBBST_LABEL_BSRLOW8          0x0015
#define ID_PIBBST_LABEL_BSRLOW9          0x0016
#define ID_PIBBST_LABEL_BSRLOW10         0x0017
#define ID_PIBBST_LABEL_BSRLOW11         0x0018
#define ID_PIBBST_LABEL_BSRLOW12         0x0019
*/
#define ID_PIBBST_LABEL_BOGIESECLUDE1    0x001A
#define ID_PIBBST_LABEL_BOGIESECLUDE2    0x001B
#define ID_PIBBST_LABEL_BOGIESECLUDE3    0x001C
#define ID_PIBBST_LABEL_BOGIESECLUDE4    0x001D
#define ID_PIBBST_LABEL_BOGIESECLUDE5    0x001E
#define ID_PIBBST_LABEL_BOGIESECLUDE6    0x001F
#define ID_PIBBST_LABEL_BOGIESECLUDE7    0x0020
#define ID_PIBBST_LABEL_BOGIESECLUDE8    0x0021
#define ID_PIBBST_LABEL_BOGIESECLUDE9    0x0022
#define ID_PIBBST_LABEL_BOGIESECLUDE10   0x0023
#define ID_PIBBST_LABEL_BOGIESECLUDE11   0x0024
#define ID_PIBBST_LABEL_BOGIESECLUDE12   0x0025

//#define ID_PIBBST_LABEL_TESTSELFCON1     0x0026
//#define ID_PIBBST_LABEL_TESTSELFCON2     0x0027
#define ID_PIBBST_LABEL_BRAKETESTSELF1   0x0028
#define ID_PIBBST_LABEL_BRAKETESTSELF2   0x0029

#define ID_PIBBST_BUTTON_TESTSTART       0x002A
//#define ID_PIBBST_BUTTON_TESTSTOP        0x002B

#define ID_PIBBST_LEFTARROW              0x002C
#define ID_PIBBST_RIGHTARROW             0x002D

#define ID_PIBBST_LABEL_BRAKETEST_HINT1   0x002E
#define ID_PIBBST_LABEL_BRAKETEST_HINT2   0x002F

#define ID_PIBBST_LABEL_ASPRESSURE13      0x0030
#define ID_PIBBST_LABEL_ASPRESSURE14      0x0031
#define ID_PIBBST_LABEL_ASPRESSURE15      0x0032
#define ID_PIBBST_LABEL_ASPRESSURE16      0x0033

#define ID_PIBBST_LABEL_BSRLOW13          0x0034
#define ID_PIBBST_LABEL_BSRLOW14          0x0035
#define ID_PIBBST_LABEL_BSRLOW15          0x0036
#define ID_PIBBST_LABEL_BSRLOW16          0x0037

#define ID_PIBBST_LABEL_BOGIESECLUDE13    0x0038
#define ID_PIBBST_LABEL_BOGIESECLUDE14    0x0039
#define ID_PIBBST_LABEL_BOGIESECLUDE15    0x003A
#define ID_PIBBST_LABEL_BOGIESECLUDE16    0x003B

#define ID_PIBBST_BUTTON_MODE1        0x003C
#define ID_PIBBST_BUTTON_MODE2        0x003D


class CBrakeSelfTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CBrakeSelfTestPage)
public:
    CBrakeSelfTestPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();
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
    void OnBCU_Selftest_StartClk();
    void OnBCU_Selftest_Stop();
    void UpdateAirSpringPressure();
    void UpdateBRKCYLPressure();
    void SetLabelColor(int id, int colorVal);
    void SetBRKCYLPressureLabelColor(int id, int colorVal);
    void UpdateBCU_selftest_test();
    void UpdateBCU_selftest_LabelColor();
    //void UpdateBCU_selftest_ConColor();
    void SetBCU_selftest_LabelColor(int id, int colorVal);
    void SetBCU_selftest_resultColor(int id, int colorVal);
    void SetBCU_selftest_LabelString(int id, QString StringVal);
    void SetBCUSeparaterLabelColor(int id, int colorVal);
    void On_Mode1_Clk();
    void On_Mode2_Clk();

private:
    bool m_bStart;
    int  time_set_timer;
};

#endif // CBrakeSelfTestPage_H
