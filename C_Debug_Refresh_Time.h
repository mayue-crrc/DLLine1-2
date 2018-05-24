#ifndef C_DEBUG_REFRESH_TIME_H
#define C_DEBUG_REFRESH_TIME_H


#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBRT_LABEL_001TIME          0x0201
#define ID_PIBRT_LABEL_002TIME          0x0202
#define ID_PIBRT_LABEL_00FTIME          0x0203

#define ID_PIBRT_LABEL_110TIME          0x0001
#define ID_PIBRT_LABEL_111TIME          0x0002
#define ID_PIBRT_LABEL_112TIME          0x0003

#define ID_PIBRT_LABEL_120TIME          0x0004
#define ID_PIBRT_LABEL_121TIME          0x0005
#define ID_PIBRT_LABEL_130TIME          0x0006
#define ID_PIBRT_LABEL_131TIME          0x0007

#define ID_PIBRT_LABEL_140TIME          0x0008
#define ID_PIBRT_LABEL_141TIME          0x0009
#define ID_PIBRT_LABEL_150TIME          0x000A
#define ID_PIBRT_LABEL_151TIME          0x000B

#define ID_PIBRT_LABEL_160TIME          0x000C
#define ID_PIBRT_LABEL_161TIME          0x000D
#define ID_PIBRT_LABEL_162TIME          0x000E
#define ID_PIBRT_LABEL_210TIME          0x000F

#define ID_PIBRT_LABEL_211TIME          0x0010
#define ID_PIBRT_LABEL_212TIME          0x0011
#define ID_PIBRT_LABEL_213TIME          0x0012
#define ID_PIBRT_LABEL_220TIME          0x0013

#define ID_PIBRT_LABEL_221TIME          0x0014
#define ID_PIBRT_LABEL_222TIME          0x0015
#define ID_PIBRT_LABEL_223TIME          0x0016
#define ID_PIBRT_LABEL_310TIME          0x0017

#define ID_PIBRT_LABEL_311TIME          0x0018
#define ID_PIBRT_LABEL_312TIME          0x0019
#define ID_PIBRT_LABEL_313TIME          0x001A
#define ID_PIBRT_LABEL_320TIME          0x001B

#define ID_PIBRT_LABEL_321TIME          0x001C
#define ID_PIBRT_LABEL_322TIME          0x001D
#define ID_PIBRT_LABEL_323TIME          0x001E
#define ID_PIBRT_LABEL_510TIME          0x001F

#define ID_PIBRT_LABEL_511TIME          0x0020
#define ID_PIBRT_LABEL_512TIME          0x0021
#define ID_PIBRT_LABEL_513TIME          0x0022
#define ID_PIBRT_LABEL_514TIME          0x0023

#define ID_PIBRT_LABEL_515TIME          0x0024
#define ID_PIBRT_LABEL_520TIME          0x0025
#define ID_PIBRT_LABEL_521TIME          0x0026
#define ID_PIBRT_LABEL_522TIME          0x0027

#define ID_PIBRT_LABEL_523TIME          0x0028
#define ID_PIBRT_LABEL_524TIME          0x0029
#define ID_PIBRT_LABEL_525TIME          0x002A
#define ID_PIBRT_LABEL_530TIME          0x002B

#define ID_PIBRT_LABEL_531TIME          0x002C
#define ID_PIBRT_LABEL_532TIME          0x002D
#define ID_PIBRT_LABEL_533TIME          0x002E
#define ID_PIBRT_LABEL_534TIME          0x002F

#define ID_PIBRT_LABEL_535TIME          0x0030
#define ID_PIBRT_LABEL_540TIME          0x0031
#define ID_PIBRT_LABEL_541TIME          0x0032
#define ID_PIBRT_LABEL_542TIME          0x0033

#define ID_PIBRT_LABEL_543TIME          0x0034
#define ID_PIBRT_LABEL_544TIME          0x0035
#define ID_PIBRT_LABEL_545TIME          0x0036
#define ID_PIBRT_LABEL_610TIME          0x0037

#define ID_PIBRT_LABEL_611TIME          0x0038
#define ID_PIBRT_LABEL_612TIME          0x0039
#define ID_PIBRT_LABEL_620TIME          0x003A
#define ID_PIBRT_LABEL_621TIME          0x003B

#define ID_PIBRT_LABEL_622TIME          0x003C
#define ID_PIBRT_LABEL_630TIME          0x003D
#define ID_PIBRT_LABEL_631TIME          0x003E
#define ID_PIBRT_LABEL_632TIME          0x003F

#define ID_PIBRT_LABEL_640TIME          0x0040
#define ID_PIBRT_LABEL_641TIME          0x0041
#define ID_PIBRT_LABEL_642TIME          0x0042
#define ID_PIBRT_LABEL_710TIME          0x0043

#define ID_PIBRT_LABEL_711TIME          0x0044
#define ID_PIBRT_LABEL_720TIME          0x0045
#define ID_PIBRT_LABEL_721TIME          0x0046
#define ID_PIBRT_LABEL_810TIME          0x0047

