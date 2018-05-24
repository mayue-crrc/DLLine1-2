#include "FASPage.h"



ROMDATA g_PicRom_FASPage[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("烟火报警") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("烟火\n报警") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBFASPage_TRAIN                      },

    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_LEFT                 },

#endif

    {"",                          D_FONT_BOLD(6),      QRect( 100, 150, 600,   1),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 100, 270, 600,   1),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 300,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//火警
        {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(120, 195,  25,  25),           Qt::white,                Qt::white,              CONTROL_LABEL,           ID_PIBFASPage_FIREALERT1         },
        {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(155, 195,  25,  25),           Qt::white,                Qt::white,              CONTROL_LABEL,           ID_PIBFASPage_FIREALERT2         },
        {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(170, 240,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT3         },
        {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(170, 155,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT4        },
        {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(105, 240,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT5         },
        {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105, 155,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT6        },

        {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(120+100, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT7        },
        {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(155+100, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT8         },
        {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(105+100, 240,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT9        },
        {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(105+100, 155,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT10        },

        {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(120+200, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT11        },
        {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(150+200, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT12        },
        {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(105+200, 240,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT13       },
        {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(105+200, 155,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(155+500, 195,  25,  25),           Qt::white,                Qt::white,              CONTROL_LABEL,           ID_PIBFASPage_FIREALERT23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120+500, 195,  25,  25),           Qt::white,                Qt::white,              CONTROL_LABEL,           ID_PIBFASPage_FIREALERT24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(105+500, 155,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(105+500, 240,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(170+500, 155,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(170+500, 240,  25,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREALERT28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(155+400, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT19        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120+400, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(170+400, 155,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(170+400, 240,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(155+300, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT15        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120+300, 195,  25,  25),           Qt::white,                Qt::white,          CONTROL_LABEL,           ID_PIBFASPage_FIREALERT16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(170+300, 155,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(170+300, 240,  25,  25),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREALERT18        },

{QObject::trUtf8("探测器屏蔽"),                      D_FONT_BOLD(4),      QRect(15, 301, 80,  28),           Qt::white,                Qt::black,              CONTROL_LABEL,              ID_IGNORE       },
{QObject::trUtf8("探测器\n短路故障"),                   D_FONT_BOLD(4),      QRect(15, 331, 80,  28),           Qt::white,                Qt::black,              CONTROL_LABEL,              ID_IGNORE       },
{QObject::trUtf8("探测器\n开路故障"),                   D_FONT_BOLD(4),      QRect(15, 361, 80,  28),           Qt::white,                Qt::black,              CONTROL_LABEL,              ID_IGNORE       },
{QObject::trUtf8("探测器\n风扇故障"),                   D_FONT_BOLD(4),      QRect(15, 391, 80,  28),           Qt::white,                Qt::black,              CONTROL_LABEL,              ID_IGNORE       },
{QObject::trUtf8("探测器污染"),                      D_FONT_BOLD(4),      QRect(15, 421, 80,  28),           Qt::white,                Qt::black,              CONTROL_LABEL,              ID_IGNORE       },
{QObject::trUtf8("探测器\n通讯故障"),                   D_FONT_BOLD(4),      QRect(15, 451, 80,  28),           Qt::white,                Qt::black,              CONTROL_LABEL,              ID_IGNORE       },


//屏蔽
{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(105, 304, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FIREISO1         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120, 304, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FIREISO2         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(135, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO3         },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(150, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO4       },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(165, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO5        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(180, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO6        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(204, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO7        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(228, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO8        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(251, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO9        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(275, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO10        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(304, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO11        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(328, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO12        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(351, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO13       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(375, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(180+500, 304, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FIREISO23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(165+500, 304, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FIREISO24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(150+500, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(135+500, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(120+500, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105+500, 304, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FIREISO28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(275+300, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO19        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(251+300, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(228+300, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(204+300, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(375+100, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO15      },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(351+100, 304,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FIREISO16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(328+100, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(304+100, 304,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FIREISO18       },

//短路故障
{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(105, 334, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT1         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120, 334, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT2         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(135, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT3         },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(150, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT4       },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(165, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT5        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(180, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT6        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(204, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT7        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(228, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT8        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(251, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT9        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(275, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT10        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(304, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT11        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(328, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT12        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(351, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT13       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(375, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(180+500, 334, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(165+500, 334, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(150+500, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(135+500, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(120+500, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105+500, 334, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(275+300, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT19       },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(251+300, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(228+300, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(204+300, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(375+100, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT15      },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(351+100, 334,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(328+100, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(304+100, 334,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_SHORTCIRCUITFAULT18        },

//　　开路故障
{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(105, 364, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT1         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120, 364, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT2         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(135, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT3         },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(150, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT4       },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(165, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT5        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(180, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT6        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(204, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT7        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(228, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT8        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(251, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT9        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(275, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT10        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(304, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT11        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(328, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT12        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(351, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT13       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(375, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(180+500, 364, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(165+500, 364, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(150+500, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(135+500, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(120+500, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105+500, 364, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(275+300, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT19        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(251+300, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(228+300, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(204+300, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(375+100, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT15      },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(351+100, 364,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(328+100, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(304+100, 364,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_OPENCIRCUITFAULT18        },


//风扇故障
{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(105, 394, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FANFAULT1         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120, 394, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FANFAULT2         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(135, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT3         },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(150, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT4       },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(165, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT5        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(180, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT6        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(204, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT7        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(228, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT8        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(251, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT9        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(275, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT10        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(304, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT11        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(328, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT12        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(351, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT13       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(375, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(180+500, 394, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FANFAULT23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(165+500, 394, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_FANFAULT24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(150+500, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(135+500, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(120+500, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105+500, 394, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_FANFAULT28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(275+300, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT19        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(251+300, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(228+300, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(204+300, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(375+100, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT15      },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(351+100, 394,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_FANFAULT16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(328+100, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(304+100, 394,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_FANFAULT18        },


//污染

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(105, 424, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_POLLUT1         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120, 424, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_POLLUT2         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(135, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT3         },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(150, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT4       },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(165, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT5        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(180, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT6        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(204, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT7        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(228, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT8        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(251, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT9        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(275, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT10        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(304, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT11        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(328, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT12        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(351, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT13       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(375, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(180+500, 424, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_POLLUT23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(165+500, 424, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_POLLUT24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(150+500, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(135+500, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(120+500, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105+500, 424, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_POLLUT28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(275+300, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT19        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(251+300, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(228+300, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(204+300, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(375+100, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT15      },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(351+100, 424,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_POLLUT16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(328+100, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(304+100, 424,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_POLLUT18        },

//通讯故障

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(105, 454, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT1         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(120, 454, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT2         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(135, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT3         },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(150, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT4       },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(165, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT5        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(180, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT6        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(204, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT7        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(228, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT8        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(251, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT9        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(275, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT10        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(304, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT11        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(328, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT12        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(351, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT13       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(375, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT14        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(180+500, 454, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT23         },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(165+500, 454, 14,  24),           Qt::white,                Qt::red,              CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT24         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(150+500, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT25        },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(135+500, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT26        },
{QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(120+500, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT27        },
{QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(105+500, 454, 14,  24),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT28      },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(275+300, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT19        },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(251+300, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT20         },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(228+300, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT21       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(204+300, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT22        },

{QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(375+100, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT15      },
{QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(351+100, 454,  21,  24),           Qt::white,                Qt::red,          CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT16        },
{QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(328+100, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT17       },
{QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(304+100, 454,  21,  24),           Qt::white,                Qt::red,            CONTROL_LABEL,           ID_PIBFASPage_COMMUFAULT18        },



    /*
    //    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(213, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////CONTROL_IMAGE
////{"123.PNG",                    D_FONT_BOLD(6),      QRect(25, 211,  750,  170),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE51     },
//    {QObject::trUtf8("司机台"),                    D_FONT_BOLD(6),      QRect(103, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(178, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(253, 211,  70,  28),           Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(328, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(403, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(478, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("司机台"),                    D_FONT_BOLD(6),      QRect(628, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },


//    //电机转速
//    {QObject::trUtf8("电气柜1"),                 D_FONT_BOLD(6),      QRect(103, 241,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜1"),                    D_FONT_BOLD(6),      QRect(178, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜1"),                    D_FONT_BOLD(6),      QRect(253, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜1"),                    D_FONT_BOLD(6),      QRect(328, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜1"),                    D_FONT_BOLD(6),      QRect(403, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜1"),                    D_FONT_BOLD(6),      QRect(478, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜1"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜1"),                 D_FONT_BOLD(6),      QRect(628, 241,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },

//    //HSCB
//    {QObject::trUtf8("电气柜2"),                 D_FONT_BOLD(6),      QRect(103, 271,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜2"),                    D_FONT_BOLD(6),      QRect(178, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜2"),                    D_FONT_BOLD(6),      QRect(253, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜2"),                    D_FONT_BOLD(6),      QRect(328, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜2"),                    D_FONT_BOLD(6),      QRect(403, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜2"),                    D_FONT_BOLD(6),      QRect(478, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜2"),                    D_FONT_BOLD(6),      QRect(553, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜2"),                 D_FONT_BOLD(6),      QRect(628, 271,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },

//    // KIC
//    {QObject::trUtf8("客室顶板1"),                 D_FONT_BOLD(6),      QRect(103, 301,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("客室顶板1"),                    D_FONT_BOLD(6),      QRect(178, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("客室顶板1"),                    D_FONT_BOLD(6),      QRect(253, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("客室顶板1"),                    D_FONT_BOLD(6),      QRect(328, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("客室顶板1"),                    D_FONT_BOLD(6),      QRect(403, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("客室顶板1"),                    D_FONT_BOLD(6),      QRect(478, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("客室顶板1"),                    D_FONT_BOLD(6),      QRect(553, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("客室顶板1"),                 D_FONT_BOLD(6),      QRect(628, 301,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },

//    // FCC
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(45, 345,  80,  28),           Qt::black,                Qt::green,                 CONTROL_IMAGE,           ID_PIBFASPage_FIRE1         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(135, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE2         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(225, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE3         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(315, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE4         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(405, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE5         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(495, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE6         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(585, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE7         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(675, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE8         },


//    {"",                    D_FONT_BOLD(7),      QRect(45, 345,  80,  22),           Qt::white,                 Qt::black,                 CONTROL_LABEL,           ID_PIBFASPage_FIRE43        },
//    {"",                    D_FONT_BOLD(7),      QRect(135, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE44         },
//    {"",                    D_FONT_BOLD(7),      QRect(225, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE45         },
//    {"",                    D_FONT_BOLD(7),      QRect(315, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE46         },
//    {"",                    D_FONT_BOLD(7),      QRect(405, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE47         },
//    {"",                    D_FONT_BOLD(7),      QRect(495, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE48         },
//    {"",                    D_FONT_BOLD(7),      QRect(585, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE49         },
//    {"",                    D_FONT_BOLD(7),      QRect(675, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE50         },

//    // k750
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(103, 361,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电气柜3"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜3"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜3"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜3"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜3"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜3"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜3"),                    D_FONT_BOLD(6),      QRect(628, 361,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("电气柜4"),                    D_FONT_BOLD(6),      QRect(103, 391,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(178, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(328, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(553, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("电气柜4"),                    D_FONT_BOLD(6),      QRect(628, 391,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("提示:电气柜1为XX电器柜"),                D_FONT_BOLD(8),      QRect(6, 440, 240,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                  },
//    {QObject::trUtf8("电气柜2为XX电器柜"),                D_FONT_BOLD(8),      QRect(20+30, 465, 200,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                 },
//    {QObject::trUtf8("电气柜3为XX电器柜"),                D_FONT_BOLD(8),      QRect(20+30, 490, 200,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                 },
//    {QObject::trUtf8("电气柜4为XX电器柜"),                D_FONT_BOLD(8),      QRect(20+30, 515, 200,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                 },
*/

    {QObject::trUtf8("提示:"),                                                   D_FONT_BOLD(8),      QRect(26, 500, 45,  20),        Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE               },
    {QObject::trUtf8("为电气柜内烟火探头,绿色表示正常，红色表示有报警或故障"),            D_FONT_BOLD(8),      QRect(70, 520, 530,  20),      Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE                },
    {QObject::trUtf8("为风道回风口烟火探头,绿色表示正常，红色表示有报警或故障"),          D_FONT_BOLD(8),      QRect(70, 500, 530,  20),      Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE              },
//    {QObject::trUtf8("为感温线缆,绿色表示正常，红色表示有报警或故障       "),          D_FONT_BOLD(8),      QRect(115, 510-20, 530,  20),      Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE              },
//    {QObject::trUtf8("线缆位于拖车的辅助逆变器箱内，动车的牵引箱内         "),         D_FONT_BOLD(8),      QRect(119, 515, 530,  20),         Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE              },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(72, 500, 15,  15),      Qt::white,        Qt::black,      CONTROL_LABEL,  ID_PIBFASPage_FIRE3               },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect(72, 520, 15,  15),      Qt::white,        Qt::red,      CONTROL_LABEL,   ID_PIBFASPage_FIRE4             },
//

   // {QObject::trUtf8("fas2.PNG"),                D_FONT_BOLD(8),      QRect(80, 435-20, 34,  34),            Qt::white,               Qt::black,                CONTROL_IMAGE,           ID_PIBFASPage_ICON2                  },
    //{QObject::trUtf8("fas1.PNG"),                D_FONT_BOLD(8),      QRect(80, 470-20, 33,  29),            Qt::white,               Qt::black,                CONTROL_IMAGE,           ID_PIBFASPage_ICON1               },
    //{QObject::trUtf8("fas3.PNG"),                D_FONT_BOLD(8),      QRect(70, 507-20, 60,  26),            Qt::white,               Qt::black,                CONTROL_IMAGE,           ID_PIBFASPage_ICON3                },

    {QObject::trUtf8("消 音"),                    D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,           ID_PIBFASPage_CLEAR_VOICE         },
    {QObject::trUtf8("复 位"),                    D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,             ID_PIBFASPage_RESET      },
};
int g_FASPageRomLen = sizeof(g_PicRom_FASPage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(FASPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()
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
        ON_BTNCLK(ID_PIBFASPage_CLEAR_VOICE, OnClearVoiceClk)
        ON_BTNCLK(ID_PIBFASPage_RESET, UpResetClk)
END_MESSAGE_MAP()

FASPage::FASPage()
{
}

void FASPage::OnUpdatePage()
{

    updateTrain(ID_PIBFASPage_TRAIN);
    updateArrow(ID_PIBFASPage_ARROW_LEFT,ID_PIBFASPage_ARROW_RIGHT);
    updateErrorLine(ID_PIBFASPage_TRAIN);

    UpdateFireState();

       UpdateFireAlert();
       UpdateFireIso();
       UpdateShortCircuitFault();
       UpdateOpenCircuitFault();
       UpdateFanFault();
       UpdatePollut();
       UpdateCommuFault();


    if (m_bBtnPress)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            FAS_button_timer--;
            if (FAS_button_timer <= 0)
            {
                m_bBtnPress = false;

                HMCT_FAUMute_B1=false;     //      FAS蜂鸣器消音
                HMCT_FAUReset_B1=false;    //      FAS复位

                ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
            }
        }
    }


#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBMAIN_COMMINTERRUPT);

    updateFault(ID_PIBMAIN_ICON_WARNNING);

#endif
}

void FASPage::OnInitPage()
{

//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE1))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE2))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE3))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE4))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE5))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE6))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE7))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE8))->ShowImage();

    //((CImageCtrl*)GetDlgItem(ID_PIBFASPage_ICON1))->ShowImage();
    //((CImageCtrl*)GetDlgItem(ID_PIBFASPage_ICON2))->ShowImage();
    //((CImageCtrl*)GetDlgItem(ID_PIBFASPage_ICON3))->ShowImage();

    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->m_bAutoUpState = false;

}

void FASPage::OnLeavePage()
{
//    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_ACCESSORYSYSTEMTESTHELP)
//    {
        m_bBtnPress = false;

        HMCT_FAUMute_B1=false;     //      FAS蜂鸣器消音
        HMCT_FAUReset_B1=false;    //      FAS复位

        ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
//    }
}

void FASPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));

#endif
    this->InitPageHeader();

    FAS_button_timer = 0;
    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
    if(CGlobal::m_nPrePageIndex!=PAGE_INDEX_REALTIMEFAULT)
    {
        m_fas_PrePageIndex=CGlobal::m_nPrePageIndex;
    }

}


#ifdef PAGE_BUTTON_BAR_NEW
void FASPage::OnComBtn1Clk()
{

}

void FASPage::OnComBtn2Clk()
{

}

void FASPage::OnComBtn3Clk()
{

}

void FASPage::OnComBtn4Clk()
{

}

void FASPage::OnComBtn5Clk()
{

}

void FASPage::OnComBtn6Clk()
{

}
void FASPage::OnComBtn7Clk()
{
    //ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP);
}
void FASPage::OnComBtn8Clk()
{

    m_bBtnPress = false;
    HMCT_FAUMute_B1=false;     //      FAS蜂鸣器消音
    HMCT_FAUReset_B1=false;    //      FAS复位
    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
    if(CGlobal::m_nPrePageIndex==PAGE_INDEX_REALTIMEFAULT)
    {
        ChangePage(m_fas_PrePageIndex);
    }
    else
    {
        ChangePage(CGlobal::m_nPrePageIndex);
    }

}

void FASPage::OnClearVoiceClk()
{
    m_bBtnPress = true;
    if (  (FAS_button_timer==0)&&(!HMCT_FAUMute_B1)  )
    {

        HMCT_FAUMute_B1=true;
        FAS_button_timer=5;
    }

    if(HMCT_FAUReset_B1)
    {
        ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
    }

}
void FASPage::UpResetClk()
{
    m_bBtnPress = true;
    if (  (FAS_button_timer==0)&&(!HMCT_FAUReset_B1)  )
    {
        HMCT_FAUReset_B1=true;
        FAS_button_timer=5;
    }

    if(HMCT_FAUMute_B1)
    {
        ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
    }
}

void FASPage::UpdateFireState()
{

    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT1))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT2))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT7))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT8))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT11))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT12))->SetLabelState(13);

    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT15))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT16))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT19))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT20))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT23))->SetLabelState(13);
    ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT24))->SetLabelState(13);


   ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE3))->SetCtrlBKColor(Qt::black);
   ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE3))->SetLabelState(13);


}

    void FASPage::UpdateFireAlert()
    {
        int FAU1_FireAlert_Color=0;
        int FAU2_FireAlert_Color=0;
        int FAU3_FireAlert_Color=0;
        int FAU4_FireAlert_Color=0;
        int FAU5_FireAlert_Color=0;
        int FAU6_FireAlert_Color=0;
        int FAU7_FireAlert_Color=0;
        int FAU8_FireAlert_Color=0;
        int FAU9_FireAlert_Color=0;
        int FAU10_FireAlert_Color=0;
        int FAU11_FireAlert_Color=0;
        int FAU12_FireAlert_Color=0;
        int FAU13_FireAlert_Color=0;
        int FAU14_FireAlert_Color=0;
        int FAU15_FireAlert_Color=0;
        int FAU16_FireAlert_Color=0;
        int FAU17_FireAlert_Color=0;
        int FAU18_FireAlert_Color=0;
        int FAU19_FireAlert_Color=0;
        int FAU20_FireAlert_Color=0;
        int FAU21_FireAlert_Color=0;
        int FAU22_FireAlert_Color=0;
        int FAU23_FireAlert_Color=0;
        int FAU24_FireAlert_Color=0;
        int FAU25_FireAlert_Color=0;
        int FAU26_FireAlert_Color=0;
        int FAU27_FireAlert_Color=0;
        int FAU28_FireAlert_Color=0;

       if (FAU1CT_FAU1FireAlert_B1)
        {
           FAU1_FireAlert_Color=1;
           ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT1))->SetLabelState(13);


       }
       else
       {
           FAU1_FireAlert_Color=0;

           ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT1))->SetLabelState(14);

       }


       if (FAU1CT_FAU2FireAlert_B1)
        {
           FAU2_FireAlert_Color=1;
           ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT2))->SetLabelState(13);

       }
       else
       {
           FAU2_FireAlert_Color=0;
           ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT2))->SetLabelState(14);
       }
       if (FAU1CT_FAU3FireAlert_B1)
        {
           FAU3_FireAlert_Color=1;
       }
       else
       {
           FAU3_FireAlert_Color=0;
       }

       //4
       if (FAU1CT_FAU4FireAlert_B1)
        {
           FAU4_FireAlert_Color=1;
       }
       else
       {
           FAU4_FireAlert_Color=0;
       }
       //5
       if (FAU1CT_FAU5FireAlert_B1)
        {
           FAU5_FireAlert_Color=1;
       }
       else
       {
           FAU5_FireAlert_Color=0;
       }
       //6
       if (FAU1CT_FAU6FireAlert_B1)
        {
           FAU6_FireAlert_Color=1;
       }
       else
       {
           FAU6_FireAlert_Color=0;
       }
       //7
       if (FAU1CT_FAU7FireAlert_B1)
       {
          FAU7_FireAlert_Color=1;
          ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT7))->SetLabelState(13);

      }
      else
      {
          FAU7_FireAlert_Color=0;
          ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT7))->SetLabelState(14);

      }
      //8
      if (FAU1CT_FAU8FireAlert_B1)
       {
          FAU8_FireAlert_Color=1;
          ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT8))->SetLabelState(13);

      }
      else
      {
          FAU8_FireAlert_Color=0;
          ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT8))->SetLabelState(14);

      }
      //9
      if (FAU1CT_FAU9FireAlert_B1)
      {
         FAU9_FireAlert_Color=1;
     }
     else
     {
         FAU9_FireAlert_Color=0;
     }
     //10
     if (FAU1CT_FAU10FireAlert_B1)
      {
         FAU10_FireAlert_Color=1;
     }
     else
     {
         FAU10_FireAlert_Color=0;
     }
     //11
     if (FAU1CT_FAU11FireAlert_B1)
     {
        FAU11_FireAlert_Color=1;
        ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT11))->SetLabelState(13);

     }
     else
     {
        FAU11_FireAlert_Color=0;
        ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT11))->SetLabelState(14);

     }
     //12
     if (FAU1CT_FAU12FireAlert_B1)
     {
        FAU12_FireAlert_Color=1;
        ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT12))->SetLabelState(13);


     }
     else
     {
        FAU12_FireAlert_Color=0;
        ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT12))->SetLabelState(14);

     }
     //13
     if (FAU1CT_FAU13FireAlert_B1)
     {
        FAU13_FireAlert_Color=1;
     }
     else
     {
        FAU13_FireAlert_Color=0;
     }
     //14
     if (FAU1CT_FAU14FireAlert_B1)
     {
        FAU14_FireAlert_Color=1;
     }
     else
     {
        FAU14_FireAlert_Color=0;
     }
     //15
     if (FAU1CT_FAU15FireAlert_B1)
      {
         FAU15_FireAlert_Color=1;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT15))->SetLabelState(13);

     }
     else
     {
         FAU15_FireAlert_Color=0;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT15))->SetLabelState(14);

     }

     //16
     if (FAU1CT_FAU16FireAlert_B1)
      {
         FAU16_FireAlert_Color=1;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT16))->SetLabelState(13);


     }
     else
     {
         FAU16_FireAlert_Color=0;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT16))->SetLabelState(14);

     }
     //17
     if (FAU1CT_FAU17FireAlert_B1)
      {
         FAU17_FireAlert_Color=1;
     }
     else
     {
         FAU17_FireAlert_Color=0;
     }

     //18
     if (FAU1CT_FAU18FireAlert_B1)
      {
         FAU18_FireAlert_Color=1;
     }
     else
     {
         FAU18_FireAlert_Color=0;
     }
     //19
     if (FAU1CT_FAU19FireAlert_B1)
      {
         FAU19_FireAlert_Color=1;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT19))->SetLabelState(13);

     }
     else
     {
         FAU19_FireAlert_Color=0;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT19))->SetLabelState(14);

     }
     //14+6
     if (FAU1CT_FAU20FireAlert_B1)
      {
         FAU20_FireAlert_Color=1;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT20))->SetLabelState(13);

     }
     else
     {
         FAU20_FireAlert_Color=0;
         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT20))->SetLabelState(14);

     }
     //14+7
     if (FAU1CT_FAU21FireAlert_B1)
     {
        FAU21_FireAlert_Color=1;

    }
    else
    {
        FAU21_FireAlert_Color=0;

    }
    //14+8
   if (FAU1CT_FAU22FireAlert_B1)

     {
        FAU22_FireAlert_Color=1;


    }
    else
    {
        FAU22_FireAlert_Color=0;

    }
    //14+9
    if (FAU1CT_FAU23FireAlert_B1)
    {
       FAU23_FireAlert_Color=1;
       ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT23))->SetLabelState(13);

   }
   else
   {
       FAU23_FireAlert_Color=0;
       ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT23))->SetLabelState(14);

   }
   //14+10
   if (FAU1CT_FAU24FireAlert_B1)
    {
       FAU24_FireAlert_Color=1;
       ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT24))->SetLabelState(13);

   }
   else
   {
       FAU24_FireAlert_Color=0;
       ((CLabel *)GetDlgItem(ID_PIBFASPage_FIREALERT24))->SetLabelState(14);

   }
   //14+11
   if (FAU1CT_FAU25FireAlert_B1)
   {
      FAU25_FireAlert_Color=1;

   }
   else
   {
      FAU25_FireAlert_Color=0;

   }
   //14+12
   if (FAU1CT_FAU26FireAlert_B1)
   {
      FAU26_FireAlert_Color=1;

   }
   else
   {
      FAU26_FireAlert_Color=0;

   }
   //14+13
   if (FAU1CT_FAU27FireAlert_B1)
   {
      FAU27_FireAlert_Color=1;
   }
   else
   {
      FAU27_FireAlert_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28FireAlert_B1)
   {
      FAU28_FireAlert_Color=1;
   }
   else
   {
      FAU28_FireAlert_Color=0;
   }



    //SetLabelColor( ID_PIBFASPage_FIREALERT1,  FAU1_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT2,  FAU2_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT3,  FAU3_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT4,  FAU4_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT5,  FAU5_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT6,  FAU6_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT7,  FAU7_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT8,  FAU8_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT9,  FAU9_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT10, FAU10_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT11, FAU11_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT12, FAU12_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT13, FAU13_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT14, FAU14_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT15, FAU15_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT16, FAU16_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT17, FAU17_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT18, FAU18_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT19, FAU19_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT20, FAU20_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT21, FAU21_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT22, FAU22_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT23, FAU23_FireAlert_Color);
    //SetLabelColor( ID_PIBFASPage_FIREALERT24, FAU24_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT25, FAU25_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT26, FAU26_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT27, FAU27_FireAlert_Color);
    SetLabelColor( ID_PIBFASPage_FIREALERT28, FAU28_FireAlert_Color);



}

    void FASPage::UpdateFireIso()
    {
        int FAU1_FireIso_Color=0;
        int FAU2_FireIso_Color=0;
        int FAU3_FireIso_Color=0;
        int FAU4_FireIso_Color=0;
        int FAU5_FireIso_Color=0;
        int FAU6_FireIso_Color=0;
        int FAU7_FireIso_Color=0;
        int FAU8_FireIso_Color=0;
        int FAU9_FireIso_Color=0;
        int FAU10_FireIso_Color=0;
        int FAU11_FireIso_Color=0;
        int FAU12_FireIso_Color=0;
        int FAU13_FireIso_Color=0;
        int FAU14_FireIso_Color=0;
        int FAU15_FireIso_Color=0;
        int FAU16_FireIso_Color=0;
        int FAU17_FireIso_Color=0;
        int FAU18_FireIso_Color=0;
        int FAU19_FireIso_Color=0;
        int FAU20_FireIso_Color=0;
        int FAU21_FireIso_Color=0;
        int FAU22_FireIso_Color=0;
        int FAU23_FireIso_Color=0;
        int FAU24_FireIso_Color=0;
        int FAU25_FireIso_Color=0;
        int FAU26_FireIso_Color=0;
        int FAU27_FireIso_Color=0;
        int FAU28_FireIso_Color=0;

       if (FAU1CT_FAU1Iso_B1)
        {
           FAU1_FireIso_Color=1;
       }
       else
       {
           FAU1_FireIso_Color=0;
       }


       if (FAU1CT_FAU2Iso_B1)
        {
           FAU2_FireIso_Color=1;
       }
       else
       {
           FAU2_FireIso_Color=0;
       }

       if (FAU1CT_FAU3Iso_B1)
        {
           FAU3_FireIso_Color=1;
       }
       else
       {
           FAU3_FireIso_Color=0;
       }

       //4
       if (FAU1CT_FAU4Iso_B1)
        {
           FAU4_FireIso_Color=1;
       }
       else
       {
           FAU4_FireIso_Color=0;
       }
       //5
       if (FAU1CT_FAU5Iso_B1)
        {
           FAU5_FireIso_Color=1;
       }
       else
       {
           FAU5_FireIso_Color=0;
       }
       //6
       if (FAU1CT_FAU6Iso_B1)
        {
           FAU6_FireIso_Color=1;
       }
       else
       {
           FAU6_FireIso_Color=0;
       }
       //7
       if (FAU1CT_FAU7Iso_B1)
       {
          FAU7_FireIso_Color=1;
      }
      else
      {
          FAU7_FireIso_Color=0;
      }
      //8
      if (FAU1CT_FAU8Iso_B1)
       {
          FAU8_FireIso_Color=1;
      }
      else
      {
          FAU8_FireIso_Color=0;
      }
      //9
      if (FAU1CT_FAU9Iso_B1)
      {
         FAU9_FireIso_Color=1;
     }
     else
     {
         FAU9_FireIso_Color=0;
     }
     //10
     if (FAU1CT_FAU10Iso_B1)
      {
         FAU10_FireIso_Color=1;
     }
     else
     {
         FAU10_FireIso_Color=0;
     }
     //11
     if (FAU1CT_FAU11Iso_B1)
     {
        FAU11_FireIso_Color=1;
     }
     else
     {
        FAU11_FireIso_Color=0;
     }
     //12
     if (FAU1CT_FAU12Iso_B1)
     {
        FAU12_FireIso_Color=1;
     }
     else
     {
        FAU12_FireIso_Color=0;
     }
     //13
     if (FAU1CT_FAU13Iso_B1)
     {
        FAU13_FireIso_Color=1;
     }
     else
     {
        FAU13_FireIso_Color=0;
     }
     //14
     if (FAU1CT_FAU14Iso_B1)
     {
        FAU14_FireIso_Color=1;
     }
     else
     {
        FAU14_FireIso_Color=0;
     }
     //15
     if (FAU1CT_FAU15Iso_B1)
      {
         FAU15_FireIso_Color=1;
     }
     else
     {
         FAU15_FireIso_Color=0;
     }

     //16
     if (FAU1CT_FAU16Iso_B1)
      {
         FAU16_FireIso_Color=1;
     }
     else
     {
         FAU16_FireIso_Color=0;
     }
     //17
     if (FAU1CT_FAU17Iso_B1)
      {
         FAU17_FireIso_Color=1;
     }
     else
     {
         FAU17_FireIso_Color=0;
     }

     //18
     if (FAU1CT_FAU18Iso_B1)
      {
         FAU18_FireIso_Color=1;
     }
     else
     {
         FAU18_FireIso_Color=0;
     }
     //19
     if (FAU1CT_FAU19Iso_B1)
      {
         FAU19_FireIso_Color=1;
     }
     else
     {
         FAU19_FireIso_Color=0;
     }
     //14+6
     if (FAU1CT_FAU20Iso_B1)
      {
         FAU20_FireIso_Color=1;
     }
     else
     {
         FAU20_FireIso_Color=0;
     }
     //14+7
     if (FAU1CT_FAU21Iso_B1)
     {
        FAU21_FireIso_Color=1;
    }
    else
    {
        FAU21_FireIso_Color=0;
    }
    //14+8
    if (FAU1CT_FAU22Iso_B1)
     {
        FAU22_FireIso_Color=1;
    }
    else
    {
        FAU22_FireIso_Color=0;
    }
    //14+9
    if (FAU1CT_FAU23Iso_B1)
    {
       FAU23_FireIso_Color=1;
   }
   else
   {
       FAU23_FireIso_Color=0;
   }
   //14+10
   if (FAU1CT_FAU24Iso_B1)
    {
       FAU24_FireIso_Color=1;
   }
   else
   {
       FAU24_FireIso_Color=0;
   }
   //14+11
   if (FAU1CT_FAU25Iso_B1)
   {
      FAU25_FireIso_Color=1;
   }
   else
   {
      FAU25_FireIso_Color=0;
   }
   //14+12
   if (FAU1CT_FAU26Iso_B1)
   {
      FAU26_FireIso_Color=1;
   }
   else
   {
      FAU26_FireIso_Color=0;
   }
   //14+13
   if (FAU1CT_FAU27Iso_B1)
   {
      FAU27_FireIso_Color=1;
   }
   else
   {
      FAU27_FireIso_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28Iso_B1)
   {
      FAU28_FireIso_Color=1;
   }
   else
   {
      FAU28_FireIso_Color=0;
   }



    SetLabelColor( ID_PIBFASPage_FIREISO1,  FAU1_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO2,  FAU2_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO3,  FAU3_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO4,  FAU4_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO5,  FAU5_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO6,  FAU6_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO7,  FAU7_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO8,  FAU8_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO9,  FAU9_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO10, FAU10_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO11, FAU11_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO12, FAU12_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO13, FAU13_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO14, FAU14_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO15, FAU15_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO16, FAU16_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO17, FAU17_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO18, FAU18_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO19, FAU19_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO20, FAU20_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO21, FAU21_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO22, FAU22_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO23, FAU23_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO24, FAU24_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO25, FAU25_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO26, FAU26_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO27, FAU27_FireIso_Color);
    SetLabelColor( ID_PIBFASPage_FIREISO28, FAU28_FireIso_Color);

    }

    void FASPage::UpdateShortCircuitFault()
    {
        int FAU1_ShortCircuitFault_Color=0;
        int FAU2_ShortCircuitFault_Color=0;
        int FAU3_ShortCircuitFault_Color=0;
        int FAU4_ShortCircuitFault_Color=0;
        int FAU5_ShortCircuitFault_Color=0;
        int FAU6_ShortCircuitFault_Color=0;
        int FAU7_ShortCircuitFault_Color=0;
        int FAU8_ShortCircuitFault_Color=0;
        int FAU9_ShortCircuitFault_Color=0;
        int FAU10_ShortCircuitFault_Color=0;
        int FAU11_ShortCircuitFault_Color=0;
        int FAU12_ShortCircuitFault_Color=0;
        int FAU13_ShortCircuitFault_Color=0;
        int FAU14_ShortCircuitFault_Color=0;
        int FAU15_ShortCircuitFault_Color=0;
        int FAU16_ShortCircuitFault_Color=0;
        int FAU17_ShortCircuitFault_Color=0;
        int FAU18_ShortCircuitFault_Color=0;
        int FAU19_ShortCircuitFault_Color=0;
        int FAU20_ShortCircuitFault_Color=0;
        int FAU21_ShortCircuitFault_Color=0;
        int FAU22_ShortCircuitFault_Color=0;
        int FAU23_ShortCircuitFault_Color=0;
        int FAU24_ShortCircuitFault_Color=0;
        int FAU25_ShortCircuitFault_Color=0;
        int FAU26_ShortCircuitFault_Color=0;
        int FAU27_ShortCircuitFault_Color=0;
        int FAU28_ShortCircuitFault_Color=0;

       if (FAU1CT_FAU1FaultShortCircuit_B1)
        {
           FAU1_ShortCircuitFault_Color=1;
       }
       else
       {
           FAU1_ShortCircuitFault_Color=0;
       }


       if (FAU1CT_FAU2FaultShortCircuit_B1)
        {
           FAU2_ShortCircuitFault_Color=1;
       }
       else
       {
           FAU2_ShortCircuitFault_Color=0;
       }

       if (FAU1CT_FAU3FaultShortCircuit_B1)
        {
           FAU3_ShortCircuitFault_Color=1;
       }
       else
       {
           FAU3_ShortCircuitFault_Color=0;
       }

       //4
       if (FAU1CT_FAU4FaultShortCircuit_B1)
        {
           FAU4_ShortCircuitFault_Color=1;
       }
       else
       {
           FAU4_ShortCircuitFault_Color=0;
       }
       //5
       if (FAU1CT_FAU5FaultShortCircuit_B1)
        {
           FAU5_ShortCircuitFault_Color=1;
       }
       else
       {
           FAU5_ShortCircuitFault_Color=0;
       }
       //6
       if (FAU1CT_FAU6FaultShortCircuit_B1)
        {
           FAU6_ShortCircuitFault_Color=1;
       }
       else
       {
           FAU6_ShortCircuitFault_Color=0;
       }
       //7
       if (FAU1CT_FAU7FaultShortCircuit_B1)
       {
          FAU7_ShortCircuitFault_Color=1;
      }
      else
      {
          FAU7_ShortCircuitFault_Color=0;
      }
      //8
      if (FAU1CT_FAU8FaultShortCircuit_B1)
       {
          FAU8_ShortCircuitFault_Color=1;
      }
      else
      {
          FAU8_ShortCircuitFault_Color=0;
      }
      //9
      if (FAU1CT_FAU9FaultShortCircuit_B1)
      {
         FAU9_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU9_ShortCircuitFault_Color=0;
     }
     //10
     if (FAU1CT_FAU10FaultShortCircuit_B1)
      {
         FAU10_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU10_ShortCircuitFault_Color=0;
     }
     //11
     if (FAU1CT_FAU11FaultShortCircuit_B1)
     {
        FAU11_ShortCircuitFault_Color=1;
     }
     else
     {
        FAU11_ShortCircuitFault_Color=0;
     }
     //12
     if (FAU1CT_FAU12FaultShortCircuit_B1)
     {
        FAU12_ShortCircuitFault_Color=1;
     }
     else
     {
        FAU12_ShortCircuitFault_Color=0;
     }
     //13
     if (FAU1CT_FAU13FaultShortCircuit_B1)
     {
        FAU13_ShortCircuitFault_Color=1;
     }
     else
     {
        FAU13_ShortCircuitFault_Color=0;
     }
     //14
     if (FAU1CT_FAU14FaultShortCircuit_B1)
     {
        FAU14_ShortCircuitFault_Color=1;
     }
     else
     {
        FAU14_ShortCircuitFault_Color=0;
     }
     //15
     if (FAU1CT_FAU15FaultShortCircuit_B1)
      {
         FAU15_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU15_ShortCircuitFault_Color=0;
     }

     //16
     if (FAU1CT_FAU16FaultShortCircuit_B1)
      {
         FAU16_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU16_ShortCircuitFault_Color=0;
     }
     //17
     if (FAU1CT_FAU17FaultShortCircuit_B1)
      {
         FAU17_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU17_ShortCircuitFault_Color=0;
     }

     //18
     if (FAU1CT_FAU18FaultShortCircuit_B1)
      {
         FAU18_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU18_ShortCircuitFault_Color=0;
     }
     //19
     if (FAU1CT_FAU19FaultShortCircuit_B1)
      {
         FAU19_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU19_ShortCircuitFault_Color=0;
     }
     //14+6
     if (FAU1CT_FAU20FaultShortCircuit_B1)
      {
         FAU20_ShortCircuitFault_Color=1;
     }
     else
     {
         FAU20_ShortCircuitFault_Color=0;
     }
     //14+7
     if (FAU1CT_FAU21FaultShortCircuit_B1)
     {
        FAU21_ShortCircuitFault_Color=1;
    }
    else
    {
        FAU21_ShortCircuitFault_Color=0;
    }
    //14+8
    if (FAU1CT_FAU22FaultShortCircuit_B1)
     {
        FAU22_ShortCircuitFault_Color=1;
    }
    else
    {
        FAU22_ShortCircuitFault_Color=0;
    }
    //14+9
    if (FAU1CT_FAU23FaultShortCircuit_B1)
    {
       FAU23_ShortCircuitFault_Color=1;
   }
   else
   {
       FAU23_ShortCircuitFault_Color=0;
   }
   //14+10
   if (FAU1CT_FAU24FaultShortCircuit_B1)
    {
       FAU24_ShortCircuitFault_Color=1;
   }
   else
   {
       FAU24_ShortCircuitFault_Color=0;
   }
   //14+11
   if (FAU1CT_FAU25FaultShortCircuit_B1)
   {
      FAU25_ShortCircuitFault_Color=1;
   }
   else
   {
      FAU25_ShortCircuitFault_Color=0;
   }
   //14+12
   if (FAU1CT_FAU26FaultShortCircuit_B1)
   {
      FAU26_ShortCircuitFault_Color=1;
   }
   else
   {
      FAU26_ShortCircuitFault_Color=0;
   }
   //14+13
   if (FAU1CT_FAU27FaultShortCircuit_B1)
   {
      FAU27_ShortCircuitFault_Color=1;
   }
   else
   {
      FAU27_ShortCircuitFault_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28FaultShortCircuit_B1)
   {
      FAU28_ShortCircuitFault_Color=1;
   }
   else
   {
      FAU28_ShortCircuitFault_Color=0;
   }



    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT1,  FAU1_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT2,  FAU2_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT3,  FAU3_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT4,  FAU4_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT5,  FAU5_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT6,  FAU6_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT7,  FAU7_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT8,  FAU8_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT9,  FAU9_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT10, FAU10_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT11, FAU11_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT12, FAU12_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT13, FAU13_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT14, FAU14_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT15, FAU15_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT16, FAU16_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT17, FAU17_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT18, FAU18_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT19, FAU19_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT20, FAU20_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT21, FAU21_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT22, FAU22_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT23, FAU23_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT24, FAU24_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT25, FAU25_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT26, FAU26_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT27, FAU27_ShortCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_SHORTCIRCUITFAULT28, FAU28_ShortCircuitFault_Color);

    }

    void FASPage::UpdateOpenCircuitFault()
    {
        int FAU1_OpenCircuitFault_Color=0;
        int FAU2_OpenCircuitFault_Color=0;
        int FAU3_OpenCircuitFault_Color=0;
        int FAU4_OpenCircuitFault_Color=0;
        int FAU5_OpenCircuitFault_Color=0;
        int FAU6_OpenCircuitFault_Color=0;
        int FAU7_OpenCircuitFault_Color=0;
        int FAU8_OpenCircuitFault_Color=0;
        int FAU9_OpenCircuitFault_Color=0;
        int FAU10_OpenCircuitFault_Color=0;
        int FAU11_OpenCircuitFault_Color=0;
        int FAU12_OpenCircuitFault_Color=0;
        int FAU13_OpenCircuitFault_Color=0;
        int FAU14_OpenCircuitFault_Color=0;
        int FAU15_OpenCircuitFault_Color=0;
        int FAU16_OpenCircuitFault_Color=0;
        int FAU17_OpenCircuitFault_Color=0;
        int FAU18_OpenCircuitFault_Color=0;
        int FAU19_OpenCircuitFault_Color=0;
        int FAU20_OpenCircuitFault_Color=0;
        int FAU21_OpenCircuitFault_Color=0;
        int FAU22_OpenCircuitFault_Color=0;
        int FAU23_OpenCircuitFault_Color=0;
        int FAU24_OpenCircuitFault_Color=0;
        int FAU25_OpenCircuitFault_Color=0;
        int FAU26_OpenCircuitFault_Color=0;
        int FAU27_OpenCircuitFault_Color=0;
        int FAU28_OpenCircuitFault_Color=0;

       if (FAU1CT_FAU1FaultOpenCircuit_B1)
        {
           FAU1_OpenCircuitFault_Color=1;
       }
       else
       {
           FAU1_OpenCircuitFault_Color=0;
       }


       if (FAU1CT_FAU2FaultOpenCircuit_B1)
        {
           FAU2_OpenCircuitFault_Color=1;
       }
       else
       {
           FAU2_OpenCircuitFault_Color=0;
       }

       if (FAU1CT_FAU3FaultOpenCircuit_B1)
        {
           FAU3_OpenCircuitFault_Color=1;
       }
       else
       {
           FAU3_OpenCircuitFault_Color=0;
       }

       //4
       if (FAU1CT_FAU4FaultOpenCircuit_B1)
        {
           FAU4_OpenCircuitFault_Color=1;
       }
       else
       {
           FAU4_OpenCircuitFault_Color=0;
       }
       //5
       if (FAU1CT_FAU5FaultOpenCircuit_B1)
        {
           FAU5_OpenCircuitFault_Color=1;
       }
       else
       {
           FAU5_OpenCircuitFault_Color=0;
       }
       //6
       if (FAU1CT_FAU6FaultOpenCircuit_B1)
        {
           FAU6_OpenCircuitFault_Color=1;
       }
       else
       {
           FAU6_OpenCircuitFault_Color=0;
       }
       //7
       if (FAU1CT_FAU7FaultOpenCircuit_B1)
       {
          FAU7_OpenCircuitFault_Color=1;
      }
      else
      {
          FAU7_OpenCircuitFault_Color=0;
      }
      //8
      if (FAU1CT_FAU8FaultOpenCircuit_B1)
       {
          FAU8_OpenCircuitFault_Color=1;
      }
      else
      {
          FAU8_OpenCircuitFault_Color=0;
      }
      //9
      if (FAU1CT_FAU9FaultOpenCircuit_B1)
      {
         FAU9_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU9_OpenCircuitFault_Color=0;
     }
     //10
     if (FAU1CT_FAU10FaultOpenCircuit_B1)
      {
         FAU10_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU10_OpenCircuitFault_Color=0;
     }
     //11
     if (FAU1CT_FAU11FaultOpenCircuit_B1)
     {
        FAU11_OpenCircuitFault_Color=1;
     }
     else
     {
        FAU11_OpenCircuitFault_Color=0;
     }
     //12
     if (FAU1CT_FAU12FaultOpenCircuit_B1)
     {
        FAU12_OpenCircuitFault_Color=1;
     }
     else
     {
        FAU12_OpenCircuitFault_Color=0;
     }
     //13
     if (FAU1CT_FAU13FaultOpenCircuit_B1)
     {
        FAU13_OpenCircuitFault_Color=1;
     }
     else
     {
        FAU13_OpenCircuitFault_Color=0;
     }
     //14
     if (FAU1CT_FAU14FaultOpenCircuit_B1)
     {
        FAU14_OpenCircuitFault_Color=1;
     }
     else
     {
        FAU14_OpenCircuitFault_Color=0;
     }
     //15
     if (FAU1CT_FAU15FaultOpenCircuit_B1)
      {
         FAU15_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU15_OpenCircuitFault_Color=0;
     }

     //16
     if (FAU1CT_FAU16FaultOpenCircuit_B1)
      {
         FAU16_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU16_OpenCircuitFault_Color=0;
     }
     //17
     if (FAU1CT_FAU17FaultOpenCircuit_B1)
      {
         FAU17_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU17_OpenCircuitFault_Color=0;
     }

     //18
     if (FAU1CT_FAU18FaultOpenCircuit_B1)
      {
         FAU18_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU18_OpenCircuitFault_Color=0;
     }
     //19
     if (FAU1CT_FAU19FaultOpenCircuit_B1)
      {
         FAU19_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU19_OpenCircuitFault_Color=0;
     }
     //14+6
     if (FAU1CT_FAU20FaultOpenCircuit_B1)
      {
         FAU20_OpenCircuitFault_Color=1;
     }
     else
     {
         FAU20_OpenCircuitFault_Color=0;
     }
     //14+7
     if (FAU1CT_FAU21FaultOpenCircuit_B1)
     {
        FAU21_OpenCircuitFault_Color=1;
    }
    else
    {
        FAU21_OpenCircuitFault_Color=0;
    }
    //14+8
    if (FAU1CT_FAU22FaultOpenCircuit_B1)
     {
        FAU22_OpenCircuitFault_Color=1;
    }
    else
    {
        FAU22_OpenCircuitFault_Color=0;
    }
    //14+9
    if (FAU1CT_FAU23FaultOpenCircuit_B1)
    {
       FAU23_OpenCircuitFault_Color=1;
   }
   else
   {
       FAU23_OpenCircuitFault_Color=0;
   }
   //14+10
   if (FAU1CT_FAU24FaultOpenCircuit_B1)
    {
       FAU24_OpenCircuitFault_Color=1;
   }
   else
   {
       FAU24_OpenCircuitFault_Color=0;
   }
   //14+11
   if (FAU1CT_FAU25FaultOpenCircuit_B1)
   {
      FAU25_OpenCircuitFault_Color=1;
   }
   else
   {
      FAU25_OpenCircuitFault_Color=0;
   }
   //14+12
   if (FAU1CT_FAU26FaultOpenCircuit_B1)
   {
      FAU26_OpenCircuitFault_Color=1;
   }
   else
   {
      FAU26_OpenCircuitFault_Color=0;
   }
   //14+13
   if (FAU1CT_FAU27FaultOpenCircuit_B1)
   {
      FAU27_OpenCircuitFault_Color=1;
   }
   else
   {
      FAU27_OpenCircuitFault_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28FaultOpenCircuit_B1)
   {
      FAU28_OpenCircuitFault_Color=1;
   }
   else
   {
      FAU28_OpenCircuitFault_Color=0;
   }



    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT1,  FAU1_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT2,  FAU2_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT3,  FAU3_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT4,  FAU4_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT5,  FAU5_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT6,  FAU6_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT7,  FAU7_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT8,  FAU8_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT9,  FAU9_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT10, FAU10_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT11, FAU11_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT12, FAU12_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT13, FAU13_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT14, FAU14_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT15, FAU15_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT16, FAU16_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT17, FAU17_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT18, FAU18_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT19, FAU19_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT20, FAU20_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT21, FAU21_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT22, FAU22_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT23, FAU23_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT24, FAU24_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT25, FAU25_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT26, FAU26_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT27, FAU27_OpenCircuitFault_Color);
    SetLabelColor( ID_PIBFASPage_OPENCIRCUITFAULT28, FAU28_OpenCircuitFault_Color);


    }

    void FASPage::UpdateFanFault()
    {
        int FAU1_FanFault_Color=0;
        int FAU2_FanFault_Color=0;
        int FAU3_FanFault_Color=0;
        int FAU4_FanFault_Color=0;
        int FAU5_FanFault_Color=0;
        int FAU6_FanFault_Color=0;
        int FAU7_FanFault_Color=0;
        int FAU8_FanFault_Color=0;
        int FAU9_FanFault_Color=0;
        int FAU10_FanFault_Color=0;
        int FAU11_FanFault_Color=0;
        int FAU12_FanFault_Color=0;
        int FAU13_FanFault_Color=0;
        int FAU14_FanFault_Color=0;
        int FAU15_FanFault_Color=0;
        int FAU16_FanFault_Color=0;
        int FAU17_FanFault_Color=0;
        int FAU18_FanFault_Color=0;
        int FAU19_FanFault_Color=0;
        int FAU20_FanFault_Color=0;
        int FAU21_FanFault_Color=0;
        int FAU22_FanFault_Color=0;
        int FAU23_FanFault_Color=0;
        int FAU24_FanFault_Color=0;
        int FAU25_FanFault_Color=0;
        int FAU26_FanFault_Color=0;
        int FAU27_FanFault_Color=0;
        int FAU28_FanFault_Color=0;

       if (FAU1CT_FAU1FaultFan_B1)
        {
           FAU1_FanFault_Color=1;
       }
       else
       {
           FAU1_FanFault_Color=0;
       }


       if (FAU1CT_FAU2FaultFan_B1)
        {
           FAU2_FanFault_Color=1;
       }
       else
       {
           FAU2_FanFault_Color=0;
       }

       if (FAU1CT_FAU3FaultFan_B1)
        {
           FAU3_FanFault_Color=1;
       }
       else
       {
           FAU3_FanFault_Color=0;
       }

       //4
       if (FAU1CT_FAU4FaultFan_B1)
        {
           FAU4_FanFault_Color=1;
       }
       else
       {
           FAU4_FanFault_Color=0;
       }
       //5
       if (FAU1CT_FAU5FaultFan_B1)
        {
           FAU5_FanFault_Color=1;
       }
       else
       {
           FAU5_FanFault_Color=0;
       }
       //6
       if (FAU1CT_FAU6FaultFan_B1)
        {
           FAU6_FanFault_Color=1;
       }
       else
       {
           FAU6_FanFault_Color=0;
       }
       //7
       if (FAU1CT_FAU7FaultFan_B1)
       {
          FAU7_FanFault_Color=1;
      }
      else
      {
          FAU7_FanFault_Color=0;
      }
      //8
      if (FAU1CT_FAU8FaultFan_B1)
       {
          FAU8_FanFault_Color=1;
      }
      else
      {
          FAU8_FanFault_Color=0;
      }
      //9
      if (FAU1CT_FAU9FaultFan_B1)
      {
         FAU9_FanFault_Color=1;
     }
     else
     {
         FAU9_FanFault_Color=0;
     }
     //10
     if (FAU1CT_FAU10FaultFan_B1)
      {
         FAU10_FanFault_Color=1;
     }
     else
     {
         FAU10_FanFault_Color=0;
     }
     //11
     if (FAU1CT_FAU11FaultFan_B1)
     {
        FAU11_FanFault_Color=1;
     }
     else
     {
        FAU11_FanFault_Color=0;
     }
     //12
     if (FAU1CT_FAU12FaultFan_B1)
     {
        FAU12_FanFault_Color=1;
     }
     else
     {
        FAU12_FanFault_Color=0;
     }
     //13
     if (FAU1CT_FAU13FaultFan_B1)
     {
        FAU13_FanFault_Color=1;
     }
     else
     {
        FAU13_FanFault_Color=0;
     }
     //14
     if (FAU1CT_FAU14FaultFan_B1)
     {
        FAU14_FanFault_Color=1;
     }
     else
     {
        FAU14_FanFault_Color=0;
     }
     //15
     if (FAU1CT_FAU15FaultFan_B1)
      {
         FAU15_FanFault_Color=1;
     }
     else
     {
         FAU15_FanFault_Color=0;
     }

     //16
     if (FAU1CT_FAU16FaultFan_B1)
      {
         FAU16_FanFault_Color=1;
     }
     else
     {
         FAU16_FanFault_Color=0;
     }
     //17
     if (FAU1CT_FAU17FaultFan_B1)
      {
         FAU17_FanFault_Color=1;
     }
     else
     {
         FAU17_FanFault_Color=0;
     }

     //18
     if (FAU1CT_FAU18FaultFan_B1)
      {
         FAU18_FanFault_Color=1;
     }
     else
     {
         FAU18_FanFault_Color=0;
     }
     //19
     if (FAU1CT_FAU19FaultFan_B1)
      {
         FAU19_FanFault_Color=1;
     }
     else
     {
         FAU19_FanFault_Color=0;
     }
     //14+6
     if (FAU1CT_FAU20FaultFan_B1)
      {
         FAU20_FanFault_Color=1;
     }
     else
     {
         FAU20_FanFault_Color=0;
     }
     //14+7
     if (FAU1CT_FAU21FaultFan_B1)
     {
        FAU21_FanFault_Color=1;
    }
    else
    {
        FAU21_FanFault_Color=0;
    }
    //14+8
    if (FAU1CT_FAU22FaultFan_B1)
     {
        FAU22_FanFault_Color=1;
    }
    else
    {
        FAU22_FanFault_Color=0;
    }
    //14+9
    if (FAU1CT_FAU23FaultFan_B1)
    {
       FAU23_FanFault_Color=1;
   }
   else
   {
       FAU23_FanFault_Color=0;
   }
   //14+10
   if (FAU1CT_FAU24FaultFan_B1)
    {
       FAU24_FanFault_Color=1;
   }
   else
   {
       FAU24_FanFault_Color=0;
   }
   //14+11
   if (FAU1CT_FAU25FaultFan_B1)
   {
      FAU25_FanFault_Color=1;
   }
   else
   {
      FAU25_FanFault_Color=0;
   }
   //14+12
   if (FAU1CT_FAU26FaultFan_B1)
   {
      FAU26_FanFault_Color=1;
   }
   else
   {
      FAU26_FanFault_Color=0;
   }
   //14+13
   if (FAU1CT_FAU27FaultFan_B1)
   {
      FAU27_FanFault_Color=1;
   }
   else
   {
      FAU27_FanFault_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28FaultFan_B1)
   {
      FAU28_FanFault_Color=1;
   }
   else
   {
      FAU28_FanFault_Color=0;
   }



    SetLabelColor( ID_PIBFASPage_FANFAULT1,  FAU1_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT2,  FAU2_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT3,  FAU3_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT4,  FAU4_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT5,  FAU5_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT6,  FAU6_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT7,  FAU7_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT8,  FAU8_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT9,  FAU9_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT10, FAU10_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT11, FAU11_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT12, FAU12_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT13, FAU13_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT14, FAU14_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT15, FAU15_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT16, FAU16_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT17, FAU17_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT18, FAU18_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT19, FAU19_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT20, FAU20_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT21, FAU21_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT22, FAU22_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT23, FAU23_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT24, FAU24_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT25, FAU25_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT26, FAU26_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT27, FAU27_FanFault_Color);
    SetLabelColor( ID_PIBFASPage_FANFAULT28, FAU28_FanFault_Color);


    }

    void FASPage::UpdatePollut()
    {
        int FAU1_Pollut_Color=0;
        int FAU2_Pollut_Color=0;
        int FAU3_Pollut_Color=0;
        int FAU4_Pollut_Color=0;
        int FAU5_Pollut_Color=0;
        int FAU6_Pollut_Color=0;
        int FAU7_Pollut_Color=0;
        int FAU8_Pollut_Color=0;
        int FAU9_Pollut_Color=0;
        int FAU10_Pollut_Color=0;
        int FAU11_Pollut_Color=0;
        int FAU12_Pollut_Color=0;
        int FAU13_Pollut_Color=0;
        int FAU14_Pollut_Color=0;
        int FAU15_Pollut_Color=0;
        int FAU16_Pollut_Color=0;
        int FAU17_Pollut_Color=0;
        int FAU18_Pollut_Color=0;
        int FAU19_Pollut_Color=0;
        int FAU20_Pollut_Color=0;
        int FAU21_Pollut_Color=0;
        int FAU22_Pollut_Color=0;
        int FAU23_Pollut_Color=0;
        int FAU24_Pollut_Color=0;
        int FAU25_Pollut_Color=0;
        int FAU26_Pollut_Color=0;
        int FAU27_Pollut_Color=0;
        int FAU28_Pollut_Color=0;

       if (FAU1CT_FAU1Pollute_B1)
        {
           FAU1_Pollut_Color=1;
       }
       else
       {
           FAU1_Pollut_Color=0;
       }


       if (FAU1CT_FAU2Pollute_B1)
        {
           FAU2_Pollut_Color=1;
       }
       else
       {
           FAU2_Pollut_Color=0;
       }

       if (FAU1CT_FAU3Pollute_B1)
        {
           FAU3_Pollut_Color=1;
       }
       else
       {
           FAU3_Pollut_Color=0;
       }

       //4
       if (FAU1CT_FAU4Pollute_B1)
        {
           FAU4_Pollut_Color=1;
       }
       else
       {
           FAU4_Pollut_Color=0;
       }
       //5
       if (FAU1CT_FAU5Pollute_B1)
        {
           FAU5_Pollut_Color=1;
       }
       else
       {
           FAU5_Pollut_Color=0;
       }
       //6
       if (FAU1CT_FAU6Pollute_B1)
        {
           FAU6_Pollut_Color=1;
       }
       else
       {
           FAU6_Pollut_Color=0;
       }
       //7
       if (FAU1CT_FAU7Pollute_B1)
       {
          FAU7_Pollut_Color=1;
      }
      else
      {
          FAU7_Pollut_Color=0;
      }
      //8
      if (FAU1CT_FAU8Pollute_B1)
       {
          FAU8_Pollut_Color=1;
      }
      else
      {
          FAU8_Pollut_Color=0;
      }
      //9
      if (FAU1CT_FAU9Pollute_B1)
      {
         FAU9_Pollut_Color=1;
     }
     else
     {
         FAU9_Pollut_Color=0;
     }
     //10
     if (FAU1CT_FAU10Pollute_B1)
      {
         FAU10_Pollut_Color=1;
     }
     else
     {
         FAU10_Pollut_Color=0;
     }
     //11
     if (FAU1CT_FAU11Pollute_B1)
     {
        FAU11_Pollut_Color=1;
     }
     else
     {
        FAU11_Pollut_Color=0;
     }
     //12
     if (FAU1CT_FAU12Pollute_B1)
     {
        FAU12_Pollut_Color=1;
     }
     else
     {
        FAU12_Pollut_Color=0;
     }
     //13
     if (FAU1CT_FAU13Pollute_B1)
     {
        FAU13_Pollut_Color=1;
     }
     else
     {
        FAU13_Pollut_Color=0;
     }
     //14
     if (FAU1CT_FAU14Pollute_B1)
     {
        FAU14_Pollut_Color=1;
     }
     else
     {
        FAU14_Pollut_Color=0;
     }
     //15
     if (FAU1CT_FAU15Pollute_B1)
      {
         FAU15_Pollut_Color=1;
     }
     else
     {
         FAU15_Pollut_Color=0;
     }

     //16
     if (FAU1CT_FAU16Pollute_B1)
      {
         FAU16_Pollut_Color=1;
     }
     else
     {
         FAU16_Pollut_Color=0;
     }
     //17
     if (FAU1CT_FAU17Pollute_B1)
      {
         FAU17_Pollut_Color=1;
     }
     else
     {
         FAU17_Pollut_Color=0;
     }

     //18
     if (FAU1CT_FAU18Pollute_B1)
      {
         FAU18_Pollut_Color=1;
     }
     else
     {
         FAU18_Pollut_Color=0;
     }
     //19
     if (FAU1CT_FAU19Pollute_B1)
      {
         FAU19_Pollut_Color=1;
     }
     else
     {
         FAU19_Pollut_Color=0;
     }
     //14+6
     if (FAU1CT_FAU20Pollute_B1)
      {
         FAU20_Pollut_Color=1;
     }
     else
     {
         FAU20_Pollut_Color=0;
     }
     //14+7
     if (FAU1CT_FAU21Pollute_B1)
     {
        FAU21_Pollut_Color=1;
    }
    else
    {
        FAU21_Pollut_Color=0;
    }
    //14+8
    if (FAU1CT_FAU22Pollute_B1)
     {
        FAU22_Pollut_Color=1;
    }
    else
    {
        FAU22_Pollut_Color=0;
    }
    //14+9
    if (FAU1CT_FAU23Pollute_B1)
    {
       FAU23_Pollut_Color=1;
   }
   else
   {
       FAU23_Pollut_Color=0;
   }
   //14+10
   if (FAU1CT_FAU24Pollute_B1)
    {
       FAU24_Pollut_Color=1;
   }
   else
   {
       FAU24_Pollut_Color=0;
   }
   //14+11
   if (FAU1CT_FAU25Pollute_B1)
   {
      FAU25_Pollut_Color=1;
   }
   else
   {
      FAU25_Pollut_Color=0;
   }
   //14+12
   if (FAU1CT_FAU26Pollute_B1)
   {
      FAU26_Pollut_Color=1;
   }
   else
   {
      FAU26_Pollut_Color=0;
   }
   //14+13
   if (FAU1CT_FAU27Pollute_B1)
   {
      FAU27_Pollut_Color=1;
   }
   else
   {
      FAU27_Pollut_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28Pollute_B1)
   {
      FAU28_Pollut_Color=1;
   }
   else
   {
      FAU28_Pollut_Color=0;
   }



    SetLabelColor( ID_PIBFASPage_POLLUT1,  FAU1_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT2,  FAU2_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT3,  FAU3_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT4,  FAU4_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT5,  FAU5_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT6,  FAU6_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT7,  FAU7_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT8,  FAU8_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT9,  FAU9_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT10, FAU10_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT11, FAU11_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT12, FAU12_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT13, FAU13_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT14, FAU14_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT15, FAU15_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT16, FAU16_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT17, FAU17_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT18, FAU18_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT19, FAU19_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT20, FAU20_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT21, FAU21_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT22, FAU22_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT23, FAU23_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT24, FAU24_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT25, FAU25_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT26, FAU26_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT27, FAU27_Pollut_Color);
    SetLabelColor( ID_PIBFASPage_POLLUT28, FAU28_Pollut_Color);

    }

    void FASPage::UpdateCommuFault()
    {
        int FAU1_CommuFault_Color=0;
        int FAU2_CommuFault_Color=0;
        int FAU3_CommuFault_Color=0;
        int FAU4_CommuFault_Color=0;
        int FAU5_CommuFault_Color=0;
        int FAU6_CommuFault_Color=0;
        int FAU7_CommuFault_Color=0;
        int FAU8_CommuFault_Color=0;
        int FAU9_CommuFault_Color=0;
        int FAU10_CommuFault_Color=0;
        int FAU11_CommuFault_Color=0;
        int FAU12_CommuFault_Color=0;
        int FAU13_CommuFault_Color=0;
        int FAU14_CommuFault_Color=0;
        int FAU15_CommuFault_Color=0;
        int FAU16_CommuFault_Color=0;
        int FAU17_CommuFault_Color=0;
        int FAU18_CommuFault_Color=0;
        int FAU19_CommuFault_Color=0;
        int FAU20_CommuFault_Color=0;
        int FAU21_CommuFault_Color=0;
        int FAU22_CommuFault_Color=0;
        int FAU23_CommuFault_Color=0;
        int FAU24_CommuFault_Color=0;
        int FAU25_CommuFault_Color=0;
        int FAU26_CommuFault_Color=0;
        int FAU27_CommuFault_Color=0;
        int FAU28_CommuFault_Color=0;

       if (FAU1CT_FAU1FaultCommu_B1)
        {
           FAU1_CommuFault_Color=1;
       }
       else
       {
           FAU1_CommuFault_Color=0;
       }


       if (FAU1CT_FAU2FaultCommu_B1)
        {
           FAU2_CommuFault_Color=1;
       }
       else
       {
           FAU2_CommuFault_Color=0;
       }

       if (FAU1CT_FAU3FaultCommu_B1)
        {
           FAU3_CommuFault_Color=1;
       }
       else
       {
           FAU3_CommuFault_Color=0;
       }

       //4
       if (FAU1CT_FAU4FaultCommu_B1)
        {
           FAU4_CommuFault_Color=1;
       }
       else
       {
           FAU4_CommuFault_Color=0;
       }
       //5
       if (FAU1CT_FAU5FaultCommu_B1)
        {
           FAU5_CommuFault_Color=1;
       }
       else
       {
           FAU5_CommuFault_Color=0;
       }
       //6
       if (FAU1CT_FAU6FaultCommu_B1)
        {
           FAU6_CommuFault_Color=1;
       }
       else
       {
           FAU6_CommuFault_Color=0;
       }
       //7
       if (FAU1CT_FAU7FaultCommu_B1)
       {
          FAU7_CommuFault_Color=1;
      }
      else
      {
          FAU7_CommuFault_Color=0;
      }
      //8
      if (FAU1CT_FAU8FaultCommu_B1)
       {
          FAU8_CommuFault_Color=1;
      }
      else
      {
          FAU8_CommuFault_Color=0;
      }
      //9
      if (FAU1CT_FAU9FaultCommu_B1)
      {
         FAU9_CommuFault_Color=1;
     }
     else
     {
         FAU9_CommuFault_Color=0;
     }
     //10
     if (FAU1CT_FAU10FaultCommu_B1)
      {
         FAU10_CommuFault_Color=1;
     }
     else
     {
         FAU10_CommuFault_Color=0;
     }
     //11
     if (FAU1CT_FAU11FaultCommu_B1)
     {
        FAU11_CommuFault_Color=1;
     }
     else
     {
        FAU11_CommuFault_Color=0;
     }
     //12
     if (FAU1CT_FAU12FaultCommu_B1)
     {
        FAU12_CommuFault_Color=1;
     }
     else
     {
        FAU12_CommuFault_Color=0;
     }
     //13
     if (FAU1CT_FAU13FaultCommu_B1)
     {
        FAU13_CommuFault_Color=1;
     }
     else
     {
        FAU13_CommuFault_Color=0;
     }
     //14
     if (FAU1CT_FAU14FaultCommu_B1)
     {
        FAU14_CommuFault_Color=1;
     }
     else
     {
        FAU14_CommuFault_Color=0;
     }
     //15
     if (FAU1CT_FAU15FaultCommu_B1)
      {
         FAU15_CommuFault_Color=1;
     }
     else
     {
         FAU15_CommuFault_Color=0;
     }

     //16
     if (FAU1CT_FAU16FaultCommu_B1)
      {
         FAU16_CommuFault_Color=1;
     }
     else
     {
         FAU16_CommuFault_Color=0;
     }
     //17
     if (FAU1CT_FAU17FaultCommu_B1)
      {
         FAU17_CommuFault_Color=1;
     }
     else
     {
         FAU17_CommuFault_Color=0;
     }

     //18
     if (FAU1CT_FAU18FaultCommu_B1)
      {
         FAU18_CommuFault_Color=1;
     }
     else
     {
         FAU18_CommuFault_Color=0;
     }
     //19
     if (FAU1CT_FAU19FaultCommu_B1)
      {
         FAU19_CommuFault_Color=1;
     }
     else
     {
         FAU19_CommuFault_Color=0;
     }
     //14+6
     if (FAU1CT_FAU20FaultCommu_B1)
      {
         FAU20_CommuFault_Color=1;
     }
     else
     {
         FAU20_CommuFault_Color=0;
     }
     //14+7
     if (FAU1CT_FAU21FaultCommu_B1)
     {
        FAU21_CommuFault_Color=1;
    }
    else
    {
        FAU21_CommuFault_Color=0;
    }
    //14+8
    if (FAU1CT_FAU22FaultCommu_B1)
     {
        FAU22_CommuFault_Color=1;
    }
    else
    {
        FAU22_CommuFault_Color=0;
    }
    //14+9
    if (FAU1CT_FAU23FaultCommu_B1)
    {
       FAU23_CommuFault_Color=1;
   }
   else
   {
       FAU23_CommuFault_Color=0;
   }
   //14+10
   if (FAU1CT_FAU24FaultCommu_B1)
    {
       FAU24_CommuFault_Color=1;
   }
   else
   {
       FAU24_CommuFault_Color=0;
   }
   //14+11
   if (FAU1CT_FAU25FaultCommu_B1)
   {
      FAU25_CommuFault_Color=1;
   }
   else
   {
      FAU25_CommuFault_Color=0;
   }
   //14+12
   if (FAU1CT_FAU26FaultCommu_B1)
   {
      FAU26_CommuFault_Color=1;
   }
   else
   {
      FAU26_CommuFault_Color=0;
   }
   //14+13
   if (FAU1CT_FAU27FaultCommu_B1)
   {
      FAU27_CommuFault_Color=1;
   }
   else
   {
      FAU27_CommuFault_Color=0;
   }
   //14+14
   if (FAU1CT_FAU28FaultCommu_B1)
   {
      FAU28_CommuFault_Color=1;
   }
   else
   {
      FAU28_CommuFault_Color=0;
   }



    SetLabelColor( ID_PIBFASPage_COMMUFAULT1,  FAU1_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT2,  FAU2_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT3,  FAU3_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT4,  FAU4_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT5,  FAU5_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT6,  FAU6_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT7,  FAU7_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT8,  FAU8_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT9,  FAU9_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT10, FAU10_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT11, FAU11_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT12, FAU12_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT13, FAU13_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT14, FAU14_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT15, FAU15_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT16, FAU16_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT17, FAU17_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT18, FAU18_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT19, FAU19_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT20, FAU20_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT21, FAU21_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT22, FAU22_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT23, FAU23_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT24, FAU24_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT25, FAU25_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT26, FAU26_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT27, FAU27_CommuFault_Color);
    SetLabelColor( ID_PIBFASPage_COMMUFAULT28, FAU28_CommuFault_Color);

    }
    void FASPage::SetLabelColor(int id,int colorVal)
        {

                    ASSERT((colorVal >= 0) && (colorVal <= 2));
                        if (0 == colorVal)
                        {
                            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
                        }
                        else if (1 == colorVal)
                        {
                            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
                             ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
                        }
                        else if (2 == colorVal)
                        {
                            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                        }

                        return;


        }


#else
void FASPage::OnComBtn1Clk()
{

}

void FASPage::OnComBtn2Clk()
{

}

void FASPage::OnComBtn3Clk()
{

}

void FASPage::OnComBtn4Clk()
{

}

void FASPage::OnComBtn5Clk()
{

}

void FASPage::OnComBtn6Clk()
{

}



//void FASPage::OnUpdatePage()
//{
//   //    UpdateTrainDiagram();
//}






#endif

