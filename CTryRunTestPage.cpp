#include "CTryRunTestPage.h"
#include "cwarningdialog.h"

ROMDATA g_PicRom_TryRunTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8(" 加减速度试验") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("速度\n试验") )

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("加减速度试验"))
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),                   D_FONT_BOLD(8),      QRect(  4,   4,  56,  34),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 62,   2,  80,  38),           Qt::white,                Qt::green,          CONTROL_LABEL,          ID_TRTP_LABEL_V                     },

    {QObject::trUtf8("网流"),                   D_FONT_BOLD(8),      QRect(143,   4,  56,  34),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(200,   2,  80,  38),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_A                     },
    {QObject::trUtf8("牵引*制动级位"),          D_FONT_BOLD(8),      QRect(540,  45, 150,  20),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(540,  66, 150,  30),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_TRTP_LABEL_TRACTIONMODEL         },

    {QObject::trUtf8("速度"),                  D_FONT_BOLD(8),      QRect(700,  45,  70,  20),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(700,  66,  70,  30),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_TRTP_LABEL_SPEED                },

#endif



//    {"",                            D_FONT_BOLD(6),      QRect( 10,  50, 520,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 10,  75, 520,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 10, 100, 520,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 10, 125, 521,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//
//    {"",                            D_FONT_BOLD(6),      QRect( 10,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 90, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(130,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(170, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(210,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(250, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(290,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(330, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(370,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(410, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(450,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(490, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(530,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },


//    {"",                            D_FONT_BOLD(6),      QRect( 10,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 90, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(130,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(170, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(210,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(250, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(290,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(330, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(370,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(410, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(450,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(490, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(530,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },

