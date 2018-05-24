#include "C_Debug_ATCTest.h"
ROMDATA  g_PicRom_ATCTest[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
//    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBATCTEST_PAGEDOWN           },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBATCTEST_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("ATC\n测试") )
//    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBATCTEST_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBATCTEST_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBATCTEST_ARROW_LEFT                 },
#endif

#ifdef PAGE_HEADER_OLD
//    D_COMMON_PAGE_BUTTON_BAR
//    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

//    {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),         Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS1_COMMINTERRUPT              },
//    {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_V                    },

//    {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_A                    },

//    {QObject::trUtf8("牵引*制动级位"),         D_FONT_BOLD(8),      QRect(470,  45, 150,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_TRACTIONMODEL        },

//    {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),       QRect(630,  45, 80,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(630,  66, 80,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_SPEED                },

//    {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBCARS1_ICON_WARNNING              },
//    {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
//    {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
//    {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },
#endif
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+70  , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+100 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+130 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+160 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+190 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+220 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+250 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+280 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+310 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+340 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+370 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+400 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+430 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+460 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+490 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50 , 15+520 , 700,  2),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },


    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(50, 100-15 , 2,  450),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(150, 100-15 , 2,  450),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(350, 100-15 , 2,  450),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(550, 100-15 , 2,  450),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(750, 100-15 , 2,  450),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },

    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(250, 130-15 , 2,  420),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(450, 130-15 , 2,  420),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(650, 130-15 , 2,  420),         Qt::white,                Qt::black,                CONTROL_LINE,              ID_IGNORE              },

    {QObject::trUtf8("设备"),                    D_FONT_BOLD(8),       QRect(55,  103-15, 90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("端口"),                    D_FONT_BOLD(8),       QRect(55,  133-15, 90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },

    {QObject::trUtf8("ATC->CCU"),                    D_FONT_BOLD(8),       QRect(155,  103-15, 190,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("CCU->PIS"),                    D_FONT_BOLD(8),       QRect(355,  103-15, 190,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("PIS->CCU"),                    D_FONT_BOLD(8),       QRect(555,  103-15, 190,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },

    {QObject::trUtf8("A10"),                    D_FONT_BOLD(8),       QRect(155,  133-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("A20"),                    D_FONT_BOLD(8),       QRect(255,  133-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("B08"),                    D_FONT_BOLD(8),       QRect(355,  133-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("- -"),                    D_FONT_BOLD(8),       QRect(455,  133-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("B10"),                    D_FONT_BOLD(8),       QRect(555,  133-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("B20"),                    D_FONT_BOLD(8),       QRect(655,  133-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },

    {QObject::trUtf8("上下行"),                         D_FONT_BOLD(4),       QRect(55,  163-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("跳停本站"),                       D_FONT_BOLD(4),       QRect(55,  193-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("跳停下一站"),                      D_FONT_BOLD(4),       QRect(55,  223-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("右侧车门将开启"),                  D_FONT_BOLD(4),       QRect(55,  253-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("左侧车门将开启"),                  D_FONT_BOLD(4),       QRect(55,  283-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("起始站ID"),                       D_FONT_BOLD(4),       QRect(55,  313-15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("目的站ID"),                       D_FONT_BOLD(4),       QRect(55,  343+15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("下一站的ID"),                     D_FONT_BOLD(4),       QRect(55,  373+45,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    {QObject::trUtf8("到下一站的距离"),                     D_FONT_BOLD(4),       QRect(55,  403+75,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },
    //{QObject::trUtf8("--"),                  D_FONT_BOLD(4),       QRect(55,  433+105,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE               },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 164 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_1             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 194 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_2             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 224 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_3             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 254 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_4            },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 284 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_5             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 314 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_6             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 344 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_b             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 374 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_7             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 404 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_c             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 434 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_8             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 464 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_d             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 494 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_a             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(156, 524 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_1_9             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 164 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_1             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 194 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_2             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 224 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_3             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 254 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_4            },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 284 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_5             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 314 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_6             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 344 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_b             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 374 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_7             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 404 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_c             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 434 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_8             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 464 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_d             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 494 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_a             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(256, 524 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_2_9             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 164 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_1             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 194 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_2             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 224 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_3             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 254 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_4            },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 284 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_5             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 314 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_6             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 344 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_b             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 374 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_7             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 404 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_c             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 434 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_8             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 464 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_d             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 494 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_a             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(356, 524 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_3_9             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 164 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_1             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 194 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_2             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 224 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_3             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 254 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_4            },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 284 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_5             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 314 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_6             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 344 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_b             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 374 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_7             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 404 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_c             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 434 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_8             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 464 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_d             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 494 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_a             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(456, 524 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_4_9             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 164 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_1             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 194 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_2             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 224 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_3             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 254 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_4            },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 284 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_5             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 314 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_6             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 344 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_b             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 374 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_7             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 404 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_c             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 434 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_8             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 464 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_d             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 494 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_a             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(556, 524 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_5_9             },

    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 164 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_1             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 194 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_2             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 224 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_3             },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 254 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_4            },
    {QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 284 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_5             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 314 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_6             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 344 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_b             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 374 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_7             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 404 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_c             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 434 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_8             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 464 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_d             },

{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 494 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_a             },
{QObject::trUtf8(""),                    D_FONT_BOLD(4),       QRect(656, 524 -15,  90,  24),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBATCTEST_LABEL_6_9             },

};
 int g_ATCTestRomLen = sizeof(g_PicRom_ATCTest)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Debug_ATCTest,CPage)
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
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#else
        ON_BTNCLK(  ID_PIBCARS1_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif

       // ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
      //  ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        //ON_BTNCLK(ID_PIBCARS1_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_FASPAGE, OnFASpageBtnClk)

       // ON_BTNCLK(ID_PIBCARS1_BUTTON_PGUP, OnPageUpBtnClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_PGDN, OnPageDownBtnClk)

//        ON_BTNCLK(ID_PIBCARS1_BUTTON_ACURESET, OnACUReset)
END_MESSAGE_MAP()
C_Debug_ATCTest::C_Debug_ATCTest()
{
}

void C_Debug_ATCTest::OnUpdatePage()
{


QString test_Value_11;    //11
QString test_Value_12;    //12
QString test_Value_13;    //13
QString test_Value_14;    //14
QString test_Value_15;    //15
QString test_Value_16;    //16
QString test_Value_17;    //17
QString test_Value_18;    //18
QString test_Value_19;    //19
QString test_Value_1a;    //1a
QString test_Value_1b;    //1b
QString test_Value_1c;    //1c
QString test_Value_1d;    //1d

QString test_Value_21;    //21
QString test_Value_22;    //22
QString test_Value_23;    //23
QString test_Value_24;    //24
QString test_Value_25;    //25
QString test_Value_26;    //26
QString test_Value_27;    //27
QString test_Value_28;    //28
QString test_Value_29;    //29
QString test_Value_2a;    //2a
QString test_Value_2b;    //2b
QString test_Value_2c;    //2c
QString test_Value_2d;    //2d

QString test_Value_31;    //31
QString test_Value_32;    //32
QString test_Value_33;    //33
QString test_Value_34;    //34
QString test_Value_35;    //35
QString test_Value_36;    //36
QString test_Value_37;    //37
QString test_Value_38;    //38
QString test_Value_39;    //39
QString test_Value_3a;    //3a
QString test_Value_3b;    //3b
QString test_Value_3c;    //3c
QString test_Value_3d;    //3d

QString test_Value_41;    //41
QString test_Value_42;    //42
QString test_Value_43;    //43
QString test_Value_44;    //44
QString test_Value_45;    //45
QString test_Value_46;    //46
QString test_Value_47;    //47
QString test_Value_48;    //48
QString test_Value_49;    //49
QString test_Value_4a;    //4a
QString test_Value_4b;    //4b
QString test_Value_4c;    //4c
QString test_Value_4d;    //4d

QString test_Value_51;    //51
QString test_Value_52;    //52
QString test_Value_53;    //53
QString test_Value_54;    //54
QString test_Value_55;    //55
QString test_Value_56;    //56
QString test_Value_57;    //57
QString test_Value_58;    //58
QString test_Value_59;    //59
QString test_Value_5a;    //5a
QString test_Value_5b;    //5b
QString test_Value_5c;    //5c
QString test_Value_5d;    //5d

QString test_Value_61;    //61
QString test_Value_62;    //62
QString test_Value_63;    //63
QString test_Value_64;    //64
QString test_Value_65;    //65
QString test_Value_66;    //66
QString test_Value_67;    //67
QString test_Value_68;    //68
QString test_Value_69;    //69
QString test_Value_6a;    //6a
QString test_Value_6b;    //6b
QString test_Value_6c;    //6c
QString test_Value_6d;    //6d


  test_Value_11.sprintf("%01X",ATCTEST1CT_RunDirection_B1)  ;      //11
  test_Value_12.sprintf("%01X",ATCTEST1CT_ThisNoStop_B1)  ;      //12
  test_Value_13.sprintf("%01X",ATCTEST1CT_NextNoStop_B1)  ;      //13
  test_Value_14.sprintf("%01X",ATCTEST1CT_OpenRightDoor_B1)  ;      //14
  test_Value_15.sprintf("%01X",ATCTEST1CT_OpenLeftDoor_B1)  ;      //15

  test_Value_16.sprintf("%04X",Change_BigEen(ATCTEST1CT_StartStationID_U16)) ;      //16
  test_Value_1b.sprintf("%05d",Change_BigEen(ATCTEST1CT_StartStationID_U16)) ;      //16

  test_Value_17.sprintf("%04X",Change_BigEen(ATCTEST1CT_FinalStationID_U16)) ;      //17
  test_Value_1c.sprintf("%05d",Change_BigEen(ATCTEST1CT_FinalStationID_U16)) ;      //17

  test_Value_18.sprintf("%04X",Change_BigEen(ATCTEST1CT_NextStationID_U16)) ;      //18
  test_Value_1d.sprintf("%05d",Change_BigEen(ATCTEST1CT_NextStationID_U16)) ;      //18

  test_Value_1a.sprintf("%04X",Change_BigEen(ATCTEST1CT_DistanceToNextStation_U16)) ;      //1a
  test_Value_19.sprintf("%05d",Change_BigEen(ATCTEST1CT_DistanceToNextStation_U16)) ;      //19

  test_Value_21.sprintf("%01X",ATCTEST2CT_RunDirection_B1) ;      //21
  test_Value_22.sprintf("%01X",ATCTEST2CT_ThisNoStop_B1) ;      //22
  test_Value_23.sprintf("%01X",ATCTEST2CT_NextNoStop_B1) ;      //23
  test_Value_24.sprintf("%01X",ATCTEST2CT_OpenRightDoor_B1) ;      //24
  test_Value_25.sprintf("%01X",ATCTEST2CT_OpenLeftDoor_B1) ;      //25

  test_Value_26.sprintf("%04X",Change_BigEen(ATCTEST2CT_StartStationID_U16)) ;      //26
  test_Value_2b.sprintf("%05d",Change_BigEen(ATCTEST2CT_StartStationID_U16)) ;      //26

  test_Value_27.sprintf("%04X",Change_BigEen(ATCTEST2CT_FinalStationID_U16)) ;      //27
  test_Value_2c.sprintf("%05d",Change_BigEen(ATCTEST2CT_FinalStationID_U16)) ;      //27

  test_Value_28.sprintf("%04X",Change_BigEen(ATCTEST2CT_NextStationID_U16)) ;      //28
  test_Value_2d.sprintf("%05d",Change_BigEen(ATCTEST2CT_NextStationID_U16)) ;      //28

  test_Value_2a.sprintf("%04X",Change_BigEen(ATCTEST2CT_DistanceToNextStation_U16)) ;      //2a
  test_Value_29.sprintf("%05d",Change_BigEen(ATCTEST2CT_DistanceToNextStation_U16)) ;      //29

  test_Value_31.sprintf("%01X",CTPISTEST_RunDirection_B1) ;      //31
  test_Value_32.sprintf("%01X",CTPISTEST_ThisNoStop_B1) ;      //32
  test_Value_33.sprintf("%01X",CTPISTEST_NextNoStop_B1) ;      //33
  test_Value_34.sprintf("%01X",CTPISTEST_OpenRightDoor_B1) ;      //34
  test_Value_35.sprintf("%01X",CTPISTEST_OpenLeftDoor_B1) ;      //35

  test_Value_36.sprintf("%04X",Change_BigEen(CTPISTEST_StartStationID_U16)) ;      //36
  test_Value_3b.sprintf("%05d",Change_BigEen(CTPISTEST_StartStationID_U16)) ;      //36

  test_Value_37.sprintf("%04X",Change_BigEen(CTPISTEST_FinalStationID_U16)) ;      //37
  test_Value_3c.sprintf("%05d",Change_BigEen(CTPISTEST_FinalStationID_U16)) ;      //37

  test_Value_38.sprintf("%04X",Change_BigEen(CTPISTEST_NextStationID_U16)) ;      //38
  test_Value_3d.sprintf("%05d",Change_BigEen(CTPISTEST_NextStationID_U16)) ;      //38

  test_Value_3a.sprintf("%04X",Change_BigEen(CTPISTEST_DistanceToNextStation_U16)) ;      //3a
  test_Value_39.sprintf("%05d",Change_BigEen(CTPISTEST_DistanceToNextStation_U16)) ;      //3a

  test_Value_41 ="--";           //41
  test_Value_42 ="--";           //42
  test_Value_43 ="--";           //43
  test_Value_44 ="--";           //44
  test_Value_45 ="--";           //45
  test_Value_46 ="--";           //46
  test_Value_47 ="--";           //47
  test_Value_48 ="--";           //48
  test_Value_49 ="--";           //49
  test_Value_4a ="--";           //4a
  test_Value_4b ="--";           //48
  test_Value_4c ="--";           //49
  test_Value_4d ="--";           //4a

  test_Value_51.sprintf("%01X",PISTEST1CT_RunDirection_B1) ;      //51
  test_Value_52.sprintf("%01X",PISTEST1CT_ThisNoStop_B1) ;      //52
  test_Value_53.sprintf("%01X",PISTEST1CT_NextNoStop_B1);      //53
  test_Value_54.sprintf("%01X",PISTEST1CT_OpenRightDoor_B1) ;      //54
  test_Value_55.sprintf("%01X",PISTEST1CT_OpenLeftDoor_B1) ;      //55

  test_Value_56.sprintf("%04X",Change_BigEen(PISTEST1CT_StartStationID_U16)) ;      //56
  test_Value_5b.sprintf("%05d",Change_BigEen(PISTEST1CT_StartStationID_U16)) ;      //56

  test_Value_57.sprintf("%04X",Change_BigEen(PISTEST1CT_FinalStationID_U16)) ;      //57
  test_Value_5c.sprintf("%05d",Change_BigEen(PISTEST1CT_FinalStationID_U16)) ;      //57

  test_Value_58.sprintf("%04X",Change_BigEen(PISTEST1CT_NextStationID_U16)) ;      //58
  test_Value_5d.sprintf("%05d",Change_BigEen(PISTEST1CT_NextStationID_U16)) ;      //58

  test_Value_5a ="--";      //5a
  test_Value_59 ="--";      //5a

  test_Value_61.sprintf("%01X",PISTEST2CT_RunDirection_B1) ;      //61
  test_Value_62.sprintf("%01X",PISTEST2CT_ThisNoStop_B1) ;      //62
  test_Value_63.sprintf("%01X",PISTEST2CT_NextNoStop_B1) ;      //63
  test_Value_64.sprintf("%01X",PISTEST2CT_OpenRightDoor_B1) ;      //64
  test_Value_65.sprintf("%01X",PISTEST2CT_OpenLeftDoor_B1)  ;      //65

  test_Value_66.sprintf("%04X",Change_BigEen(PISTEST2CT_StartStationID_U16)) ;      //66
  test_Value_6b.sprintf("%05d",Change_BigEen(PISTEST2CT_StartStationID_U16)) ;      //66

  test_Value_67.sprintf("%04X",Change_BigEen(PISTEST2CT_FinalStationID_U16)) ;      //67
  test_Value_6c.sprintf("%05d",Change_BigEen(PISTEST2CT_FinalStationID_U16)) ;      //67

  test_Value_68.sprintf("%04X",Change_BigEen(PISTEST2CT_NextStationID_U16)) ;      //68
  test_Value_6d.sprintf("%05d",Change_BigEen(PISTEST2CT_NextStationID_U16)) ;      //68

  test_Value_6a ="--";      //6a
  test_Value_69 ="--";      //6a


((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_1))->SetCtrlText(test_Value_11);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_2))->SetCtrlText(test_Value_12);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_3))->SetCtrlText(test_Value_13);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_4))->SetCtrlText(test_Value_14);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_5))->SetCtrlText(test_Value_15);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_6))->SetCtrlText(test_Value_16);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_7))->SetCtrlText(test_Value_17);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_8))->SetCtrlText(test_Value_18);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_9))->SetCtrlText(test_Value_19);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_a))->SetCtrlText(test_Value_1a);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_b))->SetCtrlText(test_Value_1b);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_c))->SetCtrlText(test_Value_1c);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_1_d))->SetCtrlText(test_Value_1d);

