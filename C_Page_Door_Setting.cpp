#include "C_Page_Door_Setting.h"



ROMDATA g_PicRom_DoorSetting[] =
{
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("门参数\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    {"",                            D_FONT_BOLD(6),      QRect(30, 90, 420,  1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 130, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 170, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 210, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 250, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 290, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 330, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {"",                            D_FONT_BOLD(6),      QRect(30, 370, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(30, 410, 420, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//   // {"",                            D_FONT_BOLD(6),      QRect(30, 370, 421, 1),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {"",                            D_FONT_BOLD(6),      QRect( 30, 90, 1, 320),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(275, 90, 1, 320),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(450, 90, 1, 320),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {QObject::trUtf8("子系统状态"),              D_FONT_BOLD(8),      QRect( 30, 95,  245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("工作正常(设备正常且为主机)"), D_FONT_BOLD(8),      QRect( 30, 135, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("待机中(设备正常但为从机)"),   D_FONT_BOLD(8),      QRect( 30, 175, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   // {QObject::trUtf8("故障发生"),               D_FONT_BOLD(8),      QRect( 30, 215, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("通信异常或未上电"),         D_FONT_BOLD(8),      QRect( 30, 215, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("显示屏以太网通信正常"),      D_FONT_BOLD(8),      QRect( 30, 255, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("显示屏以太网通信异常"),      D_FONT_BOLD(8),      QRect( 30, 295, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("制动内部CAN通信正常"),      D_FONT_BOLD(8),      QRect( 30, 335, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("制动内部CAN通信异常"),      D_FONT_BOLD(8),      QRect( 30, 375, 245, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect( 275, 95, 175, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 135, 80, 30),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE                       },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 175, 80, 30),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE                        },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 215, 80, 30),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE                     },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 267, 80, 6),           Qt::white,                Qt::cyan,               CONTROL_LABEL,           ID_IGNORE                        },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 266, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE                        },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 273, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE                        },

//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 307, 80, 6),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE                     },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 306, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE                        },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 313, 80, 1),           Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE                        },

//  //  {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 322, 215+80, 80, 30),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBCSH_LABEL_COMMUNICATEABNORMITYORPOWEROFF  },
//    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 288, 252+80, 55, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 383, 252+80, 55, 25),           Qt::black,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 277+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 405, 277+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 282+80, 101, 6),           Qt::white,                Qt::darkGreen,            CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 288, 292+80, 55, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("BCU"),                  D_FONT_BOLD(8),      QRect( 383, 292+80, 55, 25),           Qt::black,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 317+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 405, 317+80,  6, 5),            Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 310, 322+80, 101, 6),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE         },
/*
       {"",                           D_FONT_BOLD(6),      QRect(10,  90, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 140, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 190, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 240, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 290, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 340, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 390, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 440, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 490, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(10, 540, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

           {"",                           D_FONT_BOLD(6),      QRect(410,  90, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
           {"",                           D_FONT_BOLD(6),      QRect(410, 140, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
           {"",                           D_FONT_BOLD(6),      QRect(410, 190, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
           {"",                           D_FONT_BOLD(6),      QRect(410, 240, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
           {"",                           D_FONT_BOLD(6),      QRect(410, 290, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
           {"",                           D_FONT_BOLD(6),      QRect(410, 340, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
           {"",                           D_FONT_BOLD(6),      QRect(410, 390, 281,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


       {"",                           D_FONT_BOLD(6),      QRect(10 , 90,  1, 451),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(130, 90,  1, 451),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(190, 90,  1, 451),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(230, 90,  1, 451),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(290, 90,  1, 451),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(410, 90,  1, 301),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(530, 90,  1, 301),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(590, 90,  1, 301),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(630, 90,  1, 301),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
       {"",                           D_FONT_BOLD(6),      QRect(690, 90,  1, 301),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


       //    {"",                           D_FONT_BOLD(6),      QRect(550, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

       {QObject::trUtf8("参数名称"),              D_FONT_BOLD(6),      QRect( 12, 95,  116, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
       {QObject::trUtf8("障碍物关门力1"),          D_FONT_BOLD(6),      QRect( 12, 145, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("障碍物关门力2"),          D_FONT_BOLD(6),      QRect( 12, 195, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("障碍物关门力3"),          D_FONT_BOLD(6),      QRect( 12, 245, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("障碍物关门力4"),          D_FONT_BOLD(6),      QRect( 12, 295, 116, 40),         Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("障碍物关门力5"),          D_FONT_BOLD(6),      QRect( 12, 345, 116, 40),         Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("开门时间"),              D_FONT_BOLD(6),      QRect( 12, 395, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("关门时间"),              D_FONT_BOLD(6),      QRect( 12, 445, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("障碍次数"),              D_FONT_BOLD(6),      QRect( 12, 495, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

       {QObject::trUtf8("参数名称"),              D_FONT_BOLD(6),      QRect( 412, 95,  116, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
       {QObject::trUtf8("障碍开门宽度"),           D_FONT_BOLD(6),      QRect( 412, 145, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("障碍监测延时"),           D_FONT_BOLD(6),      QRect( 412, 195, 116, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("开门延时时间"),           D_FONT_BOLD(6),      QRect( 412, 245, 116, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("关门延时时间"),           D_FONT_BOLD(6),      QRect( 412, 295, 116, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("重关闭时间"),            D_FONT_BOLD(6),      QRect( 412, 345, 116, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 412, 395, 116, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

       {QObject::trUtf8("参数范围"),              D_FONT_BOLD(5),      QRect( 132,  95, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("15-30"),         D_FONT_BOLD(6),      QRect( 132, 145, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("15-30"),         D_FONT_BOLD(6),      QRect( 132, 195, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("15-30"),         D_FONT_BOLD(6),      QRect( 132, 245, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("15-30"),         D_FONT_BOLD(6),      QRect( 132, 295, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("15-30"),         D_FONT_BOLD(6),      QRect( 132, 345, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("25-40"),        D_FONT_BOLD(6),      QRect( 132, 395, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("25-40"),        D_FONT_BOLD(6),      QRect( 132, 445, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("1-5"),           D_FONT_BOLD(6),      QRect( 132, 495, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

       {QObject::trUtf8("参数范围"),              D_FONT_BOLD(5),      QRect( 532,  95, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("0-130"),         D_FONT_BOLD(6),      QRect( 532, 145, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("3-30"),         D_FONT_BOLD(6),      QRect( 532, 195, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("0-50"),         D_FONT_BOLD(6),      QRect( 532, 245, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("0-50"),         D_FONT_BOLD(6),      QRect( 532, 295, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8("0-50"),         D_FONT_BOLD(6),      QRect( 532, 345, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
       {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 532, 395, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

   {QObject::trUtf8("默认值"),              D_FONT_BOLD(4),      QRect( 192,  95, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("15"),                 D_FONT_BOLD(6),      QRect( 192, 145, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("18"),                 D_FONT_BOLD(6),      QRect( 192, 195, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 192, 245, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("23"),                 D_FONT_BOLD(6),      QRect( 192, 295, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("26"),                 D_FONT_BOLD(6),      QRect( 192, 345, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("30"),                 D_FONT_BOLD(6),      QRect( 192, 395, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("30"),                 D_FONT_BOLD(6),      QRect( 192, 445, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("3"),                  D_FONT_BOLD(6),      QRect( 192, 495, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

   {QObject::trUtf8("默认值"),              D_FONT_BOLD(4),      QRect( 592,  95, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 592, 145, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("0"),                  D_FONT_BOLD(6),      QRect( 592, 195, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("30"),                 D_FONT_BOLD(6),      QRect( 592, 245, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 592, 295, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 592, 345, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect( 592, 395, 36, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },


   {QObject::trUtf8("设定值"),              D_FONT_BOLD(6),      QRect( 232,  95, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QString::number(Door_temp1),                 D_FONT_BOLD(6),      QRect( 232, 145, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING1         },
   {QObject::trUtf8("18"),                 D_FONT_BOLD(6),      QRect( 232, 195, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING2         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 232, 245, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING3         },
   {QObject::trUtf8("23"),                 D_FONT_BOLD(6),      QRect( 232, 295, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING4         },
   {QObject::trUtf8("26"),                 D_FONT_BOLD(6),      QRect( 232, 345, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING5         },
   {QObject::trUtf8("30"),                 D_FONT_BOLD(6),      QRect( 232, 395, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING6         },
   {QObject::trUtf8("30"),                 D_FONT_BOLD(6),      QRect( 232, 445, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING7         },
   {QObject::trUtf8("3"),                  D_FONT_BOLD(6),      QRect( 232, 495, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING8         },

   {QObject::trUtf8("设定值"),              D_FONT_BOLD(6),      QRect( 632,  95, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 632, 145, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING9         },
   {QObject::trUtf8("0"),                  D_FONT_BOLD(6),      QRect( 632, 195, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING10         },
   {QObject::trUtf8("30"),                 D_FONT_BOLD(6),      QRect( 632, 245, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING11         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 632, 295, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING12         },
   {QObject::trUtf8("20"),                 D_FONT_BOLD(6),      QRect( 632, 342, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING13         },
   //{QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect( 632, 395, 56, 40),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING14         },

   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  145,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP1               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  145,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN1                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  195,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP2               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  195,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN2                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  245,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP3               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  245,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN3                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  295,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP4               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  295,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN4                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  345,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP5               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  345,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN5                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  395,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP6               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  395,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN6                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  445,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP7              },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  445,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN7                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 300,  495,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP8               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 350,  495,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN8                 },

   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 700,  145,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP9               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 750,  145,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN9                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 700,  195,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP10               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 750,  195,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN10                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 700,  245,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP11               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 750,  245,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN11                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 700,  295,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP12               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 750,  295,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN12                 },
   {QObject::trUtf8("▲"),                D_FONT_BOLD(10),      QRect( 700,  345,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP13               },
   {QObject::trUtf8("▼"),                D_FONT_BOLD(10),      QRect( 750,  345,  40,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN13                 },


{QObject::trUtf8("关门力"),         D_FONT_BOLD(6),     QRect( 412, 400, 56, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("时间"),           D_FONT_BOLD(6),     QRect( 412, 425, 56, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("宽度"),           D_FONT_BOLD(6),     QRect( 412, 450, 56, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("1=1N"),         D_FONT_BOLD(6),      QRect( 470, 400, 56, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("1=0.1s"),         D_FONT_BOLD(6),    QRect( 470, 425, 56, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("1=1cm"),        D_FONT_BOLD(6),      QRect( 470, 450, 56, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
*/
   //{QObject::trUtf8("确   定"),        D_FONT_BOLD(10),      QRect( 690, 480, 100, 60),           Qt::black,                Qt::gray,           CONTROL_LABEL,           ID_PIBDS_BUTTON_MAKESURE          },



    {"",                           D_FONT_BOLD(6),        QRect(90+50,  90, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 120, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 150, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 180, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 210, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 240, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 270, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 300, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 330, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 360, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 390, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 420, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 450, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 480, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 510, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+50, 540, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                           D_FONT_BOLD(6),        QRect(90+50, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+250, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(90+410, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   // {"",                           D_FONT_BOLD(6),        QRect(90+480, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                           D_FONT_BOLD(6),        QRect(90+550, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("参数名称"),              D_FONT_BOLD(8),        QRect(90+ 50, 95,  200, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("障碍物关门力1"),          D_FONT_BOLD(8),        QRect(90+ 50, 125, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力2"),          D_FONT_BOLD(8),        QRect(90+ 50, 155, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力3"),          D_FONT_BOLD(8),        QRect(90+ 50, 185, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力4"),          D_FONT_BOLD(8),        QRect(90+ 50, 215, 200, 20),         Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力5"),          D_FONT_BOLD(8),        QRect(90+ 50, 245, 200, 20),         Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("开门时间"),              D_FONT_BOLD(8),        QRect(90+ 50, 275, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("关门时间"),              D_FONT_BOLD(8),        QRect(90+ 50, 305, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍次数"),              D_FONT_BOLD(8),        QRect(90+ 50, 335, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍开门宽度"),           D_FONT_BOLD(8),        QRect(90+ 50, 365, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍监测延时"),           D_FONT_BOLD(8),        QRect(90+ 50, 395, 200, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("开门延时时间"),           D_FONT_BOLD(8),        QRect(90+ 50, 425, 200, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("关门延时时间"),           D_FONT_BOLD(8),        QRect(90+ 50, 455, 200, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("重关闭时间"),             D_FONT_BOLD(8),        QRect(90+ 50, 485, 200, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),        QRect(90+ 50, 515, 200, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("参数范围"),              D_FONT_BOLD(8),        QRect(90+ 250,  95, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("15-30(1=10N)"),         D_FONT_BOLD(8),        QRect(90+ 250, 125, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("15-30(1=10N)"),                 D_FONT_BOLD(8),        QRect(90+ 250, 155, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("15-30(1=10N)"),                  D_FONT_BOLD(8),        QRect(90+ 250, 185, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("15-30(1=10N)"),              D_FONT_BOLD(8),        QRect(90+ 250, 215, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("15-30(1=10N)"),              D_FONT_BOLD(8),        QRect(90+ 250, 245, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("25-40(1=0.1s)"),                  D_FONT_BOLD(8),        QRect(90+ 250, 275, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("25-40(1=0.1s)"),                  D_FONT_BOLD(8),        QRect(90+ 250, 305, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1-5(1=1次)"),                  D_FONT_BOLD(8),        QRect(90+ 250, 335, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-130(1=1cm)"),                  D_FONT_BOLD(8),        QRect(90+ 250, 365, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3-30(1=0.1s)"),                 D_FONT_BOLD(8),        QRect(90+ 250, 395, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-50(1=0.1s)"),                  D_FONT_BOLD(8),        QRect(90+ 250, 425, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-50(1=0.1s)"),                 D_FONT_BOLD(8),        QRect(90+ 250, 455, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-50(1=0.1s)"),                D_FONT_BOLD(8),        QRect(90+ 250, 485, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),        QRect(90+ 250, 515, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

//{QObject::trUtf8("默认值"),              D_FONT_BOLD(8),        QRect(90+ 410,  95, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 410, 125, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("18"),                 D_FONT_BOLD(8),        QRect(90+ 410, 155, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 410, 185, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("23"),                 D_FONT_BOLD(8),        QRect(90+ 410, 215, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("26"),                 D_FONT_BOLD(8),        QRect(90+ 410, 245, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 410, 275, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 410, 305, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("3"),                  D_FONT_BOLD(8),        QRect(90+ 410, 335, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 410, 365, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("0"),                  D_FONT_BOLD(8),        QRect(90+ 410, 395, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 410, 425, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 410, 455, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 410, 485, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(90+ 410, 515, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },


{QObject::trUtf8("设定值"),              D_FONT_BOLD(8),        QRect(90+ 415,  95, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 415, 125, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,                   ID_PIBDS_LABEL_SETTING1         },
{QObject::trUtf8("18"),                 D_FONT_BOLD(8),        QRect(90+ 415, 155, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING2         },
{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 415, 185, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_PIBDS_LABEL_SETTING3         },
{QObject::trUtf8("23"),                 D_FONT_BOLD(8),        QRect(90+ 415, 215, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING4         },
{QObject::trUtf8("26"),                 D_FONT_BOLD(8),        QRect(90+ 415, 245, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING5         },
{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 415, 275, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING6         },
{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 415, 305, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING7         },
{QObject::trUtf8("3"),                  D_FONT_BOLD(8),        QRect(90+ 415, 335, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING8         },
{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 415, 365, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING9         },
{QObject::trUtf8("0"),                  D_FONT_BOLD(8),        QRect(90+ 415, 395, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING10         },
{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 415, 425, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING11         },
{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 415, 455, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING12         },
{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 415, 485, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING13         },
//{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 415, 515, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING14         },

{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  125,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP1               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  125,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN1                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  155,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP2               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  155,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN2                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  185,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP3               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  185,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN3                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  215,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP4               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  215,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN4                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  245,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP5               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  245,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN5                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  275,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP6               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  275,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN6                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  305,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP7              },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  305,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN7                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  335,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP8               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  335,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN8                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  365,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP9               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  365,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN9                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  395,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP10               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  395,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN10                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  425,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP11               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  425,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN11                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  455,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP12               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  455,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN12                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  485,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP13               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  485,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN13                 },
//{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  515,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP14               },
//{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  515,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN14                 },

{QObject::trUtf8("设置结果"),              D_FONT_BOLD(8),        QRect(670,  95, 112, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("1车"),              D_FONT_BOLD(8),        QRect(670,  121, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("2车"),              D_FONT_BOLD(8),        QRect(670,  181, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("3车"),              D_FONT_BOLD(8),        QRect(670,  241, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("4车"),              D_FONT_BOLD(8),        QRect(670,  301, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("5车"),              D_FONT_BOLD(8),        QRect(670,  361, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("6车"),              D_FONT_BOLD(8),        QRect(670,  421, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },


{"",                           D_FONT_BOLD(6),        QRect(670, 120, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670, 180, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670, 240, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670, 300, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670, 360, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670, 420, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670, 480, 112,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

{"",                           D_FONT_BOLD(6),        QRect(670, 120,  1, 360),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(782, 120,  1, 360),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(107+600, 467-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR1         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(124+600, 467-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR3         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600, 467-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR5         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(158+600, 467-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR7         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(107+600, 491-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR2         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(124+600, 491-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR4         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600, 491-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR6         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(158+600, 491-340,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR8         },

{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(107+600, 467-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR1         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(124+600, 467-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR3         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600, 467-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR5         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(158+600, 467-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR7         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(107+600, 491-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR2         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(124+600, 491-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR4         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600, 491-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR6         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(158+600, 491-280,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR8         },

{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(107+600, 467-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR1         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(124+600, 467-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR3         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600, 467-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR5         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(158+600, 467-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR7         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(107+600, 491-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR2         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(124+600, 491-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR4         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600, 491-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR6         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(158+600, 491-220,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR8         },

{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(107+600, 467-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR8         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(124+600, 467-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR6         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(141+600, 467-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR4         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(158+600, 467-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR2         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(107+600, 491-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR7         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(124+600, 491-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR5         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(141+600, 491-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR3         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(158+600, 491-160,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR1         },

{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(107+600, 467-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR8         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(124+600, 467-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR6         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(141+600, 467-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR4         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(158+600, 467-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR2         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(107+600, 491-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR7         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(124+600, 491-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR5         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(141+600, 491-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR3         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(158+600, 491-100,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR1         },

{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(107+600, 467-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR8         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(124+600, 467-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR6         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(141+600, 467-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR4         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(158+600, 467-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR2         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(107+600, 491-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR7         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(124+600, 491-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR5         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(141+600, 491-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR3         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(158+600, 491-40,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR1         },



//{QObject::trUtf8("1"),           D_FONT_BOLD(4),       QRect(207, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR1         },
//{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(224, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR3         },
//{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(241, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR5         },
//{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(258, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR7         },
//{QObject::trUtf8("2"),           D_FONT_BOLD(4),       QRect(207, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR2         },
//{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(224, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR4         },
//{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(241, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR6         },
//{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(258, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR8         },

//{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(309-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR1         },
//{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(326-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR3         },
//{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(343-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR5         },
//{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(360-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR7         },
//{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(309-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR2         },
//{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(326-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR4         },
//{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(343-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR6         },
//{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(360-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR8         },
//{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(384+23, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR1         },
//{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(401+23, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR3         },
//{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(418+23, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR5         },
//{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(435+23, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR7         },
//{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(384+23, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR2         },
//{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(401+23, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR4         },
//{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(418+23, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR6         },
//{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(435+23, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR8         },
//{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(534-27, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR1         },
//{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(551-27, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR3         },
//{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(568-27, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR5         },
//{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(585-27, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR7         },
//{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(534-27, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR2         },
//{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(551-27, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR4         },
//{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(568-27, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR6         },
//{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(585-27, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR8         },
//{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(609-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR1         },
//{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(626-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR3         },
//{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(643-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR5         },
//{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(660-2, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR7         },
//{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(609-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR2         },
//{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(626-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR4         },
//{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(643-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR6         },
//{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(660-2, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR8         },



    //   {QObject::trUtf8("备注：0号门为司机室门只在第1和第8节车厢有显示。"),                  D_FONT_BOLD(7),        QRect(90+ 10, 515, 450, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

};
int g_DoorSettingRomLen = sizeof(g_PicRom_DoorSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Door_Setting,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnDoorConfirmClk)

#endif
        ON_BTNCLK(ID_PIBDS_BUTTON_UP1,OnDoorParaSetUp1Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP2,OnDoorParaSetUp2Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP3,OnDoorParaSetUp3Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP4,OnDoorParaSetUp4Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP5,OnDoorParaSetUp5Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP6,OnDoorParaSetUp6Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP7,OnDoorParaSetUp7Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP8,OnDoorParaSetUp8Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP9,OnDoorParaSetUp9Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP10,OnDoorParaSetUp10Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP11,OnDoorParaSetUp11Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP12,OnDoorParaSetUp12Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP13,OnDoorParaSetUp13Clk)

        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN1,OnDoorParaSetDown1Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN2,OnDoorParaSetDown2Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN3,OnDoorParaSetDown3Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN4,OnDoorParaSetDown4Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN5,OnDoorParaSetDown5Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN6,OnDoorParaSetDown6Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN7,OnDoorParaSetDown7Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN8,OnDoorParaSetDown8Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN9,OnDoorParaSetDown9Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN10,OnDoorParaSetDown10Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN11,OnDoorParaSetDown11Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN12,OnDoorParaSetDown12Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN13,OnDoorParaSetDown13Clk)

       // ON_BTNCLK(ID_PIBDS_BUTTON_MAKESURE,OnDoorConfirmClk)

END_MESSAGE_MAP()

C_Page_Door_Setting::C_Page_Door_Setting()
{
}

void C_Page_Door_Setting::OnUpdatePage()
{

    UpDateDrObsCloseForce1();
    UpDateDrObsCloseForce2();
    UpDateDrObsCloseForce3();
    UpDateDrObsCloseForce4();
    UpDateDrObsCloseForce5();
    UpDateDrOpenTime();
    UpDateDrCloSetDrime();
    UpDateDrObsNumber();
    UpDateDrOpenWidthOnObs();
    UpDateDrObsDetectionDelay();
    UpDateDrDelayTimeForOpen();
    UpDateDrDelayTimeForClose();
    UpDateDrObsRecloseDelay();
    UpDateDrSetOK();

    if (m_DChange)
    {
        static int times=0;
        times ++;
        if (times%times_n==0)
        {
            prameter_setting_door_timer --;
            if (prameter_setting_door_timer==0)
            {
                m_DChange=false;
                m_MakeSure=false;
                HMCT_SetDrEnable_B1=false;
                //((CButton*)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);

                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP1))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP2))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP3))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP4))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP5))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP6))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP7))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP8))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP9))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP10))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP11))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP12))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP13))->ChangeButtonState(LBUTTON_UP);


                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN1))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN2))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN3))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN4))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN5))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN6))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN7))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN8))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN9))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN10))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN11))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN12))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN13))->ChangeButtonState(LBUTTON_UP);


            }

        }


    }
}

void C_Page_Door_Setting::OnInitPage()
{
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING12))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING13))->SetBorderColor(Qt::white);
 //   ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING14))->SetBorderColor(Qt::black);

   // ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;

    HMCT_SetDrObsCloseForce1_U8=15;
    HMCT_SetDrObsCloseForce2_U8=18;
    HMCT_SetDrObsCloseForce3_U8=20;
    HMCT_SetDrObsCloseForce4_U8=23;
    HMCT_SetDrObsCloseForce5_U8=26;
    HMCT_SetDrOpenTime_U8=30;
    HMCT_SetDrCloSetDrime_U8=30;
    HMCT_SetDrObsNumber_U8=3;
    HMCT_SetDrOpenWidthOnObs_U8=20;
    HMCT_SetDrObsDetectionDelay_U8=5;
    HMCT_SetDrDelayTimeForOpen_U8=30;
    HMCT_SetDrDelayTimeForClose_U8=20;
    HMCT_SetDrObsRecloseDelay_U8=20;
    }

void C_Page_Door_Setting::OnShowPage()
{

    #ifdef PAGE_BUTTON_BAR_NEW
        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("确   定"));
    #else
        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   定"));
    #endif
        m_DChange = false;
        m_MakeSure= false;
         prameter_setting_door_timer = 5;
         //((CButton *)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->ChangeButtonState(LBUTTON_UP);
         ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);

         this->InitPageHeader();



}

void C_Page_Door_Setting::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void C_Page_Door_Setting::OnComBtn2Clk()
{

}

void C_Page_Door_Setting::OnComBtn3Clk()
{

}

void C_Page_Door_Setting::OnComBtn4Clk()
{

}

void C_Page_Door_Setting::OnComBtn5Clk()
{

}

void C_Page_Door_Setting::OnComBtn6Clk()
{

}

#ifdef PAGE_BUTTON_BAR_NEW
void C_Page_Door_Setting::OnComBtn7Clk()
{

}

void C_Page_Door_Setting::OnComBtn8Clk()
{

}
#endif


void C_Page_Door_Setting::UpDateDrObsCloseForce1()
{


   ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING1))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce1_U8));

}

