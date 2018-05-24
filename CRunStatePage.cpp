#include "CRunStatePage.h"
#include "CRealTimeFaultsWarnningDialog.h"


ROMDATA g_PicRom_RunState[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8(" 运    行") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("运行") )
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_LEFT                 },

    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBRUNSTATE_TRAIN         },
  //  {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("        运    行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_V        },

    {QObject::trUtf8("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBRUNSTATE_ICON_WARNNING       },

    {QObject::trUtf8("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_SPEED        },

    {QObject::trUtf8("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG        },
//    {QObject::trUtf8("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL2_ARRIVETERMINALFLAG        },
    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_LEFT         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2        },

#endif


    {"",                       D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {"",                       D_FONT_BOLD(6),      QRect(175, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(250, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(325, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(475, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(550, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(625, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(699, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(200, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700-1, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

{QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::tr("1"),                   D_FONT_BOLD(6),      QRect(101, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 151,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(201, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(301, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(401, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(501, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(601, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },


    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_ATOMODE   },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_NETMODE         },
    {QObject::trUtf8("逆变模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WASHCARMODE         },
   // {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TOWMODE         },

    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE         },
//    {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },
    {QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_FASPAGE         },
    {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },

    {QObject::trUtf8("旁路"),          D_FONT_BOLD(8),      QRect( 720, 190, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_ByPass         },
    {QObject::trUtf8("烟火"),          D_FONT_BOLD(8),      QRect(720, 250, 60,  40),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_FAS_status         },
    {QObject::trUtf8("电制动\n已切除"),   D_FONT_BOLD(8),      QRect(720, 310, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_DisEBTest         },


    {QObject::trUtf8("辅助状态"),        D_FONT_BOLD(6),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("376 V"),                 D_FONT_BOLD(6),      QRect(103, 185,  94, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(178, 182,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(203, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(303, 185,  94, 21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("扩展供电"),               D_FONT_BOLD(6),      QRect(403, 182,  94, 27),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(503, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(553, 182,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("380 V"),                 D_FONT_BOLD(6),      QRect(603, 185,  93, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V        },

    {QObject::trUtf8("牵引系统状态"),      D_FONT_BOLD(6),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),          D_FONT_BOLD(8),      QRect(103, 213,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TCU_ENABLE1        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(178, 213,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(203, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(303, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(403, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(503, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(553, 213,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE        },
    {QObject::trUtf8("--"),          D_FONT_BOLD(8),      QRect(603, 213,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TCU_ENABLE2        },

    {"",                       D_FONT_BOLD(6),      QRect(150, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(288, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(663, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("制动缸压力"),        D_FONT_BOLD(6),      QRect( 11, 241,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("4.1"),              D_FONT_BOLD(6),      QRect(104, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(154, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(179, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE1        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(216, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(204, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1        },
    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(254, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(304, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(354, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(404, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1        },
    {QObject::trUtf8("3.9"),              D_FONT_BOLD(6),      QRect(454, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(504, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1        },
    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(554, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(554, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUPRESSURE1        },
//    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(591, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(604, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1        },
    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(654, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2        },
 //  {QObject::trUtf8("65"),               D_FONT_BOLD(6),      QRect(680, 244,  40, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_NUM1        },
//  {QObject::trUtf8("65"),               D_FONT_BOLD(6),      QRect(680, 274,  40, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_NUM2        },


    {QObject::trUtf8("制动隔离"),          D_FONT_BOLD(6),      QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(104, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(154, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(179, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE1        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(216, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(204, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(254, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(304, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(354, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(404, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(454, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(504, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(554, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE2        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(554, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUSEPARATE1        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(591, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(604, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(654, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE2        },



{QObject::trUtf8("1侧门"),            D_FONT_BOLD(6),      QRect( 11, 301,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(103, 305,  12, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR9        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(103, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(127, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(151, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(175, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR7        },

{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(203, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(227, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(251, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(275, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR7        },

{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(303, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(327, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(351, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(375, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR7        },

{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(403, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(427, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(451, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(475, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR2        },

{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(503, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(527, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(551, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(575, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR2        },

//{QObject::trUtf8("21"),                D_FONT_BOLD(4),      QRect(478, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR1        },
//{QObject::trUtf8("22"),                D_FONT_BOLD(4),      QRect(496, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR3        },
//{QObject::trUtf8("23"),                D_FONT_BOLD(4),      QRect(514, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR5        },
//{QObject::trUtf8("24"),                D_FONT_BOLD(4),      QRect(532, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR7        },
//{QObject::trUtf8("25"),                D_FONT_BOLD(4),      QRect(553, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR1        },
//{QObject::trUtf8("26"),                D_FONT_BOLD(4),      QRect(571, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR3        },
//{QObject::trUtf8("27"),                D_FONT_BOLD(4),      QRect(589, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR5        },
//{QObject::trUtf8("28"),                D_FONT_BOLD(4),      QRect(607, 305,  17, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR7        },

{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(603, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(627, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(651, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(675, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR2        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(687, 305,  12, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR10        },

{QObject::trUtf8("2侧门"),            D_FONT_BOLD(6),      QRect( 11, 331,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(103, 335,  12, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1DOOR10        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(103, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(127, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(151, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(175, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR8        },

{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(203, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(227, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(251, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(275, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR8        },

{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(303, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(327, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(351, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(375, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR8        },

{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(403, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(427, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(451, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(475, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR1        },

{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(503, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(527, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(551, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(575, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR1        },

//{QObject::trUtf8("21"),                D_FONT_BOLD(4),      QRect(603, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR2        },
//{QObject::trUtf8("22"),                D_FONT_BOLD(4),      QRect(627, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR4        },
//{QObject::trUtf8("23"),                D_FONT_BOLD(4),      QRect(651, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR6        },
//{QObject::trUtf8("24"),                D_FONT_BOLD(4),      QRect(675, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DOOR8        },

//{QObject::trUtf8("25"),                D_FONT_BOLD(4),      QRect(553, 335,  17, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR2        },
//{QObject::trUtf8("26"),                D_FONT_BOLD(4),      QRect(571, 335,  17, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR4        },
//{QObject::trUtf8("27"),                D_FONT_BOLD(4),      QRect(589, 335,  17, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR6        },
//{QObject::trUtf8("28"),                D_FONT_BOLD(4),      QRect(607, 335,  17, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DOOR8        },

{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(603, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(627, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(651, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(675, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR1        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(687, 335,  12, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR9        },

{QObject::trUtf8("车内温度℃"),        D_FONT_BOLD(6),      QRect( 11, 361,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(103, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP        },
//    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(178, 363,  70, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(203, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(303, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(403, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(503, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP        },
//    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(553, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(603, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP        },


//    {"",                       D_FONT_BOLD(6),      QRect(138, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(213, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(288, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(363, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(438, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(513, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(588, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(663, 390,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {"",                       D_FONT_BOLD(6),      QRect(138, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(213, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(288, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(363, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(438, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(513, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(588, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(663, 450,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },



//    {QObject::trUtf8("4.1"),              D_FONT_BOLD(6),      QRect(104, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(141, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(179, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(216, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(254, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1        },
//    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(291, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(329, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(366, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(404, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1        },
//    {QObject::trUtf8("3.9"),              D_FONT_BOLD(6),      QRect(441, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(479, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1        },
//    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(516, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(554, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7ASPRESSURE1        },
//    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(591, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7ASPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(629, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8ASPRESSURE1        },
//    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(666, 394,  32, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8ASPRESSURE2        },

{QObject::trUtf8("空压机状态"),           D_FONT_BOLD(6),      QRect( 11, 391,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(103, 394,  94, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(178, 392,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(203, 392,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(303, 392,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(403, 392,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(503, 392,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(553, 392,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(603, 394,  94, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6AIRCOMPRESSORSTATE        },

{QObject::trUtf8("停放制动"),          D_FONT_BOLD(6),      QRect( 11, 421,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("(P)"),              D_FONT_BOLD(6),      QRect(103, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE        },
//    {QObject::trUtf8("--"),              D_FONT_BOLD(6),      QRect(203, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE        },
//    {QObject::trUtf8("--"),              D_FONT_BOLD(6),      QRect(303, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE        },
//    {QObject::trUtf8("--"),              D_FONT_BOLD(6),      QRect(403, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE        },
//    {QObject::trUtf8("--"),              D_FONT_BOLD(6),      QRect(503, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE        },

    {QObject::trUtf8("(P)"),              D_FONT_BOLD(6),      QRect(203, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE        },
    {QObject::trUtf8("(P)"),              D_FONT_BOLD(6),      QRect(303, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE        },
    {QObject::trUtf8("(P)"),              D_FONT_BOLD(6),      QRect(403, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE        },
    {QObject::trUtf8("(P)"),              D_FONT_BOLD(6),      QRect(503, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE        },
    {QObject::trUtf8("(P)"),              D_FONT_BOLD(6),      QRect(603, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE        },

   {QObject::trUtf8("乘车率"),          D_FONT_BOLD(6),      QRect( 11, 451,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(103, 457,  94,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE        },
  //  {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(153, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(178, 454,  70,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR2RIDINGRATE        },
 //   {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(228, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(203, 457,  94,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE        },
 //   {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(303, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(303, 457,  94,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE        },
 //   {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(358, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(403, 457,  94,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE        },
 //   {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(453, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(503, 457,  94,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE        },
 //   {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(528, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(553, 454,  70,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR7RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(603, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(603, 457,  94,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE        },
 //   {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(678, 454,  13,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },


};
int g_RunStateRomLen = sizeof(g_PicRom_RunState)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunStatePage,CPage)
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
#endif
        ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_FASPAGE, OnFASpageBtnClk)
 //       ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
       ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST, OnBroadCastBtnClk)
        ON_BTNCLK(ID_PIBRUNSTATE_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
END_MESSAGE_MAP()

CRunStatePage::CRunStatePage()
{
}

void CRunStatePage::OnUpdatePage()
{
    updateTrain(ID_PIBRUNSTATE_TRAIN);
    updateArrow(ID_PIBRUNSTATE_ARROW_LEFT,ID_PIBRUNSTATE_ARROW_RIGHT);
  //  UpdateCommInterrupt(ID_PIBRUNSTATE_INTERRUPT);

     UpdateCompressorStatus();
     UpdateTCUStatus();
     UpdateBCUPressure();
     UpdatePlaceStatus();
     UpdateBCUSeparater();
     UpdateNETMode();
     UpdateATOMode();
     UpdateTcu_Enable();
     UpdateCarTem();
     UpdateDoor();
     UpdateACU();
     UpdateRidingRate();
     UpdateContravariant();
     UpdateWashCarMode();
     UpdateTowMode();
     UpdateFAS_status_Hide();
     UpdateByPass_Hide();
     UpdateDisEBTest();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    updateArrFinalStation();

    updateErrorLine(ID_PIBRUNSTATE_TRAIN);



    //     UpdateWarning();
    //     UpdateASPressure();
    //     UpdateStation();

}

void CRunStatePage::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif


    
   // ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_FASPAGE))->m_bAutoUpState = false;
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->SetBorderColor(Qt::white);

    //   time setting
//    static int flg = 0;
//    if(flg != Bit(CCU_HMI_222_9, 8 ) && Bit(CCU_HMI_222_9, 8 )!=0)
//    {
//        ATC_time_temp1 = 2000+CCU_HMI_221_10%256;
//        ATC_time_temp2 = CCU_HMI_221_10/256;
//        ATC_time_temp3 = CCU_HMI_221_11%256;
//        ATC_time_temp4 = CCU_HMI_221_11/256;
//        ATC_time_temp5 = CCU_HMI_221_12%256;
//        ATC_time_temp6 = CCU_HMI_221_12/256;
//        SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
//    }
//    flg = Bit(CCU_HMI_222_9, 8 );



}

void CRunStatePage::OnShowPage()
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

    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    UpdateEmergencyBroadcast();
    this->InitPageHeader();
}

void CRunStatePage::updateArrFinalStation()
{

#ifdef PAGE_HEADER_OLD

    if(run_status_data3 == run_status_data6)
        arrive_final_station = 1;
    else
        arrive_final_station = 0;

    if (Bit(arrive_final_station,1))
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->ShowLabel();
    else
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->HideLabel();

#endif

}
#ifdef PAGE_BUTTON_BAR_NEW
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CRunStatePage::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {

    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif


void CRunStatePage::OnBroadCastBtnClk()
{
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}


void CRunStatePage::UpdateACU()
{
    //CTHM_Tc1ACUOn_B1	TC1车ACU在线
    if (CTHM_SIV1_Online_B1  )
    {
        //Bit( ACU_611_7, 16 )=AXiCT_MajorFlt_B1    至少一个重大故障存在(故障可以通过一个维护操作复位)
        //Bit( ACU_611_7, 15 )=AXiCT_MediumFlt_B1   至少一个中等故障存在(司机通过DDU可复位故障)
        //Bit( ACU_610_8, 6 )=AXiCT_RevMode_B1	    ACU处于紧急通风状态

         if (SIV1CT_StartSiv_B1 )
        {
             ACU_status1 = 0;
        }
        else
        {
            ACU_status1 = 4;

        }
    }
    else
    {
        ACU_status1 = 5;
    }

    if (CTHM_SIV2_Online_B1 )
    {
        if (SIV2CT_StartSiv_B1 )
       {
            ACU_status2 = 0;
       }
       else
       {
           ACU_status2 = 4;

       }
    }
    else
    {
        ACU_status2 = 5;
    }


    if ( 0 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(SIV1CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 1 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText("");

    }
    if ( 2 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(SIV1CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 3 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText("");
    }

    if ( 0 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QString::number(SIV2CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 1 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");

    }
    if ( 2 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QString::number(SIV2CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 3 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
    }


    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V, ACU_status1);
    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V, ACU_status2);



    // KAUX
    int kaux_color = 0;
    //Bit(DI_140_1,2)=DICT_KAUXFdMp3_B1    	KAUX feedback	K-AUX反馈信号(仅Mp3车)
    if (RIOM4CT_DIM1DI6_B1)
    {
        kaux_color = 1;
    }
    else
    {

            kaux_color = 0;


    }
    //kaux_color = 1;
    SetKauxLabelColor(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE, kaux_color);

}

void CRunStatePage::UpdateCompressorStatus()
{
    if (RIOM1CT_DIM2DI11_B1)
    {
        CompressorStarted1 = 1;
    }
    else
    {
        CompressorStarted1 = 0;
    }
    if (RIOM6CT_DIM2DI11_B1)
    {
        CompressorStarted2 = 1;
    }
    else
    {
        CompressorStarted2 = 0;
    }

    SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE, CompressorStarted1);
    SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6AIRCOMPRESSORSTATE, CompressorStarted2);
}

void CRunStatePage::UpdateTCUStatus()
{

    if(CTHM_DCU2_Online_B1)
    {
        {
            TCU2_status=1;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(DR1CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR1CT_VVVFCutOffState_B1)
        {
            TCU2_status=5;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU2_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_DCU3_Online_B1)
    {
        {
            TCU3_status=1;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(DR2CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR2CT_VVVFCutOffState_B1)
        {
            TCU3_status=5;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU3_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_DCU4_Online_B1)
    {
        {
            TCU4_status=1;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(DR3CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR3CT_VVVFCutOffState_B1)
        {
            TCU4_status=5;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU4_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_DCU5_Online_B1)
    {
        {
            TCU5_status=1;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(DR4CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR4CT_VVVFCutOffState_B1)
        {
            TCU5_status=5;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU5_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
    }

//  SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//  SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE, TCU6_status);


}

void CRunStatePage::UpdateBCUPressure()
{
    int BCU1_pressure_color  = 0;
    int BCU2_pressure_color  = 0;
    int BCU3_pressure_color  = 0;
    int BCU4_pressure_color  = 0;
    int BCU5_pressure_color  = 0;
    int BCU6_pressure_color  = 0;
    int BCU7_pressure_color  = 0;
    int BCU8_pressure_color  = 0;
    int BCU9_pressure_color  = 0;
    int BCU10_pressure_color = 0;
    int BCU11_pressure_color = 0;
    int BCU12_pressure_color = 0;



    Brake_cylinder_pressure1 = BCU1CT_BRK_cyl_pressure_1_U16*0.05/100;
    Brake_cylinder_pressure2 = BCU1CT_BRK_cyl_pressure_2_U16*0.05/100;
    Brake_cylinder_pressure3 = BCU1CT_BRK_cyl_pressure_3_U16*0.05/100;
    Brake_cylinder_pressure4 = BCU1CT_BRK_cyl_pressure_4_U16*0.05/100;
    Brake_cylinder_pressure5 = BCU1CT_BRK_cyl_pressure_5_U16*0.05/100;
    Brake_cylinder_pressure6 = BCU1CT_BRK_cyl_pressure_6_U16*0.05/100;
    Brake_cylinder_pressure7 = BCU3CT_BRK_cyl_pressure_1_U16*0.05/100;
    Brake_cylinder_pressure8 = BCU3CT_BRK_cyl_pressure_2_U16*0.05/100;
    Brake_cylinder_pressure9 = BCU3CT_BRK_cyl_pressure_3_U16*0.05/100;
    Brake_cylinder_pressure10 =BCU3CT_BRK_cyl_pressure_4_U16*0.05/100;
    Brake_cylinder_pressure11 =BCU3CT_BRK_cyl_pressure_5_U16*0.05/100;
    Brake_cylinder_pressure12 =BCU3CT_BRK_cyl_pressure_6_U16*0.05/100;




    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure5,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure6,'f',2));

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure12,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure11,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure10,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure9,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure8,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure7,'f',2));


    if (CTHM_BCU1_Online_B1||CTHM_BCU2_Online_B1)
    {

        BCU1_pressure_color = 0;
        BCU2_pressure_color = 0;
        BCU3_pressure_color = 0;
        BCU4_pressure_color = 0;
        BCU5_pressure_color = 0;
        BCU6_pressure_color = 0;

        if (BCU1CT_BRK_cyl_pressure_1_Active_B1)
        {
            BCU1_pressure_color = 0;
        }
        else
        {
            BCU1_pressure_color = 2;
        }

        if (BCU1CT_BRK_cyl_pressure_2_Active_B1)
        {
            BCU2_pressure_color = 0;
        }
        else
        {
            BCU2_pressure_color = 2;
        }

        if (BCU1CT_BRK_cyl_pressure_3_Active_B1)
        {
            BCU3_pressure_color = 0;
        }
        else
        {
            BCU3_pressure_color = 2;
        }

        if (BCU1CT_BRK_cyl_pressure_4_Active_B1)
        {
            BCU4_pressure_color = 0;
        }
        else
        {
            BCU4_pressure_color = 2;
        }

        if (BCU1CT_BRK_cyl_pressure_5_Active_B1)
        {
            BCU5_pressure_color = 0;
        }
        else
        {
            BCU5_pressure_color = 2;
        }

        if (BCU1CT_BRK_cyl_pressure_6_Active_B1)
        {
            BCU6_pressure_color = 0;
        }
        else
        {
            BCU6_pressure_color = 2;
        }


    }
    else
    {
        BCU1_pressure_color = 2;
        BCU2_pressure_color = 2;
        BCU3_pressure_color = 2;
        BCU4_pressure_color = 2;
        BCU5_pressure_color = 2;
        BCU6_pressure_color = 2;


    }

    if (CTHM_BCU3_Online_B1||CTHM_BCU4_Online_B1)
    {
        BCU7_pressure_color = 0;
        BCU8_pressure_color = 0;
        BCU9_pressure_color = 0;
        BCU10_pressure_color = 0;
        BCU11_pressure_color = 0;
        BCU12_pressure_color = 0;

        if (BCU3CT_BRK_cyl_pressure_1_Active_B1)
        {
            BCU7_pressure_color = 0;
        }
        else
        {
            BCU7_pressure_color = 2;
        }

        if (BCU3CT_BRK_cyl_pressure_2_Active_B1)
        {
            BCU8_pressure_color = 0;
        }
        else
        {
            BCU8_pressure_color = 2;
        }

        if (BCU3CT_BRK_cyl_pressure_3_Active_B1)
        {
            BCU9_pressure_color = 0;
        }
        else
        {
            BCU9_pressure_color = 2;
        }

        if (BCU3CT_BRK_cyl_pressure_4_Active_B1)
        {
            BCU10_pressure_color = 0;
        }
        else
        {
            BCU10_pressure_color = 2;
        }

        if (BCU3CT_BRK_cyl_pressure_5_Active_B1)
        {
            BCU11_pressure_color = 0;
        }
        else
        {
            BCU11_pressure_color = 2;
        }

        if (BCU3CT_BRK_cyl_pressure_6_Active_B1)
        {
            BCU12_pressure_color = 0;
        }
        else
        {
            BCU12_pressure_color = 2;
        }

    }
    else
    {
        BCU7_pressure_color = 2;
        BCU8_pressure_color = 2;
        BCU9_pressure_color = 2;
        BCU10_pressure_color = 2;
        BCU11_pressure_color = 2;
        BCU12_pressure_color = 2;

    }


    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1, BCU1_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2, BCU2_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1, BCU3_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2, BCU4_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1, BCU5_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2, BCU6_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1, BCU12_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2, BCU11_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1, BCU10_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2, BCU9_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1, BCU8_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2, BCU7_pressure_color);


}

void CRunStatePage::UpdateWarning()
{
//    int warning1_color  = 0;
//    int warning2_color  = 0;
//    int warning3_color  = 0;
//    int warning4_color  = 0;
//    int warning5_color  = 0;
//    int warning6_color  = 0;
//    int warning7_color  = 0;
//    int warning8_color  = 0;
//    int warning9_color  = 0;
//    int warning10_color = 0;
//    int warning11_color = 0;
//    int warning12_color = 0;
//    int warning13_color = 0;
//    int warning14_color = 0;
//    int warning15_color = 0;
//    int warning16_color = 0;


//    if (Bit( PIS_Master_9i1_4, 9) == 0)
//    {
//        warning1_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 9) == 1)
//    {
//        warning1_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 11) == 0)
//    {
//        warning2_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 11) == 1)
//    {
//        warning2_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 13) == 0)
//    {
//        warning3_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 13) == 1)
//    {
//        warning3_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 15) == 0)
//    {
//        warning4_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 15) == 1)
//    {
//        warning4_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 1) == 0)
//    {
//        warning5_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 1) == 1)
//    {
//        warning5_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 3) == 0)
//    {
//        warning6_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 3) == 1)
//    {
//        warning6_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 5) == 0)
//    {
//        warning7_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 5) == 1)
//    {
//        warning7_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 7) == 0)
//    {
//        warning8_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 7) == 1)
//    {
//        warning8_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 9) == 0)
//    {
//        warning9_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 9) == 1)
//    {
//        warning9_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 11) == 0)
//    {
//        warning10_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 11) == 1)
//    {
//        warning10_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 13) == 0)
//    {
//        warning11_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 13) == 1)
//    {
//        warning11_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 15) == 0)
//    {
//        warning12_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 15) == 1)
//    {
//        warning12_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 1) == 0)
//    {
//        warning13_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 1) == 1)
//    {
//        warning13_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 3) == 0)
//    {
//        warning14_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 3) == 1)
//    {
//        warning14_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 5) == 0)
//    {
//        warning15_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 5) == 1)
//    {
//        warning15_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 7) == 0)
//    {
//        warning16_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 7) == 1)
//    {
//        warning16_color = 1;
//    }

//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING1, warning1_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING2, warning2_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING1, warning3_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING2, warning4_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING1, warning5_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING2, warning6_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING1, warning7_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING2, warning8_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING1, warning9_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING2, warning10_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING1, warning11_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING2, warning12_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING1, warning13_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING2, warning14_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING1, warning15_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING2, warning16_color);

}

void CRunStatePage::UpdateASPressure()
{
    int AS1_pressure  = 0;
    int AS2_pressure  = 0;
    int AS3_pressure  = 0;
    int AS4_pressure  = 0;
    int AS5_pressure  = 0;
    int AS6_pressure  = 0;
    int AS7_pressure  = 0;
    int AS8_pressure  = 0;
    int AS9_pressure  = 0;
    int AS10_pressure = 0;
    int AS11_pressure = 0;
    int AS12_pressure = 0;

    BogieASP1 = DivNum(run_status_data77 , 10);
    BogieASP2 = DivNum(run_status_data78 , 10);
    BogieASP3 = DivNum(run_status_data79 , 10);
    BogieASP4 = DivNum(run_status_data80 , 10);
    BogieASP5 = DivNum(run_status_data81 , 10);
    BogieASP6 = DivNum(run_status_data82 , 10);
    BogieASP7 = DivNum(run_status_data88 , 10);
    BogieASP8 = DivNum(run_status_data87 , 10);
    BogieASP9 = DivNum(run_status_data86 , 10);
    BogieASP10 = DivNum(run_status_data85 , 10);
    BogieASP11 = DivNum(run_status_data84 , 10);
    BogieASP12 = DivNum(run_status_data83 , 10);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP1);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP2);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP3);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP4);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP5);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP6);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP7);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP8);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP9);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP10);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP11);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP12);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2))->SetCtrlText(buff);

    if (Bit( run_status_data89, 16) == 0)
    {
        AS1_pressure = 0;
    }
    else if (Bit( run_status_data89, 16) == 1)
    {
        AS1_pressure = 1;
    }

    if (Bit( run_status_data89, 15) == 0)
    {
        AS2_pressure = 0;
    }
    else if (Bit( run_status_data89, 15) == 1)
    {
        AS2_pressure = 1;
    }

    if (Bit( run_status_data89, 14) == 0)
    {
        AS3_pressure = 0;
    }
    else if (Bit( run_status_data89, 14) == 1)
    {
        AS3_pressure = 1;
    }

    if (Bit( run_status_data89, 13) == 0)
    {
        AS4_pressure = 0;
    }
    else if (Bit( run_status_data89, 13) == 1)
    {
        AS4_pressure = 1;
    }

    if (Bit( run_status_data89, 12) == 0)
    {
        AS5_pressure = 0;
    }
    else if (Bit( run_status_data89, 12) == 1)
    {
        AS5_pressure = 1;
    }

    if (Bit( run_status_data89, 11) == 0)
    {
        AS6_pressure = 0;
    }
    else if (Bit( run_status_data89, 11) == 1)
    {
        AS6_pressure = 1;
    }

    if (Bit( run_status_data89, 5) == 0)
    {
        AS7_pressure = 0;
    }
    else if (Bit( run_status_data89, 5) == 1)
    {
        AS7_pressure = 1;
    }

    if (Bit( run_status_data89, 6) == 0)
    {
        AS8_pressure = 0;
    }
    else if (Bit( run_status_data89, 6) == 1)
    {
        AS8_pressure = 1;
    }

    if (Bit( run_status_data89, 7) == 0)
    {
        AS9_pressure = 0;
    }
    else if (Bit( run_status_data89, 7) == 1)
    {
        AS9_pressure = 1;
    }

    if (Bit( run_status_data89, 8) == 0)
    {
        AS10_pressure = 0;
    }
    else if (Bit( run_status_data89, 8) == 1)
    {
        AS10_pressure = 1;
    }

    if (Bit( run_status_data89, 9) == 0)
    {
        AS11_pressure = 0;
    }
    else if (Bit( run_status_data89, 9) == 1)
    {
        AS11_pressure = 1;
    }

    if (Bit( run_status_data89, 10) == 0)
    {
        AS12_pressure = 0;
    }
    else if (Bit( run_status_data89, 10) == 1)
    {
        AS12_pressure = 1;
    }

    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1, AS1_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2, AS2_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1, AS3_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2, AS4_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1, AS5_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2, AS6_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1, AS7_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2, AS8_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1, AS9_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2, AS10_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1, AS11_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2, AS12_pressure);

}

void CRunStatePage::UpdatePlaceStatus()
{
    int Place1_status  = 0;
    int Place2_status  = 0;
    int Place3_status  = 0;
    int Place4_status  = 0;
    int Place5_status  = 0;
    int Place6_status  = 0;


    double Place_Brake_Pressure1=0;
    double Place_Brake_Pressure2=0;
    double Place_Brake_Pressure3=0;
    double Place_Brake_Pressure4=0;
    double Place_Brake_Pressure5=0;
    double Place_Brake_Pressure6=0;


        Place_Brake_Pressure1 = BCU1CT_Park_pressure_2_U16*0.05/100;//
        Place_Brake_Pressure2 = BCU1CT_Park_pressure_4_U16*0.05/100;
        Place_Brake_Pressure3 = BCU1CT_Park_pressure_6_U16*0.05/100;
        Place_Brake_Pressure4 = BCU3CT_Park_pressure_6_U16*0.05/100;
        Place_Brake_Pressure5 = BCU3CT_Park_pressure_4_U16*0.05/100;
        Place_Brake_Pressure6 = BCU3CT_Park_pressure_2_U16*0.05/100;


    // CTHM_Tc1DI1On_B1  TC1车DI3在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
    if(CTHM_BCU1_Online_B1||CTHM_BCU2_Online_B1)
    {
        //if(!((bool)BCU1CT_AllPbrReleased_PerCAN_B1))


        if (BCU1CT_Park_pressure_2_Atcive_B1)
        {
            if(Place_Brake_Pressure1>4.5)
            {
                Place1_status=1;
            }
            else
            {
                 Place1_status=0;
            }

        }
        else
        {
           Place1_status= 3;
        }

        if (BCU1CT_Park_pressure_4_Atcive_B1)
        {
            if(Place_Brake_Pressure2>4.5)
            {
                Place2_status=1;
            }
            else
            {
                 Place2_status=0;
            }
        }
        else
        {
             Place2_status=3;
        }

        if (BCU1CT_Park_pressure_6_Atcive_B1)
        {
            if(Place_Brake_Pressure3>4.5)
            {
                Place3_status=1;
            }
            else
            {
                 Place3_status=0;
            }
        }
        else
        {
            Place3_status=3;
        }


//        if(BCU1CT_AllPbrReleased_PerCAN_B1)
//        {
//            Place1_status=1;
//            Place2_status=1;
//            Place3_status=1;

//        }
//        else
//        {
//            Place1_status=0;
//            Place2_status=0;
//            Place3_status=0;

//        }

    }
    else
    {

            Place1_status=2;
            Place2_status=2;
            Place3_status=2;


    }


    if(CTHM_BCU3_Online_B1||CTHM_BCU4_Online_B1)
    {


        if (BCU3CT_Park_pressure_6_Atcive_B1)
        {
            if(Place_Brake_Pressure4>4.5)
            {
                Place4_status=1;
            }
            else
            {
                 Place4_status=0;
            }
        }
        else
        {
            Place4_status=3;
        }


        if (BCU3CT_Park_pressure_4_Atcive_B1)
        {
            if(Place_Brake_Pressure5>4.5)
            {
                Place5_status=1;
            }
            else
            {
                 Place5_status=0;
            }
        }
        else
        {
            Place5_status=3;
        }

        if (BCU3CT_Park_pressure_2_Atcive_B1)
        {
            if(Place_Brake_Pressure6>4.5)
            {
                Place6_status=1;
            }
            else
            {
                 Place6_status=0;
            }
        }
        else
        {
            Place6_status=3;
        }

//        if(BCU3CT_AllPbrReleased_PerCAN_B1)
//        {
//            Place6_status=1;
//            Place5_status=1;
//            Place4_status=1;
//        }
//        else
//        {

//            Place6_status=0;
//            Place5_status=0;
//            Place4_status=0;
//        }

    }
    else
    {

            Place6_status=2;
            Place5_status=2;
            Place4_status=2;



    }


SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE, Place1_status);
////    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR2PLACESTATE, Place2_status);
SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE, Place2_status);
SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE, Place3_status);
SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE, Place4_status);
SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE, Place5_status);
////    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR7PLACESTATE, Place7_status);
SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE, Place6_status);

//        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
//        if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
//            {
//                Place1_status=0;
//            }
//            else
//            {
//                Place1_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_11, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_11, 15 ))
//                {
//                    if(Bit( DI_110_2, 13) == 0)
//                    {
//                        Place1_status=0;
//                    }
//                    else
//                    {
//                        Place1_status=1;
//                    }
//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 8) == 0)
//                    {
//                        Place1_status=0;
//                    }
//                    else
//                    {
//                        Place1_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place1_status=2;
//            }

//        }

//        if(Bit(CCU_HMI_222_12, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_120_1, 14)==0) ||(Bit( BCU_TC1_413_423_11, 7)== 0))
//            {
//                Place2_status=0;
//            }
//            else
//            {
//                Place2_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 7 ))
//                {
//                    if(Bit( DI_120_1, 14) == 0)
//                    {
//                        Place2_status=0;
//                    }
//                    else
//                    {
//                        Place2_status=1;
//                    }
//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 7)== 0)
//                    {
//                        Place2_status=0;
//                    }
//                    else
//                    {
//                        Place2_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place2_status=2;
//            }

//        }

//        if(Bit(CCU_HMI_222_12, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_130_1, 14)==0 )||(Bit( BCU_TC1_413_423_11, 6)== 0))
//            {
//                Place3_status=0;
//            }
//            else
//            {
//                Place3_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 15 ))
//                {
//                    if(Bit( DI_130_1, 14) == 0)
//                    {
//                        Place3_status=0;
//                    }
//                    else
//                    {
//                        Place3_status=1;
//                    }

//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 6)== 0)
//                    {
//                        Place3_status=0;
//                    }
//                    else
//                    {
//                        Place3_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place3_status=2;
//            }

//        }

//        if(Bit(CCU_HMI_222_13, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_140_1, 14)==0) ||(Bit( BCU_TC1_413_423_11, 5)== 0))
//            {
//                Place4_status=0;
//            }
//            else
//            {
//                Place4_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_13, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_13, 7 ))
//                {
//                    if(Bit( DI_140_1, 14) == 0)
//                    {
//                        Place4_status=0;
//                    }
//                    else
//                    {
//                        Place4_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 5)== 0)
//                    {
//                        Place4_status=0;
//                    }
//                    else
//                    {
//                        Place4_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place4_status=2;
//            }

//        }


//        if(Bit(CCU_HMI_222_13, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_150_1, 14)==0)|| (Bit( BCU_TC2_433_443_11, 5) == 0))
//            {
//                Place5_status=0;
//            }
//            else
//            {
//                Place5_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_13, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_13, 15 ))
//                {
//                    if(Bit( DI_150_1, 14)== 0)
//                    {
//                        Place5_status=0;
//                    }
//                    else
//                    {
//                        Place5_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if( Bit( BCU_TC2_433_443_11, 5) == 0)
//                    {
//                        Place5_status=0;
//                    }
//                    else
//                    {
//                        Place5_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place5_status=2;
//            }
//        }

//        if(Bit(CCU_HMI_222_14, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_160_1, 14)==0)|| (Bit( BCU_TC2_433_443_11, 6)== 0))
//            {
//                Place6_status=0;
//            }
//            else
//            {
//                Place6_status=1;
//            }
//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_14, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_14, 7 ))
//                {
//                    if(Bit( DI_160_1, 14)== 0)
//                    {
//                        Place6_status=0;
//                    }
//                    else
//                    {
//                        Place6_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if( Bit( BCU_TC2_433_443_11, 6)== 0)
//                    {
//                        Place6_status=0;
//                    }
//                    else
//                    {
//                        Place6_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place6_status=2;
//            }
//        }

//        if(Bit(CCU_HMI_222_14, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_170_1, 14)==0) || (Bit( BCU_TC2_433_443_11, 7) == 0))
//            {
//                Place7_status=0;
//            }
//            else
//            {
//                Place7_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_14, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_14, 15 ))
//                {
//                    if(Bit( DI_170_1, 14)  == 0)
//                    {
//                        Place7_status=0;
//                    }
//                    else
//                    {
//                        Place7_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if( Bit( BCU_TC2_433_443_11, 7) == 0)
//                    {
//                        Place7_status=0;
//                    }
//                    else
//                    {
//                        Place7_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place7_status=2;
//            }
//        }

//        if(Bit(CCU_HMI_222_15, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_180_2, 13)==0) || (Bit( BCU_TC2_433_443_11, 8)== 0))
//            {
//                Place8_status=0;
//            }
//            else
//            {
//                Place8_status=1;
//            }
//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_15, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_15, 7 ))
//                {
//                    if(Bit( DI_180_2, 13) == 0)
//                    {
//                        Place8_status=0;
//                    }
//                    else
//                    {
//                        Place8_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if(Bit( BCU_TC2_433_443_11, 8)== 0)
//                    {
//                        Place8_status=0;
//                    }
//                    else
//                    {
//                        Place8_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place8_status=2;
//            }
//        }


//    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE, Place1_status);
////    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR2PLACESTATE, Place2_status);
//    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE, Place3_status);
//    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE, Place4_status);
//    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE, Place5_status);
//    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE, Place6_status);
////    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR7PLACESTATE, Place7_status);
//    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE, Place8_status);

}

void CRunStatePage::UpdateBCUSeparater()
{
    int CAR1_Bogie1_separater  = 0;
    int CAR1_Bogie2_separater  = 0;
    int CAR2_Bogie1_separater  = 0;
    int CAR2_Bogie2_separater  = 0;
    int CAR3_Bogie1_separater  = 0;
    int CAR3_Bogie2_separater  = 0;
    int CAR4_Bogie1_separater  = 0;
    int CAR4_Bogie2_separater  = 0;
    int CAR5_Bogie1_separater  = 0;
    int CAR5_Bogie2_separater = 0;
    int CAR6_Bogie1_separater = 0;
    int CAR6_Bogie2_separater = 0;
    int CAR7_Bogie1_separater  = 0;
    int CAR7_Bogie2_separater = 0;
    int CAR8_Bogie1_separater = 0;
    int CAR8_Bogie2_separater = 0;

    // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
    if(CTHM_RIOM1_DIM4_IsOnline_B1)
    {
        if(RIOM1CT_DIM4DI12_B1)
        {
            CAR1_Bogie1_separater=1;
        }
        else
        {
            CAR1_Bogie1_separater=0;
        }
        if(RIOM1CT_DIM4DI13_B1)
        {
            CAR1_Bogie2_separater=1;
        }
        else
        {
            CAR1_Bogie2_separater=0;
        }
    }
    else
    {
        CAR1_Bogie1_separater=2;
        CAR1_Bogie2_separater=2;
    }

    if(CTHM_RIOM2_DIM1_IsOnline_B1)
    {
        if(RIOM2CT_DIM1DI3_B1)
        {
            CAR2_Bogie1_separater=1;
        }
        else
        {
            CAR2_Bogie1_separater=0;
        }
        if(RIOM2CT_DIM1DI4_B1)
        {
            CAR2_Bogie2_separater=1;
        }
        else
        {
            CAR2_Bogie2_separater=0;
        }
    }
    else
    {
        CAR2_Bogie1_separater=2;
        CAR2_Bogie2_separater=2;
    }

    if(CTHM_RIOM3_DIM1_IsOnline_B1)
    {
        if(RIOM3CT_DIM1DI3_B1)
        {
            CAR3_Bogie1_separater=1;
        }
        else
        {
            CAR3_Bogie1_separater=0;
        }
        if(RIOM3CT_DIM1DI4_B1)
        {
            CAR3_Bogie2_separater=1;
        }
        else
        {
            CAR3_Bogie2_separater=0;
        }
    }
    else
    {
        CAR3_Bogie1_separater=2;
        CAR3_Bogie2_separater=2;
    }


    if(CTHM_RIOM4_DIM1_IsOnline_B1)
    {
        if(RIOM4CT_DIM1DI3_B1)
        {
            CAR4_Bogie1_separater=1;
        }
        else
        {
            CAR4_Bogie1_separater=0;
        }
        if(RIOM4CT_DIM1DI4_B1)
        {
            CAR4_Bogie2_separater=1;
        }
        else
        {
            CAR4_Bogie2_separater=0;
        }
    }
    else
    {
        CAR4_Bogie1_separater=2;
        CAR4_Bogie2_separater=2;
    }


    if(CTHM_RIOM5_DIM1_IsOnline_B1)
    {
        if(RIOM5CT_DIM1DI3_B1)
        {
            CAR5_Bogie1_separater=1;
        }
        else
        {
            CAR5_Bogie1_separater=0;
        }
        if(RIOM5CT_DIM1DI4_B1)
        {
            CAR5_Bogie2_separater=1;
        }
        else
        {
            CAR5_Bogie2_separater=0;
        }
    }
    else
    {
        CAR5_Bogie1_separater=2;
        CAR5_Bogie2_separater=2;
    }

    if(CTHM_RIOM6_DIM4_IsOnline_B1)
    {
        if(RIOM6CT_DIM4DI12_B1)
        {
            CAR6_Bogie1_separater=1;
        }
        else
        {
            CAR6_Bogie1_separater=0;
        }
        if(RIOM6CT_DIM4DI13_B1)
        {
            CAR6_Bogie2_separater=1;
        }
        else
        {
            CAR6_Bogie2_separater=0;
        }
    }
    else
    {
        CAR6_Bogie1_separater=2;
        CAR6_Bogie2_separater=2;
    }





    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1, CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2, CAR1_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1, CAR2_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2, CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1, CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2, CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE1, CAR4_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE2, CAR4_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE1, CAR5_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE2, CAR5_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE1, CAR6_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE2, CAR6_Bogie1_separater);
//    ((CLabel *)GetDlgItem( ID_PIBRUNSTATE_LABEL_NUM1))->SetCtrlText(QString::number(currency_data3));
//    ((CLabel *)GetDlgItem( ID_PIBRUNSTATE_LABEL_NUM2))->SetCtrlText(QString::number(currency_data3));

}

void CRunStatePage::UpdateNETMode()
{
    int modecolor = 0;

    if (CTHM_CCU1_IsOnline_B1|| CTHM_CCU2_IsOnline_B1)
    {

        if ( RIOM1CT_DIM4DI2_B1||RIOM6CT_DIM4DI2_B1)
        {
            net_mode = QObject::trUtf8("紧急运行\n模式");
            modecolor = 1;
        }
        else
        {
            net_mode = QObject::trUtf8("网络模式");
            modecolor = 0;
        }
    }
    else
    {
        net_mode = QObject::trUtf8("MVB\n网络异常");
        modecolor = 2;
    }

    GetDlgItem(ID_PIBRUNSTATE_LABEL_NETMODE)->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBRUNSTATE_LABEL_NETMODE, modecolor);
}

void CRunStatePage::UpdateATOMode()
{

   //首先判断两侧司机室 DIOM4 是否在线 ，如果两个DIOM4都不在线则显示通信异常
   if(CTHM_RIOM1_DIM4_IsOnline_B1 ||CTHM_RIOM6_DIM4_IsOnline_B1)
   {
            if((CTHM_RIOM1_DIM4_IsOnline_B1 &&CTHM_TC1CabActive_B1)||(CTHM_RIOM6_DIM4_IsOnline_B1 &&CTHM_TC2CabActive_B1))
            {
                   // Tc1车RIOM4在线且Tc1车司机钥匙激活
                   if(CTHM_RIOM1_DIM4_IsOnline_B1 &&CTHM_TC1CabActive_B1)
                   {
                       //如果以下6种状态都无效，这显示ATC无效
                       ATC_status = QObject::trUtf8("ATC无效");
                       ATC_invalid = 1;

                        if ( RIOM1CT_DIM4DI8_B1)
                        {
                            ATC_status = QObject::trUtf8("ATB模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM1CT_DIM4DI7_B1)
                        {
                            ATC_status = QObject::trUtf8("IATP模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM1CT_DIM4DI6_B1)
                        {
                            ATC_status = QObject::trUtf8("RM模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM1CT_DIM4DI5_B1)
                        {
                            ATC_status = QObject::trUtf8("ATP模式");
                            ATC_invalid = 0;
                        }

                        if ( RIOM1CT_DIM4DI4_B1)
                        {
                            ATC_status = QObject::trUtf8("ATO模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM1CT_DIM4DI3_B1)
                        {
                            ATC_status = QObject::trUtf8("ATC切除");
                            ATC_invalid = 0;
                        }

                  }

                  if(CTHM_RIOM6_DIM4_IsOnline_B1 &&CTHM_TC2CabActive_B1)
                  {
                        //如果以下6种状态都无效，这显示ATC无效
                        ATC_status = QObject::trUtf8("ATC无效");
                        ATC_invalid = 1;

                        if ( RIOM6CT_DIM4DI8_B1)
                        {
                            ATC_status = QObject::trUtf8("ATB模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM6CT_DIM4DI7_B1)
                        {
                            ATC_status = QObject::trUtf8("IATP模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM6CT_DIM4DI6_B1)
                        {
                            ATC_status = QObject::trUtf8("RM模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM6CT_DIM4DI5_B1)
                        {
                            ATC_status = QObject::trUtf8("ATP模式");
                            ATC_invalid = 0;
                        }

                        if ( RIOM6CT_DIM4DI4_B1)
                        {
                            ATC_status = QObject::trUtf8("ATO模式");
                            ATC_invalid = 0;
                        }
                        if ( RIOM6CT_DIM4DI3_B1)
                        {
                            ATC_status = QObject::trUtf8("ATC切除");
                            ATC_invalid = 0;
                        }
                }
            }
            else
            {
                    ATC_status = QObject::trUtf8("ATC无效");
                    ATC_invalid = 1;
            }

   }
   else
   {
             ATC_status = QObject::trUtf8("ATC\n通信异常");
             ATC_invalid = 2;

   }


    SetATOModeLabelColor(ID_PIBRUNSTATE_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}




void CRunStatePage::UpdateAValue()
{



}

void CRunStatePage::UpdateVValue()
{


}

void CRunStatePage::UpdateStation()
{

#ifdef PAGE_HEADER_OLD


    if ( (run_status_data3 > 20) && (run_status_data3 < 64) )
    {
        if (run_status_data3 == 21)
        {
            DestStation = QObject::trUtf8("西苑");
        }
        if (run_status_data3 == 23)
        {
            DestStation = QObject::trUtf8("圆明园");
        }
        if (run_status_data3 == 25)
        {
            DestStation = QObject::trUtf8("双清路");
        }
        if (run_status_data3 == 27)
        {
            DestStation = QObject::trUtf8("六道口");
        }
        if (run_status_data3 == 29)
        {
            DestStation = QObject::trUtf8("北沙滩");
        }
        if (run_status_data3 == 31)
        {
            DestStation = QObject::trUtf8("奥林匹克公园");
        }
        if (run_status_data3 == 33)
        {
            DestStation = QObject::trUtf8("大屯");
        }
        if (run_status_data3 == 35)
        {
            DestStation = QObject::trUtf8("大屯路东");
        }
        if (run_status_data3 == 37)
        {
            DestStation = QObject::trUtf8("关庄");
        }
        if (run_status_data3 == 39)
        {
            DestStation = QObject::trUtf8("望京西");
        }
        if (run_status_data3 == 41)
        {
            DestStation = QObject::trUtf8("望京");
        }
        if (run_status_data3 == 43)
        {
            DestStation = QObject::trUtf8("望京东");
        }
        if (run_status_data3 == 45)
        {
            DestStation = QObject::trUtf8("崔各庄");
        }
        if (run_status_data3 == 47)
        {
            DestStation = QObject::trUtf8("马泉营");
        }
        if (run_status_data3 == 49)
        {
            DestStation = QObject::trUtf8("孙河");
        }
        if (run_status_data3 == 51)
        {
            DestStation = QObject::trUtf8("国展");
        }
        if (run_status_data3 == 53)
        {
            DestStation = QObject::trUtf8("花梨坎");
        }
        if (run_status_data3 == 55)
        {
            DestStation = QObject::trUtf8("后沙峪");
        }
        if (run_status_data3 == 57)
        {
            DestStation = QObject::trUtf8("南法信");
        }
        if (run_status_data3 == 59)
        {
            DestStation = QObject::trUtf8("石门");
        }
        if (run_status_data3 == 61)
        {
            DestStation = QObject::trUtf8("顺义");
        }
        if (run_status_data3 == 63)
        {
            DestStation = QObject::trUtf8("俸伯");
        }
    }
    else
    {
        DestStation = QString::number(run_status_data3);
        DestStation = QObject::trUtf8("东小营");
    }

    if ( (run_status_data6 > 20) && (run_status_data6 < 64) )
    {
        if (run_status_data6 == 21)
        {
            CurrentStation = QObject::trUtf8("西苑");
        }
        if (run_status_data6 == 23)
        {
            CurrentStation = QObject::trUtf8("圆明园");
        }
        if (run_status_data6 == 25)
        {
            CurrentStation = QObject::trUtf8("双清路");
        }
        if (run_status_data6 == 27)
        {
            CurrentStation = QObject::trUtf8("六道口");
        }
        if (run_status_data6 == 29)
        {
            CurrentStation = QObject::trUtf8("北沙滩");
        }
        if (run_status_data6 == 31)
        {
            CurrentStation = QObject::trUtf8("奥林匹克公园");
        }
        if (run_status_data6 == 33)
        {
            CurrentStation = QObject::trUtf8("大屯");
        }
        if (run_status_data6 == 35)
        {
            CurrentStation = QObject::trUtf8("大屯路东");
        }
        if (run_status_data6 == 37)
        {
            CurrentStation = QObject::trUtf8("关庄");
        }
        if (run_status_data6 == 39)
        {
            CurrentStation = QObject::trUtf8("望京西");
        }
        if (run_status_data6 == 41)
        {
            CurrentStation = QObject::trUtf8("望京");
        }
        if (run_status_data6 == 43)
        {
            CurrentStation = QObject::trUtf8("望京东");
        }
        if (run_status_data6 == 45)
        {
            CurrentStation = QObject::trUtf8("崔各庄");
        }
        if (run_status_data6 == 47)
        {
            CurrentStation = QObject::trUtf8("马泉营");
        }
        if (run_status_data6 == 49)
        {
            CurrentStation = QObject::trUtf8("孙河");
        }
        if (run_status_data6 == 51)
        {
            CurrentStation = QObject::trUtf8("国展");
        }
        if (run_status_data6 == 53)
        {
            CurrentStation = QObject::trUtf8("花梨坎");
        }
        if (run_status_data6 == 55)
        {
            CurrentStation = QObject::trUtf8("后沙峪");
        }
        if (run_status_data6 == 57)
        {
            CurrentStation = QObject::trUtf8("南法信");
        }
        if (run_status_data6 == 59)
        {
            CurrentStation = QObject::trUtf8("石门");
        }
        if (run_status_data6 == 61)
        {
            CurrentStation = QObject::trUtf8("顺义");
        }
        if (run_status_data6 == 63)
        {
            CurrentStation = QObject::trUtf8("俸伯");
        }
    }
    else
    {
         CurrentStation = QString::number(run_status_data6);
         CurrentStation = QObject::trUtf8("郝家府");
    }

    if ( (run_status_data7 > 20) && (run_status_data7 < 64) )
    {
        if (run_status_data7 == 21)
        {
            NextStation = QObject::trUtf8("西苑");
        }
        if (run_status_data7 == 23)
        {
            NextStation = QObject::trUtf8("圆明园");
        }
        if (run_status_data7 == 25)
        {
            NextStation = QObject::trUtf8("双清路");
        }
        if (run_status_data7 == 27)
        {
            NextStation = QObject::trUtf8("六道口");
        }
        if (run_status_data7 == 29)
        {
            NextStation = QObject::trUtf8("北沙滩");
        }
        if (run_status_data7 == 31)
        {
            NextStation = QObject::trUtf8("奥林匹克公园");
        }
        if (run_status_data7 == 33)
        {
            NextStation = QObject::trUtf8("大屯");
        }
        if (run_status_data7 == 35)
        {
            NextStation = QObject::trUtf8("大屯路东");
        }
        if (run_status_data7 == 37)
        {
            NextStation = QObject::trUtf8("关庄");
        }
        if (run_status_data7 == 39)
        {
            NextStation = QObject::trUtf8("望京西");
        }
        if (run_status_data7 == 41)
        {
            NextStation = QObject::trUtf8("望京");
        }
        if (run_status_data7 == 43)
        {
            NextStation = QObject::trUtf8("望京东");
        }
        if (run_status_data7 == 45)
        {
            NextStation = QObject::trUtf8("崔各庄");
        }
        if (run_status_data7 == 47)
        {
            NextStation = QObject::trUtf8("马泉营");
        }
        if (run_status_data7 == 49)
        {
            NextStation = QObject::trUtf8("孙河");
        }
        if (run_status_data7 == 51)
        {
            NextStation = QObject::trUtf8("国展");
        }
        if (run_status_data7 == 53)
        {
            NextStation = QObject::trUtf8("花梨坎");
        }
        if (run_status_data7 == 55)
        {
            NextStation = QObject::trUtf8("后沙峪");
        }
        if (run_status_data7 == 57)
        {
            NextStation = QObject::trUtf8("南法信");
        }
        if (run_status_data7 == 59)
        {
            NextStation = QObject::trUtf8("石门");
        }
        if (run_status_data7 == 61)
        {
            NextStation = QObject::trUtf8("顺义");
        }
        if (run_status_data7 == 63)
        {
            NextStation = QObject::trUtf8("俸伯");
        }
    }
    else
    {
        NextStation = QString::number(run_status_data7);
        NextStation = QObject::trUtf8("东小营");
    }

    if (Bit(error_code,6))
    {
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1, CurrentStation);
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2, NextStation);
    }
    if (Bit(error_code,14) )
    {
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1, NextStation);
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2, CurrentStation);
    }

    SetStation(ID_PIBRUNSTATE_LABEL_TERMINALSTATION, DestStation);

#endif

}


void CRunStatePage::UpdateCarTem()
{
    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlText(QString::number(int(AC1CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::white);
    }


    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlText(QString::number(int(AC2CT_IndoorTemp_U8-40) ));
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::black);
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlText(QString::number(int(AC3CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC4_Online_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::black);
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlText(QString::number(int(AC4CT_IndoorTemp_U8-40) ));
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlText(QString::number(int(AC5CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::white);
    }



    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlText(QString::number(int(AC6CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::white);
    }


}


void CRunStatePage::UpdateDoor()
{


    if(che1_door1==0)     //che1_door1 在dialog.cpp 中统一处理 判断门网关不同状态下的 可信（有效）状态位
    {
        car1_door1=3;                                                    //通信异常
    }
    else
    {

            car1_door1=5;                                                 //如果门没有给出下列7种状态则显示灰色
            if(EDR1CT_Door1IsClosed_B1)                 {car1_door1=0;}   //门关好
            if(EDR1CT_Door1IsOpen_B1)                   {car1_door1=1;}   //门开
            if(EDR1CT_Door1ExtrusionProtecting_B1)      {car1_door1=2;}   //动作中 防挤压过程中
            if(EDR1CT_Door1ExtrusionStoped_B1)          {car1_door1=6;}   //障碍物 防挤压停
            if(che1_door1_Fault==1)                     {car1_door1=7;}   //如果此门有故障，则显示红色
            if(EDR1CT_Door1IsEmgcyUnlock_B1)            {car1_door1=4;}   //紧急解锁
            if(EDR1CT_Door1IsIsolated_B1)               {car1_door1=8;}   //门隔离


    }

    if(che1_door2==0)                           {car1_door2=3;}   //che1_door1 在dialog.cpp 中统一处理 判断门网关不同状态下的 可信（有效）状态位
    else
    {
        car1_door2=5;
        if(EDR1CT_Door2IsClosed_B1)                 {car1_door2=0;}  //
        if(EDR1CT_Door2IsOpen_B1)                   {car1_door2=1;}
        if(EDR1CT_Door2ExtrusionProtecting_B1)      {car1_door2=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door2ExtrusionStoped_B1)          {car1_door2=6;}   //障碍物 防挤压停
        if(che1_door2_Fault==1)                     {car1_door2=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door2IsEmgcyUnlock_B1)            {car1_door2=4;}
        if(EDR1CT_Door2IsIsolated_B1)               {car1_door2=8;}

    }

    if(che1_door3==0)                           {car1_door3=3;}
    else
    {
        car1_door3=5;
        if(EDR1CT_Door3IsClosed_B1)                 {car1_door3=0;}  //
        if(EDR1CT_Door3IsOpen_B1)                   {car1_door3=1;}
        if(EDR1CT_Door3ExtrusionProtecting_B1)      {car1_door3=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door3ExtrusionStoped_B1)          {car1_door3=6;}   //障碍物 防挤压停
        if(che1_door3_Fault==1)                     {car1_door3=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door3IsEmgcyUnlock_B1)              {car1_door3=4;}
        if(EDR1CT_Door3IsIsolated_B1)                 {car1_door3=8;}

    }

    if(che1_door4==0)                           {car1_door4=3;}
    else
    {
        car1_door4=5;
        if(EDR1CT_Door4IsClosed_B1)                 {car1_door4=0;}  //
        if(EDR1CT_Door4IsOpen_B1)                   {car1_door4=1;}
        if(EDR1CT_Door4ExtrusionProtecting_B1)      {car1_door4=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door4ExtrusionStoped_B1)          {car1_door4=6;}   //障碍物 防挤压停
        if(che1_door4_Fault==1)                     {car1_door4=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door4IsEmgcyUnlock_B1)              {car1_door4=4;}
        if(EDR1CT_Door4IsIsolated_B1)                 {car1_door4=8;}

    }

    if(che1_door5==0)                           {car1_door5=3;}
    else
    {
        car1_door5=5;
        if(EDR1CT_Door5IsClosed_B1)                 {car1_door5=0;}  //
        if(EDR1CT_Door5IsOpen_B1)                   {car1_door5=1;}
        if(EDR1CT_Door5ExtrusionProtecting_B1)      {car1_door5=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door5ExtrusionStoped_B1)          {car1_door5=6;}   //障碍物 防挤压停
        if(che1_door5_Fault==1)                     {car1_door5=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door5IsEmgcyUnlock_B1)              {car1_door5=4;}
        if(EDR1CT_Door5IsIsolated_B1)                 {car1_door5=8;}
        if(che1_door5==0)                           {car1_door5=3;}
    }


    if(che1_door6==0)                           {car1_door6=3;}
    else
    {
        car1_door6=5;
        if(EDR1CT_Door6IsClosed_B1)                 {car1_door6=0;}  //
        if(EDR1CT_Door6IsOpen_B1)                   {car1_door6=1;}
        if(EDR1CT_Door6ExtrusionProtecting_B1)      {car1_door6=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door6ExtrusionStoped_B1)          {car1_door6=6;}   //障碍物 防挤压停
        if(che1_door6_Fault==1)                     {car1_door6=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door6IsEmgcyUnlock_B1)            {car1_door6=4;}
        if(EDR1CT_Door6IsIsolated_B1)               {car1_door6=8;}   
    }

    if(che1_door7==0)                           {car1_door7=3;}
    else
    {
        car1_door7=5;
        if(EDR1CT_Door7IsClosed_B1)                 {car1_door7=0;}  //
        if(EDR1CT_Door7IsOpen_B1)                   {car1_door7=1;}
        if(EDR1CT_Door7ExtrusionProtecting_B1)      {car1_door7=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door7ExtrusionStoped_B1)          {car1_door7=6;}   //障碍物 防挤压停
        if(che1_door7_Fault==1)                     {car1_door7=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door7IsEmgcyUnlock_B1)              {car1_door7=4;}
        if(EDR1CT_Door7IsIsolated_B1)                 {car1_door7=8;}
    }

    if(che1_door8==0)                           {car1_door8=3;}
    else
    {
        car1_door8=5;
        if(EDR1CT_Door8IsClosed_B1)                 {car1_door8=0;}  //
        if(EDR1CT_Door8IsOpen_B1)                   {car1_door8=1;}
        if(EDR1CT_Door8ExtrusionProtecting_B1)      {car1_door8=2;}   //动作中 防挤压过程中
        if(EDR1CT_Door8ExtrusionStoped_B1)          {car1_door8=6;}   //障碍物 防挤压停
        if(che1_door8_Fault==1)                     {car1_door8=7;}   //如果此门有故障，则显示红色
        if(EDR1CT_Door8IsEmgcyUnlock_B1)              {car1_door8=4;}
        if(EDR1CT_Door8IsIsolated_B1)                 {car1_door8=8;}

    }


    if(che2_door1==0)                           {car2_door1=3;}
    else
    {
        car2_door1=5;
        if(EDR3CT_Door1IsClosed_B1)                 {car2_door1=0;}  //
        if(EDR3CT_Door1IsOpen_B1)                   {car2_door1=1;}
        if(EDR3CT_Door1ExtrusionProtecting_B1)      {car2_door1=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door1ExtrusionStoped_B1)          {car2_door1=6;}   //障碍物 防挤压停
        if(che2_door1_Fault==1)                     {car2_door1=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door1IsEmgcyUnlock_B1)              {car2_door1=4;}
        if(EDR3CT_Door1IsIsolated_B1)                 {car2_door1=8;}

    }

    if(che2_door2==0)                           {car2_door2=3;}
    else
    {
        car2_door2=5;
        if(EDR3CT_Door2IsClosed_B1)                 {car2_door2=0;}  //
        if(EDR3CT_Door2IsOpen_B1)                   {car2_door2=1;}
        if(EDR3CT_Door2ExtrusionProtecting_B1)      {car2_door2=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door2ExtrusionStoped_B1)          {car2_door2=6;}   //障碍物 防挤压停
        if(che2_door2_Fault==1)                     {car2_door2=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door2IsEmgcyUnlock_B1)              {car2_door2=4;}
        if(EDR3CT_Door2IsIsolated_B1)                 {car2_door2=8;}

    }

    if(che2_door3==0)                           {car2_door3=3;}
    else
    {
        car2_door3=5;
        if(EDR3CT_Door3IsClosed_B1)                 {car2_door3=0;}  //
        if(EDR3CT_Door3IsOpen_B1)                   {car2_door3=1;}
        if(EDR3CT_Door3ExtrusionProtecting_B1)      {car2_door3=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door3ExtrusionStoped_B1)          {car2_door3=6;}   //障碍物 防挤压停
        if(che2_door3_Fault==1)                     {car2_door3=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door3IsEmgcyUnlock_B1)              {car2_door3=4;}
        if(EDR3CT_Door3IsIsolated_B1)                 {car2_door3=8;}

    }

    if(che2_door4==0)                           {car2_door4=3;}
    else
    {
        car2_door4=5;
        if(EDR3CT_Door4IsClosed_B1)                 {car2_door4=0;}  //
        if(EDR3CT_Door4IsOpen_B1)                   {car2_door4=1;}
        if(EDR3CT_Door4ExtrusionProtecting_B1)      {car2_door4=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door4ExtrusionStoped_B1)          {car2_door4=6;}   //障碍物 防挤压停
        if(che2_door4_Fault==1)                     {car2_door4=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door4IsEmgcyUnlock_B1)              {car2_door4=4;}
        if(EDR3CT_Door4IsIsolated_B1)                 {car2_door4=8;}
    }


    if(che2_door5==0)                           {car2_door5=3;}
    else
    {
        car2_door5=5;
        if(EDR3CT_Door5IsClosed_B1)                 {car2_door5=0;}  //
        if(EDR3CT_Door5IsOpen_B1)                   {car2_door5=1;}
        if(EDR3CT_Door5ExtrusionProtecting_B1)      {car2_door5=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door5ExtrusionStoped_B1)          {car2_door5=6;}   //障碍物 防挤压停
        if(che2_door5_Fault==1)                     {car2_door5=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door5IsEmgcyUnlock_B1)              {car2_door5=4;}
        if(EDR3CT_Door5IsIsolated_B1)                 {car2_door5=8;}

    }

    if(che2_door6==0)                           {car2_door6=3;}
    else
    {
        car2_door6=5;
        if(EDR3CT_Door6IsClosed_B1)                 {car2_door6=0;}  //
        if(EDR3CT_Door6IsOpen_B1)                   {car2_door6=1;}
        if(EDR3CT_Door6ExtrusionProtecting_B1)      {car2_door6=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door6ExtrusionStoped_B1)          {car2_door6=6;}   //障碍物 防挤压停
        if(che2_door6_Fault==1)                     {car2_door6=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door6IsEmgcyUnlock_B1)              {car2_door6=4;}
        if(EDR3CT_Door6IsIsolated_B1)                 {car2_door6=8;}
    }

    if(che2_door7==0)                           {car2_door7=3;}
    else
    {
        car2_door7=5;
        if(EDR3CT_Door7IsClosed_B1)                 {car2_door7=0;}  //
        if(EDR3CT_Door7IsOpen_B1)                   {car2_door7=1;}
        if(EDR3CT_Door7ExtrusionProtecting_B1)      {car2_door7=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door7ExtrusionStoped_B1)          {car2_door7=6;}   //障碍物 防挤压停
        if(che2_door7_Fault==1)                     {car2_door7=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door7IsEmgcyUnlock_B1)              {car2_door7=4;}
        if(EDR3CT_Door7IsIsolated_B1)                 {car2_door7=8;}

    }

    if(che2_door8==0)                           {car2_door8=3;}
    else
    {
        car2_door8=5;
        if(EDR3CT_Door8IsClosed_B1)                 {car2_door8=0;}  //
        if(EDR3CT_Door8IsOpen_B1)                   {car2_door8=1;}
        if(EDR3CT_Door8ExtrusionProtecting_B1)      {car2_door8=2;}   //动作中 防挤压过程中
        if(EDR3CT_Door8ExtrusionStoped_B1)          {car2_door8=6;}   //障碍物 防挤压停
        if(che2_door8_Fault==1)                     {car2_door8=7;}   //如果此门有故障，则显示红色
        if(EDR3CT_Door8IsEmgcyUnlock_B1)              {car2_door8=4;}
        if(EDR3CT_Door8IsIsolated_B1)                 {car2_door8=8;}

    }


    if(che3_door1==0)                           {car3_door1=3;}
    else
    {
        car3_door1=5;
        if(EDR5CT_Door1IsClosed_B1)                 {car3_door1=0;}  //
        if(EDR5CT_Door1IsOpen_B1)                   {car3_door1=1;}
        if(EDR5CT_Door1ExtrusionProtecting_B1)      {car3_door1=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door1ExtrusionStoped_B1)          {car3_door1=6;}   //障碍物 防挤压停
        if(che3_door1_Fault==1)                     {car3_door1=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door1IsEmgcyUnlock_B1)              {car3_door1=4;}
        if(EDR5CT_Door1IsIsolated_B1)                 {car3_door1=8;}

    }

    if(che3_door2==0)                           {car3_door2=3;}
    else
    {
        car3_door2=5;
        if(EDR5CT_Door2IsClosed_B1)                 {car3_door2=0;}  //
        if(EDR5CT_Door2IsOpen_B1)                   {car3_door2=1;}
        if(EDR5CT_Door2ExtrusionProtecting_B1)      {car3_door2=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door2ExtrusionStoped_B1)          {car3_door2=6;}   //障碍物 防挤压停
        if(che3_door2_Fault==1)                     {car3_door2=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door2IsEmgcyUnlock_B1)              {car3_door2=4;}
        if(EDR5CT_Door2IsIsolated_B1)                 {car3_door2=8;}

    }

    if(che3_door3==0)                           {car3_door3=3;}
    else
    {
        car3_door3=5;
        if(EDR5CT_Door3IsClosed_B1)                 {car3_door3=0;}  //
        if(EDR5CT_Door3IsOpen_B1)                   {car3_door3=1;}
        if(EDR5CT_Door3ExtrusionProtecting_B1)      {car3_door3=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door3ExtrusionStoped_B1)          {car3_door3=6;}   //障碍物 防挤压停
        if(che3_door3_Fault==1)                     {car3_door3=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door3IsEmgcyUnlock_B1)            {car3_door3=4;}
        if(EDR5CT_Door3IsIsolated_B1)               {car3_door3=8;}

    }

    if(che3_door4==0)                           {car3_door4=3;}
    else
    {
        car3_door4=5;
        if(EDR5CT_Door4IsClosed_B1)                 {car3_door4=0;}  //
        if(EDR5CT_Door4IsOpen_B1)                   {car3_door4=1;}
        if(EDR5CT_Door4ExtrusionProtecting_B1)      {car3_door4=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door4ExtrusionStoped_B1)          {car3_door4=6;}   //障碍物 防挤压停
        if(che3_door4_Fault==1)                     {car3_door4=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door4IsEmgcyUnlock_B1)              {car3_door4=4;}
        if(EDR5CT_Door4IsIsolated_B1)                 {car3_door4=8;}
    }

    if(che3_door5==0)                           {car3_door5=3;}
    else
    {
        car3_door5=5;
        if(EDR5CT_Door5IsClosed_B1)                 {car3_door5=0;}  //
        if(EDR5CT_Door5IsOpen_B1)                   {car3_door5=1;}
        if(EDR5CT_Door5ExtrusionProtecting_B1)      {car3_door5=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door5ExtrusionStoped_B1)          {car3_door5=6;}   //障碍物 防挤压停
        if(che3_door5_Fault==1)                     {car3_door5=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door5IsEmgcyUnlock_B1)              {car3_door5=4;}
        if(EDR5CT_Door5IsIsolated_B1)                 {car3_door5=8;}
    }

    if(che3_door6==0)                           {car3_door6=3;}
    else
    {
        car3_door6=5;
        if(EDR5CT_Door6IsClosed_B1)                 {car3_door6=0;}  //
        if(EDR5CT_Door6IsOpen_B1)                   {car3_door6=1;}
        if(EDR5CT_Door6ExtrusionProtecting_B1)      {car3_door6=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door6ExtrusionStoped_B1)          {car3_door6=6;}   //障碍物 防挤压停
        if(che3_door6_Fault==1)                     {car3_door6=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door6IsEmgcyUnlock_B1)              {car3_door6=4;}
        if(EDR5CT_Door6IsIsolated_B1)                 {car3_door6=8;}
    }

    if(che3_door7==0)                           {car3_door7=3;}
    else
    {
        car3_door7=5;
        if(EDR5CT_Door7IsClosed_B1)                 {car3_door7=0;}  //
        if(EDR5CT_Door7IsOpen_B1)                   {car3_door7=1;}
        if(EDR5CT_Door7ExtrusionProtecting_B1)      {car3_door7=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door7ExtrusionStoped_B1)          {car3_door7=6;}   //障碍物 防挤压停
        if(che3_door7_Fault==1)                     {car3_door7=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door7IsEmgcyUnlock_B1)              {car3_door7=4;}
        if(EDR5CT_Door7IsIsolated_B1)                 {car3_door7=8;}
    }

    if(che3_door8==0)                           {car3_door8=3;}
    else
    {
        car3_door8=5;
        if(EDR5CT_Door8IsClosed_B1)                 {car3_door8=0;}  //
        if(EDR5CT_Door8IsOpen_B1)                   {car3_door8=1;}
        if(EDR5CT_Door8ExtrusionProtecting_B1)      {car3_door8=2;}   //动作中 防挤压过程中
        if(EDR5CT_Door8ExtrusionStoped_B1)          {car3_door8=6;}   //障碍物 防挤压停
        if(che3_door8_Fault==1)                     {car3_door8=7;}   //如果此门有故障，则显示红色
        if(EDR5CT_Door8IsEmgcyUnlock_B1)              {car3_door8=4;}
        if(EDR5CT_Door8IsIsolated_B1)                 {car3_door8=8;}

    }


    if(che4_door1==0)                           {car4_door1=3;}
    else
    {
        car4_door1=5;
        if(EDR7CT_Door1IsClosed_B1)                 {car4_door1=0;}  //
        if(EDR7CT_Door1IsOpen_B1)                   {car4_door1=1;}
        if(EDR7CT_Door1ExtrusionProtecting_B1)      {car4_door1=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door1ExtrusionStoped_B1)          {car4_door1=6;}   //障碍物 防挤压停
        if(che4_door1_Fault==1)                     {car4_door1=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door1IsEmgcyUnlock_B1)              {car4_door1=4;}
        if(EDR7CT_Door1IsIsolated_B1)                 {car4_door1=8;}

    }

    if(che4_door2==0)                           {car4_door2=3;}
    else
    {
        car4_door2=5;
        if(EDR7CT_Door2IsClosed_B1)                 {car4_door2=0;}  //
        if(EDR7CT_Door2IsOpen_B1)                   {car4_door2=1;}
        if(EDR7CT_Door2ExtrusionProtecting_B1)      {car4_door2=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door2ExtrusionStoped_B1)          {car4_door2=6;}   //障碍物 防挤压停
        if(che4_door2_Fault==1)                     {car4_door2=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door2IsEmgcyUnlock_B1)              {car4_door2=4;}
        if(EDR7CT_Door2IsIsolated_B1)                 {car4_door2=8;}

    }

    if(che4_door3==0)                           {car4_door3=3;}
    else
    {
        car4_door3=5;
        if(EDR7CT_Door3IsClosed_B1)                 {car4_door3=0;}  //
        if(EDR7CT_Door3IsOpen_B1)                   {car4_door3=1;}
        if(EDR7CT_Door3ExtrusionProtecting_B1)      {car4_door3=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door3ExtrusionStoped_B1)          {car4_door3=6;}   //障碍物 防挤压停
        if(che4_door3_Fault==1)                     {car4_door3=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door3IsEmgcyUnlock_B1)              {car4_door3=4;}
        if(EDR7CT_Door3IsIsolated_B1)                 {car4_door3=8;}

    }

    if(che4_door4==0)                           {car4_door4=3;}
    else
    {
        car4_door4=5;
        if(EDR7CT_Door4IsClosed_B1)                 {car4_door4=0;}  //
        if(EDR7CT_Door4IsOpen_B1)                   {car4_door4=1;}
        if(EDR7CT_Door4ExtrusionProtecting_B1)      {car4_door4=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door4ExtrusionStoped_B1)          {car4_door4=6;}   //障碍物 防挤压停
        if(che4_door4_Fault==1)                     {car4_door4=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door4IsEmgcyUnlock_B1)              {car4_door4=4;}
        if(EDR7CT_Door4IsIsolated_B1)                 {car4_door4=8;}

    }

    if(che4_door5==0)                           {car4_door5=3;}
    else
    {
        car4_door5=5;
        if(EDR7CT_Door5IsClosed_B1)                 {car4_door5=0;}  //
        if(EDR7CT_Door5IsOpen_B1)                   {car4_door5=1;}
        if(EDR7CT_Door5ExtrusionProtecting_B1)      {car4_door5=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door5ExtrusionStoped_B1)          {car4_door5=6;}   //障碍物 防挤压停
        if(che4_door5_Fault==1)                     {car4_door5=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door5IsEmgcyUnlock_B1)              {car4_door5=4;}
        if(EDR7CT_Door5IsIsolated_B1)                 {car4_door5=8;}

    }

    if(che4_door6==0)                           {car4_door6=3;}
    else
    {
        car4_door6=5;
        if(EDR7CT_Door6IsClosed_B1)                 {car4_door6=0;}  //
        if(EDR7CT_Door6IsOpen_B1)                   {car4_door6=1;}
        if(EDR7CT_Door6ExtrusionProtecting_B1)      {car4_door6=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door6ExtrusionStoped_B1)          {car4_door6=6;}   //障碍物 防挤压停
        if(che4_door6_Fault==1)                     {car4_door6=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door6IsEmgcyUnlock_B1)              {car4_door6=4;}
        if(EDR7CT_Door6IsIsolated_B1)                 {car4_door6=8;}

    }

    if(che4_door7==0)                           {car4_door7=3;}
    else
    {
        car4_door7=5;
        if(EDR7CT_Door7IsClosed_B1)                 {car4_door7=0;}  //
        if(EDR7CT_Door7IsOpen_B1)                   {car4_door7=1;}
        if(EDR7CT_Door7ExtrusionProtecting_B1)      {car4_door7=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door7ExtrusionStoped_B1)          {car4_door7=6;}   //障碍物 防挤压停
        if(che4_door7_Fault==1)                     {car4_door7=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door7IsEmgcyUnlock_B1)              {car4_door7=4;}
        if(EDR7CT_Door7IsIsolated_B1)                 {car4_door7=8;}

    }

    if(che4_door8==0)                           {car4_door8=3;}
    else
    {
        car4_door8=5;
        if(EDR7CT_Door8IsClosed_B1)                 {car4_door8=0;}  //
        if(EDR7CT_Door8IsOpen_B1)                   {car4_door8=1;}
        if(EDR7CT_Door8ExtrusionProtecting_B1)      {car4_door8=2;}   //动作中 防挤压过程中
        if(EDR7CT_Door8ExtrusionStoped_B1)          {car4_door8=6;}   //障碍物 防挤压停
        if(che4_door8_Fault==1)                     {car4_door8=7;}   //如果此门有故障，则显示红色
        if(EDR7CT_Door8IsEmgcyUnlock_B1)              {car4_door8=4;}
        if(EDR7CT_Door8IsIsolated_B1)                 {car4_door8=8;}
    }


    if(che5_door1==0)                           {car5_door1=3;}
    else
    {
        car5_door1=5;
        if(EDR9CT_Door1IsClosed_B1)                 {car5_door1=0;}  //
        if(EDR9CT_Door1IsOpen_B1)                   {car5_door1=1;}
        if(EDR9CT_Door1ExtrusionProtecting_B1)      {car5_door1=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door1ExtrusionStoped_B1)          {car5_door1=6;}   //障碍物 防挤压停
        if(che5_door1_Fault==1)                     {car5_door1=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door1IsEmgcyUnlock_B1)              {car5_door1=4;}
        if(EDR9CT_Door1IsIsolated_B1)                 {car5_door1=8;}
    }

    if(che5_door2==0)                           {car5_door2=3;}
    else
    {
        car5_door2=5;
        if(EDR9CT_Door2IsClosed_B1)                 {car5_door2=0;}  //
        if(EDR9CT_Door2IsOpen_B1)                   {car5_door2=1;}
        if(EDR9CT_Door2ExtrusionProtecting_B1)      {car5_door2=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door2ExtrusionStoped_B1)          {car5_door2=6;}   //障碍物 防挤压停
        if(che5_door2_Fault==1)                     {car5_door2=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door2IsEmgcyUnlock_B1)              {car5_door2=4;}
        if(EDR9CT_Door2IsIsolated_B1)                 {car5_door2=8;}

    }

    if(che5_door3==0)                           {car5_door3=3;}
    else
    {
        car5_door3=5;
        if(EDR9CT_Door3IsClosed_B1)                 {car5_door3=0;}  //
        if(EDR9CT_Door3IsOpen_B1)                   {car5_door3=1;}
        if(EDR9CT_Door3ExtrusionProtecting_B1)      {car5_door3=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door3ExtrusionStoped_B1)          {car5_door3=6;}   //障碍物 防挤压停
        if(che5_door3_Fault==1)                     {car5_door3=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door3IsEmgcyUnlock_B1)              {car5_door3=4;}
        if(EDR9CT_Door3IsIsolated_B1)                 {car5_door3=8;}
    }

    if(che5_door4==0)                           {car5_door4=3;}
    else
    {
        car5_door4=5;
        if(EDR9CT_Door4IsClosed_B1)                 {car5_door4=0;}  //
        if(EDR9CT_Door4IsOpen_B1)                   {car5_door4=1;}
        if(EDR9CT_Door4ExtrusionProtecting_B1)      {car5_door4=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door4ExtrusionStoped_B1)          {car5_door4=6;}   //障碍物 防挤压停
        if(che5_door4_Fault==1)                     {car5_door4=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door4IsEmgcyUnlock_B1)              {car5_door4=4;}
        if(EDR9CT_Door4IsIsolated_B1)                 {car5_door4=8;}

    }

    if(che5_door5==0)                           {car5_door5=3;}
    else
    {
        car5_door5=5;
        if(EDR9CT_Door5IsClosed_B1)                 {car5_door5=0;}  //
        if(EDR9CT_Door5IsOpen_B1)                   {car5_door5=1;}
        if(EDR9CT_Door5ExtrusionProtecting_B1)      {car5_door5=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door5ExtrusionStoped_B1)          {car5_door5=6;}   //障碍物 防挤压停
        if(che5_door5_Fault==1)                     {car5_door5=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door5IsEmgcyUnlock_B1)              {car5_door5=4;}
        if(EDR9CT_Door5IsIsolated_B1)                 {car5_door5=8;}

    }

    if(che5_door6==0)                           {car5_door6=3;}
    else
    {
        car5_door6=5;
        if(EDR9CT_Door6IsClosed_B1)                 {car5_door6=0;}  //
        if(EDR9CT_Door6IsOpen_B1)                   {car5_door6=1;}
        if(EDR9CT_Door6ExtrusionProtecting_B1)      {car5_door6=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door6ExtrusionStoped_B1)          {car5_door6=6;}   //障碍物 防挤压停
        if(che5_door6_Fault==1)                     {car5_door6=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door6IsEmgcyUnlock_B1)              {car5_door6=4;}
        if(EDR9CT_Door6IsIsolated_B1)                 {car5_door6=8;}

    }

    if(che5_door7==0)                           {car5_door7=3;}
    else
    {
        car5_door7=5;
        if(EDR9CT_Door7IsClosed_B1)                 {car5_door7=0;}  //
        if(EDR9CT_Door7IsOpen_B1)                   {car5_door7=1;}
        if(EDR9CT_Door7ExtrusionProtecting_B1)      {car5_door7=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door7ExtrusionStoped_B1)          {car5_door7=6;}   //障碍物 防挤压停
        if(che5_door7_Fault==1)                     {car5_door7=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door7IsEmgcyUnlock_B1)              {car5_door7=4;}
        if(EDR9CT_Door7IsIsolated_B1)                 {car5_door7=8;}

    }

    if(che5_door8==0)                           {car5_door8=3;}
    else
    {
        car5_door8=5;
        if(EDR9CT_Door8IsClosed_B1)                 {car5_door8=0;}  //
        if(EDR9CT_Door8IsOpen_B1)                   {car5_door8=1;}
        if(EDR9CT_Door8ExtrusionProtecting_B1)      {car5_door8=2;}   //动作中 防挤压过程中
        if(EDR9CT_Door8ExtrusionStoped_B1)          {car5_door8=6;}   //障碍物 防挤压停
        if(che5_door8_Fault==1)                     {car5_door8=7;}   //如果此门有故障，则显示红色
        if(EDR9CT_Door8IsEmgcyUnlock_B1)              {car5_door8=4;}
        if(EDR9CT_Door8IsIsolated_B1)                 {car5_door8=8;}

    }


    if(che6_door1==0)                           {car6_door1=3;}
    else
    {
        car6_door1=5;
        if(EDRBCT_Door1IsClosed_B1)                 {car6_door1=0;}  //
        if(EDRBCT_Door1IsOpen_B1)                   {car6_door1=1;}
        if(EDRBCT_Door1ExtrusionProtecting_B1)      {car6_door1=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door1ExtrusionStoped_B1)          {car6_door1=6;}   //障碍物 防挤压停
        if(che6_door1_Fault==1)                     {car6_door1=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door1IsEmgcyUnlock_B1)              {car6_door1=4;}
        if(EDRBCT_Door1IsIsolated_B1)                 {car6_door1=8;}

    }

    if(che6_door2==0)                           {car6_door2=3;}
    else
    {
        car6_door2=5;
        if(EDRBCT_Door2IsClosed_B1)                 {car6_door2=0;}  //
        if(EDRBCT_Door2IsOpen_B1)                   {car6_door2=1;}
        if(EDRBCT_Door2ExtrusionProtecting_B1)      {car6_door2=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door2ExtrusionStoped_B1)          {car6_door2=6;}   //障碍物 防挤压停
        if(che6_door2_Fault==1)                     {car6_door2=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door2IsEmgcyUnlock_B1)              {car6_door2=4;}
        if(EDRBCT_Door2IsIsolated_B1)                 {car6_door2=8;}
    }

    if(che6_door3==0)                           {car6_door3=3;}
    else
    {
        car6_door3=5;
        if(EDRBCT_Door3IsClosed_B1)                 {car6_door3=0;}  //
        if(EDRBCT_Door3IsOpen_B1)                   {car6_door3=1;}
        if(EDRBCT_Door3ExtrusionProtecting_B1)      {car6_door3=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door3ExtrusionStoped_B1)          {car6_door3=6;}   //障碍物 防挤压停
        if(che6_door3_Fault==1)                     {car6_door3=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door3IsEmgcyUnlock_B1)              {car6_door3=4;}
        if(EDRBCT_Door3IsIsolated_B1)                 {car6_door3=8;}
    }

    if(che6_door4==0)                           {car6_door4=3;}
    else
    {
        car6_door4=5;
        if(EDRBCT_Door4IsClosed_B1)                 {car6_door4=0;}  //
        if(EDRBCT_Door4IsOpen_B1)                   {car6_door4=1;}
        if(EDRBCT_Door4ExtrusionProtecting_B1)      {car6_door4=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door4ExtrusionStoped_B1)          {car6_door4=6;}   //障碍物 防挤压停
        if(che6_door4_Fault==1)                     {car6_door4=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door4IsEmgcyUnlock_B1)              {car6_door4=4;}
        if(EDRBCT_Door4IsIsolated_B1)                 {car6_door4=8;}

    }

    if(che6_door5==0)                           {car6_door5=3;}
    else
    {
        car6_door5=5;
        if(EDRBCT_Door5IsClosed_B1)                 {car6_door5=0;}  //
        if(EDRBCT_Door5IsOpen_B1)                   {car6_door5=1;}
        if(EDRBCT_Door5ExtrusionProtecting_B1)      {car6_door5=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door5ExtrusionStoped_B1)          {car6_door5=6;}   //障碍物 防挤压停
        if(che6_door5_Fault==1)                     {car6_door5=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door5IsEmgcyUnlock_B1)              {car6_door5=4;}
        if(EDRBCT_Door5IsIsolated_B1)                 {car6_door5=8;}

    }

    if(che6_door6==0)                           {car6_door6=3;}
    else
    {
        car6_door6=5;
        if(EDRBCT_Door6IsClosed_B1)                 {car6_door6=0;}  //
        if(EDRBCT_Door6IsOpen_B1)                   {car6_door6=1;}
        if(EDRBCT_Door6ExtrusionProtecting_B1)      {car6_door6=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door6ExtrusionStoped_B1)          {car6_door6=6;}   //障碍物 防挤压停
        if(che6_door6_Fault==1)                     {car6_door6=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door6IsEmgcyUnlock_B1)              {car6_door6=4;}
        if(EDRBCT_Door6IsIsolated_B1)                 {car6_door6=8;}

    }

    if(che6_door7==0)                           {car6_door7=3;}
    else
    {
        car6_door7=5;
        if(EDRBCT_Door7IsClosed_B1)                 {car6_door7=0;}  //
        if(EDRBCT_Door7IsOpen_B1)                   {car6_door7=1;}
        if(EDRBCT_Door7ExtrusionProtecting_B1)      {car6_door7=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door7ExtrusionStoped_B1)          {car6_door7=6;}   //障碍物 防挤压停
        if(che6_door7_Fault==1)                     {car6_door7=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door7IsEmgcyUnlock_B1)              {car6_door7=4;}
        if(EDRBCT_Door7IsIsolated_B1)                 {car6_door7=8;}

    }

    if(che6_door8==0)                           {car6_door8=3;}
    else
    {
        car6_door8=5;
        if(EDRBCT_Door8IsClosed_B1)                 {car6_door8=0;}  //
        if(EDRBCT_Door8IsOpen_B1)                   {car6_door8=1;}
        if(EDRBCT_Door8ExtrusionProtecting_B1)      {car6_door8=2;}   //动作中 防挤压过程中
        if(EDRBCT_Door8ExtrusionStoped_B1)          {car6_door8=6;}   //障碍物 防挤压停
        if(che6_door8_Fault==1)                     {car6_door8=7;}   //如果此门有故障，则显示红色
        if(EDRBCT_Door8IsEmgcyUnlock_B1)              {car6_door8=4;}
        if(EDRBCT_Door8IsIsolated_B1)                 {car6_door8=8;}
    }


    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR1,car1_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR2,car1_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR3,car1_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR4,car1_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR5,car1_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR6,car1_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR7,car1_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR8,car1_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR1,car2_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR2,car2_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR3,car2_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR4,car2_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR5,car2_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR6,car2_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR7,car2_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR8,car2_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR1,car3_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR2,car3_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR3,car3_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR4,car3_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR5,car3_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR6,car3_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR7,car3_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR8,car3_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR1,car4_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR2,car4_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR3,car4_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR4,car4_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR5,car4_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR6,car4_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR7,car4_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR8,car4_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR1,car5_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR2,car5_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR3,car5_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR4,car5_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR5,car5_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR6,car5_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR7,car5_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR8,car5_door8);

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR1,car6_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR2,car6_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR3,car6_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR4,car6_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR5,car6_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR6,car6_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR7,car6_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR8,car6_door8);
}



void CRunStatePage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL);

#endif

}

void CRunStatePage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetCtrlText(QString::number(udp_num));

#endif

}

void CRunStatePage::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->HideLabel();

//    }
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void CRunStatePage::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 ))
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->HideLabel();

//    }

}

void CRunStatePage::UpdateWashCarMode()
{
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) )
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
                }
            }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
    }


}

void CRunStatePage::UpdateEmergencyBroadcast()
{
//    if (reserve_hide)
//    {
     // ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->ShowButton();

//    }
//    else
//    {
//        ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->HideButton();
//    }
}

void CRunStatePage::SetCommInterruptLabelColor(int id, int colorVal)
{


    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;


}


void CRunStatePage::SetDoorLabelColor(int id, int colorVal)
{
    if (0 == colorVal )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,0,255));
    }
    else if(7 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (8 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetLabelState(8);
    }
    return;
}

void CRunStatePage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

void CRunStatePage::SetCompressorStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetTCUStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {

    }((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);

    return;
}

void CRunStatePage::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetWarningLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetASPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetPlaceStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::green);
    }
    else if (2 <= colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    return;
}

void CRunStatePage::SetBCUSeparaterLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if(2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetNETModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetATOModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }

    return;
}

//void CRunStatePage::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}
void CRunStatePage::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void CRunStatePage::OnRealTimeFaultsWarnningIconClk()
{

    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CRunStatePage::UpdateTcu_Enable()
{
//    if (1 == Bit(DI_110_1,16) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->HideLabel();

//    }
//    if (1 == Bit(DI_180_1,16) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->HideLabel();

//    }
}

void CRunStatePage::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetKauxLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }

    return;
}

void CRunStatePage::UpdateRidingRate()
{
    if(DTHM_LoadRate1_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate1_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate1_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate1_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate2_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate2_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate2_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate2_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate3_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate3_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate3_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate3_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate4_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate4_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate4_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate4_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate5_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate5_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate5_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate5_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate6_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate6_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate6_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate6_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText("--");

        }

    }


//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate1_U8).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::red);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_12%256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate2_U8).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate3_U8).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate4_U8).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate5_U8).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_14/256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate6_U8).append(" %"));


}

void CRunStatePage::UpdateFAS_status_Hide()
{

       /* if(Bit(FAS_B10_2,7)||Bit(FAS_B10_2,3)||Bit(FAS_B10_2,15)||Bit(FAS_B10_2,11)||Bit(FAS_B10_3,7)||Bit(FAS_B10_3,3)||Bit(FAS_B10_3,15)||Bit(FAS_B10_3,11)||Bit(FAS_B10_4,7)||Bit(FAS_B10_4,3)||Bit(FAS_B10_4,15)||Bit(FAS_B10_4,11)
         ||Bit(FAS_B10_5,7)||Bit(FAS_B10_5,3)||Bit(FAS_B10_5,15)||Bit(FAS_B10_5,11)||Bit(FAS_B10_6,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_6,15)||Bit(FAS_B10_6,11)||Bit(FAS_B10_7,7)||Bit(FAS_B10_7,3)||Bit(FAS_B10_7,15)||Bit(FAS_B10_7,11)
         ||Bit(FAS_B10_8,7)||Bit(FAS_B10_8,3)||Bit(FAS_B10_8,15)||Bit(FAS_B10_8,11)||Bit(FAS_B10_9,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_9,15)||Bit(FAS_B10_9,11)||Bit(FAS_B10_10,7)||Bit(FAS_B10_10,3)||Bit(FAS_B10_10,15)||Bit(FAS_B10_10,11)
         ||Bit(FAS_B10_11,7)||Bit(FAS_B10_11,3)||Bit(FAS_B10_11,15)||Bit(FAS_B10_11,11)||Bit(FAS_B10_12,7)||Bit(FAS_B10_12,3)||Bit(FAS_B10_12,15)||Bit(FAS_B10_12,11)||Bit(FAS_B10_13,7)||Bit(FAS_B10_13,3)||Bit(FAS_B10_13,15)||Bit(FAS_B10_13,11)
         ||Bit(FAS_B10_14,7)||Bit(FAS_B10_14,3))
         */
    if(
             FAU1CT_FAU1FireAlert_B1 ||  FAU1CT_FAU2FireAlert_B1 ||  FAU1CT_FAU3FireAlert_B1 ||  FAU1CT_FAU4FireAlert_B1 ||  FAU1CT_FAU5FireAlert_B1 ||  FAU1CT_FAU6FireAlert_B1
         ||  FAU1CT_FAU7FireAlert_B1 ||  FAU1CT_FAU8FireAlert_B1 ||  FAU1CT_FAU9FireAlert_B1 || FAU1CT_FAU10FireAlert_B1 || FAU1CT_FAU11FireAlert_B1 || FAU1CT_FAU12FireAlert_B1
         || FAU1CT_FAU13FireAlert_B1 || FAU1CT_FAU14FireAlert_B1 || FAU1CT_FAU15FireAlert_B1 || FAU1CT_FAU16FireAlert_B1 || FAU1CT_FAU17FireAlert_B1 || FAU1CT_FAU18FireAlert_B1
         || FAU1CT_FAU19FireAlert_B1 || FAU1CT_FAU20FireAlert_B1 || FAU1CT_FAU21FireAlert_B1 || FAU1CT_FAU22FireAlert_B1 || FAU1CT_FAU23FireAlert_B1 || FAU1CT_FAU24FireAlert_B1
         || FAU1CT_FAU25FireAlert_B1 || FAU1CT_FAU26FireAlert_B1 || FAU1CT_FAU27FireAlert_B1 || FAU1CT_FAU28FireAlert_B1
            )
        {
             ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_FAS_status))->ShowLabel();
        }
        else
        {
             ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_FAS_status))->HideLabel();
        }


}
void CRunStatePage::UpdateByPass_Hide()
{

    if
 (       RIOM1CT_DIM3DI2_B1||RIOM1CT_DIM3DI2_B1||RIOM1CT_DIM3DI4_B1||RIOM1CT_DIM3DI5_B1||RIOM1CT_DIM3DI6_B1||RIOM1CT_DIM1DI12_B1||RIOM1CT_DIM3DI1_B1||RIOM1CT_DIM4DI3_B1||
         RIOM6CT_DIM3DI2_B1||RIOM6CT_DIM3DI2_B1||RIOM6CT_DIM3DI4_B1||RIOM6CT_DIM3DI5_B1||RIOM6CT_DIM3DI6_B1||RIOM6CT_DIM1DI12_B1||RIOM6CT_DIM3DI1_B1||RIOM6CT_DIM4DI3_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->ShowLabel();
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->HideLabel();
    }

//    int zerospeed_color1        = 0;
//    int zerospeed_color2        = 0;
//    int door_color1             = 0;
//    int door_color2             = 0;
//    int placeremit_color1       = 0;
//    int placeremit_color2       = 0;
//    int commonuseremit_color1   = 0;
//    int commonuseremit_color2   = 0;
//    int windpresslow_color1     = 0;
//    int windpresslow_color2     = 0;
//    int jjzdhl_color1           = 0;
//    int jjzdhl_color2           = 0;
//    int atccut_color1           = 0;
//    int atccut_color2           = 0;
//    int CommonBrakeAppBypass1   = 0;
//    int CommonBrakeAppBypass2   = 0;
//    int CommonBrakeAppBypass3   = 0;
//    int CommonBrakeAppBypass4   = 0;
//    int CommonBrakeAppBypass5   = 0;
//    int CommonBrakeAppBypass6   = 0;
//    int CommonBrakeAppBypass7   = 0;
//    int CommonBrakeAppBypass8   = 0;
//    int CommonBrakeRelBypass1   = 0;
//    int CommonBrakeRelBypass2   = 0;
//    //int A130A =0;//modify
//    //CTHM_Tc1DI2On_B1	TC1车DI2在线
//    if ( (Bit(CCU_HMI_222_11, 14 ))== 1)
//    {
//        //DICT_TractionSafeLoopBypassMonitTci_B1   	牵引安全环路旁路监视
//        if (Bit( DI_110_3, 1 ) == 1)
//        {
//            zerospeed_color1 = 2;
//        }
//        else
//        {
//            zerospeed_color1 = 1;
//        }

//        if(Bit( DI_110_3, 14 )==1)
//        {
//            atccut_color1 = 2;
//        }
//        else
//        {
//            atccut_color1 = 1;
//        }
//    }
//    else
//    {
//        zerospeed_color1 = 0;
//        atccut_color1 = 0;

//    }
//    if ( (Bit(CCU_HMI_222_11, 13 ))== 1)
//    {
//        //DICT_BypassAllDoorsClosedTci_B1    门旁路
//        if (Bit( DI_110_5, 6 ) == 1)
//        {
//            door_color1 = 2;
//        }
//        else
//        {
//            door_color1 = 1;
//        }
//        //DICT_BypassAllPBreleasedTci_B1    旁路：停放制动缓解
//        if (Bit( DI_110_5, 7 ) == 1)
//        {
//            placeremit_color1 = 2;
//        }
//        else
//        {
//            placeremit_color1 = 1;
//        }
//        //DICT_BypassPneumaticSerBrakesTci_B1    旁路：常用制动施加
//        if (Bit( DI_110_5, 8 ) == 1)
//        {
//            commonuseremit_color1 = 2;
//        }
//        else
//        {
//            commonuseremit_color1 = 1;
//        }
//        //DICT_BypassMRpressureTci_B1    旁路：总风低压
//        if (Bit( DI_110_6, 9 ) == 1)
//        {
//            windpresslow_color1 = 2;
//        }
//        else
//        {
//            windpresslow_color1 = 1;
//        }
//        //DICT_BypassEmergencyLoopTci_B1    旁路：安全环路
//        if(Bit( DI_110_5, 5 )==1)
//        {
//            jjzdhl_color1 = 2;
//        }
//        else
//        {
//            jjzdhl_color1 = 1;
//        }

//    }
//    else
//    {
//        door_color1 = 0;
//        placeremit_color1 = 0;
//        commonuseremit_color1 = 0;
//        windpresslow_color1 = 0;
//        jjzdhl_color1 = 0;

//    }
//    if ( (Bit(CCU_HMI_222_11, 12 ))== 1)
//    {

//        if (Bit( DI_110_7, 9 ) == 1)
//        {
//            CommonBrakeAppBypass1 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass1 = 1;
//        }
//        //DICT_ CommonBrakeAppBypassSwitchMonitor Tci_B1    本车常用制动施加旁路开关监视
//        if (Bit( DI_110_7, 10 ) == 1)
//        {
//            CommonBrakeRelBypass1 = 2;
//        }
//        else
//        {
//            CommonBrakeRelBypass1 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass1 = 0;
//        CommonBrakeRelBypass1 = 0;
//    }



//    if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
//    {
//        if (Bit( DI_180_3, 1 ) == 1)
//        {
//            zerospeed_color2 = 2;
//        }
//        else
//        {
//            zerospeed_color2 = 1;
//        }

//        if(Bit( DI_180_3, 14 ) == 1)
//        {
//            atccut_color2 = 2;
//        }
//        else
//        {
//            atccut_color2=1;
//        }
//    }
//    else
//    {
//        zerospeed_color2 = 0;
//        atccut_color2 = 0;

//    }

//    if ( (Bit(CCU_HMI_222_15, 5 ))== 1)
//    {
//        if (Bit( DI_180_5, 6 ) == 1)
//        {
//            door_color2 = 2;
//        }
//        else
//        {
//            door_color2 = 1;
//        }
//        if (Bit( DI_180_5,7 ) == 1)
//        {
//            placeremit_color2 = 2;
//        }
//        else
//        {
//            placeremit_color2 = 1;
//        }
//        if (Bit( DI_180_5, 8 ) == 1)
//        {
//            commonuseremit_color2 = 2;
//        }
//        else
//        {
//            commonuseremit_color2 = 1;
//        }
//        if (Bit( DI_180_6, 9 ) == 1)
//        {
//            windpresslow_color2 = 2;
//        }
//        else
//        {
//            windpresslow_color2 = 1;
//        }
//        if(Bit( DI_180_5, 5 ) == 1)
//        {
//            jjzdhl_color2 = 2;
//        }
//        else
//        {
//            jjzdhl_color2=1;
//        }
//    }
//    else
//    {
//        door_color2 = 0;
//        placeremit_color2 = 0;
//        commonuseremit_color2 = 0;
//        windpresslow_color2 = 0;
//        jjzdhl_color2 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_15, 4 ))== 1)
//    {
//        if (Bit( DI_180_7, 9 ) == 1)
//        {
//            CommonBrakeAppBypass8 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass8 = 1;
//        }

//        if (Bit( DI_180_7, 10 ) == 1)
//        {
//            CommonBrakeRelBypass2 = 2;
//        }
//        else
//        {
//            CommonBrakeRelBypass2 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass8 = 0;
//        CommonBrakeRelBypass2 = 0;

//    }


//    if ( (Bit(CCU_HMI_222_12, 6 ))== 1)
//    {
//        if (Bit( DI_120_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass2 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass2 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass2 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_12, 14 ))== 1)
//    {
//        if (Bit( DI_130_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass3 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass3 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass3 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_13, 6 ))== 1)
//    {
//        if (Bit( DI_140_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass4 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass4 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass4 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_13, 14 ))== 1)
//    {
//        if (Bit( DI_150_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass5 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass5 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass5 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_14, 6 ))== 1)
//    {
//        if (Bit( DI_160_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass6 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass6 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass6 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_14, 14 ))== 1)
//    {
//        if (Bit( DI_170_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass7 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass7 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass7 = 0;
//    }



//    if (Bit( zerospeed_color1, 2 )||Bit( zerospeed_color2, 2 )|| Bit( door_color1, 2 )||Bit( door_color2, 2 ) ||Bit( placeremit_color1, 2 )||Bit( placeremit_color2, 2 )||Bit( commonuseremit_color1, 2 )||Bit( commonuseremit_color2, 2 )||Bit( CommonBrakeRelBypass1, 2 )||Bit( CommonBrakeRelBypass2, 2)
//      ||Bit( CommonBrakeAppBypass1, 2 )||Bit( CommonBrakeAppBypass2, 2 )|| Bit( CommonBrakeAppBypass3, 2 )||Bit( CommonBrakeAppBypass4, 2 ) ||Bit( CommonBrakeAppBypass5, 2 )||Bit( CommonBrakeAppBypass6, 2 )||Bit( CommonBrakeAppBypass7, 2 )||Bit( CommonBrakeAppBypass8, 2 )
//      ||Bit( windpresslow_color1, 2 )||Bit( windpresslow_color2, 2 )|| Bit( jjzdhl_color1, 2 )||Bit( jjzdhl_color2, 2 ) ||Bit( atccut_color1, 2)||Bit( atccut_color2, 2 ))
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->ShowLabel();
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->HideLabel();
//    }


}

void CRunStatePage::UpdateDisEBTest()
{

    if(0)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DisEBTest))->ShowLabel();
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DisEBTest))->HideLabel();
    }

}

