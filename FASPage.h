#ifndef FASPAGE_H
#define FASPAGE_H

#include "CPage.h"
#include "DataBuffer.h"


#define ID_PIBFASPage_TRAIN                   0X0001
#define ID_PIBFASPage_ARROW_RIGHT             0X0002
#define ID_PIBFASPage_ARROW_LEFT              0X0003

#define ID_PIBFASPage_TRAINDIAGRAM            0X0037
//#define ID_PIBFASPage_ICON1                   0X0038
//#define ID_PIBFASPage_ICON2                   0X0039
//#define ID_PIBFASPage_ICON3                   0X003A
#define ID_PIBFASPage_CLEAR_VOICE             0X003B
#define ID_PIBFASPage_RESET                   0X003C
//1
#define ID_PIBFASPage_FIREALERT1                   0X0004
#define ID_PIBFASPage_FIREALERT2                   0X0005
#define ID_PIBFASPage_FIREALERT3                   0X0006
#define ID_PIBFASPage_FIREALERT4                   0X0007
#define ID_PIBFASPage_FIREALERT5                   0X0008
#define ID_PIBFASPage_FIREALERT6                   0X0009
#define ID_PIBFASPage_FIREALERT7                   0X000A
#define ID_PIBFASPage_FIREALERT8                   0X000B
#define ID_PIBFASPage_FIREALERT9                   0X000C
#define ID_PIBFASPage_FIREALERT10                  0X000D
#define ID_PIBFASPage_FIREALERT11                  0X000E
#define ID_PIBFASPage_FIREALERT12                  0X000F
#define ID_PIBFASPage_FIREALERT13                  0X0010
#define ID_PIBFASPage_FIREALERT14                  0X0011
#define ID_PIBFASPage_FIREALERT15                  0X0012
#define ID_PIBFASPage_FIREALERT16                  0X0013
#define ID_PIBFASPage_FIREALERT17                  0X0014
#define ID_PIBFASPage_FIREALERT18                  0X0015
#define ID_PIBFASPage_FIREALERT19                  0X0016
#define ID_PIBFASPage_FIREALERT20                  0X0017
#define ID_PIBFASPage_FIREALERT21                  0X0018
#define ID_PIBFASPage_FIREALERT22                  0X0019
#define ID_PIBFASPage_FIREALERT23                  0X001A
#define ID_PIBFASPage_FIREALERT24                  0X001B
#define ID_PIBFASPage_FIREALERT25                  0X001C
#define ID_PIBFASPage_FIREALERT26                  0X001D
#define ID_PIBFASPage_FIREALERT27                  0X001E
#define ID_PIBFASPage_FIREALERT28                  0X001F
//2
#define ID_PIBFASPage_FIREISO1                   0X0104
#define ID_PIBFASPage_FIREISO2                   0X0105
#define ID_PIBFASPage_FIREISO3                   0X0106
#define ID_PIBFASPage_FIREISO4                   0X0107
#define ID_PIBFASPage_FIREISO5                   0X0108
#define ID_PIBFASPage_FIREISO6                   0X0109
#define ID_PIBFASPage_FIREISO7                   0X010A
#define ID_PIBFASPage_FIREISO8                   0X010B
#define ID_PIBFASPage_FIREISO9                   0X010C
#define ID_PIBFASPage_FIREISO10                  0X010D
#define ID_PIBFASPage_FIREISO11                  0X010E
#define ID_PIBFASPage_FIREISO12                  0X010F
#define ID_PIBFASPage_FIREISO13                  0X0110
#define ID_PIBFASPage_FIREISO14                  0X0111
#define ID_PIBFASPage_FIREISO15                  0X0112
#define ID_PIBFASPage_FIREISO16                  0X0113
#define ID_PIBFASPage_FIREISO17                  0X0114
#define ID_PIBFASPage_FIREISO18                  0X0115
#define ID_PIBFASPage_FIREISO19                  0X0116
#define ID_PIBFASPage_FIREISO20                  0X0117
#define ID_PIBFASPage_FIREISO21                  0X0118
#define ID_PIBFASPage_FIREISO22                  0X0119
#define ID_PIBFASPage_FIREISO23                  0X011A
#define ID_PIBFASPage_FIREISO24                  0X011B
#define ID_PIBFASPage_FIREISO25                  0X011C
#define ID_PIBFASPage_FIREISO26                  0X011D
#define ID_PIBFASPage_FIREISO27                  0X011E
#define ID_PIBFASPage_FIREISO28                  0X011F
//3
#define ID_PIBFASPage_SHORTCIRCUITFAULT1                   0X0204
#define ID_PIBFASPage_SHORTCIRCUITFAULT2                   0X0205
#define ID_PIBFASPage_SHORTCIRCUITFAULT3                   0X0206
#define ID_PIBFASPage_SHORTCIRCUITFAULT4                   0X0207
#define ID_PIBFASPage_SHORTCIRCUITFAULT5                   0X0208
#define ID_PIBFASPage_SHORTCIRCUITFAULT6                   0X0209
#define ID_PIBFASPage_SHORTCIRCUITFAULT7                   0X020A
#define ID_PIBFASPage_SHORTCIRCUITFAULT8                   0X020B
#define ID_PIBFASPage_SHORTCIRCUITFAULT9                   0X020C
#define ID_PIBFASPage_SHORTCIRCUITFAULT10                  0X020D
#define ID_PIBFASPage_SHORTCIRCUITFAULT11                  0X020E
#define ID_PIBFASPage_SHORTCIRCUITFAULT12                  0X020F
#define ID_PIBFASPage_SHORTCIRCUITFAULT13                  0X0210
#define ID_PIBFASPage_SHORTCIRCUITFAULT14                  0X0211
#define ID_PIBFASPage_SHORTCIRCUITFAULT15                  0X0212
#define ID_PIBFASPage_SHORTCIRCUITFAULT16                  0X0213
#define ID_PIBFASPage_SHORTCIRCUITFAULT17                  0X0214
#define ID_PIBFASPage_SHORTCIRCUITFAULT18                  0X0215
#define ID_PIBFASPage_SHORTCIRCUITFAULT19                  0X0216
#define ID_PIBFASPage_SHORTCIRCUITFAULT20                  0X0217
#define ID_PIBFASPage_SHORTCIRCUITFAULT21                  0X0218
#define ID_PIBFASPage_SHORTCIRCUITFAULT22                  0X0219
#define ID_PIBFASPage_SHORTCIRCUITFAULT23                  0X021A
#define ID_PIBFASPage_SHORTCIRCUITFAULT24                  0X021B
#define ID_PIBFASPage_SHORTCIRCUITFAULT25                  0X021C
#define ID_PIBFASPage_SHORTCIRCUITFAULT26                  0X021D
#define ID_PIBFASPage_SHORTCIRCUITFAULT27                  0X021E
#define ID_PIBFASPage_SHORTCIRCUITFAULT28                  0X021F
//4
#define ID_PIBFASPage_OPENCIRCUITFAULT1                   0X0304
#define ID_PIBFASPage_OPENCIRCUITFAULT2                   0X0305
#define ID_PIBFASPage_OPENCIRCUITFAULT3                   0X0306
#define ID_PIBFASPage_OPENCIRCUITFAULT4                   0X0307
#define ID_PIBFASPage_OPENCIRCUITFAULT5                   0X0308
#define ID_PIBFASPage_OPENCIRCUITFAULT6                   0X0309
#define ID_PIBFASPage_OPENCIRCUITFAULT7                   0X030A
#define ID_PIBFASPage_OPENCIRCUITFAULT8                   0X030B
#define ID_PIBFASPage_OPENCIRCUITFAULT9                   0X030C
#define ID_PIBFASPage_OPENCIRCUITFAULT10                  0X030D
#define ID_PIBFASPage_OPENCIRCUITFAULT11                  0X030E
#define ID_PIBFASPage_OPENCIRCUITFAULT12                  0X030F
#define ID_PIBFASPage_OPENCIRCUITFAULT13                  0X0310
#define ID_PIBFASPage_OPENCIRCUITFAULT14                  0X0311
#define ID_PIBFASPage_OPENCIRCUITFAULT15                  0X0312
#define ID_PIBFASPage_OPENCIRCUITFAULT16                  0X0313
#define ID_PIBFASPage_OPENCIRCUITFAULT17                  0X0314
#define ID_PIBFASPage_OPENCIRCUITFAULT18                  0X0315
#define ID_PIBFASPage_OPENCIRCUITFAULT19                  0X0316
#define ID_PIBFASPage_OPENCIRCUITFAULT20                  0X0317
#define ID_PIBFASPage_OPENCIRCUITFAULT21                  0X0318
#define ID_PIBFASPage_OPENCIRCUITFAULT22                  0X0319
#define ID_PIBFASPage_OPENCIRCUITFAULT23                  0X031A
#define ID_PIBFASPage_OPENCIRCUITFAULT24                  0X031B
#define ID_PIBFASPage_OPENCIRCUITFAULT25                  0X031C
#define ID_PIBFASPage_OPENCIRCUITFAULT26                  0X031D
#define ID_PIBFASPage_OPENCIRCUITFAULT27                  0X031E
#define ID_PIBFASPage_OPENCIRCUITFAULT28                  0X031F
//5
#define ID_PIBFASPage_FANFAULT1                   0X0404
#define ID_PIBFASPage_FANFAULT2                   0X0405
#define ID_PIBFASPage_FANFAULT3                   0X0406
#define ID_PIBFASPage_FANFAULT4                   0X0407
#define ID_PIBFASPage_FANFAULT5                   0X0408
#define ID_PIBFASPage_FANFAULT6                   0X0409
#define ID_PIBFASPage_FANFAULT7                   0X040A
#define ID_PIBFASPage_FANFAULT8                   0X040B
#define ID_PIBFASPage_FANFAULT9                   0X040C
#define ID_PIBFASPage_FANFAULT10                  0X040D
#define ID_PIBFASPage_FANFAULT11                  0X040E
#define ID_PIBFASPage_FANFAULT12                  0X040F
#define ID_PIBFASPage_FANFAULT13                  0X0410
#define ID_PIBFASPage_FANFAULT14                  0X0411
#define ID_PIBFASPage_FANFAULT15                  0X0412
#define ID_PIBFASPage_FANFAULT16                  0X0413
#define ID_PIBFASPage_FANFAULT17                  0X0414
#define ID_PIBFASPage_FANFAULT18                  0X0415
#define ID_PIBFASPage_FANFAULT19                  0X0416
#define ID_PIBFASPage_FANFAULT20                  0X0417
#define ID_PIBFASPage_FANFAULT21                  0X0418
#define ID_PIBFASPage_FANFAULT22                  0X0419
#define ID_PIBFASPage_FANFAULT23                  0X041A
#define ID_PIBFASPage_FANFAULT24                  0X041B
#define ID_PIBFASPage_FANFAULT25                  0X041C
#define ID_PIBFASPage_FANFAULT26                  0X041D
#define ID_PIBFASPage_FANFAULT27                  0X041E
#define ID_PIBFASPage_FANFAULT28                  0X041F
//6
#define ID_PIBFASPage_POLLUT1                   0X0504
#define ID_PIBFASPage_POLLUT2                   0X0505
#define ID_PIBFASPage_POLLUT3                   0X0506
#define ID_PIBFASPage_POLLUT4                   0X0507
#define ID_PIBFASPage_POLLUT5                   0X0508
#define ID_PIBFASPage_POLLUT6                   0X0509
#define ID_PIBFASPage_POLLUT7                   0X050A
#define ID_PIBFASPage_POLLUT8                   0X050B
#define ID_PIBFASPage_POLLUT9                   0X050C
#define ID_PIBFASPage_POLLUT10                  0X050D
#define ID_PIBFASPage_POLLUT11                  0X050E
#define ID_PIBFASPage_POLLUT12                  0X050F
#define ID_PIBFASPage_POLLUT13                  0X0510
#define ID_PIBFASPage_POLLUT14                  0X0511
#define ID_PIBFASPage_POLLUT15                  0X0512
#define ID_PIBFASPage_POLLUT16                  0X0513
#define ID_PIBFASPage_POLLUT17                  0X0514
#define ID_PIBFASPage_POLLUT18                  0X0515
#define ID_PIBFASPage_POLLUT19                  0X0516
#define ID_PIBFASPage_POLLUT20                  0X0517
#define ID_PIBFASPage_POLLUT21                  0X0518
#define ID_PIBFASPage_POLLUT22                  0X0519
#define ID_PIBFASPage_POLLUT23                  0X051A
#define ID_PIBFASPage_POLLUT24                  0X051B
#define ID_PIBFASPage_POLLUT25                  0X051C
#define ID_PIBFASPage_POLLUT26                  0X051D
#define ID_PIBFASPage_POLLUT27                  0X051E
#define ID_PIBFASPage_POLLUT28                  0X051F
//7
#define ID_PIBFASPage_COMMUFAULT1                   0X0604
#define ID_PIBFASPage_COMMUFAULT2                   0X0605
#define ID_PIBFASPage_COMMUFAULT3                   0X0606
#define ID_PIBFASPage_COMMUFAULT4                   0X0607
#define ID_PIBFASPage_COMMUFAULT5                   0X0608
#define ID_PIBFASPage_COMMUFAULT6                   0X0609
#define ID_PIBFASPage_COMMUFAULT7                   0X060A
#define ID_PIBFASPage_COMMUFAULT8                   0X060B
#define ID_PIBFASPage_COMMUFAULT9                   0X060C
#define ID_PIBFASPage_COMMUFAULT10                  0X060D
#define ID_PIBFASPage_COMMUFAULT11                  0X060E
#define ID_PIBFASPage_COMMUFAULT12                  0X060F
#define ID_PIBFASPage_COMMUFAULT13                  0X0610
#define ID_PIBFASPage_COMMUFAULT14                  0X0611
#define ID_PIBFASPage_COMMUFAULT15                  0X0612
#define ID_PIBFASPage_COMMUFAULT16                  0X0613
#define ID_PIBFASPage_COMMUFAULT17                  0X0614
#define ID_PIBFASPage_COMMUFAULT18                  0X0615
#define ID_PIBFASPage_COMMUFAULT19                  0X0616
#define ID_PIBFASPage_COMMUFAULT20                  0X0617
#define ID_PIBFASPage_COMMUFAULT21                  0X0618
#define ID_PIBFASPage_COMMUFAULT22                  0X0619
#define ID_PIBFASPage_COMMUFAULT23                  0X061A
#define ID_PIBFASPage_COMMUFAULT24                  0X061B
#define ID_PIBFASPage_COMMUFAULT25                  0X061C
#define ID_PIBFASPage_COMMUFAULT26                  0X061D
#define ID_PIBFASPage_COMMUFAULT27                  0X061E
#define ID_PIBFASPage_COMMUFAULT28                  0X061F

#define ID_PIBFASPage_FIRE3                        0X0700
#define ID_PIBFASPage_FIRE4                        0X0701

extern vector<CPage*>  g_PageVec;

class FASPage  : public CPage
{

    DECLEAR_MESSAGE_MAP(FASPage)
public:
    FASPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();
    void UpdateFireState();
    void UpdateFireAlert();
    void UpdateFireIso();
    void UpdateShortCircuitFault();
    void UpdateOpenCircuitFault();
    void UpdateFanFault();
    void UpdatePollut();
    void UpdateCommuFault();
    void SetLabelColor(int id,int colorVal);


private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void OnClearVoiceClk();
    void UpResetClk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
    bool m_bBtnPress;
    int  m_fas_PrePageIndex;
 //   void DrawCarriageCtrl();



  //  void OnReplaceBtnClk();
 //   void OnRealTimeFaultsWarnningIconClk();
};

#endif // FASPAGE_H
