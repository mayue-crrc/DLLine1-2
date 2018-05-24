#ifndef CVialSignalPage_H
#define CVialSignalPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBVSP_TRAIN                      0x0001
#define ID_PIBVSP_RIGHTARROW                 0x0002
#define ID_PIBVSP_LEFTARROW                  0x0003

#define ID_PIBVSP_LABEL_CCU1                 0x0004
#define ID_PIBVSP_LABEL_CCU2                 0x0005
#define ID_PIBVSP_LABEL_DCCU2                0x0006
#define ID_PIBVSP_LABEL_DCCU1                0x0007
#define ID_PIBVSP_LABEL_HMI1                 0x0008
#define ID_PIBVSP_LABEL_HMI2                 0x0009
#define ID_PIBVSP_LABEL_GW1                  0x000A
#define ID_PIBVSP_LABEL_GW2                  0x000B
#define ID_PIBVSP_LABEL_ATC10                0x000C
#define ID_PIBVSP_LABEL_ATC11                0x000D
#define ID_PIBVSP_LABEL_ATC20                0x000E
#define ID_PIBVSP_LABEL_ATC21                0x000F
#define ID_PIBVSP_LABEL_IO_GW11              0x0010
#define ID_PIBVSP_LABEL_ACU11                0x0011
#define ID_PIBVSP_LABEL_BCU11                0x0012
#define ID_PIBVSP_LABEL_HVAC11               0x0014
#define ID_PIBVSP_LABEL_PA11                 0x0015
#define ID_PIBVSP_LABEL_TV11                 0x0016
#define ID_PIBVSP_LABEL_IO_GW22              0x0017
#define ID_PIBVSP_LABEL_TCU22                0x0018
#define ID_PIBVSP_LABEL_HVAC22               0x001A
#define ID_PIBVSP_LABEL_AU_DB22              0x001B
#define ID_PIBVSP_LABEL_IO_GW33              0x001C
#define ID_PIBVSP_LABEL_BCU44                0x001D
#define ID_PIBVSP_LABEL_TCU33                0x001E
#define ID_PIBVSP_LABEL_HVAC33               0x0020
#define ID_PIBVSP_LABEL_ST_DB33              0x0021
#define ID_PIBVSP_LABEL_IO_GW44              0x0022
#define ID_PIBVSP_LABEL_BCU55                0x0023
#define ID_PIBVSP_LABEL_TCU44                0x0024
#define ID_PIBVSP_LABEL_HVAC44               0x0026
#define ID_PIBVSP_LABEL_ST_DB44              0x0027
#define ID_PIBVSP_LABEL_IO_GW55              0x0028
#define ID_PIBVSP_LABEL_TCU55                0x0029
#define ID_PIBVSP_LABEL_HVAC55               0x002B
#define ID_PIBVSP_LABEL_AU_DB55              0x002C
#define ID_PIBVSP_LABEL_IO_GW66              0x002D
#define ID_PIBVSP_LABEL_ACU88                0x002E
#define ID_PIBVSP_LABEL_BCU88                0x002F
#define ID_PIBVSP_LABEL_HVAC66               0x0031
#define ID_PIBVSP_LABEL_PA88                 0x0032
#define ID_PIBVSP_LABEL_TV88                 0x0033
#define ID_PIBVSP_LABEL_DOORGWTOP1           0x0034
#define ID_PIBVSP_LABEL_DOORGW1              0x0035
#define ID_PIBVSP_LABEL_DOORGWTOP2           0x0036
#define ID_PIBVSP_LABEL_DOORGW2              0x0037
#define ID_PIBVSP_LABEL_DOORGWTOP3           0x0038
#define ID_PIBVSP_LABEL_DOORGW3              0x0039
#define ID_PIBVSP_LABEL_DOORGWTOP4           0x003A
#define ID_PIBVSP_LABEL_DOORGW4              0x003B
#define ID_PIBVSP_LABEL_DOORGWTOP5           0x003C
#define ID_PIBVSP_LABEL_DOORGW5              0x003D
#define ID_PIBVSP_LABEL_DOORGWTOP6           0x003E
#define ID_PIBVSP_LABEL_DOORGW6              0x003F
#define ID_PIBVSP_LABEL_IO_GW77              0x0040
#define ID_PIBVSP_LABEL_IO_GW88              0x0041
#define ID_PIBVSP_LABEL_TCU66                0x0042
#define ID_PIBVSP_LABEL_TCU77                0x0043
#define ID_PIBVSP_LABEL_HVAC77               0x0044
#define ID_PIBVSP_LABEL_HVAC88               0x0045
#define ID_PIBVSP_LABEL_DOORGWTOP7           0x0046
#define ID_PIBVSP_LABEL_DOORGW7              0x0047
#define ID_PIBVSP_LABEL_DOORGWTOP8           0x0048
#define ID_PIBVSP_LABEL_DOORGW8              0x0049
#define ID_PIBVSP_LABEL_FAS1                 0x004A
#define ID_PIBVSP_LABEL_FAS8                 0x004B


class CVialSignalPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CVialSignalPage)
public:
    CVialSignalPage();

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
    void UpdateVialSignal();
    void SetVSDataLabelString(int id, int DataVal);
    void SetVialSigLabelString(int id, QString StringVal);
};

#endif // CVialSignalPage_H
