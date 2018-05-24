#include "cfaultscommonprocess.h"
#include "CGlobal.h"
#include "DataBuffer.h"
#include <qdatetime.h>
#include <qapplication.h>
#include <fstream>
#include "CPage.h"
#include <QDir>

extern vector<CPage*>  g_PageVec;

CFaultsCommonProcess::CFaultsCommonProcess()
{
}

ST_HISTORY_FAULTS_LIST g_historyFaultsList;
ST_HISTORY_CONDITION_FILTER g_historyConditionFilter;
ST_REALTIME_CONDITION_FILTER g_realTimeConditionFilter;

//ST_DATETIME g_realtime_faults_datetime_array[1500];

int g_RealTimeFaultsNum = 0;

ST_FAULT_INFO g_faultsinforom[] =
{
    //{0x1101,QObject::trUtf8("制动半列都不在线"),                             QObject::trUtf8("请检查BCU硬件及相应接线")},
    {0x1101,QObject::trUtf8("HMI离线"),                             QObject::trUtf8("TCMS显示屏离线; \n检查HMI设备及通信线路;")},
    {0x1102,QObject::trUtf8("Tc1_RIOM离线"),                             QObject::trUtf8("Tc1_RIOM设备损坏或通信故障; \n检查Tc1_RIOM设备及通信线路")},
    {0x1103,QObject::trUtf8("Tc2_RIOM离线"),                             QObject::trUtf8("Tc2_RIOM设备损坏或通信故障; \n检查Tc2_RIOM设备及通信线路")},
    {0x1104,QObject::trUtf8("Mp1_RIOM离线"),                             QObject::trUtf8("Mp1_RIOM设备损坏或通信故障; \n检查Mp1_RIOM设备及通信线路")},
    {0x1105,QObject::trUtf8("Mp2_RIOM离线"),                             QObject::trUtf8("Mp2_RIOM设备损坏或通信故障; \n检查Mp2_RIOM设备及通信线路")},
    {0x1106,QObject::trUtf8("M1_RIOM离线"),                              QObject::trUtf8("M1_RIOM设备损坏或通信故障; \n检查M1_RIOM设备及通信线路")},
    {0x1107,QObject::trUtf8("M2_RIOM离线"),                              QObject::trUtf8("M2_RIOM设备损坏或通信故障; \n检查M2_RIOM设备及通信线路")},
    {0x1108,QObject::trUtf8("Tc1_CCU离线"),                             QObject::trUtf8("Tc1_CCU设备损坏或通信故障; \n检查Tc1_CCU设备及通信线路")},
    {0x1109,QObject::trUtf8("Tc2_CCU离线"),                             QObject::trUtf8("Tc2_CCU设备损坏或通信故障; \n检查Tc2_CCU设备及通信线路")},
    {0x1110,QObject::trUtf8("Mp1_DCU离线"),                             QObject::trUtf8("Mp1_DCU设备损坏或通信故障; \n检查Mp1_DCU设备及通信线路")},
    {0x1111,QObject::trUtf8("Mp2_DCU离线"),                             QObject::trUtf8("Mp2_DCU设备损坏或通信故障; \n检查Mp2_DCU设备及通信线路")},
    {0x1112,QObject::trUtf8("M1_DCU离线"),                             QObject::trUtf8("M1_DCU设备损坏或通信故障; \n检查M1_DCU设备及通信线路")},
    {0x1113,QObject::trUtf8("M2_DCU离线"),                             QObject::trUtf8("M2_DCU设备损坏或通信故障; \n检查M2_DCU设备及通信线路")},
    {0x1114,QObject::trUtf8("Tc1_BCU离线"),                             QObject::trUtf8("Tc1_BCU设备损坏或通信故障; \n检查Tc1_BCU设备及通信线路")},
    {0x1115,QObject::trUtf8("Tc2_BCU离线"),                             QObject::trUtf8("Tc2_BCU设备损坏或通信故障; \n检查Tc2_BCU设备及通信线路")},
    {0x1116,QObject::trUtf8("M1_BCU离线"),                             QObject::trUtf8("M1_BCU设备损坏或通信故障; \n检查M1_BCU设备及通信线路")},
    {0x1117,QObject::trUtf8("M2_BCU离线"),                             QObject::trUtf8("M2_BCU设备损坏或通信故障; \n检查M2_BCU设备及通信线路")},
    {0x1118,QObject::trUtf8("Tc1_SIV离线"),                             QObject::trUtf8("Tc1_SIV设备损坏或通信故障; \n检查Tc1_SIV设备及通信线路")},
    {0x1119,QObject::trUtf8("Tc2_SIV离线"),                             QObject::trUtf8("Tc2_SIV设备损坏或通信故障; \n检查Tc2_SIV设备及通信线路")},
    {0x1120,QObject::trUtf8("Tc1_ATC离线"),                             QObject::trUtf8("Tc1_ATC设备损坏或通信故障; \n检查Tc1_ATC设备及通信线路")},
    {0x1121,QObject::trUtf8("Tc2_ATC离线"),                             QObject::trUtf8("Tc2_ATC设备损坏或通信故障; \n检查Tc2_ATC设备及通信线路")},
    {0x1122,QObject::trUtf8("Tc1_ERM离线"),                             QObject::trUtf8("Tc1_ERM设备损坏或通信故障; \n检查Tc1_ERM设备及通信线路")},
    {0x1123,QObject::trUtf8("Tc2_ERM离线"),                             QObject::trUtf8("Tc2_ERM设备损坏或通信故障; \n检查Tc2_ERM设备及通信线路")},
    {0x1124,QObject::trUtf8("Tc1_PIS离线"),                             QObject::trUtf8("Tc1_PIS设备损坏或通信故障; \n检查Tc1_PIS设备及通信线路")},
    {0x1125,QObject::trUtf8("Tc2_PIS离线"),                             QObject::trUtf8("Tc2_PIS设备损坏或通信故障; \n检查Tc2_PIS设备及通信线路")},
    {0x1126,QObject::trUtf8("Tc1_FAU离线"),                             QObject::trUtf8("Tc1_FAU设备损坏或通信故障; \n检查Tc1_FAU设备及通信线路")},
    {0x1127,QObject::trUtf8("Tc2_FAU离线"),                             QObject::trUtf8("Tc2_FAU设备损坏或通信故障; \n检查Tc2_FAU设备及通信线路")},
    {0x1128,QObject::trUtf8("Tc1_EDCU1离线"),                             QObject::trUtf8("Tc1_EDCU1设备损坏或通信故障; \n检查Tc1_EDCU1设备及通信线路")},
    {0x1129,QObject::trUtf8("Tc1_EDCU2离线"),                             QObject::trUtf8("Tc1_EDCU2设备损坏或通信故障; \n检查Tc1_EDCU2设备及通信线路")},
    {0x1130,QObject::trUtf8("Mp1_EDCU3离线"),                             QObject::trUtf8("Mp1_EDCU3设备损坏或通信故障; \n检查Mp1_EDCU3设备及通信线路")},
    {0x1131,QObject::trUtf8("Mp1_EDCU4离线"),                             QObject::trUtf8("Mp1_EDCU4设备损坏或通信故障; \n检查Mp1_EDCU4设备及通信线路")},
    {0x1132,QObject::trUtf8("M1_EDCU5离线"),                             QObject::trUtf8("M1_EDCU5设备损坏或通信故障; \n检查M1_EDCU5设备及通信线路")},
    {0x1133,QObject::trUtf8("M1_EDCU6离线"),                             QObject::trUtf8("M1_EDCU6设备损坏或通信故障; \n检查M1_EDCU6设备及通信线路")},
    {0x1134,QObject::trUtf8("M2_EDCU7离线"),                             QObject::trUtf8("M2_EDCU7设备损坏或通信故障; \n检查M2_EDCU7设备及通信线路")},
    {0x1135,QObject::trUtf8("M2_EDCU8离线"),                             QObject::trUtf8("M2_EDCU8设备损坏或通信故障; \n检查M2_EDCU8设备及通信线路")},
    {0x1136,QObject::trUtf8("Mp2_EDCU9离线"),                             QObject::trUtf8("Mp2_EDCU9设备损坏或通信故障; \n检查Mp2_EDCU9设备及通信线路")},
    {0x1137,QObject::trUtf8("Mp2_EDCU10离线"),                             QObject::trUtf8("Mp2_EDCU10设备损坏或通信故障; \n检查Mp2_EDCU10设备及通信线路")},
    {0x1138,QObject::trUtf8("Tc2_EDCU11离线"),                             QObject::trUtf8("Tc2_EDCU11设备损坏或通信故障; \n检查Tc2_EDCU11设备及通信线路")},
    {0x1139,QObject::trUtf8("Tc2_EDCU12离线"),                             QObject::trUtf8("Tc2_EDCU12设备损坏或通信故障; \n检查Tc2_EDCU12设备及通信线路")},
    {0x1140,QObject::trUtf8("Tc1_HVAC离线"),                             QObject::trUtf8("Tc1_HVAC设备损坏或通信故障; \n检查Tc1_HVAC设备及通信线路")},
    {0x1141,QObject::trUtf8("Tc2_HVAC离线"),                             QObject::trUtf8("Tc2_HVAC设备损坏或通信故障; \n检查Tc2_HVAC设备及通信线路")},
    {0x1142,QObject::trUtf8("Mp1_HVAC离线"),                             QObject::trUtf8("Mp1_HVAC设备损坏或通信故障; \n检查Mp1_HVAC设备及通信线路")},
    {0x1143,QObject::trUtf8("Mp2_HVAC离线"),                             QObject::trUtf8("Mp2_HVAC设备损坏或通信故障; \n检查Mp2_HVAC设备及通信线路")},
    {0x1144,QObject::trUtf8("M1_HVAC离线"),                             QObject::trUtf8("M1_HVAC设备损坏或通信故障; \n检查M1_HVAC设备及通信线路")},
    {0x1145,QObject::trUtf8("M2_HVAC离线"),                             QObject::trUtf8("M2_HVAC设备损坏或通信故障; \n检查M2_HVAC设备及通信线路")},

    //  {0x120B,QObject::trUtf8("显示屏MVB通信中断"),                          QObject::trUtf8("请检查显示屏网关MVB通信状态和通信线缆是否松动或断开。")},/
//    {0x1202,QObject::trUtf8("TCU通信中断"),                                 QObject::trUtf8("请检查TCU硬件及相应接线")},
//    {0x1203,QObject::trUtf8("ACU通信中断"),                                 QObject::trUtf8("请检查ACU硬件及相应接线")},
//    {0x1204,QObject::trUtf8("BCU通信中断"),                                 QObject::trUtf8("请检查BCU硬件及相应接线")},
//    {0x1205,QObject::trUtf8("门通信中断"),                                  QObject::trUtf8("请检查门网关硬件及相应接线")},
//    {0x1206,QObject::trUtf8("空调通信中断"),                                QObject::trUtf8("请检查空调网关硬件及相应接线")},
//    {0x1207,QObject::trUtf8("PIS通信中断"),                                 QObject::trUtf8("请检查PIS硬件及相应接线")},
//    {0x1208,QObject::trUtf8("ATC通信中断"),                                 QObject::trUtf8("请检查ATC硬件及相应接线")},
//    {0x1209,QObject::trUtf8("FAS通信中断"),                                 QObject::trUtf8("请检查FAS硬件及相应接线")},

//    {0x1301,QObject::trUtf8("IO网关通信中断"),                            QObject::trUtf8("请检查MVB转CAN网关硬件及相应接线")},
//    {0x1302,QObject::trUtf8("DI1通信中断,请复位RIOM机箱空开"),               QObject::trUtf8("请检查DI1硬件及相应接线")},
//    {0x1303,QObject::trUtf8("DI2通信中断"),                                QObject::trUtf8("请检查DI2硬件及相应接线")},
//    {0x1304,QObject::trUtf8("DI3通信中断"),                                QObject::trUtf8("请检查DI3硬件及相应接线")},
//    {0x1305,QObject::trUtf8("DI4通信中断"),                                QObject::trUtf8("请检查DI4硬件及相应接线")},
//    {0x1306,QObject::trUtf8("DO1通信中断,请复位RIOM机箱空开"),               QObject::trUtf8("请检查DO1硬件及相应接线")},
//    {0x1307,QObject::trUtf8("DO2通信中断"),                                QObject::trUtf8("请检查DO2硬件及相应接线")},
//    {0x1308,QObject::trUtf8("AX通信中断"),                                QObject::trUtf8("请检查AX硬件及相应接线")},
//    {0x1309,QObject::trUtf8("PWM通信中断"),                                QObject::trUtf8("请检查PWM硬件及相应接线")},

//    {0x2101,QObject::trUtf8("1侧车门开/关列车线路故障"),                      QObject::trUtf8("请检查1侧车门开和关按钮。通知OCC")},
//    {0x2102,QObject::trUtf8("2侧车门开/关列车线路故障"),                      QObject::trUtf8("请检查2侧车门开和关按钮。通知OCC")},
//    {0x2103,QObject::trUtf8("超速检测"),                                   QObject::trUtf8("ATP旁路条件下的检测到超速。请司机施加制动。")},
//    {0x2301,QObject::trUtf8("所有制动缓解列车线故障"),                        QObject::trUtf8("检查相应DI线")},
//    {0x2302,QObject::trUtf8("紧急制动命令列车线故障"),                        QObject::trUtf8("检查相应DI线")},
//    {0x2303,QObject::trUtf8("ATP输出最大常用制动指令列车线故障"),               QObject::trUtf8("检查相应DI线")},
//    {0x2304,QObject::trUtf8("主牵引建立环路列车线故障"),                       QObject::trUtf8("检查相应DI线")},
//    {0x2305,QObject::trUtf8("牵引指令列车线故障"),                           QObject::trUtf8("检查相应DI线")},
//    {0x2306,QObject::trUtf8("制动指令列车线故障"),                           QObject::trUtf8("检查相应DI线")},
//    {0x2307,QObject::trUtf8("CCU人工复位列车线故障"),                        QObject::trUtf8("检查相应DI线")},
//    {0x2308,QObject::trUtf8("授权关闭HSCB列车线故障"),                       QObject::trUtf8("检查相应DI线")},
//    {0x2309,QObject::trUtf8("紧急制动环路列车线故障"),                        QObject::trUtf8("检查相应DI线")},
//    {0x230A,QObject::trUtf8("牵引系统复位列车线故障"),                        QObject::trUtf8("检查相应DI线")},
//    {0x230B,QObject::trUtf8("保持制动命令列车线故障"),                        QObject::trUtf8("检查相应DI线")},
//    {0x230C,QObject::trUtf8("施加停放制动命令列车线故障"),                     QObject::trUtf8("检查相应DI线")},
//    {0x230D,QObject::trUtf8("缓解停放制动命令列车线故障"),                     QObject::trUtf8("检查相应DI线")},

    {0x2101,QObject::trUtf8("两端采集到牵引信号不一致"),                      QObject::trUtf8("DI 采集的“牵引”指令冗余信号不一致; \n检查“牵引”列车线")},
    {0x2102,QObject::trUtf8("两端采集到制动信号不一致"),                      QObject::trUtf8("DI 采集的“制动”指令冗余信号不一致; \n检查“制动”列车线")},
    {0x2103,QObject::trUtf8("两端采集到紧急制动信号不一致"),                   QObject::trUtf8("DI 采集的“紧急制动”指令冗余信号不一致; \n检查“紧急制动”列车线")},
    {0x2104,QObject::trUtf8("两端采集到安全制动信号不一致"),                   QObject::trUtf8("DI 采集的“安全制动”指令冗余信号不一致; \n检查“安全制动”列车线")},
    {0x2105,QObject::trUtf8("两端采集到向前信号不一致"),                       QObject::trUtf8("DI 采集的“向前”指令冗余信号不一致; \n检查“向前”列车线")},
    {0x2106,QObject::trUtf8("两端采集到向后信号不一致"),                       QObject::trUtf8("DI 采集的“向后”指令冗余信号不一致; \n检查“向后”列车线")},
    {0x2107,QObject::trUtf8("两端采集到惰行信号不一致"),                       QObject::trUtf8("DI 采集的“惰行”指令冗余信号不一致; \n检查“惰行”列车线")},



    {0x3101,QObject::trUtf8("两端司机室激活"),                           QObject::trUtf8("两侧的 DI 同时采集到了司机室激活信号; \n关闭一端司机钥匙")},
    {0x3102,QObject::trUtf8("向前向后方向都激活"),                       QObject::trUtf8("DI 同时采集到向前、向后指令; \n检查司控器")},
    {0x3103,QObject::trUtf8("牵引制动均激活"),                            QObject::trUtf8("DI 同时采集到牵引、制动指令; \n检查司控器")},
    {0x3104,QObject::trUtf8("同时收到开左门与开右门信号"),                   QObject::trUtf8("DI 同时采集到开左门、开右门信号; \n检查左门使能与右门使能开关")},
//    {0x3105,QObject::trUtf8("牵引指令与制动指令冲突"),                      QObject::trUtf8("请将司控器手柄移到惰行位置。如果检查后故障仍未被清除，通知OCC")},
//    {0x3106,QObject::trUtf8("牵引指令列车线故障"),                          QObject::trUtf8("请检查对应信号的列车线")},
//    {0x3107,QObject::trUtf8("制动指令列车线故障"),                          QObject::trUtf8("请检查对应信号的列车线")},
//    {0x3108,QObject::trUtf8("紧急制动安全环路列车线故障"),                   QObject::trUtf8("请检查对应信号的列车线")},
//    {0x3201,QObject::trUtf8("两个TC车DI1都不在线"),                        QObject::trUtf8("TCMS无法控制牵引制动，请切换到“备用模式")},
//    {0x3202,QObject::trUtf8("两个TC车DO1都不在线"),                        QObject::trUtf8("TCMS无法给空压机输出启动命令，请用手动方式给空压机强迫泵风")},
    {0x4101,QObject::trUtf8("BCU车架1严重故障"),                                 QObject::trUtf8("该转向架上 EP2002 阀严重故障,相应阀检测到相应转向架上一个或者多个制动控制系统故障; \n应评估故障本质，查看其它的故 障信息并采取需要的纠正措施")},
    {0x4202,QObject::trUtf8("BCU车架1中等故障"),                                 QObject::trUtf8("EP2002 阀中等故障，在相应转向架上检测到一个或者多个制动控制系统故障; \n应评估故障的本质，查看其他故障信息，如有必要，采取纠正性措施。")},
    {0x4303,QObject::trUtf8("BCU车架1轻微故障"),                                 QObject::trUtf8("EP2002 阀轻微故障,系统检测到需要一些 预防性的维护和纠正措施; \n无需立即采取措施，当天结束时通知维修组。")},
    {0x4204,QObject::trUtf8("车架1速度传感器1故障"),                                 QObject::trUtf8("EP2002 阀检测到速度传感器故障; \n司机尽量采用低的减速度传感器、电缆及连接器EP2002 阀")},
    {0x4205,QObject::trUtf8("车架1速度传感器2故障"),                                 QObject::trUtf8("EP2002 阀检测到速度传感器故障; \n司机尽量采用低的减速度传感器、电缆及连接器EP2002 阀")},
    {0x4206,QObject::trUtf8("车架1编码插头故障"),                                 QObject::trUtf8("系统检测到的编码器和期待的编码器不一致，或编码器无效; \n检查气路板上的编码器")},
    {0x4207,QObject::trUtf8("车架1ASP超限故障"),                                 QObject::trUtf8("相应转向架上的空气弹簧压力超出范围; \n假如空气弹簧爆裂或者高度阀失效，需关闭截断塞门并用紧急弹簧牵引。")},
    {0x4108,QObject::trUtf8("车架1制动不缓解故障"),                                 QObject::trUtf8("相应转向架上的阀期望检测到空气制动缓解状态但实际检测到制动缸有压力; \n推荐利用相应车上的截断塞门切除该转向架，人工检测制动是否已缓解")},
    {0x4209,QObject::trUtf8("备用"),                                 QObject::trUtf8("等待制动厂家提供")},
    {0x4110,QObject::trUtf8("备用"),                                 QObject::trUtf8("等待制动厂家提供")},
    {0x4111,QObject::trUtf8("BCU车架2严重故障"),                                 QObject::trUtf8("该转向架上 EP2002 阀严重故障,相应阀检测到相应转向架上一个或者多个制动控制系统故障; \n应评估故障本质，查看其它的故障信息并采取需要的纠正措施")},
    {0x4212,QObject::trUtf8("BCU车架2中等故障"),                                 QObject::trUtf8("EP2002 阀中等故障，在相应转向架上检测到一个或者多个制动控制系统故障; \n应评估故障的本质，查看其他故障信息，如有必要，采取纠正性措施。")},
    {0x4313,QObject::trUtf8("BCU车架2轻微故障"),                                 QObject::trUtf8("EP2002 阀轻微故障,系统检测到需要一些 预防性的维护和纠正措施; \n无需立即采取措施，当天结束时通知维修组。")},
    {0x4214,QObject::trUtf8("车架2速度传感器1故障"),                                 QObject::trUtf8("EP2002 阀检测到速度传感器故障; \n司机尽量采用低的减速度传感器、电缆及连接器EP2002 阀")},
    {0x4215,QObject::trUtf8("车架2速度传感器2故障"),                                 QObject::trUtf8("EP2002 阀检测到速度传感器故障; \n司机尽量采用低的减速度传感器、电缆及连接器EP2002 阀")},
    {0x4216,QObject::trUtf8("车架2编码插头故障"),                                 QObject::trUtf8("系统检测到的编码器和期待的编码器不一致，或编码器无效; \n检查气路板上的编码器")},
    {0x4217,QObject::trUtf8("车架2ASP超限故障"),                                 QObject::trUtf8("相应转向架上的空气弹簧压力超出范围; \n假如空气弹簧爆裂或者高度阀失效，需关闭截断塞门并用紧急弹簧牵引。")},
    {0x4118,QObject::trUtf8("车架2制动不缓解故障"),                                 QObject::trUtf8("相应转向架上的阀期望检测到空气制动缓解状态但实际检测到制动缸有压力; \n推荐利用相应车上的截断塞门切除该转向架，人工检测制动是否已缓解")},
    {0x4219,QObject::trUtf8("备用"),                                 QObject::trUtf8("等待制动厂家提供")},
    {0x4120,QObject::trUtf8("备用"),                                 QObject::trUtf8("等待制动厂家提供")},
    {0x4221,QObject::trUtf8("速度检测故障"),                                 QObject::trUtf8("该转向架上的两个速度传感器均故障; \n检查速度传感器、电缆及连接器、EP2002阀")},
    {0x4122,QObject::trUtf8("CAN1总线故障"),                                 QObject::trUtf8("该单元CAN 总线1 受干扰，该故障将导致系统切换到CAN 总线2，系统无冗余备份; \n无需立即采取措施，当天结束通知维修组该信息")},
    {0x4123,QObject::trUtf8("CAN2总线故障"),                                 QObject::trUtf8("该单元CAN 总线2 受干扰，该故障将导致系统切换到CAN 总线1，系统无冗余备份; \n无需立即采取措施，当天结束通知维修组该信息")},
    {0x4124,QObject::trUtf8("大事件"),                                 QObject::trUtf8("列车制动系统发生重大故障; \n正常运行到下一站，清客，返回车辆段。根据其他故障信息分析故障原因")},
    {0x4225,QObject::trUtf8("中等事件"),                                 QObject::trUtf8("列车制动系统发生中等故障; \n正常运行一个往返，然后返回车辆段。根据其他故障信息分析故障原因")},
    {0x4326,QObject::trUtf8("小事件"),                                 QObject::trUtf8("列车制动系统发生轻微故障; \n列车正常运营到当天结束，不再继续投入运营。根据其他故障信息分析故障原因")},
    {0x4127,QObject::trUtf8("制动硬线指令和网络指令不一致"),                                 QObject::trUtf8("来自网络和硬线的制动命令不一致; \n检查司控器、TCMS设备、信号接线、MVB通信")},
    {0x4128,QObject::trUtf8("牵引硬线指令和网络指令不一致"),                                 QObject::trUtf8("来自网络和硬线的牵引命令不一致; \n检查司控器、TCMS设备、信号接线、MVB通信")},
    {0x4229,QObject::trUtf8("总风压力低故障"),                                 QObject::trUtf8("总风压力不足; \n检查气动装置、制动阀，如有必要更换EP2002阀")},
    {0x4230,QObject::trUtf8("制动缸压力不足"),                                 QObject::trUtf8("相应转向架上的制动风缸压力下降且低于6.5Bar; \n检查架隔离、车隔离、制动阀")},





//    {0x4101,QObject::trUtf8("制动大故障"),                                 QObject::trUtf8("以最小速度运行，下个合适地点停车(例如车站)")},
//    {0x4102,QObject::trUtf8("转向架1制动不缓解"),                           QObject::trUtf8("司机：隔离转向架，并且人工检查制动是否缓解；\n维修人员：1.检查气路，2.检查阀的状态，3.更换EP2002阀。")},
//    {0x4103,QObject::trUtf8("转向架2制动不缓解"),                           QObject::trUtf8("司机：隔离转向架，并且人工检查制动是否缓解；\n维修人员：1.检查气路，2.检查阀的状态，3.若有必要，更换EP2002阀。")},

//    {0x4104,QObject::trUtf8("停放制动不缓解"),                              QObject::trUtf8("司机：1.停放制动隔离，2.手动缓解停放制动；\n维修人员：1.检查气路，2.检查阀的状态，3.若有必要，更换EP2002阀。")},
////  {0x4105,QObject::trUtf8("3个以上转向架紧急制动无效"),                     QObject::trUtf8("下个合适地点停车")},
//    {0x4106,QObject::trUtf8("3个以上转向架BCP压力低"),                       QObject::trUtf8("下个合适地点停车")},
//    {0x4107,QObject::trUtf8("3个以上隔离转向架"),                         QObject::trUtf8("下个合适地点停车")},
//    {0x4108,QObject::trUtf8("3个以上转向架常用制动不能施加故障"),               QObject::trUtf8("下个合适地点停车")},
//    {0x4201,QObject::trUtf8("制动中级故障"),                                QObject::trUtf8("完成本圈运营后停车")},
//    {0x4202,QObject::trUtf8("转向架1空气簧压力超出范围"),                     QObject::trUtf8("司机：若空气簧爆炸或者空重车调节阀故障，关闭隔离塞门如果可能的话紧急弹簧模式运行；限速。\n维修人员：1.检查空气簧系统,2.检查气路连接，3.检查BSR压力，4.若有必要，更换EP2002阀。")},
//    {0x4203,QObject::trUtf8("转向架2空气簧压力超出范围"),                     QObject::trUtf8("司机：若空气簧爆炸或者空重车调节阀故障，关闭隔离塞门如果可能的话紧急弹簧模式运行；限速。\n维修人员：1.检查空气簧系统,2.检查气路连接，3.检查BSR压力，4.若有必要，更换EP2002阀。")},
////    {0x4204,QObject::trUtf8("转向架1紧急制动无效"),                          QObject::trUtf8("建议限速95km/h")},
////    {0x4205,QObject::trUtf8("转向架2紧急制动无效"),                          QObject::trUtf8("建议限速95km/h")},
//    {0x4206,QObject::trUtf8("2或3个BCP压力低"),                            QObject::trUtf8("建议限速95km/h")},
//    {0x4207,QObject::trUtf8("2个或3个转向架常用制动不能施加故障"),             QObject::trUtf8("建议限速95km/h")},
//    {0x4208,QObject::trUtf8("2个或3个B05隔离转向架"),                       QObject::trUtf8("建议限速95km/h")},
//    {0x4301,QObject::trUtf8("minor故障"),                                 QObject::trUtf8("完成本天运营后回库")},
//    {0x4302,QObject::trUtf8("MVB总线故障"),                                QObject::trUtf8("司机：1.不是所有的诊断数据均可获得，2.注意硬线的诊断数据；\n维修人员：1.检查MVB线，2.检查TCMS，3.如果必要换EP2002阀")},
//    {0x4303,QObject::trUtf8("转向架1,BCP压力低"),                            QObject::trUtf8("司机无操作指南。\n维修人员：1.检查气路，2.检查阀的状态，3.更换EP2002阀。")},
//    {0x4304,QObject::trUtf8("转向架2,BCP压力低"),                            QObject::trUtf8("司机无操作指南。\n维修人员：1.检查气路，2.检查阀的状态，3.更换EP2002阀。")},
//    {0x4305,QObject::trUtf8("自检测间断26小时"),                            QObject::trUtf8("司机：自检；\n维修人员：自检")},
//    {0x4306,QObject::trUtf8("电制动超出范围"),                               QObject::trUtf8("司机：1.注意可能over braking，2.可能热过载；\n维修人员：1.检查信号线，,2.检查TCU，如果必要，换EP2002阀。")},
//    {0x4307,QObject::trUtf8("制动力超出范围"),                               QObject::trUtf8("司机：1.注意PWM信号是否完全故障，仅能施加0、100%的制动；\n维修人员：1.检查PWM列车线线，,2.检查PWM发生器，3.如果必要，换EP2002阀。")},
// //   {0x4308,QObject::trUtf8("主风管压力传感器故障"),                          QObject::trUtf8("司机无操作指南；\n维修人员：1.检查阀的状态，2.若果有必要，换EP2002阀。")},
//    {0x4309,QObject::trUtf8("轴1速度传感器故障"),                            QObject::trUtf8("在轨轮低黏着力时可使用低减速度。\n检查速度传感器及硬线；检查阀状态或更换EP2004阀")},
//    {0x4310,QObject::trUtf8("轴2速度传感器故障"),                            QObject::trUtf8("在轨轮低黏着力时可使用低减速度。\n检查速度传感器及硬线；检查阀状态或更换EP2004阀")},
//    {0x4311,QObject::trUtf8("轴3速度传感器故障"),                            QObject::trUtf8("在轨轮低黏着力时可使用低减速度。\n检查速度传感器及硬线；检查阀状态或更换EP2004阀")},
//    {0x4312,QObject::trUtf8("轴4速度传感器故障"),                            QObject::trUtf8("在轨轮低黏着力时可使用低减速度。\n检查速度传感器及硬线；检查阀状态或更换EP2004阀")},
//    {0x4313,QObject::trUtf8("WSP保持"),                                    QObject::trUtf8("在轨轮低黏着力时可使用低减速度。\n自检；检查速度传感器及硬线；\n检查制动执行器的机械状况；\n检查阀状态或更换EP2002阀")},
//    {0x4314,QObject::trUtf8("B05.01隔离转向架1"),                           QObject::trUtf8("查看BO5状态")},
//    {0x4315,QObject::trUtf8("B05.02隔离转向架2"),                           QObject::trUtf8("查看BO5状态")},
//    {0x4316,QObject::trUtf8("牵引力不足导致TCMS无法缓解保持制动(站点)"),                              QObject::trUtf8("手柄回惰行后直接推牵引3级或4级")},
//    {0x4317,QObject::trUtf8("牵引力不足导致TCMS无法缓解保持制动(非站点)"),                             QObject::trUtf8("手柄回惰行后直接推牵引3级或4级")},
//    {0x4318,QObject::trUtf8("TCMS发出保持制动缓解指令，保持制动未缓解"),                             QObject::trUtf8("")},
//    {0x4319,QObject::trUtf8("主风管压力传感器1故障"),                           QObject::trUtf8("检查阀状态或更换EP2002阀")},
//    {0x4320,QObject::trUtf8("主风管压力传感器2故障"),                           QObject::trUtf8("检查阀状态或更换EP2002阀")},
//    {0x4321,QObject::trUtf8("主风管压力传感器3故障"),                           QObject::trUtf8("检查阀状态或更换EP2002阀")},
//    {0x4322,QObject::trUtf8("主风管压力传感器4故障"),                           QObject::trUtf8("检查阀状态或更换EP2002阀")},

    {0x5201,QObject::trUtf8("充电接触器卡分故障"),                QObject::trUtf8("检查牵引系统及通讯线是否完好；如牵引系统隔离按复位按钮。\n如牵引系统锁闭将对应TCU重新上电；如不在线查看对应电空开是否跳脱")},
    {0x5202,QObject::trUtf8("充电接触器卡合故障"),                                    QObject::trUtf8("将对应TCU重新上电；或用牵引软件本地复位")},
    {0x5203,QObject::trUtf8("短接接触器卡分故障"),                                    QObject::trUtf8("本车牵引消失。检查本车牵引系统")},
    {0x5104,QObject::trUtf8("短接接触器卡合故障"),                                    QObject::trUtf8("按牵引复位按钮对TCU复位")},
    {0x5105,QObject::trUtf8("DCU电源故障"),                                    QObject::trUtf8("牵引系统自动复位")},
    {0x5306,QObject::trUtf8("DCU插件不在位故障"),                                    QObject::trUtf8("牵引系统自动复位")},
    {0x5107,QObject::trUtf8("主断线圈未减载"),                                     QObject::trUtf8("检查AA3")},
    {0x5108,QObject::trUtf8("硬件判断网压过压"),                          QObject::trUtf8("导致牵引锁闭，检查TCU版本信息")},
    {0x5309,QObject::trUtf8("软件判断网压过压"),                                    QObject::trUtf8("导致抑制逆变器，重复发生会封锁逆变器，检查RIOM")},
    {0x5110,QObject::trUtf8("硬件判断中间电压过压"),                                 QObject::trUtf8("TCMS通信故障，请检查MVB通讯线路")},
    {0x5311,QObject::trUtf8("软件判断中间电压过压"),                                  QObject::trUtf8("导致抑制逆变器，重复发生会封锁逆变器，检查AA3")},
    {0x5212,QObject::trUtf8("软件判断网压欠压"),                                  QObject::trUtf8("导致抑制逆变器，重复发生会封锁逆变器，检查AA3")},
    {0x5213,QObject::trUtf8("软件判断中间电压欠压"),                           QObject::trUtf8("检查A-LCMD1传感器和低压线路")},
    {0x5114,QObject::trUtf8("充电不良故障"),                           QObject::trUtf8("检查A-LCMD2传感器和低压线路")},
    {0x5315,QObject::trUtf8("80km/h超速报警"),                    QObject::trUtf8("导致K-IC断开；检查A-CMDR传感器和低压线路")},
    {0x5116,QObject::trUtf8("硬件判断中间电流过流"),                    QObject::trUtf8("导致K-IC断开；检查A-CMDS传感器和低压线路")},
    {0x5317,QObject::trUtf8("模块1逆变过流"),                            QObject::trUtf8("导致K-IC断开，重复发生会封锁逆变器；\n检查A-FVMD传感器和低压线路")},
    {0x5318,QObject::trUtf8("模块2逆变过流"),                            QObject::trUtf8("检查A-LVMD传感器和低压线路")},
    {0x5119,QObject::trUtf8("模块1斩波过流"),                              QObject::trUtf8("检查滤波电容")},
    {0x5120,QObject::trUtf8("模块2斩波过流"),                              QObject::trUtf8("检查放电电阻及其线路及部件")},
    {0x5321,QObject::trUtf8("模块1过热"),                                  QObject::trUtf8("导致K-IC断开，重复发生会隔离牵引系统；\n检查K-CCC的辅助触点和低压线路")},
    {0x5322,QObject::trUtf8("模块2过热"),                              QObject::trUtf8("检查KCCC辅助触点")},
    {0x5323,QObject::trUtf8("斩波无流"),                                  QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统；\n检查K-CCC的辅助触点和低压线路")},
    {0x5324,QObject::trUtf8("未斩有流"),                          QObject::trUtf8("检查充电电阻")},
    {0x5325,QObject::trUtf8("制动电阻超温故障"),                          QObject::trUtf8("短时间内预充电次数过多")},
    {0x5326,QObject::trUtf8("制动电阻风机启动故障"),                                QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统；\n检查A-FVMD传感器")},
    {0x5327,QObject::trUtf8("制动电阻风压异常"),                            QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统；\n检查A-FVMD传感器可能直流总线发生短路")},
    {0x5128,QObject::trUtf8("模块2A＋管故障"),                                QObject::trUtf8("做加载测试检查斩波功能\n检查高压线路")},
    {0x5129,QObject::trUtf8("模块2A－管故障"),                                 QObject::trUtf8("重复发生会隔离牵引系统；做低压测试检查HSCB；\n检查HSCB的辅助触点和低压线路")},
    {0x5130,QObject::trUtf8("模块2B＋管故障"),                                 QObject::trUtf8("重复发生会隔离牵引系统；\n检查HSCB")},
    {0x5131,QObject::trUtf8("模块2B－管故障"),                                    QObject::trUtf8("重复发生会隔离牵引系统；检查HSCB；\n检查是否高压线路短")},
    {0x5132,QObject::trUtf8("模块2C＋管故障"),                                  QObject::trUtf8("重复发生会隔离牵引系统；\n做空载测试检查K-IC；\n检查K-IC的辅助触点和低压线路")},
    {0x5133,QObject::trUtf8("模块2C－管故障"),                                  QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统；\n做空载测试检查K-IC\n检查K-IC的辅助触点和低压线路")},
    {0x5134,QObject::trUtf8("模块2斩波管故障"),                    QObject::trUtf8("导致抑制逆变器，重复发生会隔离牵引；\n检查空开Q-MCB1；\n检查K-FAN及其低压线路")},
    {0x5135,QObject::trUtf8("模块2元件总故障"),                                QObject::trUtf8("380V供电丧失故障/n检查CVS")},
    {0x5136,QObject::trUtf8("模块1A＋管故障"),                             QObject::trUtf8("导致电机功率限制；可能是非常规的驾驶方式造成")},
    {0x5137,QObject::trUtf8("模块1A－管故障"),                              QObject::trUtf8("导致K-IC断开，重复发生会隔离牵引系统；\n可能是非常规的驾驶方式造成")},
    {0x5138,QObject::trUtf8("模块1B＋管故障"),                            QObject::trUtf8("逆变器过温，导致K-IC断开，重复发生会隔离牵引系统；\n检查热开关低压线路；检查逆变器风扇；\n可能是非常规的驾驶方式造成")},
    {0x5139,QObject::trUtf8("模块1B－管故障"),                       QObject::trUtf8("检查传感器及其低压线路")},
    {0x5140,QObject::trUtf8("模块1C＋管故障"),                            QObject::trUtf8("可能是非常规的驾驶方式造成")},
    {0x5141,QObject::trUtf8("模块1C－管故障"),                               QObject::trUtf8("导致K-IC断开，重复发生会隔离牵引系统；\n检查逆变器冷却风扇；\n可能是非常规的驾驶方式造成")},
    {0x5142,QObject::trUtf8("模块1斩波管故障"),                      QObject::trUtf8("可能是非常规的驾驶方式造成")},
    {0x5143,QObject::trUtf8("模块1元件总故障"),                          QObject::trUtf8("导致K-IC断开，重复发生会隔离牵引系统；\n可能是非常规的驾驶方式造成")},
    {0x5344,QObject::trUtf8("速度传感器1故障"),                              QObject::trUtf8("导致K-IC断开，重复发生会隔离牵引系统；\n检查制动电阻；或许与供电线路不相容")},
    {0x5345,QObject::trUtf8("速度传感器2故障"),                         QObject::trUtf8("列车运行时方向命令改变，导致逆变器抑制")},
    {0x5346,QObject::trUtf8("速度传感器3故障"),                    QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统；\n检查速度传感器和低压线路；\n可能是非常规的驾驶方式造成")},
    {0x5347,QObject::trUtf8("速度传感器4故障"),                             QObject::trUtf8("方向列车线冗余失败\n检查列车线")},
    {0x5348,QObject::trUtf8("1#电机超温保护"),                         QObject::trUtf8("方向命令冲突，导致逆变器抑制/n检查列车线")},
    {0x5349,QObject::trUtf8("2#电机超温保护"),                                QObject::trUtf8("检查列车线")},
    {0x5350,QObject::trUtf8("3#电机超温保护"),                              QObject::trUtf8("MVB线PWM超出范围")},
    {0x5351,QObject::trUtf8("4#电机超温保护"),                                      QObject::trUtf8("电机速度过高，导致逆变器抑制")},
    {0x5352,QObject::trUtf8("电机温度传感器1故障"),                               QObject::trUtf8("检查BCU和TCU之间的硬线")},
    {0x5353,QObject::trUtf8("电机温度传感器2故障"),                             QObject::trUtf8("牵引、制动命令不一致，导致逆变器抑制\n检查列车线")},
    {0x5354,QObject::trUtf8("电机温度传感器3故障"),                               QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统；\n检查制动电阻")},
    {0x5355,QObject::trUtf8("电机温度传感器4故障"),                                QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统；\n检查电机接线,A-LCMD1传感器和A-LCMD2传感器")},
    {0x5356,QObject::trUtf8("电压传感器故障"),                                QObject::trUtf8("检查BCU和TCU之间的硬线\n检查BCU继电器输出")},
    {0x5357,QObject::trUtf8("高速断路器异常断开"),                                 QObject::trUtf8("列车超速警告")},
    {0x5358,QObject::trUtf8("差分电流大于1A"),                                    QObject::trUtf8("列车超速故障，导致抑制逆变器")},
    {0x5159,QObject::trUtf8("差分电流大于50A"),                 QObject::trUtf8("检查速度传感器和低压线路")},
    {0x5260,QObject::trUtf8("方向指令错误"),                  QObject::trUtf8("导致K-IC断开，重复发生会隔离牵引系统；\n检查速度传感器和低压线路")},
    {0x5361,QObject::trUtf8("牵引制动指令错误"),                              QObject::trUtf8("检查车轮直径")},
    {0x5362,QObject::trUtf8("网络,硬线方向不一致"),                                QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统；\n检查车轮直径")},
    {0x5163,QObject::trUtf8("MCC生命信号中断"),                           QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统；\n检查高压线路（接地漏电）；\n检查A-LCMD1传感器和A-LCMD2传感器")},
    {0x5364,QObject::trUtf8("TCMS生命信号中断"),                        QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统")},
    {0x5165,QObject::trUtf8("备用"),                         QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统")},
    {0x5366,QObject::trUtf8("1#电机超温报警"),                                QObject::trUtf8("导致TCU隔离；\n更换逆变器模块")},
    {0x5367,QObject::trUtf8("2#电机超温报警"),                               QObject::trUtf8("导致TCU隔离；\n更换逆变器模块")},
    {0x5368,QObject::trUtf8("3#电机超温报警"),                               QObject::trUtf8("导致TCU隔离；\n更换逆变器模块")},
    {0x5369,QObject::trUtf8("4#电机超温报警"),                               QObject::trUtf8("导致TCU隔离；\n更换逆变器模块")},
//***ADD NEW FAULT 20180508
{0x5270,QObject::trUtf8("车辆处于大空转、滑行状态"),                               QObject::trUtf8("满足一下任一条件报出此故障：1)粘着反馈的空转信号持续1秒；2)实际力＜给定力的50%持续3.5秒；3)粘着反馈的滑行信号持续3.5秒；")},
{0x5271,QObject::trUtf8("本节动车与拖车速度差值过大"),                               QObject::trUtf8("在非紧急牵引或网络通信故障情况下，本车速度与拖车速度差值的绝对值＞5km/h持续50ms，则判断报出此故障信息")},

   //    {0x5366,QObject::trUtf8("电机电流超过2200A故障"),                      QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统")},
//    {0x5367,QObject::trUtf8("电机相电流高于2400A故障"),                     QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统")},
//    {0x5368,QObject::trUtf8("滤波电压高于2050V故障"),                       QObject::trUtf8("线电压过压，启动软撬棒")},
//    {0x5369,QObject::trUtf8("滤波电压高于2150V故障"),                       QObject::trUtf8("导致逆变器抑制，重复发生会隔离牵引系统")},
//    {0x5370,QObject::trUtf8("滤波电压高于2250V故障"),                        QObject::trUtf8("导致HSCB断开，重复发生会隔离牵引系统")},
//    {0x5371,QObject::trUtf8("F-AUX故障"),                      QObject::trUtf8("本地CVS保险丝F-AUX熔断，更换F-AUX")},
//    {0x5372,QObject::trUtf8("F-AUXBUS故障"),                QObject::trUtf8("保险丝F-AUXBUS熔断，更换F-AUXBUS")},
//    {0x5373,QObject::trUtf8("硬线传送的PWM信号超出范围FLT_inv_eff_hard"),           QObject::trUtf8("无")},
//    {0x5374,QObject::trUtf8("MVB传送的PWM值超出范围FLT_inv_eff_tcms"),             QObject::trUtf8("无")},
//    {0x5375,QObject::trUtf8("载荷信号故障FLT_inv_lw_hard"),                       QObject::trUtf8("载荷信号故障\n检查BCU和TCU之间的硬线")},
//    {0x5376,QObject::trUtf8("AO_BEA信号传输故障FLT_inv_bea_hard"),                QObject::trUtf8("AO_BEA信号传输故障\n检查BCU和TCU之间的硬线")},
//    {0x5377,QObject::trUtf8("LI_DISEB信号故障FLT_inv_diseb_hard"),               QObject::trUtf8("LI_DISEB信号故障\n检查BCU和TCU之间的硬线\n检查BCU继电器输出")},
//    {0x5378,QObject::trUtf8("3个以上锁闭或隔离或者不在线变为1级故障"),                 QObject::trUtf8("3个或以上牵引系统失去控制\n请检查牵引系统或者通信线路完好。")},

//    {0x6101,QObject::trUtf8("两个辅助系统失去控制"),                                QObject::trUtf8("请检查辅助系统或者通信线路完好。请将司机控制台上CVS控制开关拨到“备用”")},
//    {0x6102,QObject::trUtf8("至少一个重大故障存在"),                                QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6101,QObject::trUtf8("FASF  GDU反馈A相上管故障"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6102,QObject::trUtf8("FAXF  GDU反馈A相下管故障"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6103,QObject::trUtf8("FBSF  GDU反馈B相上管故障"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6104,QObject::trUtf8("FBXF  GDU反馈B相下管故障"),                                     QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6105,QObject::trUtf8("FCSF  GDU反馈C相上管故障"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6106,QObject::trUtf8("FCXF  GDU反馈C相下管故障"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6307,QObject::trUtf8("DBPF  电源模块故障"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
    {0x6108,QObject::trUtf8("A1OH  逆变器85℃超温"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6109,QObject::trUtf8("KMAF KMA 故障"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6110,QObject::trUtf8("KM2F KM2故障保护"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6111,QObject::trUtf8("KM1F KM1故障保护"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6112,QObject::trUtf8("FANF  风机断路器故"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6213,QObject::trUtf8("FOTF  风机超温故障"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6114,QObject::trUtf8("IOAF  逆变器R相过流保护"),                                     QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6115,QObject::trUtf8("IOCF  逆变器T相过流保护"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6116,QObject::trUtf8("INOC  逆变器输入过流"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6117,QObject::trUtf8("200C  逆变输出200%过载"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
    {0x6218,QObject::trUtf8("150C  逆变输出150%过载"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6219,QObject::trUtf8("OPO1  交流输出电压严重过压"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6220,QObject::trUtf8("OPO2  交流输出电压一般过压"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6221,QObject::trUtf8("OPL1  交流输出电压严重欠压"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6222,QObject::trUtf8("OPL2  交流输出电压一般欠压"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6223,QObject::trUtf8("ILUN  输出不平衡或缺相"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6324,QObject::trUtf8("INLV  逆变器输入过欠保护"),                                     QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6325,QObject::trUtf8("INOV  逆变器输入过压保护"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6126,QObject::trUtf8("CDFL  充电回路故障保护"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6327,QObject::trUtf8("BOOV  充电机输出电压过压"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
    {0x6328,QObject::trUtf8("BOLV  充电机输出电压欠压"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6329,QObject::trUtf8("BILV  充电机中间电压欠压"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6330,QObject::trUtf8("BIOV 充电机中间电压过压"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6331,QObject::trUtf8("BOOC 充电机输出过流"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
    {0x6132,QObject::trUtf8("BGDU 充电机门极反馈故障"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
    {0x6133,QObject::trUtf8("BGOH 充电机模块85℃超温保护"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6134,QObject::trUtf8("BKMF 充电机KM11故障"),                                     QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6335,QObject::trUtf8("BQFF 充电机输入保护开关QF11故障"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6336,QObject::trUtf8("BBOC蓄电池充电过流故障"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
    {0x6170,QObject::trUtf8("升弓状态下蓄电池断开"),                               QObject::trUtf8("恢复蓄电池供电")},





//    {0x6101,QObject::trUtf8("复位太频繁"),                                        QObject::trUtf8("故障发生时相应的CVS已停止工作。维修人员需检修ACU控制单元和辅助变流器。\n如故障不能解决，需及时进行更换")},
//    {0x6102,QObject::trUtf8("短路交流 输出未隔离"),                                QObject::trUtf8("故障发生时CVS已停止工作。维修人员需检查辅助变流器外部线路，发现问题及时处理。")},
//    {0x6201,QObject::trUtf8(" 输入模块永久性故障"),                                QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
//    {0x6202,QObject::trUtf8("逆变器不能使用"),                                     QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
//    {0x6203,QObject::trUtf8("交流输出模块永久性故障"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
//    {0x6204,QObject::trUtf8("电池充电器模块停止工作"),                              QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。\n维修人员应在事件堆栈中阅读之前的故障信息，以便确定出现故障的根本原因")},
//    {0x6205,QObject::trUtf8("预充电太频繁"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
//   // {0x6207,QObject::trUtf8("TCMS通信故障"),                                     QObject::trUtf8("TCMS通信故障，请检查MVB通讯线路")},
//   // {0x6208,QObject::trUtf8("至少一个中等故障存在"),                                  QObject::trUtf8("故障发生时CVS已停止工作。司机通过显示屏按下复位可复位故障按钮或重新启动ACU控制单元来清除该故障。")},
//    {0x6301,QObject::trUtf8("输入模块过压-阈值1"),                              QObject::trUtf8("故障发生时暂停逆变器和蓄电池充电器的操作。司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，司机可通过更换ACU来清除故障。\n如果操作后依然未能使清除故障，司机需要更换LVMD并重置ACU来清除故障。")},
//    {0x6302,QObject::trUtf8("输入模块过压-阈值2"),                              QObject::trUtf8("故障发生时暂停逆变器和蓄电池充电器的操作，断开输入接触器(LIK、CCK)，并在故障取消时自动恢复。\n司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员可通过更换ACU来清除故障。\n如果操作后依然未能使清除故障，维修人员需要更换LVMD并重置ACU来清除故障。")},
//    {0x6303,QObject::trUtf8("输入模块过压-阈值3"),                              QObject::trUtf8("司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换LVMD并重置ACU来清除故障。")},
//    {0x6304,QObject::trUtf8("输入模块快速欠压"),                                   QObject::trUtf8("司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后未能使清除故障，维修人员需要更换LVMD并重置ACU来清除故障。\n如果操作后依然未能使清除故障，维修人员需要检查逆变器和预充电电阻器。")},
//    {0x6305,QObject::trUtf8("输入模块慢速欠压"),                                   QObject::trUtf8("司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后未能使清除故障，维修人员需要更换LVMD并重置ACU来清除故障。\n如果操作后依然未能使清除故障，维修人员需要检查逆变器和预充电电阻器。")},
//    {0x6306,QObject::trUtf8("在没有停止命令时IES断开"),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查蓄电池充电器模块和LVMD")},
//    {0x6307,QObject::trUtf8("主接触器 (LIK) 状态不一致"),                      QObject::trUtf8("司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查LIK是否正常连接，如已正常连接，维修人员可通过更换LIK来清除故障。如果操作后依然未能使清除故障，\n维修人员可通过更换ACU并重新启动来清除故障")},
//    {0x6308,QObject::trUtf8("预充电接触器(CCK) 状态不一致"),                      QObject::trUtf8("司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查CCK是否正常连接，如已正常连接，维修人员可通过更换CCK来清除故障。如果操作后依然未能使清除故障，\n维修人员可通过更换ACU并重新启动来清除故障")},
//    {0x6309,QObject::trUtf8("输入自有热图像故障(电感LFL过温)"),                      QObject::trUtf8("司机可通过重置ACU使辅助变流器重启来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后未能使清除故障，维修人员需要检查LVMD、IOCMD-x、AOCMD板和蓄电池充电器模块来清除故障。\n如果操作后依然未能使清除故障，维修人员需检查整体布线")},
//    {0x630A,QObject::trUtf8("逆变器模块中L1相IGBT故障"),                           QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//    {0x630B,QObject::trUtf8("逆变器模块中L2相IGBT故障"),                           QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//    {0x630C,QObject::trUtf8("逆变器模块中L3相IGBT故障"),                           QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//    {0x630D,QObject::trUtf8("逆变器模块中L1相过流故障"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//    {0x630E,QObject::trUtf8("逆变器模块中L2相过流故障"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//    {0x630F,QObject::trUtf8("逆变器模块中L3相过流故障"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//   //{0x6310,QObject::trUtf8("逆变器热图像故障"),                                   QObject::trUtf8("由于此故障的原因在于过热，因此为了保护过热的部件，应充分冷却后再重新启动辅助变流器")},
//    {0x6311,QObject::trUtf8("逆变器电流失衡"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查是否单相负载过多，如果不是此类原因，维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要更换变流器电源模块来清除故障。")},
//    {0x6312,QObject::trUtf8("变压器热图像故障"),                                    QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查蓄电池充电器模块和LVMD")},
//    {0x6313,QObject::trUtf8("交流输出过电压-快速案例"),                              QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
//    {0x6314,QObject::trUtf8("交流输出过电压-慢速案例"),                              QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
//    {0x6315,QObject::trUtf8("逆变模式下，交流输出过电压-快速案例"),                    QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
//    {0x6316,QObject::trUtf8("逆变模式下，交流输出过电压-慢速案例"),                    QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
//    {0x6317,QObject::trUtf8("正常模式下交流输出电压不一致"),                          QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查电压传感器以及输出模块是否出现问题")},
//    {0x6318,QObject::trUtf8("逆变模式下交流输出电压不一致"),                          QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查电压传感器以及输出模块是否出现问题")},
//    {0x6319,QObject::trUtf8("交流输出过电流"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查电流传感器以及输出模块是否出现问题")},
//    {0x631A,QObject::trUtf8("正常模式下交流输出过载"),                               QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查电流传感器以及输出模块是否出现问题")},
//    {0x631B,QObject::trUtf8("逆变模式下交流输出过载"),                               QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查电流传感器以及输出模块是否出现问题")},
//    {0x631C,QObject::trUtf8("AOIK闭合或打开故障"),                           QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查AOIK接触器是否出现粘连")},
//    {0x631D,QObject::trUtf8("逆变器风扇故障"),                                     QObject::trUtf8("维修人员检查风扇断路器是否真的跳闸，如确实跳闸需检修风扇")},
//    {0x631E,QObject::trUtf8("交流输出模块相接地故障"),                               QObject::trUtf8("维修人员检查GNP断路器是否真的跳闸，如确实跳闸需检修辅助变流器外部线路")},
//    {0x631F,QObject::trUtf8("气流低位检测"),                                         QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员需检查蓄电池充电器模块和LVMD")},
//    {0x6321,QObject::trUtf8("电池充电器IGBT故障相L1"),                             QObject::trUtf8("这通常表示由于短路造成此IGBT“去饱和”。司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员可更换蓄电池充电器模块")},
//    {0x6322,QObject::trUtf8("电池充电器IGBT故障相L2"),                             QObject::trUtf8("这通常表示由于短路造成此IGBT“去饱和”。司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员可更换蓄电池充电器模块")},
//    {0x6323,QObject::trUtf8("电池充电器IGBT故障相L3"),                             QObject::trUtf8("这通常表示由于短路造成此IGBT“去饱和”。司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员可更换蓄电池充电器模块")},
//    {0x6324,QObject::trUtf8("电池充电器输入过电流相L1"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可更换蓄电池充电器模块。如果故障依然未清除，维修人员检查是否是辅助变流器外部短路")},
//    {0x6325,QObject::trUtf8("电池充电器输入过电流相L2"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可更换蓄电池充电器模块。如果故障依然未清除，维修人员检查是否是辅助变流器外部短路")},
//    {0x6326,QObject::trUtf8("电池充电器输入过电流相L3"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可更换蓄电池充电器模块。如果故障依然未清除，维修人员检查是否是辅助变流器外部短路")},
//    {0x6327,QObject::trUtf8("电池充电器输入过载"),                                 QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可更换蓄电池充电器模块。如果故障依然未清除，维修人员检查是否是线路是否出现问题")},
//    {0x6328,QObject::trUtf8("电池慢速过压"),                                      QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可更换ACU")},
//    {0x6329,QObject::trUtf8("电池快速过压"),                                      QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，\n维修人员可更换ACU")},
//    {0x632A,QObject::trUtf8("电池欠压-阈值1"),                                      QObject::trUtf8("司机在正常模式下启动再启动一次蓄电池充电器，如果不正常，建议维修人员更换蓄电池充电器模块")},
//    {0x632B,QObject::trUtf8("电池欠压-阈值2"),                                      QObject::trUtf8("司机在正常模式下启动再启动一次蓄电池充电器，如果不正常，建议维修人员更换蓄电池充电器模块")},
//    {0x632C,QObject::trUtf8("电池温度超出范围-案例1"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池出现的问题")},
//    {0x632D,QObject::trUtf8("电池温度超出范围-案例2"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池出现的问题")},
//    {0x632E,QObject::trUtf8("电池充电电流不平衡"),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员可更换蓄电池充电器并检查线路")},
//    {0x632F,QObject::trUtf8("逆变器热图像故障"),                                  QObject::trUtf8("由于此故障的原因在于过热，因此为了保护过热的部件，应充分冷却后再重新启动辅助变流器")},
//    {0x6331,QObject::trUtf8("逆变模式下，电池充电器热图像故障"),                    QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
//    {0x6332,QObject::trUtf8("在正常模式下，电池充电器电压测量不一致"),               QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。\n如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
//    {0x6333,QObject::trUtf8("TCMS通信故障"),                                     QObject::trUtf8("TCMS通信故障，请检查MVB通讯线路")},
//    {0x6334,QObject::trUtf8("24V模块无输出"),                                     QObject::trUtf8("请检查24V模块硬件及相应接线")},

////    {0x6313,QObject::trUtf8("交流输出过电压-快速案例"),                              QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
////    {0x6314,QObject::trUtf8("交流输出过电压-慢速案例"),                              QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
////    {0x6315,QObject::trUtf8("AOIK闭合或打开故障"),                                 QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查AOIK接触器是否出现粘连")},
////    {0x6316,QObject::trUtf8("逆变模式下，交流输出过电压-快速案例"),                    QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
////    {0x6317,QObject::trUtf8("逆变模式下，交流输出过电压-慢速案例"),                    QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员可通过更换ACU来清除故障。如果操作后依然未能使清除故障，维修人员需要检查电压传感器及线路是否出现问题。")},
////    {0x6318,QObject::trUtf8("正常模式下交流输出电压不一致"),                          QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查电压传感器以及输出模块是否出现问题")},
////    {0x6319,QObject::trUtf8("逆变模式下交流输出电压不一致"),                          QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查电压传感器以及输出模块是否出现问题")},
////    {0x631A,QObject::trUtf8("正常模式下交流输出过载"),                               QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查电流传感器以及输出模块是否出现问题")},
////    {0x631B,QObject::trUtf8("逆变模式下交流输出过载"),                               QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查电流传感器以及输出模块是否出现问题")},
////    {0x631C,QObject::trUtf8("交流输出过电流"),                                     QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查电流传感器以及输出模块是否出现问题")},
////     {0x632B,QObject::trUtf8("至少一个低级别故障存在"),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
////    {0x632C,QObject::trUtf8("变压器热图像故障"),                                      QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
////    {0x632E,QObject::trUtf8("预充电太频繁"),                            QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
////    {0x6331,QObject::trUtf8("在没有停止命令时IES断开"),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
////    {0x6332,QObject::trUtf8("牵引检测到高压，预充电接触器闭合并且滤波电压低"),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
////    {0x6333,QObject::trUtf8("预充电接触器闭合在没有高压输入 (通过传感器LVMD测量)"),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},
////    {0x6334,QObject::trUtf8("如果辅助逆变器接到命令在开始的模式(Cstop是0) "),                                QObject::trUtf8("司机可通过重置ACU使辅助变流器重新启动来清除该故障。如果操作后辅助系统未能恢复正常工作，维修人员需检查蓄电池充电器模块和LVMD")},

    {0x7201,QObject::trUtf8("门1电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7211,QObject::trUtf8("门2电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7221,QObject::trUtf8("门3电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7231,QObject::trUtf8("门4电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7241,QObject::trUtf8("门5电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7251,QObject::trUtf8("门6电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7261,QObject::trUtf8("门7电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7271,QObject::trUtf8("门8电机开路"),                                       QObject::trUtf8("电机接线不牢靠; \n请隔离此门,请检查电机和其连接线是否连接牢固")},

    {0x7202,QObject::trUtf8("门1电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7212,QObject::trUtf8("门2电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7222,QObject::trUtf8("门3电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7232,QObject::trUtf8("门4电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7242,QObject::trUtf8("门5电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7252,QObject::trUtf8("门6电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7262,QObject::trUtf8("门7电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7272,QObject::trUtf8("门8电机过流"),                                       QObject::trUtf8("机械结构；电气线路短路；	 \n请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},

    {0x7203,QObject::trUtf8("门1门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7213,QObject::trUtf8("门2门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7223,QObject::trUtf8("门3门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7233,QObject::trUtf8("门4门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7243,QObject::trUtf8("门5门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7253,QObject::trUtf8("门6门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7263,QObject::trUtf8("门7门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},
    {0x7273,QObject::trUtf8("门8门板开关故障"),                                       QObject::trUtf8("开关自身故障或接线错误; \n请隔离此门,请检查门板开关")},

    {0x7204,QObject::trUtf8("门1锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7214,QObject::trUtf8("门2锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7224,QObject::trUtf8("门3锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7234,QObject::trUtf8("门4锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7244,QObject::trUtf8("门5锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7254,QObject::trUtf8("门6锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7264,QObject::trUtf8("门7锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},
    {0x7274,QObject::trUtf8("门8锁闭开关故障"),                                       QObject::trUtf8(" 请检查锁闭开关; \n请隔离此门")},

    {0x7205,QObject::trUtf8("门1电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7215,QObject::trUtf8("门2电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7225,QObject::trUtf8("门3电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7235,QObject::trUtf8("门4电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7245,QObject::trUtf8("门5电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7255,QObject::trUtf8("门6电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7265,QObject::trUtf8("门7电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7275,QObject::trUtf8("门8电磁铁故障"),                                       QObject::trUtf8("闭锁开关接线错误或电磁铁本身故障; \n请隔离此门,请检查锁闭开关或更换电磁铁")},

    {0x7206,QObject::trUtf8("门1编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7216,QObject::trUtf8("门2编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7226,QObject::trUtf8("门3编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7236,QObject::trUtf8("门4编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7246,QObject::trUtf8("门5编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7256,QObject::trUtf8("门6编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7266,QObject::trUtf8("门7编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},
    {0x7276,QObject::trUtf8("门8编码器故障"),                                       QObject::trUtf8("电气接线错误或编码器自身故障; \n请隔离此门,请检查编码器和其接线")},

    {0x7207,QObject::trUtf8("门1开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7217,QObject::trUtf8("门2开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7227,QObject::trUtf8("门3开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7237,QObject::trUtf8("门4开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7247,QObject::trUtf8("门5开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7257,QObject::trUtf8("门6开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7267,QObject::trUtf8("门7开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7277,QObject::trUtf8("门8开关门超时"),                                       QObject::trUtf8("机械卡滞或障碍物; \n请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},

    {0x7208,QObject::trUtf8("门1输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7218,QObject::trUtf8("门2输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7228,QObject::trUtf8("门3输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7238,QObject::trUtf8("门4输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7248,QObject::trUtf8("门5输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7258,QObject::trUtf8("门6输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7268,QObject::trUtf8("门7输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},
    {0x7278,QObject::trUtf8("门8输出短路"),                                       QObject::trUtf8("电气接线错误; \n可继续开关门，不影响开关门，联系发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；3、蜂鸣器和其接线是否有故障")},

    {0x7209,QObject::trUtf8("门1绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7219,QObject::trUtf8("门2绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7229,QObject::trUtf8("门3绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7239,QObject::trUtf8("门4绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7249,QObject::trUtf8("门5绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7259,QObject::trUtf8("门6绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7269,QObject::trUtf8("门7绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7279,QObject::trUtf8("门8绿色环线故障"),                                       QObject::trUtf8("电气线路触发; \n请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},

    {0x7110,QObject::trUtf8("单节车2个主门控器MDCU均故障"),                            QObject::trUtf8("1.设备供电问题；2.通讯插头问题；3.地址配置错误; \n请确认：1、相应的门控器是否带电；2、通信插头连接是否正确牢固；3、相应MVB地址设置是否正确")},
    {0x7320,QObject::trUtf8("主门控器为部分主或主门控器故障"),                          QObject::trUtf8("1.设备供电问题；2.通讯插头问题；3.地址配置错误; \n隔离并断电此门，请检查1、相应的门控器是否带电；2、通信插头连接正确牢固；3相应门地址设置是否正确")},
    {0x7130,QObject::trUtf8("单节车2个主门控器MDCU均故障"),                            QObject::trUtf8("1.设备供电问题；2.通讯插头问题；3.地址配置错误; \n请确认：1、相应的门控器是否带电；2、通信插头连接是否正确牢固；3、相应MVB地址设置是否正确")},
    {0x7340,QObject::trUtf8("主门控器为部分主或主门控器故障"),                          QObject::trUtf8("1.设备供电问题；2.通讯插头问题；3.地址配置错误; \n隔离并断电此门，请检查1、相应的门控器是否带电；2、通信插头连接正确牢固；3相应门地址设置是否正确")},
    {0x7150,QObject::trUtf8("单节车2个主门控器MDCU均故障"),                            QObject::trUtf8("1.设备供电问题；2.通讯插头问题；3.地址配置错误; \n请确认：1、相应的门控器是否带电；2、通信插头连接是否正确牢固；3、相应MVB地址设置是否正确")},
    {0x7360,QObject::trUtf8("主门控器为部分主或主门控器故障"),                          QObject::trUtf8("1.设备供电问题；2.通讯插头问题；3.地址配置错误; \n隔离并断电此门，请检查1、相应的门控器是否带电；2、通信插头连接正确牢固；3相应门地址设置是否正确")},

    //****************************逃生门******************************
    {0x7380,QObject::trUtf8("逃生门已开启"),                                          QObject::trUtf8("紧急逃生门已开启，请注意安全")},
    //******************************



//    {0x7201,QObject::trUtf8("内部485故障"),                                       QObject::trUtf8("司机提示：收不到本节车所有车门485数据，本节车的状态和故障无法检测。维护提示：本节车内部485网络故障, 检查本节车485网络。")},
//    {0x7111,QObject::trUtf8("门1锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7121,QObject::trUtf8("门2锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7131,QObject::trUtf8("门3锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7141,QObject::trUtf8("门4锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7151,QObject::trUtf8("门5锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7161,QObject::trUtf8("门6锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7171,QObject::trUtf8("门7锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7181,QObject::trUtf8("门8锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7191,QObject::trUtf8("门9锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x71A1,QObject::trUtf8("门10锁闭失败"),                                   QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查编码器与DCU 之间的接口线。")},
//    {0x7112,QObject::trUtf8("门1意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7122,QObject::trUtf8("门2意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7132,QObject::trUtf8("门3意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7142,QObject::trUtf8("门4意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7152,QObject::trUtf8("门5意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7162,QObject::trUtf8("门6意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7172,QObject::trUtf8("门7意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7182,QObject::trUtf8("门8意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7192,QObject::trUtf8("门9意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x71A2,QObject::trUtf8("门10意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},

//    {0x7113,QObject::trUtf8("门1严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7123,QObject::trUtf8("门2严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7133,QObject::trUtf8("门3严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7143,QObject::trUtf8("门4严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7153,QObject::trUtf8("门5严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7163,QObject::trUtf8("门6严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7173,QObject::trUtf8("门7严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7183,QObject::trUtf8("门8严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7193,QObject::trUtf8("门9严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x71A3,QObject::trUtf8("门10严重错误"),                                           QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查紧急解锁开关；检查门锁钩；检查门锁开关与DCU之间的接口线。")},
//    {0x7211,QObject::trUtf8("门1电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7221,QObject::trUtf8("门2电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7231,QObject::trUtf8("门3电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7241,QObject::trUtf8("门4电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7251,QObject::trUtf8("门5电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7261,QObject::trUtf8("门6电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7271,QObject::trUtf8("门7电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7281,QObject::trUtf8("门8电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x7291,QObject::trUtf8("门9电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
//    {0x72A1,QObject::trUtf8("门A电动机电路故障"),             QObject::trUtf8("司机提示：收不到本车门485数据，本车门的状态和故障无法检测。维护提示：DCU内部485网络故障, 检查本车门485网络线路。")},
////    {0x7212,QObject::trUtf8("门1DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7222,QObject::trUtf8("门2DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7232,QObject::trUtf8("门3DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7242,QObject::trUtf8("门4DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7252,QObject::trUtf8("门5DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7262,QObject::trUtf8("门6DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7272,QObject::trUtf8("门7DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7282,QObject::trUtf8("门8DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x7292,QObject::trUtf8("门9DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
////    {0x72A2,QObject::trUtf8("门10DCU失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查EDCU和电机的电路，接线。")},
//    {0x7212,QObject::trUtf8("门1DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7222,QObject::trUtf8("门2DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7232,QObject::trUtf8("门3DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7242,QObject::trUtf8("门4DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7252,QObject::trUtf8("门5DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7262,QObject::trUtf8("门6DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7272,QObject::trUtf8("门7DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7282,QObject::trUtf8("门8DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x7292,QObject::trUtf8("门9DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},
//    {0x72A2,QObject::trUtf8("门10DLS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好，隔离后隔离锁可以锁闭此门。维护提示：检查锁闭开关是否损坏或接线是否松动。")},

//    {0x7213,QObject::trUtf8("门1DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7223,QObject::trUtf8("门2DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7233,QObject::trUtf8("门3DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7243,QObject::trUtf8("门4DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7253,QObject::trUtf8("门5DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7263,QObject::trUtf8("门6DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7273,QObject::trUtf8("门7DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7283,QObject::trUtf8("门8DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x7293,QObject::trUtf8("门9DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},
//    {0x72A3,QObject::trUtf8("门10DCS失效"),                                    QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：检查关门到位开关；更换关门到位开关；检查接线是否松动。")},

////    {0x7216,QObject::trUtf8("门1意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7226,QObject::trUtf8("门2意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7236,QObject::trUtf8("门3意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7246,QObject::trUtf8("门4意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7256,QObject::trUtf8("门5意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7266,QObject::trUtf8("门6意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7276,QObject::trUtf8("门7意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7286,QObject::trUtf8("门8意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x7296,QObject::trUtf8("门9意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
////    {0x72A6,QObject::trUtf8("门10意外解锁"),                            QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：DCU 驱动电磁铁电路故障,检查DCU。")},
//    {0x7311,QObject::trUtf8("门1轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7321,QObject::trUtf8("门2轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7331,QObject::trUtf8("门3轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7341,QObject::trUtf8("门4轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7351,QObject::trUtf8("门5轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7361,QObject::trUtf8("门6轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7371,QObject::trUtf8("门7轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7381,QObject::trUtf8("门8轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7391,QObject::trUtf8("门9轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x73A1,QObject::trUtf8("门10轻微错误"),                                     QObject::trUtf8("司机提示：请将此故障门隔离并且关闭好。维护提示：去除门轨道上的障碍物；检查编码器与DCU 之间的接口线；检查门锁开关和关门到位开关。")},
//    {0x7312,QObject::trUtf8("门1关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7322,QObject::trUtf8("门2关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7332,QObject::trUtf8("门3关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7342,QObject::trUtf8("门4关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7352,QObject::trUtf8("门5关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7362,QObject::trUtf8("门6关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7372,QObject::trUtf8("门7关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7382,QObject::trUtf8("门8关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7392,QObject::trUtf8("门9关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x73A2,QObject::trUtf8("门10关门障碍物探测"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7313,QObject::trUtf8("门1开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7323,QObject::trUtf8("门2开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7333,QObject::trUtf8("门3开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7343,QObject::trUtf8("门4开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7353,QObject::trUtf8("门5开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7363,QObject::trUtf8("门6开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7373,QObject::trUtf8("门7开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7383,QObject::trUtf8("门8开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7393,QObject::trUtf8("门9开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x73A3,QObject::trUtf8("门10开门障碍物探测"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7314,QObject::trUtf8("门1外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7324,QObject::trUtf8("门2外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7334,QObject::trUtf8("门3外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7344,QObject::trUtf8("门4外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7354,QObject::trUtf8("门5外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7364,QObject::trUtf8("门6外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7374,QObject::trUtf8("门7外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7384,QObject::trUtf8("门8外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7394,QObject::trUtf8("门9外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x73A4,QObject::trUtf8("门10外部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7315,QObject::trUtf8("门1门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7325,QObject::trUtf8("门2门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7335,QObject::trUtf8("门3门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7345,QObject::trUtf8("门4门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7355,QObject::trUtf8("门5门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7365,QObject::trUtf8("门6门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7375,QObject::trUtf8("门7门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7385,QObject::trUtf8("门8门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7395,QObject::trUtf8("门9门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x73A5,QObject::trUtf8("门10门关闭/打开中指示灯供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7316,QObject::trUtf8("门1内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7326,QObject::trUtf8("门2内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7336,QObject::trUtf8("门3内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7346,QObject::trUtf8("门4内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7356,QObject::trUtf8("门5内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7366,QObject::trUtf8("门6内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7376,QObject::trUtf8("门7内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7386,QObject::trUtf8("门8内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7396,QObject::trUtf8("门9内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x73A6,QObject::trUtf8("门10内部指示灯供电故障"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7317,QObject::trUtf8("门1蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7327,QObject::trUtf8("门2蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7337,QObject::trUtf8("门3蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7347,QObject::trUtf8("门4蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7357,QObject::trUtf8("门5蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7367,QObject::trUtf8("门6蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7377,QObject::trUtf8("门7蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7387,QObject::trUtf8("门8蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7397,QObject::trUtf8("门9蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x73A7,QObject::trUtf8("门10蜂鸣器供电故障"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7318,QObject::trUtf8("门1开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7328,QObject::trUtf8("门2开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7338,QObject::trUtf8("门3开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7348,QObject::trUtf8("门4开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7358,QObject::trUtf8("门5开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7368,QObject::trUtf8("门6开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7378,QObject::trUtf8("门7开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7388,QObject::trUtf8("门8开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7398,QObject::trUtf8("门9开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x73A8,QObject::trUtf8("门10开门超时"),                         QObject::trUtf8("维护提示：DCU 驱动开门指示灯故障, 检查DCU。")},
//    {0x7319,QObject::trUtf8("门1关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7329,QObject::trUtf8("门2关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7339,QObject::trUtf8("门3关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7349,QObject::trUtf8("门4关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7359,QObject::trUtf8("门5关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7369,QObject::trUtf8("门6关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7379,QObject::trUtf8("门7关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7389,QObject::trUtf8("门8关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x7399,QObject::trUtf8("门9关门超时"),                            QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},
//    {0x73A9,QObject::trUtf8("门10关门超时"),                           QObject::trUtf8("维护提示：DCU 驱动门侧灯故障, 检查DCU。")},

    {0x8201,QObject::trUtf8("1-1通风机故障"),                                   QObject::trUtf8("通风机 1-1 过流或者故障;检查通风机 1-1 设备及通信线路")},
    {0x8202,QObject::trUtf8("1-2通风机故障"),                                   QObject::trUtf8("通风机 1-2 过流或者故障;检查通风机 1-2 设备及通信线路")},
    {0x8203,QObject::trUtf8("2-1通风机故障"),                                   QObject::trUtf8("通风机 2-1 过流或者故障;检查通风机 2-1 设备及通信线路")},
    {0x8204,QObject::trUtf8("2-2通风机故障"),                                   QObject::trUtf8("通风机 2-2 过流或者故障;检查通风机 1-2 设备及通信线路")},
    {0x8205,QObject::trUtf8("1-1压缩机故障"),                                      QObject::trUtf8("压缩机 1-1 过流或者故障;检查压缩机 1-1 设备及通信线路")},
    {0x8206,QObject::trUtf8("1-2压缩机故障"),                                      QObject::trUtf8("压缩机 1-2 过流或者故障;检查压缩机 1-2 设备及通信线路")},
    {0x8207,QObject::trUtf8("2-1压缩机故障"),                                      QObject::trUtf8("压缩机 2-1 过流或者故障;检查压缩机 2-1 设备及通信线路")},
    {0x8208,QObject::trUtf8("2-2压缩机故障"),                                      QObject::trUtf8("压缩机 2-2 过流或者故障;检查压缩机 2-2 设备及通信线路")},
    {0x8209,QObject::trUtf8("1-1冷凝风机故障"),                                   QObject::trUtf8("冷凝风机 1-1 过流或者故障;检查冷凝风机 1-1 设备及通信线路")},
    {0x8210,QObject::trUtf8("1-2冷凝风机故障"),                                   QObject::trUtf8("冷凝风机 1-2 过流或者故障;检查冷凝风机 1-2 设备及通信线路")},
    {0x8211,QObject::trUtf8("2-1冷凝风机故障"),                                   QObject::trUtf8("冷凝风机 2-1 过流或者故障;检查冷凝风机 2-1 设备及通信线路")},
    {0x8212,QObject::trUtf8("2-2冷凝风机故障"),                                   QObject::trUtf8("冷凝风机 2-2 过流或者故障;检查冷凝风机 2-2 设备及通信线路")},
    {0x8213,QObject::trUtf8("1-1空调预热器故障"),                                      QObject::trUtf8("预热器 1-1 过流或者故障;检查预热器 1-1 设备及通信线路")},
    {0x8214,QObject::trUtf8("1-2空调预热器故障"),                                      QObject::trUtf8("预热器 1-2 过流或者故障;检查预热器 1-2 设备及通信线路")},
    {0x8215,QObject::trUtf8("2-1空调预热器故障"),                                      QObject::trUtf8("预热器 2-1 过流或者故障;检查预热器 2-1 设备及通信线路")},
    {0x8216,QObject::trUtf8("2-2空调预热器故障"),                                      QObject::trUtf8("预热器 2-2 过流或者故障;检查预热器 2-2 设备及通信线路")},
    {0x8217,QObject::trUtf8("1-1新风阀故障"),                                        QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0x8218,QObject::trUtf8("1-2新风阀故障"),                                        QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0x8219,QObject::trUtf8("1-1回风阀故障"),                                        QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0x8220,QObject::trUtf8("2-1新风阀故障"),                                        QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0x8221,QObject::trUtf8("2-2新风阀故障"),                                QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0x8222,QObject::trUtf8("2-1回风阀故障"),                                QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},


//    {0x8301,QObject::trUtf8("1-1通风机故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x8302,QObject::trUtf8("1-2通风机故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x8303,QObject::trUtf8("2-1通风机故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x8304,QObject::trUtf8("2-2通风机故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x8305,QObject::trUtf8("1-1冷凝机故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8306,QObject::trUtf8("1-2冷凝机故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8307,QObject::trUtf8("2-1冷凝机故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8308,QObject::trUtf8("2-2冷凝机故障"),                                      QObject::trUtf8("查看机组内部")},
////    {0x8309,QObject::trUtf8("1-1电热故障"),                                   QObject::trUtf8("查看机组内部")},
////    {0x830A,QObject::trUtf8("1-2电热故障"),                                   QObject::trUtf8("查看机组内部")},
////    {0x830B,QObject::trUtf8("2-1电热故障"),                                   QObject::trUtf8("查看机组内部")},
////    {0x830C,QObject::trUtf8("2-2电热故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x830D,QObject::trUtf8("1-1压缩机内部排温故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x830E,QObject::trUtf8("1-2压缩机内部排温故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x830F,QObject::trUtf8("2-1压缩机内部排温故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x8311,QObject::trUtf8("2-2压缩机内部排温故障"),                                   QObject::trUtf8("查看机组内部")},
//    {0x8312,QObject::trUtf8("1-1压缩机高压故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8313,QObject::trUtf8("1-2压缩机高压故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8314,QObject::trUtf8("2-1压缩机高压故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8315,QObject::trUtf8("2-2压缩机高压故障"),                                      QObject::trUtf8("查看机组内部")},
//    {0x8316,QObject::trUtf8("1-1压缩机低压故障"),                                        QObject::trUtf8("查看机组内部")},
//    {0x8317,QObject::trUtf8("1-2压缩机低压故障"),                                        QObject::trUtf8("查看机组内部")},
//    {0x8318,QObject::trUtf8("2-1压缩机低压故障"),                                        QObject::trUtf8("查看机组内部")},
//    {0x8319,QObject::trUtf8("2-2压缩机低压故障"),                                        QObject::trUtf8("查看机组内部")},
//    {0x831A,QObject::trUtf8("1-1压缩机过流故障"),                                QObject::trUtf8("查看机组内部")},
//    {0x831B,QObject::trUtf8("1-2压缩机过流故障"),                                QObject::trUtf8("查看机组内部")},
//    {0x831C,QObject::trUtf8("2-1压缩机过流故障"),                                QObject::trUtf8("查看机组内部")},
//    {0x831D,QObject::trUtf8("2-2压缩机过流故障"),                                QObject::trUtf8("查看机组内部")},


    {0x9201,QObject::trUtf8("客室控制单元故障"),                                   QObject::trUtf8("客室控制单元失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9202,QObject::trUtf8("广播控制盒故障"),                                   QObject::trUtf8("司机室广播控制盒失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9203,QObject::trUtf8("终点站LED屏故障"),                                   QObject::trUtf8("终点站 LED 屏失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9204,QObject::trUtf8("客室LED屏1故障"),                                   QObject::trUtf8("客室 LED 屏失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9205,QObject::trUtf8("客室LED屏2故障"),                                   QObject::trUtf8("客室 LED 屏失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9206,QObject::trUtf8("LED电子地图1故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9207,QObject::trUtf8("LED电子地图2故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9208,QObject::trUtf8("LED电子地图3故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9209,QObject::trUtf8("LED电子地图4故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9210,QObject::trUtf8("LED电子地图5故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9211,QObject::trUtf8("LED电子地图6故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9212,QObject::trUtf8("LED电子地图7故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9213,QObject::trUtf8("LED电子地图8故障"),                                   QObject::trUtf8("动态地图失效;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9214,QObject::trUtf8("1路摄像头网络连接中断"),                                   QObject::trUtf8("摄像头故障或者网络连接中断;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9215,QObject::trUtf8("2路摄像头网络连接中断"),                                   QObject::trUtf8("摄像头故障或者网络连接中断;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9216,QObject::trUtf8("3路摄像头网络连接中断"),                                   QObject::trUtf8("摄像头故障或者网络连接中断;检查系统供电、检查设备连接器、更换设备、断电复位")},
    {0x9217,QObject::trUtf8("司机室控制单元故障"),                                   QObject::trUtf8("司机室控制单元失效;检查系统供电、检查设备连接器、更换设备、断电复位")},







////    {0x9301,QObject::trUtf8("广播系统严重故障"),                              QObject::trUtf8("广播系统严重故障")},
////    {0x9302,QObject::trUtf8("广播系统中等故障"),                              QObject::trUtf8("广播系统中等故障")},
////    {0x9303,QObject::trUtf8("广播系统低等故障"),                                   QObject::trUtf8("广播系统低等故障")},
//    {0x9301,QObject::trUtf8("TC1 端司机室广播控制面板故障"),                                   QObject::trUtf8("检查TC1 端司机室广播控制面")},
//    {0x9302,QObject::trUtf8("TC1 端司机室广播系统控制器故障"),                                   QObject::trUtf8("检查TC1 端司机室广播系统控制器")},
//    {0x9303,QObject::trUtf8("TC1 端司机室终点站显示器故障"),                                   QObject::trUtf8("检查TC1 端司机室终点站显示器")},
//    {0x9304,QObject::trUtf8("TC2 端司机室广播控制面板故障"),                                   QObject::trUtf8("检查TC2 端司机室广播控制面板")},
//    {0x9305,QObject::trUtf8("TC2 端司机室广播系统控制器故障"),                                   QObject::trUtf8("检查TC2 端司机室广播系统控制器")},
//    {0x9306,QObject::trUtf8("TC2 端司机室终点站显示器故障"),                        QObject::trUtf8("检查TC2 端司机室终点站显示器")},
//    {0x9311,QObject::trUtf8("#1车广播功率放大器故障"),                        QObject::trUtf8("#1车广播功率放大器故障")},
//    {0x9312,QObject::trUtf8("#1车客室广播声音故障"),                                QObject::trUtf8("#1车客室广播声音故障")},
//    {0x9313,QObject::trUtf8("#1车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#1车-1位侧外部信息显示器故障")},
//    {0x9314,QObject::trUtf8("#1车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#1车-2位侧外部信息显示器故障")},
//    {0x9315,QObject::trUtf8("#1车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#1车-1位侧内部信息显示器故障")},
//    {0x9316,QObject::trUtf8("#1车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#1车-2位侧内部信息显示器故障")},
//    {0x9317,QObject::trUtf8("#1车-1号电子地图故障"),                                   QObject::trUtf8("#1车-1号电子地图故障")},
//    {0x9318,QObject::trUtf8("#1车-2号电子地图故障"),                                   QObject::trUtf8("#1车-2号电子地图故障")},
//    {0x9319,QObject::trUtf8("#1车-3号电子地图故障"),                                   QObject::trUtf8("#1车-3号电子地图故障")},
//    {0x931A,QObject::trUtf8("#1车-4号电子地图故障"),                                   QObject::trUtf8("#1车-4号电子地图故障")},
//    {0x931B,QObject::trUtf8("#1车-5号电子地图故障"),                                   QObject::trUtf8("#1车-5号电子地图故障")},
//    {0x931C,QObject::trUtf8("#1车-6号电子地图故障"),                                   QObject::trUtf8("#1车-6号电子地图故障")},
//    {0x931D,QObject::trUtf8("#1车-7号电子地图故障"),                                   QObject::trUtf8("#1车-7号电子地图故障")},
//    {0x931E,QObject::trUtf8("#1车-8号电子地图故障"),                                   QObject::trUtf8("#1车-8号电子地图故障")},
//    {0x9321,QObject::trUtf8("#2车广播功率放大器故障"),                        QObject::trUtf8("#1车广播功率放大器故障")},
//    {0x9322,QObject::trUtf8("#2车客室广播声音故障"),                                QObject::trUtf8("#2车客室广播声音故障")},
//    {0x9323,QObject::trUtf8("#2车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#2车-1位侧外部信息显示器故障")},
//    {0x9324,QObject::trUtf8("#2车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#2车-2位侧外部信息显示器故障")},
//    {0x9325,QObject::trUtf8("#2车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#2车-1位侧内部信息显示器故障")},
//    {0x9326,QObject::trUtf8("#2车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#2车-2位侧内部信息显示器故障")},
//    {0x9327,QObject::trUtf8("#2车-1号电子地图故障"),                                   QObject::trUtf8("#2车-1号电子地图故障")},
//    {0x9328,QObject::trUtf8("#2车-2号电子地图故障"),                                   QObject::trUtf8("#2车-2号电子地图故障")},
//    {0x9329,QObject::trUtf8("#2车-3号电子地图故障"),                                   QObject::trUtf8("#2车-3号电子地图故障")},
//    {0x932A,QObject::trUtf8("#2车-4号电子地图故障"),                                   QObject::trUtf8("#2车-4号电子地图故障")},
//    {0x932B,QObject::trUtf8("#2车-5号电子地图故障"),                                   QObject::trUtf8("#2车-5号电子地图故障")},
//    {0x932C,QObject::trUtf8("#2车-6号电子地图故障"),                                   QObject::trUtf8("#2车-6号电子地图故障")},
//    {0x932D,QObject::trUtf8("#2车-7号电子地图故障"),                                   QObject::trUtf8("#2车-7号电子地图故障")},
//    {0x932E,QObject::trUtf8("#2车-8号电子地图故障"),                                   QObject::trUtf8("#2车-8号电子地图故障")},

//    {0x9331,QObject::trUtf8("#3车广播功率放大器故障"),                        QObject::trUtf8("#3车广播功率放大器故障")},
//    {0x9332,QObject::trUtf8("#3车客室广播声音故障"),                                QObject::trUtf8("#3车客室广播声音故障")},
//    {0x9333,QObject::trUtf8("#3车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#3车-1位侧外部信息显示器故障")},
//    {0x9334,QObject::trUtf8("#3车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#3车-2位侧外部信息显示器故障")},
//    {0x9335,QObject::trUtf8("#3车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#3车-1位侧内部信息显示器故障")},
//    {0x9336,QObject::trUtf8("#3车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#3车-2位侧内部信息显示器故障")},
//    {0x9337,QObject::trUtf8("#3车-1号电子地图故障"),                                   QObject::trUtf8("#3车-1号电子地图故障")},
//    {0x9338,QObject::trUtf8("#3车-2号电子地图故障"),                                   QObject::trUtf8("#3车-2号电子地图故障")},
//    {0x9339,QObject::trUtf8("#3车-3号电子地图故障"),                                   QObject::trUtf8("#3车-3号电子地图故障")},
//    {0x933A,QObject::trUtf8("#3车-4号电子地图故障"),                                   QObject::trUtf8("#3车-4号电子地图故障")},
//    {0x933B,QObject::trUtf8("#3车-5号电子地图故障"),                                   QObject::trUtf8("#3车-5号电子地图故障")},
//    {0x933C,QObject::trUtf8("#3车-6号电子地图故障"),                                   QObject::trUtf8("#3车-6号电子地图故障")},
//    {0x933D,QObject::trUtf8("#3车-7号电子地图故障"),                                   QObject::trUtf8("#3车-7号电子地图故障")},
//    {0x933E,QObject::trUtf8("#3车-8号电子地图故障"),                                   QObject::trUtf8("#3车-8号电子地图故障")},

//    {0x9341,QObject::trUtf8("#4车广播功率放大器故障"),                        QObject::trUtf8("#4车广播功率放大器故障")},
//    {0x9342,QObject::trUtf8("#4车客室广播声音故障"),                                QObject::trUtf8("#4车客室广播声音故障")},
//    {0x9343,QObject::trUtf8("#4车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#4车-1位侧外部信息显示器故障")},
//    {0x9344,QObject::trUtf8("#4车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#4车-2位侧外部信息显示器故障")},
//    {0x9345,QObject::trUtf8("#4车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#1车-1位侧内部信息显示器故障")},
//    {0x9346,QObject::trUtf8("#4车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#4车-2位侧内部信息显示器故障")},
//    {0x9347,QObject::trUtf8("#4车-1号电子地图故障"),                                   QObject::trUtf8("#4车-1号电子地图故障")},
//    {0x9348,QObject::trUtf8("#4车-2号电子地图故障"),                                   QObject::trUtf8("#4车-2号电子地图故障")},
//    {0x9349,QObject::trUtf8("#4车-3号电子地图故障"),                                   QObject::trUtf8("#4车-3号电子地图故障")},
//    {0x934A,QObject::trUtf8("#4车-4号电子地图故障"),                                   QObject::trUtf8("#4车-4号电子地图故障")},
//    {0x934B,QObject::trUtf8("#4车-5号电子地图故障"),                                   QObject::trUtf8("#4车-5号电子地图故障")},
//    {0x934C,QObject::trUtf8("#4车-6号电子地图故障"),                                   QObject::trUtf8("#4车-6号电子地图故障")},
//    {0x934D,QObject::trUtf8("#4车-7号电子地图故障"),                                   QObject::trUtf8("#4车-7号电子地图故障")},
//    {0x934E,QObject::trUtf8("#4车-8号电子地图故障"),                                   QObject::trUtf8("#4车-8号电子地图故障")},

//    {0x9351,QObject::trUtf8("#5车广播功率放大器故障"),                        QObject::trUtf8("#5车广播功率放大器故障")},
//    {0x9352,QObject::trUtf8("#5车客室广播声音故障"),                                QObject::trUtf8("#5车客室广播声音故障")},
//    {0x9353,QObject::trUtf8("#5车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#5车-1位侧外部信息显示器故障")},
//    {0x9354,QObject::trUtf8("#5车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#5车-2位侧外部信息显示器故障")},
//    {0x9355,QObject::trUtf8("#5车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#5车-1位侧内部信息显示器故障")},
//    {0x9356,QObject::trUtf8("#5车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#5车-2位侧内部信息显示器故障")},
//    {0x9357,QObject::trUtf8("#5车-1号电子地图故障"),                                   QObject::trUtf8("#5车-1号电子地图故障")},
//    {0x9358,QObject::trUtf8("#5车-2号电子地图故障"),                                   QObject::trUtf8("#5车-2号电子地图故障")},
//    {0x9359,QObject::trUtf8("#5车-3号电子地图故障"),                                   QObject::trUtf8("#5车-3号电子地图故障")},
//    {0x935A,QObject::trUtf8("#5车-4号电子地图故障"),                                   QObject::trUtf8("#5车-4号电子地图故障")},
//    {0x935B,QObject::trUtf8("#5车-5号电子地图故障"),                                   QObject::trUtf8("#5车-5号电子地图故障")},
//    {0x935C,QObject::trUtf8("#5车-6号电子地图故障"),                                   QObject::trUtf8("#5车-6号电子地图故障")},
//    {0x935D,QObject::trUtf8("#5车-7号电子地图故障"),                                   QObject::trUtf8("#5车-7号电子地图故障")},
//    {0x935E,QObject::trUtf8("#5车-8号电子地图故障"),                                   QObject::trUtf8("#5车-8号电子地图故障")},

//    {0x9361,QObject::trUtf8("#6车广播功率放大器故障"),                        QObject::trUtf8("#6车广播功率放大器故障")},
//    {0x9362,QObject::trUtf8("#6车客室广播声音故障"),                                QObject::trUtf8("#6车客室广播声音故障")},
//    {0x9363,QObject::trUtf8("#6车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#6车-1位侧外部信息显示器故障")},
//    {0x9364,QObject::trUtf8("#6车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#6车-2位侧外部信息显示器故障")},
//    {0x9365,QObject::trUtf8("#6车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#6车-1位侧内部信息显示器故障")},
//    {0x9366,QObject::trUtf8("#6车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#6车-2位侧内部信息显示器故障")},
//    {0x9367,QObject::trUtf8("#6车-1号电子地图故障"),                                   QObject::trUtf8("#6车-1号电子地图故障")},
//    {0x9368,QObject::trUtf8("#6车-2号电子地图故障"),                                   QObject::trUtf8("#6车-2号电子地图故障")},
//    {0x9369,QObject::trUtf8("#6车-3号电子地图故障"),                                   QObject::trUtf8("#6车-3号电子地图故障")},
//    {0x936A,QObject::trUtf8("#6车-4号电子地图故障"),                                   QObject::trUtf8("#6车-4号电子地图故障")},
//    {0x936B,QObject::trUtf8("#6车-5号电子地图故障"),                                   QObject::trUtf8("#6车-5号电子地图故障")},
//    {0x936C,QObject::trUtf8("#6车-6号电子地图故障"),                                   QObject::trUtf8("#6车-6号电子地图故障")},
//    {0x936D,QObject::trUtf8("#6车-7号电子地图故障"),                                   QObject::trUtf8("#6车-7号电子地图故障")},
//    {0x936E,QObject::trUtf8("#6车-8号电子地图故障"),                                   QObject::trUtf8("#6车-8号电子地图故障")},

//    {0x9371,QObject::trUtf8("#7车广播功率放大器故障"),                        QObject::trUtf8("#7车广播功率放大器故障")},
//    {0x9372,QObject::trUtf8("#7车客室广播声音故障"),                                QObject::trUtf8("#7车客室广播声音故障")},
//    {0x9373,QObject::trUtf8("#7车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#7车-1位侧外部信息显示器故障")},
//    {0x9374,QObject::trUtf8("#7车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#7车-2位侧外部信息显示器故障")},
//    {0x9375,QObject::trUtf8("#7车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#7车-1位侧内部信息显示器故障")},
//    {0x9376,QObject::trUtf8("#7车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#7车-2位侧内部信息显示器故障")},
//    {0x9377,QObject::trUtf8("#7车-1号电子地图故障"),                                   QObject::trUtf8("#7车-1号电子地图故障")},
//    {0x9378,QObject::trUtf8("#7车-2号电子地图故障"),                                   QObject::trUtf8("#7车-2号电子地图故障")},
//    {0x9379,QObject::trUtf8("#7车-3号电子地图故障"),                                   QObject::trUtf8("#7车-3号电子地图故障")},
//    {0x937A,QObject::trUtf8("#7车-4号电子地图故障"),                                   QObject::trUtf8("#7车-4号电子地图故障")},
//    {0x937B,QObject::trUtf8("#7车-5号电子地图故障"),                                   QObject::trUtf8("#7车-5号电子地图故障")},
//    {0x937C,QObject::trUtf8("#7车-6号电子地图故障"),                                   QObject::trUtf8("#7车-6号电子地图故障")},
//    {0x937D,QObject::trUtf8("#7车-7号电子地图故障"),                                   QObject::trUtf8("#7车-7号电子地图故障")},
//    {0x937E,QObject::trUtf8("#7车-8号电子地图故障"),                                   QObject::trUtf8("#7车-8号电子地图故障")},

//    {0x9381,QObject::trUtf8("#8车广播功率放大器故障"),                        QObject::trUtf8("#8车广播功率放大器故障")},
//    {0x9382,QObject::trUtf8("#8车客室广播声音故障"),                                QObject::trUtf8("#8车客室广播声音故障")},
//    {0x9383,QObject::trUtf8("#8车-1位侧外部信息显示器故障"),                          QObject::trUtf8("#8车-1位侧外部信息显示器故障")},
//    {0x9384,QObject::trUtf8("#8车-2位侧外部信息显示器故障"),                          QObject::trUtf8("#8车-2位侧外部信息显示器故障")},
//    {0x9385,QObject::trUtf8("#8车-1位侧内部信息显示器故障"),                                QObject::trUtf8("#8车-1位侧内部信息显示器故障")},
//    {0x9386,QObject::trUtf8("#8车-2位侧内部信息显示器故障"),                          QObject::trUtf8("#8车-2位侧内部信息显示器故障")},
//    {0x9387,QObject::trUtf8("#8车-1号电子地图故障"),                                   QObject::trUtf8("#8车-1号电子地图故障")},
//    {0x9388,QObject::trUtf8("#8车-2号电子地图故障"),                                   QObject::trUtf8("#8车-2号电子地图故障")},
//    {0x9389,QObject::trUtf8("#8车-3号电子地图故障"),                                   QObject::trUtf8("#8车-3号电子地图故障")},
//    {0x938A,QObject::trUtf8("#8车-4号电子地图故障"),                                   QObject::trUtf8("#8车-4号电子地图故障")},
//    {0x938B,QObject::trUtf8("#8车-5号电子地图故障"),                                   QObject::trUtf8("#8车-5号电子地图故障")},
//    {0x938C,QObject::trUtf8("#8车-6号电子地图故障"),                                   QObject::trUtf8("#8车-6号电子地图故障")},
//    {0x938D,QObject::trUtf8("#8车-7号电子地图故障"),                                   QObject::trUtf8("#8车-7号电子地图故障")},
//    {0x938E,QObject::trUtf8("#8车-8号电子地图故障"),                                   QObject::trUtf8("#8车-8号电子地图故障")},

    {0xA301,QObject::trUtf8("应答器检测故障"),                                           QObject::trUtf8("需信号厂家提供")},
    {0xA202,QObject::trUtf8("DCS通信故障"),                                      QObject::trUtf8("需信号厂家提供")},
    {0xA203,QObject::trUtf8("列车对位错误"),                                           QObject::trUtf8("需信号厂家提供")},
    {0xA204,QObject::trUtf8("TOD通信故障"),                                      QObject::trUtf8("需信号厂家提供")},
    {0xA205,QObject::trUtf8("ATP故障"),                                           QObject::trUtf8("需信号厂家提供")},


    {0xB201,QObject::trUtf8("FDCU1、2模块间的通讯故障"),                            QObject::trUtf8("两端火灾报警主机相互通信异常;检查火灾报警主机及接线")},
    {0xB202,QObject::trUtf8("探测器1短路故障"),                            QObject::trUtf8("探测器故障或接线故障(短路);打开吸入式探测器的外壳检测探头是否有被短接，检查线路，故障恢复")},
    {0xB203,QObject::trUtf8("探测器1开路故障"),                            QObject::trUtf8("探测器故障或接线故障(断路);打开吸入式探测器的外壳检测探头是否松动，拧紧探头，故障恢复")},
    {0xB204,QObject::trUtf8("探测器1风扇故障"),                            QObject::trUtf8("探测器风扇故障;打开吸入式探测器的外壳检测风扇是否在正常工作，如果风扇停转，检查接插件是否接好，如果接好后风扇仍然不能工作能需要更换风扇")},
    {0xB205,QObject::trUtf8("探测器1污染"),                                QObject::trUtf8("探测器被污染;打开吸入式探测器，取下探测器进行清理")},
    {0xB206,QObject::trUtf8("探测器1通讯故障"),                            QObject::trUtf8("探测器与 FAU 主机通信异常;检测吸入式探测器是否供电，连接通讯的万可端子是否连接正确")},
    {0xB207,QObject::trUtf8("探测器2短路故障"),                            QObject::trUtf8("探测器故障或接线故障(短路);打开吸入式探测器的外壳检测探头是否有被短接，检查线路，故障恢复")},
    {0xB208,QObject::trUtf8("探测器2开路故障"),                            QObject::trUtf8("探测器故障或接线故障(断路);打开吸入式探测器的外壳检测探头是否松动，拧紧探头，故障恢复")},
    {0xB209,QObject::trUtf8("探测器2风扇故障"),                            QObject::trUtf8("探测器风扇故障;打开吸入式探测器的外壳检测风扇是否在正常工作，如果风扇停转，检查接插件是否接好，如果接好后风扇仍然不能工作能需要更换风扇")},
    {0xB210,QObject::trUtf8("探测器2污染"),                                QObject::trUtf8("探测器被污染;打开吸入式探测器，取下探测器进行清理")},
    {0xB211,QObject::trUtf8("探测器2通讯故障"),                            QObject::trUtf8("探测器与 FAU 主机通信异常;检测吸入式探测器是否供电，连接通讯的万可端子是否连接正确")},
    {0xB212,QObject::trUtf8("探测器3短路故障"),                            QObject::trUtf8("探测器故障或接线故障(短路);打开吸入式探测器的外壳检测探头是否有被短接，检查线路，故障恢复")},
    {0xB213,QObject::trUtf8("探测器3开路故障"),                            QObject::trUtf8("探测器故障或接线故障(断路);打开吸入式探测器的外壳检测探头是否松动，拧紧探头，故障恢复")},
    {0xB214,QObject::trUtf8("探测器3风扇故障"),                            QObject::trUtf8("探测器风扇故障;打开吸入式探测器的外壳检测风扇是否在正常工作，如果风扇停转，检查接插件是否接好，如果接好后风扇仍然不能工作能需要更换风扇")},
    {0xB215,QObject::trUtf8("探测器3污染"),                                QObject::trUtf8("探测器被污染;打开吸入式探测器，取下探测器进行清理")},
    {0xB216,QObject::trUtf8("探测器3通讯故障"),                            QObject::trUtf8("探测器与 FAU 主机通信异常;检测吸入式探测器是否供电，连接通讯的万可端子是否连接正确")},
    {0xB217,QObject::trUtf8("探测器4短路故障"),                            QObject::trUtf8("探测器故障或接线故障(短路);打开吸入式探测器的外壳检测探头是否有被短接，检查线路，故障恢复")},
    {0xB218,QObject::trUtf8("探测器4开路故障"),                            QObject::trUtf8("探测器故障或接线故障(断路);打开吸入式探测器的外壳检测探头是否松动，拧紧探头，故障恢复")},
    {0xB219,QObject::trUtf8("探测器4风扇故障"),                            QObject::trUtf8("探测器风扇故障;打开吸入式探测器的外壳检测风扇是否在正常工作，如果风扇停转，检查接插件是否接好，如果接好后风扇仍然不能工作能需要更换风扇")},
    {0xB220,QObject::trUtf8("探测器4污染"),                                QObject::trUtf8("探测器被污染;打开吸入式探测器，取下探测器进行清理")},
    {0xB221,QObject::trUtf8("探测器4通讯故障"),                            QObject::trUtf8("探测器与 FAU 主机通信异常;检测吸入式探测器是否供电，连接通讯的万可端子是否连接正确")},
    {0xB222,QObject::trUtf8("探测器5短路故障"),                            QObject::trUtf8("探测器故障或接线故障(短路);打开吸入式探测器的外壳检测探头是否有被短接，检查线路，故障恢复")},
    {0xB223,QObject::trUtf8("探测器5开路故障"),                            QObject::trUtf8("探测器故障或接线故障(断路);打开吸入式探测器的外壳检测探头是否松动，拧紧探头，故障恢复")},
    {0xB224,QObject::trUtf8("探测器5风扇故障"),                            QObject::trUtf8("探测器风扇故障;打开吸入式探测器的外壳检测风扇是否在正常工作，如果风扇停转，检查接插件是否接好，如果接好后风扇仍然不能工作能需要更换风扇")},
    {0xB225,QObject::trUtf8("探测器5污染"),                                QObject::trUtf8("探测器被污染;打开吸入式探测器，取下探测器进行清理")},
    {0xB226,QObject::trUtf8("探测器5通讯故障"),                            QObject::trUtf8("探测器与 FAU 主机通信异常;检测吸入式探测器是否供电，连接通讯的万可端子是否连接正确")},
    {0xB227,QObject::trUtf8("探测器6短路故障"),                            QObject::trUtf8("探测器故障或接线故障(短路);打开吸入式探测器的外壳检测探头是否有被短接，检查线路，故障恢复")},
    {0xB228,QObject::trUtf8("探测器6开路故障"),                            QObject::trUtf8("探测器故障或接线故障(断路);打开吸入式探测器的外壳检测探头是否松动，拧紧探头，故障恢复")},
    {0xB229,QObject::trUtf8("探测器6风扇故障"),                            QObject::trUtf8("探测器风扇故障;打开吸入式探测器的外壳检测风扇是否在正常工作，如果风扇停转，检查接插件是否接好，如果接好后风扇仍然不能工作能需要更换风扇")},
    {0xB230,QObject::trUtf8("探测器6污染"),                            QObject::trUtf8("探测器被污染;打开吸入式探测器，取下探测器进行清理")},
    {0xB231,QObject::trUtf8("探测器6通讯故障"),                            QObject::trUtf8("探测器与 FAU 主机通信异常;检测吸入式探测器是否供电，连接通讯的万可端子是否连接正确")},

};

int g_faultsInfoRomLen = sizeof(g_faultsinforom)/sizeof(ST_FAULT_INFO);

FAULTS_ROM_DATA g_faultsrom[]={

  //  {0x1101,  1,  D_POS_A,1765,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
  //  {0x1101,  1,  D_POS_F,1766,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_F,   2,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_E,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1106,  1,  D_POS_C,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1107,  1,  D_POS_D,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1108,  1,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1109,  1,  D_POS_F,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1110,  1,  D_POS_B,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1111,  1,  D_POS_E,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1112,  1,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1113,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1114,  1,  D_POS_A,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1115,  1,  D_POS_F,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1116,  1,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1117,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1118,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1119,  1,  D_POS_F,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1120,  1,  D_POS_A,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1121,  1,  D_POS_F,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1122,  1,  D_POS_A,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1123,  1,  D_POS_F,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1124,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1125,  1,  D_POS_F,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1126,  1,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1127,  1,  D_POS_F,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1128,  1,  D_POS_A,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1129,  1,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1130,  1,  D_POS_B,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1131,  1,  D_POS_B,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1132,  1,  D_POS_C,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1133,  1,  D_POS_C,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1134,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1135,  1,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1136,  1,  D_POS_E,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1137,  1,  D_POS_E,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1138,  1,  D_POS_F,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1139,  1,  D_POS_F,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1140,  1,  D_POS_A,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1141,  1,  D_POS_B,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1142,  1,  D_POS_C,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1143,  1,  D_POS_D,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1144,  1,  D_POS_E,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1145,  1,  D_POS_F,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    //BCU_TC1
    {0x4101,  1,  D_POS_A, 544,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_A, 544,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_A, 544,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4204,  2,  D_POS_A, 544,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4205,  2,  D_POS_A, 544,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4206,  2,  D_POS_A, 544,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4207,  2,  D_POS_A, 544,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4108,  1,  D_POS_A, 544,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4209,  2,  D_POS_A, 544,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4110,  1,  D_POS_A, 544,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4111,  1,  D_POS_A, 546,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4212,  2,  D_POS_A, 546,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4313,  3,  D_POS_A, 546,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4214,  2,  D_POS_A, 546,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_A, 546,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_A, 546,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_A, 546,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4118,  1,  D_POS_A, 546,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4219,  2,  D_POS_A, 546,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4120,  1,  D_POS_A, 546,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4221,  2,  D_POS_A, 545,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4122,  1,  D_POS_A, 545,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4123,  1,  D_POS_A, 545,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4124,  1,  D_POS_A, 545,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4225,  2,  D_POS_A, 545,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4326,  3,  D_POS_A, 545,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4127,  1,  D_POS_A, 545,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4128,  1,  D_POS_A, 545,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4229,  2,  D_POS_A, 545,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4230,  2,  D_POS_A, 544,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //BCU_MP2
    {0x4101,  1,  D_POS_B, 548,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_B, 548,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_B, 548,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4204,  2,  D_POS_B, 548,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4205,  2,  D_POS_B, 548,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4206,  2,  D_POS_B, 548,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4207,  2,  D_POS_B, 548,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4108,  1,  D_POS_B, 548,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4209,  2,  D_POS_B, 548,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4110,  1,  D_POS_B, 548,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4111,  1,  D_POS_B, 550,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4212,  2,  D_POS_B, 550,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4313,  3,  D_POS_B, 550,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4214,  2,  D_POS_B, 550,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_B, 550,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_B, 550,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_B, 550,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4118,  1,  D_POS_B, 550,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4219,  2,  D_POS_B, 550,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4120,  1,  D_POS_B, 550,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //{0x4221,  2,  D_POS_B, 549,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4122,  1,  D_POS_B, 549,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4123,  1,  D_POS_B, 549,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4124,  1,  D_POS_B, 549,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4225,  2,  D_POS_B, 549,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4326,  3,  D_POS_B, 549,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4127,  1,  D_POS_B, 549,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4128,  1,  D_POS_B, 549,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4229,  2,  D_POS_B, 549,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4230,  2,  D_POS_B, 548,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //BCU_M1
    {0x4101,  1,  D_POS_C, 552,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_C, 552,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_C, 552,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4204,  2,  D_POS_C, 552,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4205,  2,  D_POS_C, 552,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4206,  2,  D_POS_C, 552,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4207,  2,  D_POS_C, 552,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4108,  1,  D_POS_C, 552,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4209,  2,  D_POS_C, 552,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4110,  1,  D_POS_C, 552,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4111,  1,  D_POS_C, 554,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4212,  2,  D_POS_C, 554,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4313,  3,  D_POS_C, 554,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4214,  2,  D_POS_C, 554,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_C, 554,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_C, 554,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_C, 554,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4118,  1,  D_POS_C, 554,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4219,  2,  D_POS_C, 554,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4120,  1,  D_POS_C, 554,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4230,  2,  D_POS_C, 552,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },




    //BCU_M2
    {0x4101,  1,  D_POS_D, 744,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_D, 744,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_D, 744,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4204,  2,  D_POS_D, 744,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4205,  2,  D_POS_D, 744,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4206,  2,  D_POS_D, 744,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4207,  2,  D_POS_D, 744,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4108,  1,  D_POS_D, 744,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4209,  2,  D_POS_D, 744,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4110,  1,  D_POS_D, 744,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4111,  1,  D_POS_D, 746,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4212,  2,  D_POS_D, 746,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4313,  3,  D_POS_D, 746,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4214,  2,  D_POS_D, 746,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_D, 746,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_D, 746,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_D, 746,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4118,  1,  D_POS_D, 746,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4219,  2,  D_POS_D, 746,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4120,  1,  D_POS_D, 746,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4230,  2,  D_POS_D, 744,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },


    //BCU_MP2
    {0x4101,  1,  D_POS_E, 740,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_E, 740,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_E, 740,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4204,  2,  D_POS_E, 740,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4205,  2,  D_POS_E, 740,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4206,  2,  D_POS_E, 740,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4207,  2,  D_POS_E, 740,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4108,  1,  D_POS_E, 740,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4209,  2,  D_POS_E, 740,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4110,  1,  D_POS_E, 740,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4111,  1,  D_POS_E, 742,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4212,  2,  D_POS_E, 742,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4313,  3,  D_POS_E, 742,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4214,  2,  D_POS_E, 742,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_E, 742,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_E, 742,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_E, 742,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4118,  1,  D_POS_E, 742,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4219,  2,  D_POS_E, 742,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4120,  1,  D_POS_E, 742,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },

    //{0x4221,  2,  D_POS_E, 741,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4122,  1,  D_POS_E, 741,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4123,  1,  D_POS_E, 741,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4124,  1,  D_POS_E, 741,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4225,  2,  D_POS_E, 741,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4326,  3,  D_POS_E, 741,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4127,  1,  D_POS_E, 741,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4128,  1,  D_POS_E, 741,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4229,  2,  D_POS_E, 741,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4230,  2,  D_POS_E, 740,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },


    //BCU_TC2
    {0x4101,  1,  D_POS_F, 736,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4202,  2,  D_POS_F, 736,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4303,  3,  D_POS_F, 736,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4204,  2,  D_POS_F, 736,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4205,  2,  D_POS_F, 736,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4206,  2,  D_POS_F, 736,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4207,  2,  D_POS_F, 736,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4108,  1,  D_POS_F, 736,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4209,  2,  D_POS_F, 736,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4110,  1,  D_POS_F, 736,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4111,  1,  D_POS_F, 738,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4212,  2,  D_POS_F, 738,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4313,  3,  D_POS_F, 738,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4214,  2,  D_POS_F, 738,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4215,  2,  D_POS_F, 738,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4216,  2,  D_POS_F, 738,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4217,  2,  D_POS_F, 738,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4118,  1,  D_POS_F, 738,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4219,  2,  D_POS_F, 738,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    //{0x4120,  1,  D_POS_F, 738,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4221,  2,  D_POS_F, 737,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4122,  1,  D_POS_F, 737,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4123,  1,  D_POS_F, 737,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4124,  1,  D_POS_F, 737,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4225,  2,  D_POS_F, 737,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4326,  3,  D_POS_F, 737,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4127,  1,  D_POS_F, 737,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4128,  1,  D_POS_F, 737,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4229,  2,  D_POS_F, 737,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },
    {0x4230,  2,  D_POS_F, 736,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_BCU    },


    //TCU_MP1
    {0x5201,  2,  D_POS_B, 880 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5202,  2,  D_POS_B, 880 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5203,  2,  D_POS_B, 880 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5104,  1,  D_POS_B, 880 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5105,  1,  D_POS_B, 880 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5306,  3,  D_POS_B, 880 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5107,  1,  D_POS_B, 880 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5108,  1,  D_POS_B, 880 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5309,  3,  D_POS_B, 880 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5110,  1,  D_POS_B, 880 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5311,  3,  D_POS_B, 880 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5212,  2,  D_POS_B, 880 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5213,  2,  D_POS_B, 880 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5114,  1,  D_POS_B, 880 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5315,  3,  D_POS_B, 880 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5116,  1,  D_POS_B, 881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5317,  3,  D_POS_B, 881 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5318,  3,  D_POS_B, 881 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5119,  1,  D_POS_B, 881 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5120,  1,  D_POS_B, 881 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5321,  3,  D_POS_B, 881 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5322,  3,  D_POS_B, 881 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5323,  3,  D_POS_B, 881 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5324,  3,  D_POS_B, 881 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5325,  3,  D_POS_B, 881 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5226,  2,  D_POS_B, 881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5327,  3,  D_POS_B, 881 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


    {0x5128,  1,  D_POS_B, 882 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5129,  1,  D_POS_B, 882 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5130,  1,  D_POS_B, 882 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5131,  1,  D_POS_B, 882 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5132,  1,  D_POS_B, 882 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5133,  1,  D_POS_B, 882 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5134,  1,  D_POS_B, 882 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5135,  1,  D_POS_B, 882 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5136,  1,  D_POS_B, 882 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5137,  1,  D_POS_B, 882 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5138,  1,  D_POS_B, 882 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5139,  1,  D_POS_B, 882 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5140,  1,  D_POS_B, 882 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5141,  1,  D_POS_B, 882 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5142,  1,  D_POS_B, 882 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5143,  1,  D_POS_B, 882 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5344,  3,  D_POS_B, 883 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5345,  3,  D_POS_B, 883 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5346,  3,  D_POS_B, 883 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5347,  3,  D_POS_B, 883 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5348,  3,  D_POS_B, 883 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5349,  3,  D_POS_B, 883 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5350,  3,  D_POS_B, 883 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5351,  3,  D_POS_B, 883 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5352,  3,  D_POS_B, 883 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5353,  3,  D_POS_B, 883 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5354,  3,  D_POS_B, 883 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5355,  3,  D_POS_B, 883 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5356,  3,  D_POS_B, 883 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5357,  3,  D_POS_B, 883 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5358,  3,  D_POS_B, 884 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5159,  1,  D_POS_B, 884 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5260,  2,  D_POS_B, 884 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5361,  3,  D_POS_B, 884 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5362,  3,  D_POS_B, 884 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5163,  1,  D_POS_B, 884 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5364,  3,  D_POS_B, 884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    //{0x5165,  1,  D_POS_B, 884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5366,  3,  D_POS_B, 885 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5367,  3,  D_POS_B, 885 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5368,  3,  D_POS_B, 885 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5369,  3,  D_POS_B, 885 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5270,  2,  D_POS_B, 885 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5271,  2,  D_POS_B, 885 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },





    //TCU_M1
    {0x5201,  2,  D_POS_C,  48+880 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5202,  2,  D_POS_C,  48+880 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5203,  2,  D_POS_C,  48+880 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5104,  1,  D_POS_C,  48+880 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5105,  1,  D_POS_C,  48+880 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5306,  3,  D_POS_C,  48+880 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5107,  1,  D_POS_C,  48+880 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5108,  1,  D_POS_C,  48+880 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5309,  3,  D_POS_C,  48+880 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5110,  1,  D_POS_C,  48+880 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5311,  3,  D_POS_C,  48+880 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5212,  2,  D_POS_C,  48+880 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5213,  2,  D_POS_C,  48+880 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5114,  1,  D_POS_C,  48+880 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5315,  3,  D_POS_C,  48+880 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5116,  1,  D_POS_C,  48+881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5317,  3,  D_POS_C,  48+881 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5318,  3,  D_POS_C,  48+881 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5119,  1,  D_POS_C,  48+881 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5120,  1,  D_POS_C,  48+881 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5321,  3,  D_POS_C,  48+881 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5322,  3,  D_POS_C,  48+881 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5323,  3,  D_POS_C,  48+881 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5324,  3,  D_POS_C,  48+881 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5325,  3,  D_POS_C,  48+881 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5226,  2,  D_POS_C,  48+881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5327,  3,  D_POS_C,  48+881 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


    {0x5128,  1,  D_POS_C,  48+882 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5129,  1,  D_POS_C,  48+882 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5130,  1,  D_POS_C,  48+882 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5131,  1,  D_POS_C,  48+882 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5132,  1,  D_POS_C,  48+882 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5133,  1,  D_POS_C,  48+882 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5134,  1,  D_POS_C,  48+882 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5135,  1,  D_POS_C,  48+882 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5136,  1,  D_POS_C,  48+882 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5137,  1,  D_POS_C,  48+882 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5138,  1,  D_POS_C,  48+882 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5139,  1,  D_POS_C,  48+882 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5140,  1,  D_POS_C,  48+882 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5141,  1,  D_POS_C,  48+882 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5142,  1,  D_POS_C,  48+882 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5143,  1,  D_POS_C,  48+882 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5344,  3,  D_POS_C,  48+883 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5345,  3,  D_POS_C,  48+883 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5346,  3,  D_POS_C,  48+883 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5347,  3,  D_POS_C,  48+883 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5348,  3,  D_POS_C,  48+883 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5349,  3,  D_POS_C,  48+883 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5350,  3,  D_POS_C,  48+883 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5351,  3,  D_POS_C,  48+883 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5352,  3,  D_POS_C,  48+883 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5353,  3,  D_POS_C,  48+883 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5354,  3,  D_POS_C,  48+883 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5355,  3,  D_POS_C,  48+883 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5356,  3,  D_POS_C,  48+883 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5357,  3,  D_POS_C,  48+883 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5358,  3,  D_POS_C,  48+884 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5159,  1,  D_POS_C,  48+884 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5260,  2,  D_POS_C,  48+884 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5361,  3,  D_POS_C,  48+884 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5362,  3,  D_POS_C,  48+884 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5163,  1,  D_POS_C,  48+884 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5364,  3,  D_POS_C,  48+884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    //{0x5165,  1,  D_POS_C,  48+884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5366,  3,  D_POS_C,  48+885 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5367,  3,  D_POS_C,  48+885 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5368,  3,  D_POS_C,  48+885 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5369,  3,  D_POS_C,  48+885 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

{0x5270,  2,  D_POS_C, 48+885 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5271,  2,  D_POS_C, 48+885 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    //TCU_M2
    {0x5201,  2,  D_POS_D,  96+880 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5202,  2,  D_POS_D,  96+880 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5203,  2,  D_POS_D,  96+880 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5104,  1,  D_POS_D,  96+880 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5105,  1,  D_POS_D,  96+880 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5306,  3,  D_POS_D,  96+880 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5107,  1,  D_POS_D,  96+880 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5108,  1,  D_POS_D,  96+880 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5309,  3,  D_POS_D,  96+880 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5110,  1,  D_POS_D,  96+880 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5311,  3,  D_POS_D,  96+880 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5212,  2,  D_POS_D,  96+880 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5213,  2,  D_POS_D,  96+880 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5114,  1,  D_POS_D,  96+880 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5315,  3,  D_POS_D,  96+880 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5116,  1,  D_POS_D,  96+881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5317,  3,  D_POS_D,  96+881 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5318,  3,  D_POS_D,  96+881 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5119,  1,  D_POS_D,  96+881 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5120,  1,  D_POS_D,  96+881 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5321,  3,  D_POS_D,  96+881 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5322,  3,  D_POS_D,  96+881 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5323,  3,  D_POS_D,  96+881 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5324,  3,  D_POS_D,  96+881 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5325,  3,  D_POS_D,  96+881 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5226,  2,  D_POS_D,  96+881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5327,  3,  D_POS_D,  96+881 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


    {0x5128,  1,  D_POS_D,  96+882 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5129,  1,  D_POS_D,  96+882 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5130,  1,  D_POS_D,  96+882 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5131,  1,  D_POS_D,  96+882 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5132,  1,  D_POS_D,  96+882 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5133,  1,  D_POS_D,  96+882 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5134,  1,  D_POS_D,  96+882 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5135,  1,  D_POS_D,  96+882 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5136,  1,  D_POS_D,  96+882 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5137,  1,  D_POS_D,  96+882 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5138,  1,  D_POS_D,  96+882 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5139,  1,  D_POS_D,  96+882 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5140,  1,  D_POS_D,  96+882 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5141,  1,  D_POS_D,  96+882 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5142,  1,  D_POS_D,  96+882 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5143,  1,  D_POS_D,  96+882 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5344,  3,  D_POS_D,  96+883 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5345,  3,  D_POS_D,  96+883 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5346,  3,  D_POS_D,  96+883 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5347,  3,  D_POS_D,  96+883 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5348,  3,  D_POS_D,  96+883 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5349,  3,  D_POS_D,  96+883 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5350,  3,  D_POS_D,  96+883 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5351,  3,  D_POS_D,  96+883 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5352,  3,  D_POS_D,  96+883 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5353,  3,  D_POS_D,  96+883 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5354,  3,  D_POS_D,  96+883 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5355,  3,  D_POS_D,  96+883 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5356,  3,  D_POS_D,  96+883 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5357,  3,  D_POS_D,  96+883 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5358,  3,  D_POS_D,  96+884 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5159,  1,  D_POS_D,  96+884 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5260,  2,  D_POS_D,  96+884 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5361,  3,  D_POS_D,  96+884 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5362,  3,  D_POS_D,  96+884 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5163,  1,  D_POS_D,  96+884 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5364,  3,  D_POS_D,  96+884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    //{0x5165,  1,  D_POS_D,  96+884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5366,  3,  D_POS_D,  96+885 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5367,  3,  D_POS_D,  96+885 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5368,  3,  D_POS_D,  96+885 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5369,  3,  D_POS_D,  96+885 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5270,  2,  D_POS_D, 96+885 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5271,  2,  D_POS_D, 96+885 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


    //TCU_MP2
    {0x5201,  2,  D_POS_E,  144+880 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5202,  2,  D_POS_E,  144+880 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5203,  2,  D_POS_E,  144+880 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5104,  1,  D_POS_E,  144+880 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5105,  1,  D_POS_E,  144+880 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5306,  3,  D_POS_E,  144+880 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5107,  1,  D_POS_E,  144+880 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5108,  1,  D_POS_E,  144+880 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5309,  3,  D_POS_E,  144+880 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5110,  1,  D_POS_E,  144+880 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5311,  3,  D_POS_E,  144+880 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5212,  2,  D_POS_E,  144+880 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5213,  2,  D_POS_E,  144+880 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5114,  1,  D_POS_E,  144+880 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5315,  3,  D_POS_E,  144+880 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5116,  1,  D_POS_E,  144+881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5317,  3,  D_POS_E,  144+881 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5318,  3,  D_POS_E,  144+881 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5119,  1,  D_POS_E,  144+881 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5120,  1,  D_POS_E,  144+881 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5321,  3,  D_POS_E,  144+881 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5322,  3,  D_POS_E,  144+881 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5323,  3,  D_POS_E,  144+881 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5324,  3,  D_POS_E,  144+881 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5325,  3,  D_POS_E,  144+881 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5226,  2,  D_POS_E,  144+881 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    ///***********
    {0x5327,  3,  D_POS_E,  144+881 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


    {0x5128,  1,  D_POS_E,  144+882 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5129,  1,  D_POS_E,  144+882 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5130,  1,  D_POS_E,  144+882 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5131,  1,  D_POS_E,  144+882 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5132,  1,  D_POS_E,  144+882 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5133,  1,  D_POS_E,  144+882 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5134,  1,  D_POS_E,  144+882 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5135,  1,  D_POS_E,  144+882 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5136,  1,  D_POS_E,  144+882 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5137,  1,  D_POS_E,  144+882 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5138,  1,  D_POS_E,  144+882 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5139,  1,  D_POS_E,  144+882 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5140,  1,  D_POS_E,  144+882 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5141,  1,  D_POS_E,  144+882 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5142,  1,  D_POS_E,  144+882 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5143,  1,  D_POS_E,  144+882 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5344,  3,  D_POS_E,  144+883 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5345,  3,  D_POS_E,  144+883 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5346,  3,  D_POS_E,  144+883 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5347,  3,  D_POS_E,  144+883 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5348,  3,  D_POS_E,  144+883 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5349,  3,  D_POS_E,  144+883 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5350,  3,  D_POS_E,  144+883 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5351,  3,  D_POS_E,  144+883 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5352,  3,  D_POS_E,  144+883 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5353,  3,  D_POS_E,  144+883 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5354,  3,  D_POS_E,  144+883 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5355,  3,  D_POS_E,  144+883 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5356,  3,  D_POS_E,  144+883 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5357,  3,  D_POS_E,  144+883 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },

    {0x5358,  3,  D_POS_E,  144+884 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5159,  1,  D_POS_E,  144+884 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5260,  2,  D_POS_E,  144+884 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5361,  3,  D_POS_E,  144+884 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5362,  3,  D_POS_E,  144+884 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5163,  1,  D_POS_E,  144+884 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5364,  3,  D_POS_E,  144+884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    //{0x5165,  1,  D_POS_E,  144+884 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5366,  3,  D_POS_E,  144+885 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5367,  3,  D_POS_E,  144+885 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5368,  3,  D_POS_E,  144+885 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
    {0x5369,  3,  D_POS_E,  144+885 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5270,  2,  D_POS_E, 144+885 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },
{0x5271,  2,  D_POS_E, 144+885 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_TCU    },


    //SIV_TC1
    {0x6101,  1,  D_POS_A,  1046 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6102,  1,  D_POS_A,  1046 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6103,  1,  D_POS_A,  1046 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6104,  1,  D_POS_A,  1046 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6105,  1,  D_POS_A,  1046 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6106,  1,  D_POS_A,  1046 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6307,  3,  D_POS_A,  1046 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6108,  1,  D_POS_A,  1046 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6109,  1,  D_POS_A,  1046 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6110,  1,  D_POS_A,  1046 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6111,  1,  D_POS_A,  1046 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6112,  1,  D_POS_A,  1046 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6213,  2,  D_POS_A,  1046 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6114,  1,  D_POS_A,  1047 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6115,  1,  D_POS_A,  1047 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6116,  1,  D_POS_A,  1047 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6117,  1,  D_POS_A,  1047 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6218,  2,  D_POS_A,  1047 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6219,  2,  D_POS_A,  1047 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6220,  2,  D_POS_A,  1047 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6221,  2,  D_POS_A,  1047 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6222,  2,  D_POS_A,  1047 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6223,  2,  D_POS_A,  1047 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6324,  3,  D_POS_A,  1047 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6325,  3,  D_POS_A,  1047 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6126,  1,  D_POS_A,  1047 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6327,  3,  D_POS_A,  1048 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6328,  3,  D_POS_A,  1048 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6329,  3,  D_POS_A,  1048 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6330,  3,  D_POS_A,  1048 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6331,  3,  D_POS_A,  1048 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6132,  1,  D_POS_A,  1048 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6133,  1,  D_POS_A,  1048 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6134,  1,  D_POS_A,  1048 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6335,  3,  D_POS_A,  1048 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6336,  3,  D_POS_A,  1048 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6170,  1,  D_POS_A, 202 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },

    //SIV_TC2
    {0x6101,  1,  D_POS_F,  32+1046 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6102,  1,  D_POS_F,  32+1046 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6103,  1,  D_POS_F,  32+1046 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6104,  1,  D_POS_F,  32+1046 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6105,  1,  D_POS_F,  32+1046 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6106,  1,  D_POS_F,  32+1046 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6307,  3,  D_POS_F,  32+1046 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6108,  1,  D_POS_F,  32+1046 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6109,  1,  D_POS_F,  32+1046 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6110,  1,  D_POS_F,  32+1046 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6111,  1,  D_POS_F,  32+1046 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6112,  1,  D_POS_F,  32+1046 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6213,  2,  D_POS_F,  32+1046 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6114,  1,  D_POS_F,  32+1047 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6115,  1,  D_POS_F,  32+1047 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6116,  1,  D_POS_F,  32+1047 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6117,  1,  D_POS_F,  32+1047 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6218,  2,  D_POS_F,  32+1047 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6219,  2,  D_POS_F,  32+1047 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6220,  2,  D_POS_F,  32+1047 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6221,  2,  D_POS_F,  32+1047 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6222,  2,  D_POS_F,  32+1047 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6223,  2,  D_POS_F,  32+1047 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6324,  3,  D_POS_F,  32+1047 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6325,  3,  D_POS_F,  32+1047 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6126,  1,  D_POS_F,  32+1047 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6327,  3,  D_POS_F,  32+1048 ,   bit8,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6328,  3,  D_POS_F,  32+1048 ,   bit9,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6329,  3,  D_POS_F,  32+1048 ,   bit10,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6330,  3,  D_POS_F,  32+1048 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6331,  3,  D_POS_F,  32+1048 ,   bit12,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6132,  1,  D_POS_F,  32+1048 ,   bit13,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6133,  1,  D_POS_F,  32+1048 ,   bit14,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6134,  1,  D_POS_F,  32+1048 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6335,  3,  D_POS_F,  32+1048 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },
    {0x6336,  3,  D_POS_F,  32+1048 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_ACU    },





    //DOOR_TC1
    {0x7201,  2,  D_POS_A,  1121 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7202,  2,  D_POS_A,  1121 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7203,  2,  D_POS_A,  1121 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7204,  2,  D_POS_A,  1121 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7205,  2,  D_POS_A,  1121 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7206,  2,  D_POS_A,  1121 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7207,  2,  D_POS_A,  1121 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7208,  2,  D_POS_A,  1121 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7209,  2,  D_POS_A,  1121 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7210,  2,  D_POS_A,  1121 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7211,  2,  D_POS_A,  1122 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7212,  2,  D_POS_A,  1122 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7213,  2,  D_POS_A,  1122 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7214,  2,  D_POS_A,  1122 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7215,  2,  D_POS_A,  1122 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7216,  2,  D_POS_A,  1122 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7217,  2,  D_POS_A,  1122 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7218,  2,  D_POS_A,  1122 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7219,  2,  D_POS_A,  1122 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7220,  2,  D_POS_A,  1122 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7221,  2,  D_POS_A,  1123 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7222,  2,  D_POS_A,  1123 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7223,  2,  D_POS_A,  1123 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7224,  2,  D_POS_A,  1123 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7225,  2,  D_POS_A,  1123 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7226,  2,  D_POS_A,  1123 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7227,  2,  D_POS_A,  1123 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7228,  2,  D_POS_A,  1123 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7229,  2,  D_POS_A,  1123 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7230,  2,  D_POS_A,  1123 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7231,  2,  D_POS_A,  1124 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7232,  2,  D_POS_A,  1124 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7233,  2,  D_POS_A,  1124 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7234,  2,  D_POS_A,  1124 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7235,  2,  D_POS_A,  1124 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7236,  2,  D_POS_A,  1124 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7237,  2,  D_POS_A,  1124 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7238,  2,  D_POS_A,  1124 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7239,  2,  D_POS_A,  1124 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7240,  2,  D_POS_A,  1124 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7241,  2,  D_POS_A,  1125 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7242,  2,  D_POS_A,  1125 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7243,  2,  D_POS_A,  1125 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7244,  2,  D_POS_A,  1125 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7245,  2,  D_POS_A,  1125 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7246,  2,  D_POS_A,  1125 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7247,  2,  D_POS_A,  1125 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7248,  2,  D_POS_A,  1125 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7249,  2,  D_POS_A,  1125 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7250,  2,  D_POS_A,  1125 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7251,  2,  D_POS_A,  1126 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7252,  2,  D_POS_A,  1126 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7253,  2,  D_POS_A,  1126 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7254,  2,  D_POS_A,  1126 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7255,  2,  D_POS_A,  1126 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7256,  2,  D_POS_A,  1126 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7257,  2,  D_POS_A,  1126 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7258,  2,  D_POS_A,  1126 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7259,  2,  D_POS_A,  1126 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7260,  2,  D_POS_A,  1126 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7261,  2,  D_POS_A,  1127 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7262,  2,  D_POS_A,  1127 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7263,  2,  D_POS_A,  1127 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7264,  2,  D_POS_A,  1127 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7265,  2,  D_POS_A,  1127 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7266,  2,  D_POS_A,  1127 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7267,  2,  D_POS_A,  1127 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7268,  2,  D_POS_A,  1127 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7269,  2,  D_POS_A,  1127 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7270,  2,  D_POS_A,  1127 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7271,  2,  D_POS_A,  1128 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7272,  2,  D_POS_A,  1128 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7273,  2,  D_POS_A,  1128 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7274,  2,  D_POS_A,  1128 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7275,  2,  D_POS_A,  1128 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7276,  2,  D_POS_A,  1128 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7277,  2,  D_POS_A,  1128 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7278,  2,  D_POS_A,  1128 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7279,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7280,  2,  D_POS_A,  1128 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },


//    {0x7110,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0x7320,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0x7130,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0x7340,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0x7150,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
//    {0x7360,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },

    //**********************逃生门************************
    {0x7380,  3,  D_POS_A,  42 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //*************************************************


    //DOOR_MP1
    {0x7201,  2,  D_POS_B, 64+1121 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7202,  2,  D_POS_B, 64+1121 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7203,  2,  D_POS_B, 64+1121 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7204,  2,  D_POS_B, 64+1121 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7205,  2,  D_POS_B, 64+1121 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7206,  2,  D_POS_B, 64+1121 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7207,  2,  D_POS_B, 64+1121 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7208,  2,  D_POS_B, 64+1121 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7209,  2,  D_POS_B, 64+1121 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7210,  2,  D_POS_B, 32+1121 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7211,  2,  D_POS_B, 64+1122 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7212,  2,  D_POS_B, 64+1122 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7213,  2,  D_POS_B, 64+1122 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7214,  2,  D_POS_B, 64+1122 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7215,  2,  D_POS_B, 64+1122 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7216,  2,  D_POS_B, 64+1122 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7217,  2,  D_POS_B, 64+1122 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7218,  2,  D_POS_B, 64+1122 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7219,  2,  D_POS_B, 64+1122 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7220,  2,  D_POS_B, 32+1122 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7221,  2,  D_POS_B, 64+1123 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7222,  2,  D_POS_B, 64+1123 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7223,  2,  D_POS_B, 64+1123 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7224,  2,  D_POS_B, 64+1123 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7225,  2,  D_POS_B, 64+1123 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7226,  2,  D_POS_B, 64+1123 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7227,  2,  D_POS_B, 64+1123 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7228,  2,  D_POS_B, 64+1123 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7229,  2,  D_POS_B, 64+1123 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7230,  2,  D_POS_B, 32+1123 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7231,  2,  D_POS_B, 64+1124 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7232,  2,  D_POS_B, 64+1124 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7233,  2,  D_POS_B, 64+1124 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7234,  2,  D_POS_B, 64+1124 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7235,  2,  D_POS_B, 64+1124 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7236,  2,  D_POS_B, 64+1124 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7237,  2,  D_POS_B, 64+1124 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7238,  2,  D_POS_B, 64+1124 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7239,  2,  D_POS_B, 64+1124 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7240,  2,  D_POS_B, 32+1124 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7241,  2,  D_POS_B, 64+1125 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7242,  2,  D_POS_B, 64+1125 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7243,  2,  D_POS_B, 64+1125 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7244,  2,  D_POS_B, 64+1125 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7245,  2,  D_POS_B, 64+1125 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7246,  2,  D_POS_B, 64+1125 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7247,  2,  D_POS_B, 64+1125 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7248,  2,  D_POS_B, 64+1125 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7249,  2,  D_POS_B, 64+1125 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7250,  2,  D_POS_B, 32+1125 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7251,  2,  D_POS_B, 64+1126 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7252,  2,  D_POS_B, 64+1126 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7253,  2,  D_POS_B, 64+1126 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7254,  2,  D_POS_B, 64+1126 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7255,  2,  D_POS_B, 64+1126 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7256,  2,  D_POS_B, 64+1126 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7257,  2,  D_POS_B, 64+1126 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7258,  2,  D_POS_B, 64+1126 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7259,  2,  D_POS_B, 64+1126 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7260,  2,  D_POS_B, 32+1126 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7261,  2,  D_POS_B, 64+1127 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7262,  2,  D_POS_B, 64+1127 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7263,  2,  D_POS_B, 64+1127 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7264,  2,  D_POS_B, 64+1127 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7265,  2,  D_POS_B, 64+1127 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7266,  2,  D_POS_B, 64+1127 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7267,  2,  D_POS_B, 64+1127 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7268,  2,  D_POS_B, 64+1127 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7269,  2,  D_POS_B, 64+1127 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7270,  2,  D_POS_B, 32+1127 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7271,  2,  D_POS_B, 64+1128 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7272,  2,  D_POS_B, 64+1128 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7273,  2,  D_POS_B, 64+1128 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7274,  2,  D_POS_B, 64+1128 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7275,  2,  D_POS_B, 64+1128 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7276,  2,  D_POS_B, 64+1128 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7277,  2,  D_POS_B, 64+1128 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7278,  2,  D_POS_B, 64+1128 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7279,  2,  D_POS_B, 64+1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7280,  2,  D_POS_B, 32+1128 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },

    {0x7110,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x7320,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x7130,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x7340,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x7150,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    {0x7360,  2,  D_POS_A,  1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },

    //DOOR_M1
    {0x7201,  2,  D_POS_C, 128+1121 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7202,  2,  D_POS_C, 128+1121 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7203,  2,  D_POS_C, 128+1121 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7204,  2,  D_POS_C, 128+1121 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7205,  2,  D_POS_C, 128+1121 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7206,  2,  D_POS_C, 128+1121 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7207,  2,  D_POS_C, 128+1121 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7208,  2,  D_POS_C, 128+1121 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7209,  2,  D_POS_C, 128+1121 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7210,  2,  D_POS_C, 128+1121 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7211,  2,  D_POS_C, 128+1122 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7212,  2,  D_POS_C, 128+1122 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7213,  2,  D_POS_C, 128+1122 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7214,  2,  D_POS_C, 128+1122 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7215,  2,  D_POS_C, 128+1122 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7216,  2,  D_POS_C, 128+1122 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7217,  2,  D_POS_C, 128+1122 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7218,  2,  D_POS_C, 128+1122 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7219,  2,  D_POS_C, 128+1122 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7220,  2,  D_POS_C, 128+1122 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7221,  2,  D_POS_C, 128+1123 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7222,  2,  D_POS_C, 128+1123 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7223,  2,  D_POS_C, 128+1123 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7224,  2,  D_POS_C, 128+1123 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7225,  2,  D_POS_C, 128+1123 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7226,  2,  D_POS_C, 128+1123 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7227,  2,  D_POS_C, 128+1123 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7228,  2,  D_POS_C, 128+1123 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7229,  2,  D_POS_C, 128+1123 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7230,  2,  D_POS_C, 128+1123 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7231,  2,  D_POS_C, 128+1124 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7232,  2,  D_POS_C, 128+1124 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7233,  2,  D_POS_C, 128+1124 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7234,  2,  D_POS_C, 128+1124 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7235,  2,  D_POS_C, 128+1124 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7236,  2,  D_POS_C, 128+1124 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7237,  2,  D_POS_C, 128+1124 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7238,  2,  D_POS_C, 128+1124 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7239,  2,  D_POS_C, 128+1124 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7240,  2,  D_POS_C, 128+1124 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7241,  2,  D_POS_C, 128+1125 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7242,  2,  D_POS_C, 128+1125 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7243,  2,  D_POS_C, 128+1125 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7244,  2,  D_POS_C, 128+1125 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7245,  2,  D_POS_C, 128+1125 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7246,  2,  D_POS_C, 128+1125 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7247,  2,  D_POS_C, 128+1125 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7248,  2,  D_POS_C, 128+1125 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7249,  2,  D_POS_C, 128+1125 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7250,  2,  D_POS_C, 128+1125 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7251,  2,  D_POS_C, 128+1126 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7252,  2,  D_POS_C, 128+1126 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7253,  2,  D_POS_C, 128+1126 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7254,  2,  D_POS_C, 128+1126 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7255,  2,  D_POS_C, 128+1126 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7256,  2,  D_POS_C, 128+1126 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7257,  2,  D_POS_C, 128+1126 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7258,  2,  D_POS_C, 128+1126 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7259,  2,  D_POS_C, 128+1126 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7260,  2,  D_POS_C, 128+1126 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7261,  2,  D_POS_C, 128+1127 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7262,  2,  D_POS_C, 128+1127 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7263,  2,  D_POS_C, 128+1127 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7264,  2,  D_POS_C, 128+1127 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7265,  2,  D_POS_C, 128+1127 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7266,  2,  D_POS_C, 128+1127 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7267,  2,  D_POS_C, 128+1127 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7268,  2,  D_POS_C, 128+1127 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7269,  2,  D_POS_C, 128+1127 ,   bit15,  false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7270,  2,  D_POS_C, 128+1127 ,   bit11,  false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7271,  2,  D_POS_C, 128+1128 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7272,  2,  D_POS_C, 128+1128 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7273,  2,  D_POS_C, 128+1128 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7274,  2,  D_POS_C, 128+1128 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7275,  2,  D_POS_C, 128+1128 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7276,  2,  D_POS_C, 128+1128 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7277,  2,  D_POS_C, 128+1128 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7278,  2,  D_POS_C, 128+1128 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7279,  2,  D_POS_C, 128+1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7280,  2,  D_POS_C, 128+1128 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },

    //DOOR_M2
    {0x7201,  2,  D_POS_D, 192+1121 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7202,  2,  D_POS_D, 192+1121 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7203,  2,  D_POS_D, 192+1121 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7204,  2,  D_POS_D, 192+1121 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7205,  2,  D_POS_D, 192+1121 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7206,  2,  D_POS_D, 192+1121 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7207,  2,  D_POS_D, 192+1121 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7208,  2,  D_POS_D, 192+1121 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7209,  2,  D_POS_D, 192+1121 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7210,  2,  D_POS_D, 192+1121 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7211,  2,  D_POS_D, 192+1122 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7212,  2,  D_POS_D, 192+1122 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7213,  2,  D_POS_D, 192+1122 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7214,  2,  D_POS_D, 192+1122 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7215,  2,  D_POS_D, 192+1122 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7216,  2,  D_POS_D, 192+1122 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7217,  2,  D_POS_D, 192+1122 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7218,  2,  D_POS_D, 192+1122 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7219,  2,  D_POS_D, 192+1122 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7220,  2,  D_POS_D, 192+1122 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7221,  2,  D_POS_D, 192+1123 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7222,  2,  D_POS_D, 192+1123 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7223,  2,  D_POS_D, 192+1123 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7224,  2,  D_POS_D, 192+1123 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7225,  2,  D_POS_D, 192+1123 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7226,  2,  D_POS_D, 192+1123 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7227,  2,  D_POS_D, 192+1123 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7228,  2,  D_POS_D, 192+1123 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7229,  2,  D_POS_D, 192+1123 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7230,  2,  D_POS_D, 192+1123 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7231,  2,  D_POS_D, 192+1124 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7232,  2,  D_POS_D, 192+1124 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7233,  2,  D_POS_D, 192+1124 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7234,  2,  D_POS_D, 192+1124 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7235,  2,  D_POS_D, 192+1124 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7236,  2,  D_POS_D, 192+1124 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7237,  2,  D_POS_D, 192+1124 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7238,  2,  D_POS_D, 192+1124 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7239,  2,  D_POS_D, 192+1124 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7240,  2,  D_POS_D, 192+1124 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7241,  2,  D_POS_D, 192+1125 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7242,  2,  D_POS_D, 192+1125 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7243,  2,  D_POS_D, 192+1125 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7244,  2,  D_POS_D, 192+1125 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7245,  2,  D_POS_D, 192+1125 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7246,  2,  D_POS_D, 192+1125 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7247,  2,  D_POS_D, 192+1125 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7248,  2,  D_POS_D, 192+1125 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7249,  2,  D_POS_D, 192+1125 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7250,  2,  D_POS_D, 192+1125 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7251,  2,  D_POS_D, 192+1126 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7252,  2,  D_POS_D, 192+1126 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7253,  2,  D_POS_D, 192+1126 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7254,  2,  D_POS_D, 192+1126 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7255,  2,  D_POS_D, 192+1126 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7256,  2,  D_POS_D, 192+1126 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7257,  2,  D_POS_D, 192+1126 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7258,  2,  D_POS_D, 192+1126 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7259,  2,  D_POS_D, 192+1126 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7260,  2,  D_POS_D, 192+1126 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7261,  2,  D_POS_D, 192+1127 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7262,  2,  D_POS_D, 192+1127 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7263,  2,  D_POS_D, 192+1127 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7264,  2,  D_POS_D, 192+1127 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7265,  2,  D_POS_D, 192+1127 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7266,  2,  D_POS_D, 192+1127 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7267,  2,  D_POS_D, 192+1127 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7268,  2,  D_POS_D, 192+1127 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7269,  2,  D_POS_D, 192+1127 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7270,  2,  D_POS_D, 192+1127 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7271,  2,  D_POS_D, 192+1128 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7272,  2,  D_POS_D, 192+1128 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7273,  2,  D_POS_D, 192+1128 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7274,  2,  D_POS_D, 192+1128 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7275,  2,  D_POS_D, 192+1128 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7276,  2,  D_POS_D, 192+1128 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7277,  2,  D_POS_D, 192+1128 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7278,  2,  D_POS_D, 192+1128 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7279,  2,  D_POS_D, 192+1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7280,  2,  D_POS_D, 192+1128 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },

    //DOOR_MP2
    {0x7201,  2,  D_POS_E, 256+1121 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7202,  2,  D_POS_E, 256+1121 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7203,  2,  D_POS_E, 256+1121 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7204,  2,  D_POS_E, 256+1121 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7205,  2,  D_POS_E, 256+1121 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7206,  2,  D_POS_E, 256+1121 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7207,  2,  D_POS_E, 256+1121 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7208,  2,  D_POS_E, 256+1121 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7209,  2,  D_POS_E, 256+1121 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7210,  2,  D_POS_E, 256+1121 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7211,  2,  D_POS_E, 256+1122 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7212,  2,  D_POS_E, 256+1122 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7213,  2,  D_POS_E, 256+1122 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7214,  2,  D_POS_E, 256+1122 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7215,  2,  D_POS_E, 256+1122 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7216,  2,  D_POS_E, 256+1122 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7217,  2,  D_POS_E, 256+1122 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7218,  2,  D_POS_E, 256+1122 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7219,  2,  D_POS_E, 256+1122 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7220,  2,  D_POS_E, 256+1122 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7221,  2,  D_POS_E, 256+1123 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7222,  2,  D_POS_E, 256+1123 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7223,  2,  D_POS_E, 256+1123 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7224,  2,  D_POS_E, 256+1123 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7225,  2,  D_POS_E, 256+1123 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7226,  2,  D_POS_E, 256+1123 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7227,  2,  D_POS_E, 256+1123 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7228,  2,  D_POS_E, 256+1123 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7229,  2,  D_POS_E, 256+1123 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7230,  2,  D_POS_E, 256+1123 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7231,  2,  D_POS_E, 256+1124 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7232,  2,  D_POS_E, 256+1124 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7233,  2,  D_POS_E, 256+1124 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7234,  2,  D_POS_E, 256+1124 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7235,  2,  D_POS_E, 256+1124 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7236,  2,  D_POS_E, 256+1124 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7237,  2,  D_POS_E, 256+1124 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7238,  2,  D_POS_E, 256+1124 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7239,  2,  D_POS_E, 256+1124 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7240,  2,  D_POS_E, 256+1124 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7241,  2,  D_POS_E, 256+1125 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7242,  2,  D_POS_E, 256+1125 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7243,  2,  D_POS_E, 256+1125 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7244,  2,  D_POS_E, 256+1125 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7245,  2,  D_POS_E, 256+1125 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7246,  2,  D_POS_E, 256+1125 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7247,  2,  D_POS_E, 256+1125 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7248,  2,  D_POS_E, 256+1125 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7249,  2,  D_POS_E, 256+1125 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7250,  2,  D_POS_E, 256+1125 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7251,  2,  D_POS_E, 256+1126 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7252,  2,  D_POS_E, 256+1126 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7253,  2,  D_POS_E, 256+1126 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7254,  2,  D_POS_E, 256+1126 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7255,  2,  D_POS_E, 256+1126 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7256,  2,  D_POS_E, 256+1126 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7257,  2,  D_POS_E, 256+1126 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7258,  2,  D_POS_E, 256+1126 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7259,  2,  D_POS_E, 256+1126 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7260,  2,  D_POS_E, 256+1126 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7261,  2,  D_POS_E, 256+1127 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7262,  2,  D_POS_E, 256+1127 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7263,  2,  D_POS_E, 256+1127 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7264,  2,  D_POS_E, 256+1127 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7265,  2,  D_POS_E, 256+1127 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7266,  2,  D_POS_E, 256+1127 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7267,  2,  D_POS_E, 256+1127 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7268,  2,  D_POS_E, 256+1127 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7269,  2,  D_POS_E, 256+1127 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7270,  2,  D_POS_E, 256+1127 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7271,  2,  D_POS_E, 256+1128 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7272,  2,  D_POS_E, 256+1128 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7273,  2,  D_POS_E, 256+1128 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7274,  2,  D_POS_E, 256+1128 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7275,  2,  D_POS_E, 256+1128 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7276,  2,  D_POS_E, 256+1128 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7277,  2,  D_POS_E, 256+1128 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7278,  2,  D_POS_E, 256+1128 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7279,  2,  D_POS_E, 256+1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7280,  2,  D_POS_E, 256+1128 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },

    //DOOR_TC2
    {0x7201,  2,  D_POS_F, 320+1121 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7202,  2,  D_POS_F, 320+1121 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7203,  2,  D_POS_F, 320+1121 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7204,  2,  D_POS_F, 320+1121 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7205,  2,  D_POS_F, 320+1121 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7206,  2,  D_POS_F, 320+1121 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7207,  2,  D_POS_F, 320+1121 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7208,  2,  D_POS_F, 320+1121 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7209,  2,  D_POS_F, 320+1121 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7210,  2,  D_POS_F, 320+1121 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7211,  2,  D_POS_F, 320+1122 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7212,  2,  D_POS_F, 320+1122 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7213,  2,  D_POS_F, 320+1122 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7214,  2,  D_POS_F, 320+1122 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7215,  2,  D_POS_F, 320+1122 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7216,  2,  D_POS_F, 320+1122 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7217,  2,  D_POS_F, 320+1122 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7218,  2,  D_POS_F, 320+1122 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7219,  2,  D_POS_F, 320+1122 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7220,  2,  D_POS_F, 320+1122 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7221,  2,  D_POS_F, 320+1123 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7222,  2,  D_POS_F, 320+1123 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7223,  2,  D_POS_F, 320+1123 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7224,  2,  D_POS_F, 320+1123 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7225,  2,  D_POS_F, 320+1123 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7226,  2,  D_POS_F, 320+1123 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7227,  2,  D_POS_F, 320+1123 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7228,  2,  D_POS_F, 320+1123 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7229,  2,  D_POS_F, 320+1123 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7230,  2,  D_POS_F, 320+1123 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7231,  2,  D_POS_F, 320+1124 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7232,  2,  D_POS_F, 320+1124 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7233,  2,  D_POS_F, 320+1124 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7234,  2,  D_POS_F, 320+1124 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7235,  2,  D_POS_F, 320+1124 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7236,  2,  D_POS_F, 320+1124 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7237,  2,  D_POS_F, 320+1124 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7238,  2,  D_POS_F, 320+1124 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7239,  2,  D_POS_F, 320+1124 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7240,  2,  D_POS_F, 320+1124 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7241,  2,  D_POS_F, 320+1125 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7242,  2,  D_POS_F, 320+1125 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7243,  2,  D_POS_F, 320+1125 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7244,  2,  D_POS_F, 320+1125 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7245,  2,  D_POS_F, 320+1125 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7246,  2,  D_POS_F, 320+1125 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7247,  2,  D_POS_F, 320+1125 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7248,  2,  D_POS_F, 320+1125 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7249,  2,  D_POS_F, 320+1125 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7250,  2,  D_POS_F, 320+1125 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7251,  2,  D_POS_F, 320+1126 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7252,  2,  D_POS_F, 320+1126 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7253,  2,  D_POS_F, 320+1126 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7254,  2,  D_POS_F, 320+1126 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7255,  2,  D_POS_F, 320+1126 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7256,  2,  D_POS_F, 320+1126 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7257,  2,  D_POS_F, 320+1126 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7258,  2,  D_POS_F, 320+1126 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7259,  2,  D_POS_F, 320+1126 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7260,  2,  D_POS_F, 320+1126 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7261,  2,  D_POS_F, 320+1127 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7262,  2,  D_POS_F, 320+1127 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7263,  2,  D_POS_F, 320+1127 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7264,  2,  D_POS_F, 320+1127 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7265,  2,  D_POS_F, 320+1127 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7266,  2,  D_POS_F, 320+1127 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7267,  2,  D_POS_F, 320+1127 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7268,  2,  D_POS_F, 320+1127 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7269,  2,  D_POS_F, 320+1127 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7270,  2,  D_POS_F, 320+1127 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7271,  2,  D_POS_F, 320+1128 ,   bit7,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7272,  2,  D_POS_F, 320+1128 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7273,  2,  D_POS_F, 320+1128 ,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7274,  2,  D_POS_F, 320+1128 ,   bit4,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7275,  2,  D_POS_F, 320+1128 ,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7276,  2,  D_POS_F, 320+1128 ,   bit2,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7277,  2,  D_POS_F, 320+1128 ,   bit1,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7278,  2,  D_POS_F, 320+1128 ,   bit0,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    {0x7279,  2,  D_POS_F, 320+1128 ,   bit15,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },
    //{0x7280,  2,  D_POS_F, 320+1128 ,   bit11,   false,  false, true,  E_FAULTS_CATEGORY_DCU    },

    //**********************逃生门************************
    {0x7380,  3,   D_POS_F,  202 ,   bit6,   false,  false, true,  E_FAULTS_CATEGORY_DCU   },
    //*************************************************


    //HVAC_TC1
    {0x8201,  2,  D_POS_A,  1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8202,  2,  D_POS_A,  1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8203,  2,  D_POS_A,  1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8204,  2,  D_POS_A,  1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8205,  2,  D_POS_A,  1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8206,  2,  D_POS_A,  1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8207,  2,  D_POS_A,  1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8208,  2,  D_POS_A,  1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8209,  2,  D_POS_A,  1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8210,  2,  D_POS_A,  1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8211,  2,  D_POS_A,  1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8212,  2,  D_POS_A,  1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8213,  2,  D_POS_A,  1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8214,  2,  D_POS_A,  1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8215,  2,  D_POS_A,  1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8216,  2,  D_POS_A,  1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8217,  2,  D_POS_A,  1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8218,  2,  D_POS_A,  1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8219,  2,  D_POS_A,  1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8220,  2,  D_POS_A,  1495,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8221,  2,  D_POS_A,  1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8222,  2,  D_POS_A,  1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

    //HVAC_MP1
    {0x8201,  2,  D_POS_B, 16+1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8202,  2,  D_POS_B, 16+1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8203,  2,  D_POS_B, 16+1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8204,  2,  D_POS_B, 16+1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8205,  2,  D_POS_B, 16+1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8206,  2,  D_POS_B, 16+1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8207,  2,  D_POS_B, 16+1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8208,  2,  D_POS_B, 16+1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8209,  2,  D_POS_B, 16+1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8210,  2,  D_POS_B, 16+1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8211,  2,  D_POS_B, 16+1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8212,  2,  D_POS_B, 16+1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8213,  2,  D_POS_B, 16+1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8214,  2,  D_POS_B, 16+1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8215,  2,  D_POS_B, 16+1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8216,  2,  D_POS_B, 16+1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8217,  2,  D_POS_B, 16+1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8218,  2,  D_POS_B, 16+1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8219,  2,  D_POS_B, 16+1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8220,  2,  D_POS_B, 16+1495,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8221,  2,  D_POS_B, 16+1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8222,  2,  D_POS_B, 16+1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

    //HVAC_M1
    {0x8201,  2,  D_POS_C, 32+1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8202,  2,  D_POS_C, 32+1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8203,  2,  D_POS_C, 32+1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8204,  2,  D_POS_C, 32+1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8205,  2,  D_POS_C, 32+1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8206,  2,  D_POS_C, 32+1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8207,  2,  D_POS_C, 32+1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8208,  2,  D_POS_C, 32+1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8209,  2,  D_POS_C, 32+1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8210,  2,  D_POS_C, 32+1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8211,  2,  D_POS_C, 32+1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8212,  2,  D_POS_C, 32+1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8213,  2,  D_POS_C, 32+1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8214,  2,  D_POS_C, 32+1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8215,  2,  D_POS_C, 32+1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8216,  2,  D_POS_C, 32+1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8217,  2,  D_POS_C, 32+1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8218,  2,  D_POS_C, 32+1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8219,  2,  D_POS_C, 32+1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8220,  2,  D_POS_C, 32+1495,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8221,  2,  D_POS_C, 32+1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8222,  2,  D_POS_C, 32+1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

    //HVAC_M2
    {0x8201,  2,  D_POS_D, 48+1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8202,  2,  D_POS_D, 48+1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8203,  2,  D_POS_D, 48+1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8204,  2,  D_POS_D, 48+1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8205,  2,  D_POS_D, 48+1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8206,  2,  D_POS_D, 48+1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8207,  2,  D_POS_D, 48+1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8208,  2,  D_POS_D, 48+1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8209,  2,  D_POS_D, 48+1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8210,  2,  D_POS_D, 48+1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8211,  2,  D_POS_D, 48+1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8212,  2,  D_POS_D, 48+1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8213,  2,  D_POS_D, 48+1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8214,  2,  D_POS_D, 48+1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8215,  2,  D_POS_D, 48+1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8216,  2,  D_POS_D, 48+1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8217,  2,  D_POS_D, 48+1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8218,  2,  D_POS_D, 48+1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8219,  2,  D_POS_D, 48+1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8220,  2,  D_POS_D, 48+1495,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8221,  2,  D_POS_D, 48+1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8222,  2,  D_POS_D, 48+1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

    //HVAC_MP2
    {0x8201,  2,  D_POS_E, 64+1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8202,  2,  D_POS_E, 64+1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8203,  2,  D_POS_E, 64+1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8204,  2,  D_POS_E, 64+1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8205,  2,  D_POS_E, 64+1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8206,  2,  D_POS_E, 64+1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8207,  2,  D_POS_E, 64+1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8208,  2,  D_POS_E, 64+1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8209,  2,  D_POS_E, 64+1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8210,  2,  D_POS_E, 64+1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8211,  2,  D_POS_E, 64+1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8212,  2,  D_POS_E, 64+1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8213,  2,  D_POS_E, 64+1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8214,  2,  D_POS_E, 64+1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8215,  2,  D_POS_E, 64+1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8216,  2,  D_POS_E, 64+1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8217,  2,  D_POS_E, 64+1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8218,  2,  D_POS_E, 64+1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8219,  2,  D_POS_E, 64+1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8220,  2,  D_POS_E, 64+1495,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8221,  2,  D_POS_E, 64+1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8222,  2,  D_POS_E, 64+1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

    //HVAC_TC2
    {0x8201,  2, D_POS_F,  80+1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8202,  2, D_POS_F,  80+1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8203,  2, D_POS_F,  80+1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8204,  2, D_POS_F,  80+1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8205,  2, D_POS_F,  80+1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8206,  2, D_POS_F,  80+1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8207,  2, D_POS_F,  80+1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8208,  2, D_POS_F,  80+1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8209,  2, D_POS_F,  80+1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8210,  2, D_POS_F,  80+1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8211,  2, D_POS_F,  80+1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8212,  2, D_POS_F,  80+1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8213,  2, D_POS_F,  80+1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8214,  2, D_POS_F,  80+1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8215,  2, D_POS_F,  80+1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8216,  2, D_POS_F,  80+1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8217,  2, D_POS_F,  80+1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8218,  2, D_POS_F,  80+1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8219,  2, D_POS_F,  80+1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8220,  2, D_POS_F,  80+1495,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8221,  2, D_POS_F,  80+1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },
    {0x8222,  2, D_POS_F,  80+1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC    },

    //PIS
      {0x9201,  2,  D_POS_A, 1664,   bit4,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9202,  2,  D_POS_A, 1664,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9203,  2,  D_POS_A, 1664,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9204,  2,  D_POS_A, 1664,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9205,  2,  D_POS_A, 1664,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9206,  2,  D_POS_A, 1664,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9207,  2,  D_POS_A, 1664,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9208,  2,  D_POS_A, 1664,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9209,  2,  D_POS_A, 1664,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9210,  2,  D_POS_A, 1664,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9211,  2,  D_POS_A, 1664,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9212,  2,  D_POS_A, 1664,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9213,  2,  D_POS_A, 1664,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9214,  2,  D_POS_A, 1668,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9215,  2,  D_POS_A, 1668,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9216,  2,  D_POS_A, 1668,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
      {0x9217,  2,  D_POS_A, 1664,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9201,  2,  D_POS_B, 1664,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_B, 1664,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9205,  2,  D_POS_B, 1665,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9206,  2,  D_POS_B, 1665,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9207,  2,  D_POS_B, 1665,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9208,  2,  D_POS_B, 1665,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9209,  2,  D_POS_B, 1665,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9210,  2,  D_POS_B, 1665,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9211,  2,  D_POS_B, 1665,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9212,  2,  D_POS_B, 1665,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9213,  2,  D_POS_B, 1665,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9214,  2,  D_POS_B, 1668,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9215,  2,  D_POS_B, 1668,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9201,  2,  D_POS_C, 1665,   bit14,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_C, 1665,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9205,  2,  D_POS_C, 1665,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9206,  2,  D_POS_C, 1665,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9207,  2,  D_POS_C, 1665,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9208,  2,  D_POS_C, 1665,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9209,  2,  D_POS_C, 1665,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9210,  2,  D_POS_C, 1666,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9211,  2,  D_POS_C, 1666,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9212,  2,  D_POS_C, 1666,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9213,  2,  D_POS_C, 1666,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9214,  2,  D_POS_C, 1668,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9215,  2,  D_POS_C, 1668,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },

    {0x9201,  2,  D_POS_D, 1666,   bit3,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_D, 1666,   bit2,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9205,  2,  D_POS_D, 1666,   bit1,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9206,  2,  D_POS_D, 1666,   bit0,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9207,  2,  D_POS_D, 1666,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9208,  2,  D_POS_D, 1666,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9209,  2,  D_POS_D, 1666,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9210,  2,  D_POS_D, 1666,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9211,  2,  D_POS_D, 1666,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9212,  2,  D_POS_D, 1666,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9213,  2,  D_POS_D, 1666,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9214,  2,  D_POS_D, 1668,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9215,  2,  D_POS_D, 1669,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },


    {0x9201,  2,  D_POS_E, 1666,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_E, 1667,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9205,  2,  D_POS_E, 1667,   bit6,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9206,  2,  D_POS_E, 1667,   bit5,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9207,  2,  D_POS_E, 1667,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9208,  2,  D_POS_E, 1667,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9209,  2,  D_POS_E, 1667,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9210,  2,  D_POS_E, 1667,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9211,  2,  D_POS_E, 1667,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9212,  2,  D_POS_E, 1667,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9213,  2,  D_POS_E, 1667,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9214,  2,  D_POS_E, 1669,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9215,  2,  D_POS_E, 1669,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },


    {0x9201,  2,  D_POS_F, 1667,   bit10,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9202,  2,  D_POS_F, 1667,   bit12,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9203,  2,  D_POS_F, 1667,   bit11,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9204,  2,  D_POS_F, 1667,   bit9,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9205,  2,  D_POS_F, 1667,   bit8,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9206,  2,  D_POS_F, 1668,   bit7,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9207,  2,  D_POS_F, 1668,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9208,  2,  D_POS_F, 1668,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9209,  2,  D_POS_F, 1668,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9210,  2,  D_POS_F, 1668,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9211,  2,  D_POS_F, 1668,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9212,  2,  D_POS_F, 1668,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9213,  2,  D_POS_F, 1668,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9214,  2,  D_POS_F, 1669,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9215,  2,  D_POS_F, 1669,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9216,  2,  D_POS_F, 1669,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PIS    },
    {0x9217,  2,  D_POS_F, 1667,   bit13,  false,  false, false,  E_FAULTS_CATEGORY_PIS    },



    {0xA301,  3,  D_POS_A, 1586,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA202,  2,  D_POS_A, 1587,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA203,  2,  D_POS_A, 1587,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA204,  2,  D_POS_A, 1587,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA205,  2,  D_POS_A, 1587,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },

    {0xA301,  3,  D_POS_F, 1618,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA202,  2,  D_POS_F, 1619,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA203,  2,  D_POS_F, 1619,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA204,  2,  D_POS_F, 1619,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },
    {0xA205,  2,  D_POS_F, 1619,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ATC    },


    {0xB201,  2,  D_POS_A, 1712,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB202,  2,  D_POS_A, 1714,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB203,  2,  D_POS_A, 1714,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB204,  2,  D_POS_A, 1714,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB205,  2,  D_POS_A, 1714,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB206,  2,  D_POS_A, 1714,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB207,  2,  D_POS_A, 1714,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB208,  2,  D_POS_A, 1714,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB209,  2,  D_POS_A, 1714,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB210,  2,  D_POS_A, 1714,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB211,  2,  D_POS_A, 1714,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB212,  2,  D_POS_A, 1715,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB213,  2,  D_POS_A, 1715,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB214,  2,  D_POS_A, 1715,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB215,  2,  D_POS_A, 1715,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB216,  2,  D_POS_A, 1715,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB217,  2,  D_POS_A, 1715,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB218,  2,  D_POS_A, 1715,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB219,  2,  D_POS_A, 1715,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB220,  2,  D_POS_A, 1715,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB221,  2,  D_POS_A, 1715,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB222,  2,  D_POS_A, 1716,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB223,  2,  D_POS_A, 1716,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB224,  2,  D_POS_A, 1716,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB225,  2,  D_POS_A, 1716,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB226,  2,  D_POS_A, 1716,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB227,  2,  D_POS_A, 1716,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB228,  2,  D_POS_A, 1716,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB229,  2,  D_POS_A, 1716,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB230,  2,  D_POS_A, 1716,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB231,  2,  D_POS_A, 1716,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },

    {0xB202,  2,  D_POS_B, 1717,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB203,  2,  D_POS_B, 1717,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB204,  2,  D_POS_B, 1717,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB205,  2,  D_POS_B, 1717,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB206,  2,  D_POS_B, 1717,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB207,  2,  D_POS_B, 1717,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB208,  2,  D_POS_B, 1717,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB209,  2,  D_POS_B, 1717,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB210,  2,  D_POS_B, 1717,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB211,  2,  D_POS_B, 1717,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB212,  2,  D_POS_B, 1718,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB213,  2,  D_POS_B, 1718,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB214,  2,  D_POS_B, 1718,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB215,  2,  D_POS_B, 1718,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB216,  2,  D_POS_B, 1718,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB217,  2,  D_POS_B, 1718,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB218,  2,  D_POS_B, 1718,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB219,  2,  D_POS_B, 1718,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB220,  2,  D_POS_B, 1718,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB221,  2,  D_POS_B, 1718,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },

    {0xB202,  2,  D_POS_C, 1719,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB203,  2,  D_POS_C, 1719,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB204,  2,  D_POS_C, 1719,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB205,  2,  D_POS_C, 1719,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB206,  2,  D_POS_C, 1719,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB207,  2,  D_POS_C, 1719,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB208,  2,  D_POS_C, 1719,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB209,  2,  D_POS_C, 1719,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB210,  2,  D_POS_C, 1719,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB211,  2,  D_POS_C, 1719,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB212,  2,  D_POS_C, 1720,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB213,  2,  D_POS_C, 1720,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB214,  2,  D_POS_C, 1720,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB215,  2,  D_POS_C, 1720,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB216,  2,  D_POS_C, 1720,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB217,  2,  D_POS_C, 1720,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB218,  2,  D_POS_C, 1720,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB219,  2,  D_POS_C, 1720,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB220,  2,  D_POS_C, 1720,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB221,  2,  D_POS_C, 1720,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },

    {0xB202,  2,  D_POS_D, 1721,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB203,  2,  D_POS_D, 1721,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB204,  2,  D_POS_D, 1721,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB205,  2,  D_POS_D, 1721,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB206,  2,  D_POS_D, 1721,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB207,  2,  D_POS_D, 1721,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB208,  2,  D_POS_D, 1721,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB209,  2,  D_POS_D, 1721,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB210,  2,  D_POS_D, 1721,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB211,  2,  D_POS_D, 1721,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB212,  2,  D_POS_D, 1722,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB213,  2,  D_POS_D, 1722,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB214,  2,  D_POS_D, 1722,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB215,  2,  D_POS_D, 1722,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB216,  2,  D_POS_D, 1722,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB217,  2,  D_POS_D, 1722,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB218,  2,  D_POS_D, 1722,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB219,  2,  D_POS_D, 1722,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB220,  2,  D_POS_D, 1722,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB221,  2,  D_POS_D, 1722,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },

    {0xB202,  2,  D_POS_E, 1723,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB203,  2,  D_POS_E, 1723,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB204,  2,  D_POS_E, 1723,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB205,  2,  D_POS_E, 1723,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB206,  2,  D_POS_E, 1723,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB207,  2,  D_POS_E, 1723,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB208,  2,  D_POS_E, 1723,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB209,  2,  D_POS_E, 1723,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB210,  2,  D_POS_E, 1723,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB211,  2,  D_POS_E, 1723,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB212,  2,  D_POS_E, 1724,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB213,  2,  D_POS_E, 1724,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB214,  2,  D_POS_E, 1724,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB215,  2,  D_POS_E, 1724,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB216,  2,  D_POS_E, 1724,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB217,  2,  D_POS_E, 1724,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB218,  2,  D_POS_E, 1724,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB219,  2,  D_POS_E, 1724,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB220,  2,  D_POS_E, 1724,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB221,  2,  D_POS_E, 1724,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },


    {0xB202,  2,  D_POS_F, 1725,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB203,  2,  D_POS_F, 1725,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB204,  2,  D_POS_F, 1725,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_FAS    },
    {0xB205,  2,  D_POS_F, 1725,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB206,  2,  D_POS_F, 1725,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB207,  2,  D_POS_F, 1725,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB208,  2,  D_POS_F, 1725,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB209,  2,  D_POS_F, 1725,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB210,  2,  D_POS_F, 1725,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB211,  2,  D_POS_F, 1725,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB212,  2,  D_POS_F, 1726,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB213,  2,  D_POS_F, 1726,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB214,  2,  D_POS_F, 1726,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB215,  2,  D_POS_F, 1726,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB216,  2,  D_POS_F, 1726,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB217,  2,  D_POS_F, 1726,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB218,  2,  D_POS_F, 1726,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB219,  2,  D_POS_F, 1726,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB220,  2,  D_POS_F, 1726,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB221,  2,  D_POS_F, 1726,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB222,  2,  D_POS_F, 1727,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB223,  2,  D_POS_F, 1727,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB224,  2,  D_POS_F, 1727,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB225,  2,  D_POS_F, 1727,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB226,  2,  D_POS_F, 1727,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB227,  2,  D_POS_F, 1727,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB228,  2,  D_POS_F, 1727,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB229,  2,  D_POS_F, 1727,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB230,  2,  D_POS_F, 1727,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },
    {0xB231,  2,  D_POS_F, 1727,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_FAS    },


};

int g_faultsRomLen = sizeof(g_faultsrom)/sizeof(FAULTS_ROM_DATA);


bool FaultsVerdict(FAULTS_ROM_DATA *pdata)
{

    if ((pdata->code >= 0x1101) && (pdata->code <= 0x1245))
    {
             if (0x1101 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_485_comm_err_flg1)
                || ((D_POS_F == pdata->pos) && g_485_comm_err_flg2))
            {
                return true;
            }
        }
        else if (0x1102 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_riom1_gw123_comm_err_flg)
            {
                return true;
            }
        }
        else if (0x1103 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_riom6_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1104 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_riom2_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1105 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_riom5_gw123_comm_err_flg)
            {
                return true;
            }
        }
        else if (0x1106 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_riom3_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1107 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_riom4_gw123_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1108 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_ccu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1109 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_ccu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1110 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_tcu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1111 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_tcu4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1112 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_tcu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1113 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_tcu3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1114 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_bcu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1115 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_bcu4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1116 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_bcu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1117 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_bcu3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1118 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_acu1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1119 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_acu2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1120 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_atc1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1121 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_atc2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1122 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_erm1_comm_err_flg         )

            {
                return true;
            }
        }
        else if (0x1123 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_erm1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1124 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_pis1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1125 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_pis2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1126 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_fas1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1127 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_fas2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1128 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_door1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1129 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_door2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1130 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_door3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1131 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_door4_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1132 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_door5_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1133 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_door6_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1134 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_door7_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1135 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_door8_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1136 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_door9_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1137 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_door10_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1138 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_door11_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1139 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_door12_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1140 == pdata->code)
        {
            if (  (D_POS_A == pdata->pos) &&  g_hvac1_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1141 == pdata->code)
        {
            if (  (D_POS_F == pdata->pos) &&  g_hvac6_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1142 == pdata->code)
        {
            if (  (D_POS_B == pdata->pos) &&  g_hvac2_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1143 == pdata->code)
        {
            if (  (D_POS_E == pdata->pos) &&  g_hvac5_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1144 == pdata->code)
        {
            if (  (D_POS_C == pdata->pos) &&  g_hvac3_comm_err_flg         )
            {
                return true;
            }
        }
        else if (0x1145 == pdata->code)
        {
            if (  (D_POS_D == pdata->pos) &&  g_hvac4_comm_err_flg         )
            {
                return true;
            }
        }

    }

    else if(pdata->code == 0x6170)
   {
     if(( Pantogtaph1InPlace ==1)||( Pantogtaph2InPlace ==1))
        {
            if(RIOM1CT_DIM1DI24_B1)
            {
                return false;
            }
            else
            {
                if(RIOM6CT_DIM1DI24_B1)
            {
                return false;
            }

               else
               {
                   return true;
               }
           }
         }
            else
            {
                return false;
            }
   }

    else if (0 != (g_dataBuffer_Display[pdata->word] & pdata->bit))
    {
        return true;
    }

    return false;
}

void AddNewFaultRecordToHistoryList(ST_HISTORY_FAULT_INFO &newinfo)
{
    if (g_historyFaultsList.curIdx < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx += 1;
    }
    else
    {
        g_historyFaultsList.curIdx = 1;
    }

    CheckIndexRange(g_historyFaultsList.curIdx, __LINE__);

    g_historyFaultsList.list[g_historyFaultsList.curIdx] = newinfo;

    if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.cnt += 1;
    }

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);
}

int GetHistoryFaultsListCount()
{
    return g_historyFaultsList.cnt;
}

ST_HISTORY_FAULT_INFO * GetHistoryFaultInfoAt(int num)
{
    ASSERT(num <= D_HISTORY_FAULT_LIST_MAX_CNT);

    ST_HISTORY_FAULT_INFO *pdata = NULL;

    int i;
    int index = g_historyFaultsList.curIdx;

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);

    if(index < 1)
        index = g_historyFaultsList.cnt;

    for (i = 0; i < num; i++)
    {
        if (1 >= index)
        {
            index = g_historyFaultsList.cnt;
        }
        else
        {
            index -= 1;
        }
    }

    CheckIndexRange(index, __LINE__);

    pdata = &g_historyFaultsList.list[index];

    return pdata;
}

void HistoryFaultsLoad()
{
        QString pathStr = qApp->applicationDirPath() + "/record/";
        QDir dir(pathStr);
        if(!dir.exists())
            dir.mkdir(pathStr);
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::in);
    if (!fs.is_open())
    {
        return ;
    }
    fs.read((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();
}

QString HistoryFaultsOutput()
{
    QString pathStr = qApp->applicationDirPath() + "/record/";
    QDir dir(pathStr);
    if(!dir.exists())
        dir.mkdir(pathStr);
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
    {
        return "";
    }

    fs.write((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();

    return fName;
}

void SearchAndSaveEndDateTime(int idx, QDateTime &datetime)
{
    ST_HISTORY_FAULT_INFO *pdata;
    int i = 0;
    int historyCnt = GetHistoryFaultsListCount();
    int curIndex = g_historyFaultsList.curIdx;

    CheckIndexRange(curIndex, __LINE__);
    CheckIndexRange(historyCnt, __LINE__);

    pdata = &g_historyFaultsList.list[curIndex];

    for (i=0; i<historyCnt; i++)
    {
        if ((idx == pdata->romIdx) && !(pdata->isEnd))
        {
            pdata->isEnd = true;
            pdata->end_datetime.year = datetime.date().year();
            pdata->end_datetime.month = datetime.date().month();
            pdata->end_datetime.day = datetime.date().day();
            pdata->end_datetime.hour = datetime.time().hour();
            pdata->end_datetime.minute = datetime.time().minute();
            pdata->end_datetime.second = datetime.time().second();
            break;
        }
        if (1 >= curIndex)
        {
            curIndex = historyCnt;

            CheckIndexRange(curIndex, __LINE__);

            pdata = &g_historyFaultsList.list[curIndex];
        }
        else
        {
            pdata--;
            curIndex--;
        }
    }
}

int FaultsScanning()
{
    int ret = -1;
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    bool found = false;
    QDateTime datetime = QDateTime::currentDateTime();
    int realtimefaultscount = 0;
    ST_HISTORY_FAULT_INFO newinfo;

    for (i=0; i<g_faultsRomLen; i++)
    {
        if (FaultsVerdict(pdata))
        {
            if (pdata->flg)
            {   // if it's already exist
                // then leave it alone
            }
            else
            {

                //                if (!AntiShakingProcess(i, true))
                //                {
                //                    pdata++;
                //                    continue;
                //                }
                pdata->flg = true;
                pdata->confirm = false;
                // a new fault occurs
                // create a fault record
                newinfo.romIdx = i;
                newinfo.start_datetime.year = datetime.date().year();
                newinfo.start_datetime.month = datetime.date().month();
                newinfo.start_datetime.day = datetime.date().day();
                newinfo.start_datetime.hour = datetime.time().hour();
                newinfo.start_datetime.minute = datetime.time().minute();
                newinfo.start_datetime.second = datetime.time().second();
                newinfo.isEnd = false;

                AddNewFaultRecordToHistoryList(newinfo);

                // if "found" is true, faults history file saving is needed when the scanning is finished!
                found = true;

                //add fault to real time list
                ST_REALTIME_FAULT_INFO realtimeFault;
                realtimeFault.nRomIndex = i;
                realtimeFault.start_datetime = newinfo.start_datetime;
                g_realtimeFaultsList.push_front(realtimeFault);
                //g_realtime_faults_datetime_array[i] = newinfo.start_datetime;

                if(g_bScannFault)
                {
                    //show real time fault page
                    if((pdata->level == 1 || pdata->level == 2)
                        && CGlobal::m_nCurPageIndex != PAGE_INDEX_REALTIMEFAULT)
                    {
                        if(pdata->code != 0x120A && pdata->code != 0x120B)
                        {
                            g_backtoprepage = false;
                            SetFaultType(E_FAULTS_TYPE_REALTIME);
                            CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
                            if (pPage == NULL)   return false;
              //              pPage->ChangePage(PAGE_INDEX_REALTIMEFAULT);
                        }
                    }
                }
            }
            if ((1 == pdata->level) || (2 == pdata->level))
            {
                realtimefaultscount += 1;
                if (-1 == ret)
                {
                    ret = i;
                }
            }
        }
        else
        {
            if (pdata->flg)
            {   // fault disapear
//                if (!AntiShakingProcess(i, false))
//                {
//                    pdata++;
//                    continue;
//                }
                pdata->flg = false;
                pdata->confirm = false;
                // search in the history list and if found, mark it end...
                SearchAndSaveEndDateTime(i, datetime);

                found = true;
                //remove fault from real time list
                for(int ii = 0; ii < g_realtimeFaultsList.size(); ii++)
                {
                    if(g_realtimeFaultsList[ii].nRomIndex == i)
                    {
                        g_realtimeFaultsList.removeAt(ii);
                        break;
                    }
                }
            }
        }
        pdata++;
    }
    if (found)
    {
        HistoryFaultsOutput();
    }
    g_RealTimeFaultsNum = realtimefaultscount;

    return ret;
}

void SetFaultType(E_FAULTS_TYPE type)
{
    g_fault_type = type;
    switch (type)
    {
    case E_FAULTS_TYPE_HISTORY:
        g_subSystemFaultsTitle = QObject::trUtf8("历史故障");
        break;
    case E_FAULTS_TYPE_TODAY:
        g_subSystemFaultsTitle = QObject::trUtf8("今日故障");
        break;
    case E_FAULTS_TYPE_REALTIME:
        g_subSystemFaultsTitle = QObject::trUtf8("实时故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ALL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
//    case E_FAULTS_TYPE_LEVEL3:
//        g_subSystemFaultsTitle = QObject::trUtf8("三级故障");
//        break;
    case E_FAULTS_TYPE_CAB:
        g_subSystemFaultsTitle = QObject::trUtf8("司机室故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_CAB;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ACU:
        g_subSystemFaultsTitle = QObject::trUtf8("辅助系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ACU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_BCU:
        g_subSystemFaultsTitle = QObject::trUtf8("制动装置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_BCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCU:
        g_subSystemFaultsTitle = QObject::trUtf8("牵引系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_HVAC:
        g_subSystemFaultsTitle = QObject::trUtf8("空调设置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_HVAC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ATC:
        g_subSystemFaultsTitle = QObject::trUtf8("ATC故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ATC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_PIS:
        g_subSystemFaultsTitle = QObject::trUtf8("PIS故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_PIS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCMS:
        g_subSystemFaultsTitle = QObject::trUtf8("网络故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCMS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_DOOR:
        g_subSystemFaultsTitle = QObject::trUtf8("门故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_DCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TL:
        g_subSystemFaultsTitle = QObject::trUtf8("TL故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_FAS:
        g_subSystemFaultsTitle = QObject::trUtf8("烟火故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_FAS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_RESERVE:
        g_subSystemFaultsTitle = QObject::trUtf8("保留故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_RSV;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    default:
        ASSERT(false);
        break;
    }
}

QString GetCategoryStr(int iGategory)
{
    QString str = "";
    switch(iGategory)
    {
    case E_FAULTS_CATEGORY_CAB:
        str = "CAB";
        break;
    case E_FAULTS_CATEGORY_ACU:
        str = "SIV";
        break;
    case E_FAULTS_CATEGORY_BCU:
        str = "BCU";
        break;
    case E_FAULTS_CATEGORY_TCU:
        str = "DCU";
        break;
    case E_FAULTS_CATEGORY_HVAC:
        str = "HVAC";
        break;
    case E_FAULTS_CATEGORY_ATC:
        str = "ATC";
        break;
    case E_FAULTS_CATEGORY_PIS:
        str = "PIS";
        break;
    case E_FAULTS_CATEGORY_TCMS:
        str = "TCMS";
        break;
    case E_FAULTS_CATEGORY_DCU:
        str = "EDCU";
        break;
    case E_FAULTS_CATEGORY_TL:
        str = "TL";
        break;
    case E_FAULTS_CATEGORY_FAS:
        str = "FAU";
        break;
    case E_FAULTS_CATEGORY_RSV:
        str = "RESERVE";
        break;
    default:
        str = "-";
        break;
    }

    return str;
}

int FindFaultsNameTableIndex(int code)
{
    int idx = -1;
    int i = 0;
    ST_FAULT_INFO *pdata = &g_faultsinforom[0];
    for (i = 0; i < g_faultsInfoRomLen; i++)
    {
        if (code == pdata->code)
        {
            idx = i;
            break;
        }
        pdata++;
    }
    return idx;
}

void HistoryFaultsListInit()
{
    memset(&g_historyFaultsList, 0, sizeof(g_historyFaultsList));
    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;

    HistoryFaultsLoad();
    if(g_historyFaultsList.curIdx < 0 || g_historyFaultsList.curIdx > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx = 0;
    }
}

QString GetCarriageString(char position)
{
    QString str = "- ";
    switch (position)
    {
    case D_POS_A:
        str = "TC1 ";
        break;
    case D_POS_B:
        str = "Mp1  ";
        break;
    case D_POS_C:
        str = "M1  ";
        break;
    case D_POS_D:
        str = "M2  ";
        break;
    case D_POS_E:
        str = "Mp2  ";
        break;
    case D_POS_F:
        str = "TC2 ";
        break;
    case D_POS_G:
        str = "-- ";
        break;
    case D_POS_H:
        str = "-- ";
        break;
    default:
        break;
    }

    return str;
}

void CheckIndexRange(int& index, int linenum)
{
    bool bError = false;
    if(index < 1)
    {
        index = 1;
        bError = true;
    }
    if(index > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        index = D_HISTORY_FAULT_LIST_MAX_CNT;
        bError = true;
    }

#ifdef LOG_OPEN
//    if(bError)
//    {
//       QString writeStr = GetDateStr() + " " + GetTimeStr() + ":RangeError at line " + QString::number(linenum) + "\n";
//       fstream fs;
//       fs.open((qApp->applicationDirPath().toStdString() + g_logFileName).c_str(), ios_base::out | ios_base::app);
//       fs.write(writeStr.toStdString().c_str(), writeStr.length());
//       fs.close();
//    }
#endif
}