((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_1))->SetCtrlText(test_Value_21);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_2))->SetCtrlText(test_Value_22);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_3))->SetCtrlText(test_Value_23);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_4))->SetCtrlText(test_Value_24);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_5))->SetCtrlText(test_Value_25);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_6))->SetCtrlText(test_Value_26);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_7))->SetCtrlText(test_Value_27);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_8))->SetCtrlText(test_Value_28);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_9))->SetCtrlText(test_Value_29);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_a))->SetCtrlText(test_Value_2a);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_b))->SetCtrlText(test_Value_2b);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_c))->SetCtrlText(test_Value_2c);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_2_d))->SetCtrlText(test_Value_2d);

((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_1))->SetCtrlText(test_Value_31);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_2))->SetCtrlText(test_Value_32);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_3))->SetCtrlText(test_Value_33);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_4))->SetCtrlText(test_Value_34);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_5))->SetCtrlText(test_Value_35);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_6))->SetCtrlText(test_Value_36);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_7))->SetCtrlText(test_Value_37);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_8))->SetCtrlText(test_Value_38);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_9))->SetCtrlText(test_Value_39);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_a))->SetCtrlText(test_Value_3a);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_b))->SetCtrlText(test_Value_3b);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_c))->SetCtrlText(test_Value_3c);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_3_d))->SetCtrlText(test_Value_3d);