void C_Page_Door_Setting::UpDateDrObsCloseForce2()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING2))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce2_U8));

}
void C_Page_Door_Setting::UpDateDrObsCloseForce3()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING3))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce3_U8));

}
void C_Page_Door_Setting::UpDateDrObsCloseForce4()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING4))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce4_U8));

}
void C_Page_Door_Setting::UpDateDrObsCloseForce5()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING5))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce5_U8));

}
void C_Page_Door_Setting::UpDateDrOpenTime()
{
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING6))->SetCtrlText(QString::number(HMCT_SetDrOpenTime_U8));

}
void C_Page_Door_Setting::UpDateDrCloSetDrime()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING7))->SetCtrlText(QString::number(HMCT_SetDrCloSetDrime_U8));

}
void C_Page_Door_Setting::UpDateDrObsNumber()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING8))->SetCtrlText(QString::number(HMCT_SetDrObsNumber_U8));

}
void C_Page_Door_Setting::UpDateDrOpenWidthOnObs()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING9))->SetCtrlText(QString::number(HMCT_SetDrOpenWidthOnObs_U8));

}
void C_Page_Door_Setting::UpDateDrObsDetectionDelay()
{
    if(HMCT_SetDrObsDetectionDelay_U8<3)
    {
        HMCT_SetDrObsDetectionDelay_U8=3;
    }
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING10))->SetCtrlText(QString::number(HMCT_SetDrObsDetectionDelay_U8));

}
void C_Page_Door_Setting::UpDateDrDelayTimeForOpen()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING11))->SetCtrlText(QString::number(HMCT_SetDrDelayTimeForOpen_U8));

}
void C_Page_Door_Setting::UpDateDrDelayTimeForClose()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING12))->SetCtrlText(QString::number(HMCT_SetDrDelayTimeForClose_U8));

}
void C_Page_Door_Setting::UpDateDrObsRecloseDelay()
{



    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING13))->SetCtrlText(QString::number(HMCT_SetDrObsRecloseDelay_U8));

}