#define ID_PIBRT_LABEL_811TIME          0x0048
#define ID_PIBRT_LABEL_820TIME          0x0049
#define ID_PIBRT_LABEL_821TIME          0x004A
#define ID_PIBRT_LABEL_830TIME          0x004B

#define ID_PIBRT_LABEL_831TIME          0x004C
#define ID_PIBRT_LABEL_840TIME          0x004D
#define ID_PIBRT_LABEL_841TIME          0x004E
#define ID_PIBRT_LABEL_850TIME          0x004F

#define ID_PIBRT_LABEL_851TIME          0x0050
#define ID_PIBRT_LABEL_860TIME          0x0051
#define ID_PIBRT_LABEL_861TIME          0x0052
#define ID_PIBRT_LABEL_870TIME          0x0053
#define ID_PIBRT_LABEL_871TIME          0x0054
#define ID_PIBRT_LABEL_880TIME          0x0055
#define ID_PIBRT_LABEL_881TIME          0x0056
#define ID_PIBRT_LABEL_890TIME          0x0057
#define ID_PIBRT_LABEL_891TIME          0x0058
#define ID_PIBRT_LABEL_8A0TIME          0x0059

#define ID_PIBRT_LABEL_8A1TIME          0x005A
#define ID_PIBRT_LABEL_8B0TIME          0x005B
#define ID_PIBRT_LABEL_8B1TIME          0x005C
#define ID_PIBRT_LABEL_8C0TIME          0x005D
#define ID_PIBRT_LABEL_8C1TIME          0x005E
#define ID_PIBRT_LABEL_910TIME          0x005F
#define ID_PIBRT_LABEL_920TIME          0x0060
#define ID_PIBRT_LABEL_930TIME          0x0061
#define ID_PIBRT_LABEL_940TIME          0x0062
#define ID_PIBRT_LABEL_950TIME          0x0063
#define ID_PIBRT_LABEL_960TIME          0x0064
#define ID_PIBRT_LABEL_A10TIME          0x0065
#define ID_PIBRT_LABEL_A20TIME          0x0066
#define ID_PIBRT_LABEL_B10TIME          0x0067
#define ID_PIBRT_LABEL_B11TIME          0x0068
#define ID_PIBRT_LABEL_B20TIME          0x0069
#define ID_PIBRT_LABEL_B21TIME          0x006A


#define ID_PIBRT_LABEL_C10TIME          0x006B
#define ID_PIBRT_LABEL_C20TIME          0x006C
#define ID_PIBRT_LABEL_118TIME          0x006D

#define ID_PIBRT_LABEL_128TIME          0x006E
#define ID_PIBRT_LABEL_138TIME          0x006F
#define ID_PIBRT_LABEL_148TIME          0x0070
#define ID_PIBRT_LABEL_158TIME          0x0071

#define ID_PIBRT_LABEL_168TIME          0x0072
#define ID_PIBRT_LABEL_218TIME          0x0073
#define ID_PIBRT_LABEL_228TIME          0x0074
#define ID_PIBRT_LABEL_308TIME          0x0075

#define ID_PIBRT_LABEL_309TIME          0x0100
#define ID_PIBRT_LABEL_318TIME          0x0101
#define ID_PIBRT_LABEL_328TIME          0x0102
#define ID_PIBRT_LABEL_508TIME          0x0103

#define ID_PIBRT_LABEL_618TIME          0x0104
#define ID_PIBRT_LABEL_628TIME          0x0105
#define ID_PIBRT_LABEL_638TIME          0x0106
#define ID_PIBRT_LABEL_648TIME          0x0107

#define ID_PIBRT_LABEL_718TIME          0x0108
#define ID_PIBRT_LABEL_728TIME          0x0109
#define ID_PIBRT_LABEL_809TIME          0x010A
#define ID_PIBRT_LABEL_918TIME          0x010B

#define ID_PIBRT_LABEL_928TIME          0x010C
#define ID_PIBRT_LABEL_938TIME          0x010D
#define ID_PIBRT_LABEL_948TIME          0x010E
#define ID_PIBRT_LABEL_958TIME          0x010F

#define ID_PIBRT_LABEL_968TIME          0x0110
#define ID_PIBRT_LABEL_A08TIME          0x0111
#define ID_PIBRT_LABEL_B08TIME          0x0112
#define ID_PIBRT_LABEL_C08TIME          0x0113


#define ID_PIBRT_LABEL_HEAD          0x0114






class CRefreshTimePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CRefreshTimePage)
public:
    CRefreshTimePage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void UpdateRefreshTime();
    void SetRefreshTimeLabelString(int id, int DataVal);
    void UpdateTimeoutRemind();
    void SetTimeoutRemind_0(int id, int DataVal);
    void SetTimeoutRemind_1(int id, int DataVal);
    void SetTimeoutRemind_3(int id, int DataVal);
    void SetTimeoutRemind_4(int id, int DataVal);
    void SetTimeoutRemind_5(int id, int DataVal);
};


#endif // C_DEBUG_REFRESH_TIME_H