((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_1))->SetCtrlText(test_Value_41);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_2))->SetCtrlText(test_Value_42);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_3))->SetCtrlText(test_Value_43);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_4))->SetCtrlText(test_Value_44);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_5))->SetCtrlText(test_Value_45);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_6))->SetCtrlText(test_Value_46);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_7))->SetCtrlText(test_Value_47);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_8))->SetCtrlText(test_Value_48);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_9))->SetCtrlText(test_Value_49);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_a))->SetCtrlText(test_Value_4a);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_b))->SetCtrlText(test_Value_4b);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_c))->SetCtrlText(test_Value_4c);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_4_d))->SetCtrlText(test_Value_4d);

((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_1))->SetCtrlText(test_Value_51);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_2))->SetCtrlText(test_Value_52);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_3))->SetCtrlText(test_Value_53);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_4))->SetCtrlText(test_Value_54);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_5))->SetCtrlText(test_Value_55);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_6))->SetCtrlText(test_Value_56);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_7))->SetCtrlText(test_Value_57);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_8))->SetCtrlText(test_Value_58);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_9))->SetCtrlText(test_Value_59);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_a))->SetCtrlText(test_Value_5a);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_b))->SetCtrlText(test_Value_5b);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_c))->SetCtrlText(test_Value_5c);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_5_d))->SetCtrlText(test_Value_5d);