//    {QObject::trUtf8("KN"),                    D_FONT_BOLD(6),      QRect( 11,  77,  35,  18),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("BCP"),                   D_FONT_BOLD(6),      QRect( 11, 102,  35,  18),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("1"),                     D_FONT_BOLD(6),      QRect( 70,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("2"),                     D_FONT_BOLD(6),      QRect(150,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("3"),                     D_FONT_BOLD(6),      QRect(230,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("4"),                     D_FONT_BOLD(6),      QRect(310,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("5"),                     D_FONT_BOLD(6),      QRect(390,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("6"),                     D_FONT_BOLD(6),      QRect(470,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("60"),                    D_FONT_BOLD(6),      QRect( 71,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN1                   },
//    {QObject::trUtf8("60"),                    D_FONT_BOLD(6),      QRect(150,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN2                   },
//    {QObject::trUtf8("60"),                    D_FONT_BOLD(6),      QRect(230,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN3                   },
//    {QObject::trUtf8("60"),                    D_FONT_BOLD(6),      QRect(310,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN4                   },
//    {QObject::trUtf8("60"),                    D_FONT_BOLD(6),      QRect(390,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN5                   },
//    {QObject::trUtf8("60"),                    D_FONT_BOLD(6),      QRect(470,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN6                   },
//    {QObject::trUtf8("4.1"),                   D_FONT_BOLD(6),      QRect( 54, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP1                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect( 92, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP2                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(133, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP3                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(173, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP4                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(213, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP5                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(253, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP6                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(293, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP7                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(333, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP8                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(373, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP9                  },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(413, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP10                 },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(453, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP11                 },
//    {QObject::trUtf8("7.6"),                   D_FONT_BOLD(6),      QRect(493, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP12                 },

    {"",                            D_FONT_BOLD(6),      QRect( 10, 140, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 172, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 204, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 236, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 268, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 300, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 332, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 364, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 396, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 428, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 460, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 492, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 10, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(170, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(270, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(390, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(490, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(590, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(690, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(790, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("1"),                     D_FONT_BOLD(8),      QRect( 11, 173,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("2"),                     D_FONT_BOLD(8),      QRect( 11, 205,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("3"),                     D_FONT_BOLD(8),      QRect( 11, 237,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("4"),                     D_FONT_BOLD(8),      QRect( 11, 269,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("5"),                     D_FONT_BOLD(8),      QRect( 11, 301,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("6"),                     D_FONT_BOLD(8),      QRect( 11, 333,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("7"),                     D_FONT_BOLD(8),      QRect( 11, 365,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("8"),                     D_FONT_BOLD(8),      QRect( 11, 397,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("9"),                     D_FONT_BOLD(8),      QRect( 11, 429,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("10"),                    D_FONT_BOLD(8),      QRect( 11, 461,  28,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("时 间"),                 D_FONT_BOLD(8),      QRect( 41, 142, 128,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 173, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME1                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 205, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME2                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 237, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME3                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 269, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME4                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 301, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME5                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 333, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME6                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 365, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME7                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 397, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME8                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 429, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME9                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 41, 461, 128,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME10                },

    {QObject::trUtf8("测定种类"),               D_FONT_BOLD(8),      QRect(171, 141, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 173, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE1             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 205, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE2             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 237, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE3             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 269, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE4             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 301, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE5             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 333, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE6             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 365, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE7             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 397, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE8             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 429, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE9             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(171, 461, 98,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE10            },

    {QObject::trUtf8("加减速度(m/s2)"),               D_FONT_BOLD(8),      QRect(271, 141, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 173, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED1              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 205, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED2              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 237, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED3              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 269, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED4              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 301, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED5              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 333, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED6              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 365, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED7              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 397, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED8              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 429, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED9              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(271, 461, 118,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED10             },

    {QObject::trUtf8("级位"),                   D_FONT_BOLD(8),      QRect(391, 141,  98,  31),           Qt::white,               Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 173,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW1                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 205,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW2                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 237,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW3                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 269,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW4                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 301,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW5                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 333,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW6                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 365,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW7                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 397,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW8                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 429,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW9                   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(391, 461,  98,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW10                  },
//    {QObject::trUtf8("再生////"),                   D_FONT_BOLD(8),      QRect(468, 141, 95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 173,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 205,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 237,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE3            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 269,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE4            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 301,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE5            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 333,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 365,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE7            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 397,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE8            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 429,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE9            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(468, 461,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE10           },

    {QObject::trUtf8("末速(km/h)"),               D_FONT_BOLD(8),      QRect(591, 141,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 174,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD1                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 206,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD2                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 238,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD3                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 270,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD4                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 302,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD5                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 334,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD6                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 366,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD7                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 398,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD8                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 430,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD9                 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(591, 462,  98,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD10                },

    {QObject::trUtf8("初速(km/h)"),               D_FONT_BOLD(8),      QRect(491, 141,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 174,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED1      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 206,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED2      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 238,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED3      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 270,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED4      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 302,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED5      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 334,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED6      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 366,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED7      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 398,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED8      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 430,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED9      },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(491, 462,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED10     },

    {QObject::trUtf8("距离(m)"),               D_FONT_BOLD(8),      QRect(691, 141,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 174,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE1        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 206,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE2        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 238,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE3        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 270,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE4        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 302,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE5        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 334,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE6        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 366,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE7        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 398,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE8        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 430,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE9        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(691, 462,  98,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE10       },

    {QObject::trUtf8("开   始"),               D_FONT_BOLD(8),      QRect( 25, 500, 100,  38),           Qt::black,               Qt::gray,            CONTROL_BUTTON,         ID_TRTP_BUTTON_TESTSTART     },
    {QObject::trUtf8("终   止"),               D_FONT_BOLD(8),      QRect(155, 500, 100,  38),           Qt::black,               Qt::gray,            CONTROL_BUTTON,         ID_TRTP_BUTTON_TESTSTOP     },
    {QObject::trUtf8("按[开始]键开始测定。"),    D_FONT_BOLD(8),      QRect(250, 500, 250,  40),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("瞬时加速度:"),    D_FONT_BOLD(6),      QRect(510, 500, 80,  20),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(6),      QRect(600, 500, 50,  20),           Qt::white,               Qt::black,           CONTROL_LABEL,       ID_TRTP_LABEL_SPEEDMOMENT            },
    {QObject::trUtf8("(m/s2)"),         D_FONT_BOLD(6),      QRect(660, 500, 40,  20),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("瞬时冲击率:"),    D_FONT_BOLD(6),      QRect(510, 525, 80,  20),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(6),      QRect(600, 525, 50,  20),           Qt::white,               Qt::black,           CONTROL_LABEL,       ID_TRTP_LABEL_SHORKRATIO           },
    {QObject::trUtf8("(m/s3)"),         D_FONT_BOLD(6),      QRect(660, 525, 40,  20),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },





};
int g_TryRunTestRomLen = sizeof(g_PicRom_TryRunTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTryRunTestPage,CPage)
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
        ON_BTNCLK(ID_TRTP_BUTTON_TESTSTART, OnStartClk)
        ON_BTNCLK(ID_TRTP_BUTTON_TESTSTOP, OnStopClk)
END_MESSAGE_MAP()

CTryRunTestPage::CTryRunTestPage()
{
}

void CTryRunTestPage::OnUpdatePage()
{
    UpdataTry_RunData();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    updateSpeedMoment();
    updateShorkRatio();
}


void CTryRunTestPage::OnInitPage()
{
   ((CButton*)GetDlgItem(ID_TRTP_BUTTON_TESTSTART))->m_bAutoUpState = false;
#ifdef PAGE_HEADER_OLD

   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_V))->SetBorderColor(Qt::white);
   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_A))->SetBorderColor(Qt::white);

   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif


}

void CTryRunTestPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返   回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));
#endif
    this->InitPageHeader();
}

void CTryRunTestPage::OnLeavePage()
{
    OnStopClk();
}
#ifdef PAGE_BUTTON_BAR_NEW
void CTryRunTestPage::OnComBtn1Clk()
{

}

void CTryRunTestPage::OnComBtn2Clk()
{

}

void CTryRunTestPage::OnComBtn3Clk()
{

}

void CTryRunTestPage::OnComBtn4Clk()
{

}

void CTryRunTestPage::OnComBtn5Clk()
{

}

void CTryRunTestPage::OnComBtn6Clk()
{

}
void CTryRunTestPage::OnComBtn7Clk()
{

}
void CTryRunTestPage::OnComBtn8Clk()
{
    OnStopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CTryRunTestPage::OnComBtn1Clk()
{

}

void CTryRunTestPage::OnComBtn2Clk()
{

}

void CTryRunTestPage::OnComBtn3Clk()
{

}

void CTryRunTestPage::OnComBtn4Clk()
{

}

void CTryRunTestPage::OnComBtn5Clk()
{

}

void CTryRunTestPage::OnComBtn6Clk()
{
    OnStopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif

void CTryRunTestPage::OnStartClk()
{
    if(CTHM_TrainSpeed_U16 ==0)
    {
     HMCT_ACDETestStartFlag_B1 = 1;
    }
    else
    {
       ShowWarningDialog(QObject::trUtf8("只有在列车速度为0时，可以\n发送加速度测试开始信号"));
       ((CButton*)GetDlgItem(ID_TRTP_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
    }
}


void CTryRunTestPage::OnStopClk()
{
    ((CButton*)GetDlgItem(ID_TRTP_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);

    HMCT_ACDETestStartFlag_B1 = 0;
}

void CTryRunTestPage::UpdateAValue()
{


}

void CTryRunTestPage::UpdateVValue()
{


}

void CTryRunTestPage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_TRTP_LABEL_TRACTIONMODEL);

#endif

}

void CTryRunTestPage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

     ((CLabel *)GetDlgItem(ID_TRTP_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void CTryRunTestPage::UpdataTry_RunData()
{
    if((CTHM_RunForward_B1==0)&&(CTHM_RunBackward_B1==0))
    {
         HMCT_ACDETestStartFlag_B1 = 0;
         ((CButton*)GetDlgItem(ID_TRTP_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);

    }
    else
    {
    //time str
    QString timestr = GetTimeStr();

    tr_testtype_record = CTHM_AcDeDataIsValid_B1^tr_testtype_temp;

    if ( (tr_testtype_record!=0)&& (bool (CTHM_AcDeDataIsValid_B1) ))
    //if ((tr_testtype_record!=0))
    {



        if (tr_testtimes%10==0)
        {
            tr_date1=timestr;
            tr_ADSpeed1=CTHM_AcDeSpeed_I16*0.01;
            //tr_ADSpeed1=DivNum(CTHM_AcDeSpeed_I16,100);
            tr_Level1 = this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
            tr_BrakeInitalSpeed1=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
            tr_BrakeStopSpeed1=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
            tr_BrakeDistance1=CTHM_AcDeDistance_U16;
            if (CTHM_AcDeSpeed_I16>=0)
            {
                tr_testtype1=QObject::trUtf8("加速度");
            }
           else
            {
                tr_testtype1=QObject::trUtf8("减速度");
            }
        }

        if (tr_testtimes%10==1)
        {
            tr_date2=timestr;
            tr_ADSpeed2=DivNum(CTHM_AcDeSpeed_I16,100);
            tr_Level2= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
            tr_BrakeInitalSpeed2=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
            tr_BrakeStopSpeed2=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
            tr_BrakeDistance2=CTHM_AcDeDistance_U16;
            if (CTHM_AcDeSpeed_I16>=0)
            {
                tr_testtype2=QObject::trUtf8("加速度");
            }
           else
            {
                tr_testtype2=QObject::trUtf8("减速度");
            }
        }

        if (tr_testtimes%10==2)
        {
            tr_date3=timestr;
            tr_ADSpeed3=DivNum(CTHM_AcDeSpeed_I16,100);
            tr_Level3= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
            tr_BrakeInitalSpeed3=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
            tr_BrakeStopSpeed3=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
            tr_BrakeDistance3=CTHM_AcDeDistance_U16;
            if (CTHM_AcDeSpeed_I16>=0)
            {
                tr_testtype3=QObject::trUtf8("加速度");
            }
           else
            {
                tr_testtype3=QObject::trUtf8("减速度");
            }
        }

        if (tr_testtimes%10==3)
              {
                  tr_date4=timestr;
                  tr_ADSpeed4=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level4= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed4=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed4=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance4=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype4=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype4=QObject::trUtf8("减速度");
                  }
              }

        if (tr_testtimes%10==4)
              {
                  tr_date5=timestr;
                  tr_ADSpeed5=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level5= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed5=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed5=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance5=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype5=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype5=QObject::trUtf8("减速度");
                  }
              }

        if (tr_testtimes%10==5)
              {
                  tr_date6=timestr;
                  tr_ADSpeed6=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level6= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed6=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed6=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance6=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype6=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype6=QObject::trUtf8("减速度");
                  }
              }

        if (tr_testtimes%10==6)
              {
                  tr_date7=timestr;
                  tr_ADSpeed7=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level7= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed7=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed7=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance7=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype7=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype7=QObject::trUtf8("减速度");
                  }
              }

        if (tr_testtimes%10==7)
              {
                  tr_date8=timestr;
                  tr_ADSpeed8=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level8= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed8=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed8=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance8=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype8=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype8=QObject::trUtf8("减速度");
                  }
              }

        if (tr_testtimes%10==8)
              {
                  tr_date9=timestr;
                  tr_ADSpeed9=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level9= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed9=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed9=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance9=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype9=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype9=QObject::trUtf8("减速度");
                  }
              }

        if (tr_testtimes%10==9)
              {
                  tr_date10=timestr;
                  tr_ADSpeed10=DivNum(CTHM_AcDeSpeed_I16,100);
                  tr_Level10= this->updateTRTLevel(CTHM_AcDeHandleLevel_I8);
                  tr_BrakeInitalSpeed10=DivNum(CTHM_AcDeStartVelocity_U16,100) ;
                  tr_BrakeStopSpeed10=DivNum(CTHM_AcDeStopVelocity_U16,100) ;
                  tr_BrakeDistance10=CTHM_AcDeDistance_U16;
                  if (CTHM_AcDeSpeed_I16>=0)
                  {
                      tr_testtype10=QObject::trUtf8("加速度");
                  }
                 else
                  {
                      tr_testtype10=QObject::trUtf8("减速度");
                  }
              }





        QString tr_date[] =
        {
            tr_date1,
            tr_date2,
            tr_date3,
            tr_date4,
            tr_date5,
            tr_date6,
            tr_date7,
            tr_date8,
            tr_date9,
            tr_date10,
        };
        ((CLabel*)GetDlgItem(ID_TRTP_LABEL_TIME1+tr_testtimes%10))->SetCtrlText(tr_date[tr_testtimes%10]);

        double tr_ADSpeed[] =
        {
            tr_ADSpeed1,
            tr_ADSpeed2,
            tr_ADSpeed3,
            tr_ADSpeed4,
            tr_ADSpeed5,
            tr_ADSpeed6,
            tr_ADSpeed7,
            tr_ADSpeed8,
            tr_ADSpeed9,
            tr_ADSpeed10,
        };
        ((CLabel*)GetDlgItem(ID_TRTP_LABEL_ADSPEED1+tr_testtimes%10))->SetCtrlText(QString::number(tr_ADSpeed[tr_testtimes%10],'f',2));

        QString tr_testtype[] =
        {
            tr_testtype1,
            tr_testtype2,
            tr_testtype3,
            tr_testtype4,
            tr_testtype5,
            tr_testtype6,
            tr_testtype7,
            tr_testtype8,
            tr_testtype9,
            tr_testtype10,
        };
        ((CLabel*)GetDlgItem(ID_TRTP_LABEL_TESTTYPE1+tr_testtimes%10))->SetCtrlText(tr_testtype[tr_testtimes%10]);


        QString tr_Level[] =
        {
            tr_Level1,
            tr_Level2,
            tr_Level3,
            tr_Level4,
            tr_Level5,
            tr_Level6,
            tr_Level7,
            tr_Level8,
            tr_Level9,
            tr_Level10,
        };
        ((CLabel*)GetDlgItem(ID_TRTP_LABEL_JW1+tr_testtimes%10))->SetCtrlText(tr_Level[tr_testtimes%10]);


        double tr_BrakeInitalSpeed[] =
        {
            tr_BrakeInitalSpeed1,
            tr_BrakeInitalSpeed2,
            tr_BrakeInitalSpeed3,
            tr_BrakeInitalSpeed4,
            tr_BrakeInitalSpeed5,
            tr_BrakeInitalSpeed6,
            tr_BrakeInitalSpeed7,
            tr_BrakeInitalSpeed8,
            tr_BrakeInitalSpeed9,
            tr_BrakeInitalSpeed10,
        };
        ((CLabel*)GetDlgItem(ID_TRTP_LABEL_BRAKESTARTSPEED1+tr_testtimes%10))->SetCtrlText(QString::number(tr_BrakeInitalSpeed[tr_testtimes%10],'f',2));

        double tr_BrakeStopSpeed[] =
        {
            tr_BrakeStopSpeed1,
            tr_BrakeStopSpeed2,
            tr_BrakeStopSpeed3,
            tr_BrakeStopSpeed4,
            tr_BrakeStopSpeed5,
            tr_BrakeStopSpeed6,
            tr_BrakeStopSpeed7,
            tr_BrakeStopSpeed8,
            tr_BrakeStopSpeed9,
            tr_BrakeStopSpeed10,
        };
        ((CLabel*)GetDlgItem(ID_TRTP_LABEL_JJZD1+tr_testtimes%10))->SetCtrlText(QString::number(tr_BrakeStopSpeed[tr_testtimes%10],'f',2));

        double tr_BrakeDistance[] =
        {
            tr_BrakeDistance1,
            tr_BrakeDistance2,
            tr_BrakeDistance3,
            tr_BrakeDistance4,
            tr_BrakeDistance5,
            tr_BrakeDistance6,
            tr_BrakeDistance7,
            tr_BrakeDistance8,
            tr_BrakeDistance9,
            tr_BrakeDistance10,
        };
        ((CLabel*)GetDlgItem( ID_TRTP_LABEL_BRAKEDISTANCE1+tr_testtimes%10))->SetCtrlText(QString::number(tr_BrakeDistance[tr_testtimes%10]));








        //brake distance

       tr_testtimes++;
    }
    tr_testtype_temp=CTHM_AcDeDataIsValid_B1;
}


}

void CTryRunTestPage::updateBCPLabelColor(int nID,int nFlag)
{
    switch(nFlag)
    {
    case 0:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::black);
        break;
    case 1:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::red);
        break;
    default:
        break;
    }
}

void CTryRunTestPage::updateLevelLabelColor(int nID,int nFlag)
{
    switch(nFlag)
    {
    case 0:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::black);
        break;
    case 1:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::green);
        break;
    case 2:
        GetDlgItem(nID)->SetCtrlBKColor(QColor(255,102,51));
        break;
    default:
        break;
    }
}

void CTryRunTestPage::updateEmergencybrakingLabelColor(int nID,int nFlag)
{
    switch(nFlag)
    {
    case 0:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::black);
        break;
    case 1:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::red);
        break;
    case 2:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::red);
        break;
    default:
        break;
    }
}

QString CTryRunTestPage::updateTRTLevel(int nFlag)
{
    QString tr_Level;
    if ((nFlag>0)&&(nFlag<101))
    {

        tr_Level=QObject::trUtf8("牵引 ").append( QString::number(int(nFlag))).append("%");
    }
    else
    {
        if (nFlag==0)
        {
            tr_Level=QObject::trUtf8("惰行");
        }
        else
        {
            if ((nFlag<0)&&(nFlag>-101))
            {
                tr_Level = nFlag*(-1);
                tr_Level=QObject::trUtf8("制动").append(QString::number(int(nFlag))+"%");
            }
            else
            {
                if (nFlag==-101)
                {
                    tr_Level=QObject::trUtf8( "快速制动");
                }
                else
                {
                    if (nFlag==-102)
                    {
                        tr_Level=QObject::trUtf8("紧急制动");
                    }
                    else
                    {
                        if (nFlag==0XFF)
                        {
                            tr_Level="--";
                        }
                        else
                        {
                           tr_Level="超出范围";
                        }
                    }
                }
            }

        }

    }
    return tr_Level;
}

void CTryRunTestPage::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move((GetParentDlg()->x()+150)*SCREEN_factor,(GetParentDlg()->y()+150)*SCREEN_factor);
    dlg.exec();
}

void CTryRunTestPage::updateSpeedMoment()
{
    double Speed_Moment = CTHM_AcDeSpeedMoment_I16 * 0.01;
    ((CLabel *)GetDlgItem(ID_TRTP_LABEL_SPEEDMOMENT))->SetCtrlText(QString::number(Speed_Moment,'f',2));

}

void CTryRunTestPage::updateShorkRatio()
{
    double Shork_Ratio = CTHM_AcDeShorkRatio_I16 * 0.01;
    ((CLabel *)GetDlgItem(ID_TRTP_LABEL_SHORKRATIO))->SetCtrlText(QString::number(Shork_Ratio,'f',2));

}