void C_Page_Door_Setting::UpDateDrSetOK()
{
    if(che1_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che1_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che1_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR1CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR3CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR5CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che4_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che4_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR7CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che5_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che5_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDR9CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(EDRBCT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }

}



void C_Page_Door_Setting::OnDoorParaSetUp1Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce1_U8<30)
    {
        HMCT_SetDrObsCloseForce1_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp2Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce2_U8<30)
    {
        HMCT_SetDrObsCloseForce2_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp3Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce3_U8<30)
    {
        HMCT_SetDrObsCloseForce3_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp4Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce4_U8<30)
    {
        HMCT_SetDrObsCloseForce4_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp5Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce5_U8<30)
    {
        HMCT_SetDrObsCloseForce5_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp6Clk()
{
     if(HMCT_SetDrOpenTime_U8<40)
    {
         HMCT_SetDrOpenTime_U8 += 1;
    }
}

void C_Page_Door_Setting:: OnDoorParaSetUp7Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrCloSetDrime_U8<40)
    {
        HMCT_SetDrCloSetDrime_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp8Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsNumber_U8<5)
    {
        HMCT_SetDrObsNumber_U8 += 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp9Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrOpenWidthOnObs_U8<130)
    {
        HMCT_SetDrOpenWidthOnObs_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp10Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsDetectionDelay_U8<30)
    {
        HMCT_SetDrObsDetectionDelay_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp11Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForOpen_U8<50)
    {
        HMCT_SetDrDelayTimeForOpen_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp12Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForClose_U8<50)
    {
        HMCT_SetDrDelayTimeForClose_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp13Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsRecloseDelay_U8<50)
    {
        HMCT_SetDrObsRecloseDelay_U8 += 1;
    }
}
}


void C_Page_Door_Setting::OnDoorParaSetDown1Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce1_U8>15)
    {
        HMCT_SetDrObsCloseForce1_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown2Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce2_U8>15)
    {
        HMCT_SetDrObsCloseForce2_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown3Clk()
{
    if(HMCT_SetDrObsCloseForce3_U8>15)
    {
        HMCT_SetDrObsCloseForce3_U8 -= 1;

    }
}

void C_Page_Door_Setting:: OnDoorParaSetDown4Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce4_U8>15)
    {
        HMCT_SetDrObsCloseForce4_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown5Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce5_U8>15)
    {
        HMCT_SetDrObsCloseForce5_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown6Clk()
{
    if (!m_MakeSure)
    {
     if(HMCT_SetDrOpenTime_U8>25)
    {
         HMCT_SetDrOpenTime_U8 -= 1;
    }
 }
}

void C_Page_Door_Setting:: OnDoorParaSetDown7Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrCloSetDrime_U8>25)
    {
        HMCT_SetDrCloSetDrime_U8 -= 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetDown8Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsNumber_U8>1)
    {
        HMCT_SetDrObsNumber_U8 -= 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown9Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrOpenWidthOnObs_U8>0)
    {
        HMCT_SetDrOpenWidthOnObs_U8 -= 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown10Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsDetectionDelay_U8>3)
    {
        HMCT_SetDrObsDetectionDelay_U8 -= 1;
    }

}
}