((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_1))->SetCtrlText(test_Value_61);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_2))->SetCtrlText(test_Value_62);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_3))->SetCtrlText(test_Value_63);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_4))->SetCtrlText(test_Value_64);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_5))->SetCtrlText(test_Value_65);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_6))->SetCtrlText(test_Value_66);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_7))->SetCtrlText(test_Value_67);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_8))->SetCtrlText(test_Value_68);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_9))->SetCtrlText(test_Value_69);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_a))->SetCtrlText(test_Value_6a);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_b))->SetCtrlText(test_Value_6b);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_c))->SetCtrlText(test_Value_6c);
((CLabel *) GetDlgItem(ID_PIBATCTEST_LABEL_6_d))->SetCtrlText(test_Value_6d);


//    updateTrain(ID_PIBATCTEST_TRAIN);
//    updateArrow(ID_PIBATCTEST_ARROW_LEFT,ID_PIBATCTEST_ARROW_RIGHT);

//    updateErrorLine(ID_PIBATCTEST_TRAIN);
}

void C_Debug_ATCTest::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

 //   ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATOMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
//   // ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_TOWMODE))->SetBorderColor(Qt::white);

   // ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->m_bAutoUpState = false;
}

void C_Debug_ATCTest::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("空调设置"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));

        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("运   行"));
      ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("维  修"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("调  试"));
    //    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
    //    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
    //    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
    //    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
    //    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
#else
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
////    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("紧急广播"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

//    ACU_test_timer = 3;
//    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮

    //this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
    void C_Debug_ATCTest::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Debug_ATCTest::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_MAINTAIN);
    }

    void C_Debug_ATCTest::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_DEBUGMAIN);
    }

    void C_Debug_ATCTest::OnComBtn4Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS2);
       // ChangePage(PAGE_INDEX_TCUBLOCKREASON);
    }

    void C_Debug_ATCTest::OnComBtn5Clk()
    {
         //ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Debug_ATCTest::OnComBtn6Clk()
    {
        //ChangePage(PAGE_INDEX_FASPage);
    }
    void C_Debug_ATCTest::OnComBtn7Clk()
    {
        //ChangePage(PAGE_INDEX_PISALARM);
    }

    void C_Debug_ATCTest::OnComBtn8Clk()
    {
        //ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void C_Debug_ATCTest::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Debug_ATCTest::OnComBtn2Clk()
    {

    }

    void C_Debug_ATCTest::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Debug_ATCTest::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Debug_ATCTest::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Debug_ATCTest::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif
