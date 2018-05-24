#ifndef CStationSettingPage_H
#define CStationSettingPage_H

#include "CPage.h"
#define    ID_PIBSTATIONSET_BUTTON_11 0X0001
#define    ID_PIBSTATIONSET_BUTTON_12 0X0002
#define    ID_PIBSTATIONSET_BUTTON_13 0X0003
#define    ID_PIBSTATIONSET_BUTTON_14 0X0004
#define    ID_PIBSTATIONSET_BUTTON_15 0X0005
#define    ID_PIBSTATIONSET_BUTTON_16 0X0006
#define    ID_PIBSTATIONSET_BUTTON_17 0X0007
#define    ID_PIBSTATIONSET_BUTTON_18 0X0008
//#define    ID_PIBSTATIONSET_BUTTON_18 0X0009
#define    ID_PIBSTATIONSET_BUTTON_19 0X000A
#define    ID_PIBSTATIONSET_BUTTON_20 0X000B
#define    ID_PIBSTATIONSET_BUTTON_21 0X000C
#define    ID_PIBSTATIONSET_BUTTON_22 0X000D
#define    ID_PIBSTATIONSET_BUTTON_23 0X000E
#define    ID_PIBSTATIONSET_BUTTON_24 0X000F
#define    ID_PIBSTATIONSET_BUTTON_25 0X0010
#define    ID_PIBSTATIONSET_BUTTON_26 0X0011
#define    ID_PIBSTATIONSET_BUTTON_27 0X0012
#define    ID_PIBSTATIONSET_BUTTON_28 0X0013
#define    ID_PIBSTATIONSET_BUTTON_29 0X0014
#define    ID_PIBSTATIONSET_BUTTON_30 0X0015
#define    ID_PIBSTATIONSET_BUTTON_31 0X0016
#define    ID_PIBSTATIONSET_BUTTON_32 0X0017
#define    ID_PIBSTATIONSET_BUTTON_33 0X0018
#define    ID_PIBSTATIONSET_BUTTON_34 0X0019
#define    ID_PIBSTATIONSET_BUTTON_35 0X001A
#define    ID_PIBSTATIONSET_BUTTON_36 0X001B
#define    ID_PIBSTATIONSET_BUTTON_37 0X001C
#define    ID_PIBSTATIONSET_BUTTON_38 0X001D
#define    ID_PIBSTATIONSET_BUTTON_39 0X001E
#define    ID_PIBSTATIONSET_BUTTON_40 0X001F
#define    ID_PIBSTATIONSET_BUTTON_41 0X0020
#define    ID_PIBSTATIONSET_BUTTON_42 0X0021
#define    ID_PIBSTATIONSET_BUTTON_43 0X0022
#define    ID_PIBSTATIONSET_BUTTON_44 0X0023
#define    ID_PIBSTATIONSET_BUTTON_45 0X0024
#define    ID_PIBSTATIONSET_BUTTON_46 0X0025
#define    ID_PIBSTATIONSET_BUTTON_47 0X0026
#define    ID_PIBSTATIONSET_BUTTON_48 0X0027
#define    ID_PIBSTATIONSET_BUTTON_49 0X0028
#define    ID_PIBSTATIONSET_BUTTON_50 0X0029
#define    ID_PIBSTATIONSET_BUTTON_51 0X002A
#define    ID_PIBSTATIONSET_BUTTON_52 0X002B
#define    ID_PIBSTATIONSET_BUTTON_53 0X002C
#define    ID_PIBSTATIONSET_BUTTON_54 0X002D
#define    ID_PIBSTATIONSET_BUTTON_55 0X002E
#define    ID_PIBSTATIONSET_BUTTON_56 0X002F
#define    ID_PIBSTATIONSET_BUTTON_57 0X0030
#define    ID_PIBSTATIONSET_BUTTON_58 0X0031
#define    ID_PIBSTATIONSET_BUTTON_59 0X0032
#define    ID_PIBSTATIONSET_BUTTON_60 0X0033
#define    ID_PIBSTATIONSET_BUTTON_61 0X0034
//#define    ID_PIBSTATIONSET_BUTTON_62 0X0035
//#define    ID_PIBSTATIONSET_BUTTON_63 0X0036
//#define    ID_PIBSTATIONSET_BUTTON_64 0X0037


extern vector<CPage*>  g_PageVec;

#define  STATIONFLG_START  0
#define  STATIONFLG_END    1

class CStationSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CStationSettingPage)
public:
    CStationSettingPage();

public:
    int m_nStationFlg;

private:
    void SetStationButtonDownByID(int nID);
    void SetStationButtonDownByName(QString stationName);
    int m_stationindex;

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
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
    void OnBtn11Clk();
    void OnBtn12Clk();
    void OnBtn13Clk();
    void OnBtn14Clk();
    void OnBtn15Clk();
    void OnBtn16Clk();
    void OnBtn17Clk();
    void OnBtn18Clk();
    void OnBtn19Clk();
    void OnBtn20Clk();

    void OnBtn21Clk();
    void OnBtn22Clk();
    void OnBtn23Clk();
    void OnBtn24Clk();
    void OnBtn25Clk();
    void OnBtn26Clk();
    void OnBtn27Clk();
    void OnBtn28Clk();
    void OnBtn29Clk();
    void OnBtn30Clk();

    void OnBtn31Clk();
    void OnBtn32Clk();
    void OnBtn33Clk();
    void OnBtn34Clk();
    void OnBtn35Clk();
    void OnBtn36Clk();
    void OnBtn37Clk();
    void OnBtn38Clk();
    void OnBtn39Clk();
    void OnBtn40Clk();

    void OnBtn41Clk();
    void OnBtn42Clk();
    void OnBtn43Clk();
    void OnBtn44Clk();
    void OnBtn45Clk();
    void OnBtn46Clk();
    void OnBtn47Clk();
    void OnBtn48Clk();
    void OnBtn49Clk();
    void OnBtn50Clk();

    void OnBtn51Clk();
    void OnBtn52Clk();
    void OnBtn53Clk();
    void OnBtn54Clk();
    void OnBtn55Clk();
    void OnBtn56Clk();
    void OnBtn57Clk();
    void OnBtn58Clk();
    void OnBtn59Clk();
    void OnBtn60Clk();
    void OnBtn61Clk();

    void UpdateStationColor();
};

#endif // CStationSettingPage_H