void C_Page_Door_Setting:: OnDoorParaSetDown11Clk()
{
    if(!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForOpen_U8>0)
    {
        HMCT_SetDrDelayTimeForOpen_U8 -= 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetDown12Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForClose_U8>0)
    {
        HMCT_SetDrDelayTimeForClose_U8 -= 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetDown13Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsRecloseDelay_U8>0)
    {
        HMCT_SetDrObsRecloseDelay_U8 -= 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorConfirmClk()
{
    if (!m_DChange)
    {
        m_DChange=true;
        m_MakeSure=true;
        prameter_setting_door_timer=5;
        HMCT_SetDrEnable_B1=true;
       // ((CButton *)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);

        /*
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP1))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP2))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP3))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP4))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP5))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP6))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP7))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP8))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP9))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP10))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP11))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP12))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP13))->ChangeButtonState(LBUTTON_DOWN);


                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN1))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN2))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN3))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN4))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN5))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN6))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN7))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN8))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN9))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN10))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN11))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN12))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN13))->ChangeButtonState(LBUTTON_DOWN);




        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP4))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP5))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP6))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP7))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP8))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP9))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP10))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP11))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP12))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP13))->ChangeButtonState(LBUTTON_UP);


        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN4))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN5))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN6))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN7))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN8))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN9))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN10))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN11))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN12))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN13))->ChangeButtonState(LBUTTON_UP);


         */

    }
}











/*
 extern bool HMCT_SetDrEnable_B1;

BYTE HMCT_SetDrObsCloseForce1_U8=0;
BYTE HMCT_SetDrObsCloseForce2_U8=0;
BYTE HMCT_SetDrObsCloseForce3_U8=0;
BYTE HMCT_SetDrObsCloseForce4_U8=0;
BYTE HMCT_SetDrObsCloseForce5_U8=0;
BYTE HMCT_SetDrOpenTime_U8=0;
BYTE HMCT_SetDrCloSetDrime_U8=0;
BYTE HMCT_SetDrObsNumber_U8=0;
BYTE HMCT_SetDrOpenWidthOnObs_U8=0;
BYTE HMCT_SetDrObsDetectionDelay_U8=0;
BYTE HMCT_SetDrDelayTimeForOpen_U8=0;
BYTE HMCT_SetDrDelayTimeForClose_U8=0;
BYTE HMCT_SetDrObsRecloseDelay_U8=0;

 sendData[32] = HMCT_SetHVACEnableTC1_B1        *128+
                   HMCT_SetHVACEnableMP1_B1        *64 +
                   HMCT_SetHVACEnableM1_B1         *32 +
                   HMCT_SetHVACEnableM2_B1         *16+
                   HMCT_SetHVACEnableMP2_B1        *8+
                   HMCT_SetHVACEnableTC2_B1        *4+
             ****  HMCT_SetDrEnable_B1             *2+
                   HMCT_SetWheelEnable_B1          *1;


    sendData[45] = HMCT_SetDrObsCloseForce1_U8;
    sendData[46] = HMCT_SetDrObsCloseForce2_U8;
    sendData[47] = HMCT_SetDrObsCloseForce3_U8;
    sendData[48] = HMCT_SetDrObsCloseForce4_U8;
    sendData[49] = HMCT_SetDrObsCloseForce5_U8;
    sendData[50] = HMCT_SetDrOpenTime_U8;
    sendData[51] = HMCT_SetDrCloSetDrime_U8;
    sendData[52] = HMCT_SetDrObsNumber_U8;
    sendData[53] = HMCT_SetDrOpenWidthOnObs_U8;
    sendData[54] = HMCT_SetDrObsDetectionDelay_U8;
    sendData[55] = HMCT_SetDrDelayTimeForOpen_U8;
    sendData[56] = HMCT_SetDrDelayTimeForClose_U8;
    sendData[57] = HMCT_SetDrObsRecloseDelay_U8;

UpDateDrObsCloseForce1()
UpDateDrObsCloseForce2()
UpDateDrObsCloseForce3()
UpDateDrObsCloseForce4()
UpDateDrObsCloseForce5()
UpDateDrOpenTime()
UpDateDrCloSetDrime()
UpDateDrObsNumber()
UpDateDrOpenWidthOnObs()
UpDateDrObsDetectionDelay()
UpDateDrDelayTimeForOpen()
UpDateDrDelayTimeForClose()
UpDateDrObsRecloseDelay()
*/




