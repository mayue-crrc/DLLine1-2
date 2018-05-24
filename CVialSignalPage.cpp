#include "CVialSignalPage.h"

ROMDATA g_PicRom_VialSignal[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("生命信号"))
    {"",                            D_FONT_BOLD(4),      QRect(60, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVSP_TRAIN               },
//    {"RIGHT",                       D_FONT_BOLD(6),      QRect(710, 75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_RIGHTARROW          },
//    {"LEFT",                        D_FONT_BOLD(6),      QRect(70,  75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_LEFTARROW           },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 120, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 150, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 180, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 210, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 240, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 270, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 300, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 330, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 360, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 390, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 420, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 450, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 480, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 510, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 540, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect( 5, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(60, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(420, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(540, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(660, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(600, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("CCU"),        D_FONT_BOLD(6),      QRect( 6, 121,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("IO-GW"),      D_FONT_BOLD(6),      QRect( 6, 151,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("BCU"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DCU"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HVAC"),            D_FONT_BOLD(6),      QRect( 6, 271,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("PIS"),        D_FONT_BOLD(6),      QRect( 6, 301,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("FAS"),           D_FONT_BOLD(6),      QRect( 6, 331,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("ATC"),          D_FONT_BOLD(6),      QRect( 6, 361,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("SIV"),          D_FONT_BOLD(6),      QRect( 6, 391,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HMI"),          D_FONT_BOLD(6),      QRect( 6, 421,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(  61,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
    {QObject::trUtf8("ERM"),                   D_FONT_BOLD(6),      QRect( 181,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU1            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 331,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("ERM"),                   D_FONT_BOLD(6),      QRect( 421,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_IO_GW11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW77            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW88            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_BCU11            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU55            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU88           },

    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 61,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(181,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU77            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 661,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGWTOP1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGW1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HVAC11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC77            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC88            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_PA11            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA88            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_FAS1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_FAS8            },

    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 61,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_ATC10            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC11            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_ACU11            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU88            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61, 421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HMI1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI2            },

    //    {QObject::trUtf8("CCU1"),                  D_FONT_BOLD(4),      QRect( 50,122, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(690,107, 60, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },
//    {QObject::trUtf8("CCU2"),                  D_FONT_BOLD(4),      QRect(690,122, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(690,172, 60, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU2           },
//    {QObject::trUtf8("DCCU2"),                 D_FONT_BOLD(4),      QRect(690,187, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 50,172, 60, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU1           },
//    {QObject::trUtf8("DCCU1"),                 D_FONT_BOLD(4),      QRect( 50,187, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 20,235, 40, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI1            },
//    {QObject::trUtf8("HMI"),                   D_FONT_BOLD(4),      QRect( 20,255, 35, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(750,235, 40, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI2            },
//    {QObject::trUtf8("HMI"),                   D_FONT_BOLD(4),      QRect(750,255, 35, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 70,248, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_GW1             },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect( 70,263, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(680,248, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_GW2             },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(680,263, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 70,310, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC10           },
//    {QObject::trUtf8("ATC10"),                 D_FONT_BOLD(4),      QRect( 70,325, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 70,360, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC11           },
//    {QObject::trUtf8("ATC11"),                 D_FONT_BOLD(4),      QRect( 70,375, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(700,310, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC20           },
//    {QObject::trUtf8("ATC20"),                 D_FONT_BOLD(4),      QRect(700,325, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(700,355, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC21           },
//    {QObject::trUtf8("ATC21"),                 D_FONT_BOLD(4),      QRect(700,370, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW11         },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(172,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU11           },
//    {QObject::trUtf8("ACU"),                   D_FONT_BOLD(4),      QRect(172,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU11           },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(172,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC11          },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(172,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,383, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA11            },
//    {QObject::trUtf8("PA"),                    D_FONT_BOLD(4),      QRect(172,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,420, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TV11            },
//    {QObject::trUtf8("TV"),                    D_FONT_BOLD(4),      QRect(172,437, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(262,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW22         },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(262,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(262,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU22           },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(262,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(262,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC22          },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(262,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(262,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_AU_DB22         },
//    {QObject::trUtf8("AU_DB"),                 D_FONT_BOLD(4),      QRect(262,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW33         },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(352,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU33           },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(352,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU33           },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(352,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC33          },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(352,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ST_DB33         },
//    {QObject::trUtf8("ST_DB"),                 D_FONT_BOLD(4),      QRect(352,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW44         },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(442,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU44           },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(442,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU44           },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(442,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC44          },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(442,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ST_DB44         },
//    {QObject::trUtf8("ST_DB"),                 D_FONT_BOLD(4),      QRect(442,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(532,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW55         },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(532,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(532,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU55           },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(532,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(532,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC55          },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(532,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(532,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_AU_DB55         },
//    {QObject::trUtf8("AU_DB"),                 D_FONT_BOLD(4),      QRect(532,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW66         },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(622,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU66           },
//    {QObject::trUtf8("ACU"),                   D_FONT_BOLD(4),      QRect(622,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU66           },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(622,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,338, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC66          },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(622,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,383, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA66            },
//    {QObject::trUtf8("PA"),                    D_FONT_BOLD(4),      QRect(622,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,420, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TV66            },
//    {QObject::trUtf8("TV"),                    D_FONT_BOLD(4),      QRect(622,437, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(155, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP1      },
//    {QObject::trUtf8("DOOR-GW"),               D_FONT_BOLD(4),      QRect(130, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(130, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(245, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP2      },
//    {QObject::trUtf8("DOOR-GW"),               D_FONT_BOLD(4),      QRect(220, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(220, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(335, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP3      },
//    {QObject::trUtf8("DOOR-GW"),               D_FONT_BOLD(4),      QRect(310, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(310, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(425, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP4      },
//    {QObject::trUtf8("DOOR-GW"),               D_FONT_BOLD(4),      QRect(400, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(400, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(515, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP5      },
//    {QObject::trUtf8("DOOR-GW"),               D_FONT_BOLD(4),      QRect(490, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(490, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW5         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(605, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP6      },
//    {QObject::trUtf8("DOOR-GW"),               D_FONT_BOLD(4),      QRect(580, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(580, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW6         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_VialSignalRomLen = sizeof(g_PicRom_VialSignal)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVialSignalPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVialSignalPage::CVialSignalPage()
{
}

void CVialSignalPage::OnUpdatePage()
{
    UpdateVialSignal();
    updateTrain(ID_PIBVSP_TRAIN);

    updateErrorLine(ID_PIBVSP_TRAIN);
   // updateArrow(ID_PIBVSP_LEFTARROW,ID_PIBVSP_RIGHTARROW);
}

void CVialSignalPage::OnInitPage()
{

}

void CVialSignalPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    this->InitPageHeader();
}

void CVialSignalPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVialSignalPage::OnComBtn2Clk()
{

}

void CVialSignalPage::OnComBtn3Clk()
{

}

void CVialSignalPage::OnComBtn4Clk()
{

}

void CVialSignalPage::OnComBtn5Clk()
{

}

void CVialSignalPage::OnComBtn6Clk()
{

}

void CVialSignalPage::UpdateVialSignal()
{

//    QString door_gw1 = 0;
//    QString door_gw2 = 0;
//    QString door_gw3 = 0;
//    QString door_gw4 = 0;
//    QString door_gw5 = 0;
//    QString door_gw6 = 0;



    ACU_LifeSign1="DSP:"+StrFromInt(SIV1CT_SIVDSPVersion_U16,10)+"\nPPC:"+StrFromInt(SIV1CT_SIVPPCLifeSign_U16,10);
    ACU_LifeSign2="DSP:"+StrFromInt(SIV2CT_SIVDSPVersion_U16,10)+"\nPPC:"+StrFromInt(SIV2CT_SIVPPCLifeSign_U16,10);


     SetVSDataLabelString(ID_PIBVSP_LABEL_CCU1, CTALL_LifeSign_U16);

//    // lijian
    SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU1, DT1HM_LifeSign_U8);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU2, DT2HM_LifeSign_U8);


    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW11,RIOM1CT_GWLifeSign1_U8 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW22,DI_120_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW33,RIOM2CT_GWLifeSign1_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW44,RIOM3CT_GWLifeSign1_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW55,RIOM4CT_GWLifeSign1_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW66,RIOM5CT_GWLifeSign1_U8 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW77,DI_170_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW88,RIOM6CT_GWLifeSign1_U8 );

    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU11,g_dataBuffer_MVB[464]%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU44,g_dataBuffer_MVB[464+96]%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU55,g_dataBuffer_MVB[464+192]%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU88,g_dataBuffer_MVB[464+288]%256);

    TCU_LifeSign3="SMC:"+StrFromInt(DR1CT_SMCLifeSign_U16,10)+"\nMCU:"+StrFromInt(DR1CT_MCULifeSign_U16,10);
    TCU_LifeSign4="SMC:"+StrFromInt(DR2CT_SMCLifeSign_U16,10)+"\nMCU:"+StrFromInt(DR2CT_MCULifeSign_U16,10);
    TCU_LifeSign5="SMC:"+StrFromInt(DR3CT_SMCLifeSign_U16,10)+"\nMCU:"+StrFromInt(DR3CT_MCULifeSign_U16,10);
    TCU_LifeSign6="SMC:"+StrFromInt(DR4CT_SMCLifeSign_U16,10)+"\nMCU:"+StrFromInt(DR4CT_MCULifeSign_U16,10);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU22,TCU_510_1);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU33,TCU_LifeSign3);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU44,TCU_LifeSign4);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU55,TCU_LifeSign5);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU66,TCU_LifeSign6);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU77,TCU_560_1);


    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP1, g_dataBuffer_MVB[944+160]);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP2, DCU_OLD_720_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP3, g_dataBuffer_MVB[1008+160]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP4, g_dataBuffer_MVB[1072+160]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP5, g_dataBuffer_MVB[1136+160]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP6, g_dataBuffer_MVB[1200+160]);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP7, DCU_OLD_770_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP8, g_dataBuffer_MVB[1264+160]);

    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW1, g_dataBuffer_MVB[976+160]);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW2, DCU_OLD_7A0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW3, g_dataBuffer_MVB[1040+160]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW4,  g_dataBuffer_MVB[1104+160]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW5, g_dataBuffer_MVB[1168+160]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW6, g_dataBuffer_MVB[1232+160]);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW7, DCU_OLD_7F0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW8, g_dataBuffer_MVB[1296+160]);

    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC11, AC1CT_LifeSign_U16);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC22, HVAC_820_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC33, AC2CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC44, AC3CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC55, AC4CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC66, AC5CT_LifeSign_U16);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC77, HVAC_870_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC88, AC6CT_LifeSign_U16);

    SetVSDataLabelString(ID_PIBVSP_LABEL_PA11, PIS1CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_PA88, PIS2CT_LifeSign_U16);

    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS1, g_dataBuffer_MVB[1712]%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS8, g_dataBuffer_MVB[16+1712]%256);

    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC10, g_dataBuffer_MVB[1584]);
    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC11, g_dataBuffer_MVB[1600]);

    SetVialSigLabelString(ID_PIBVSP_LABEL_ACU11, ACU_LifeSign1);
    SetVialSigLabelString(ID_PIBVSP_LABEL_ACU88, ACU_LifeSign2);

    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,HM1CT_LifeSign_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,HM2CT_LifeSign_U8);







//    // lijian
//    SetVialSigLabelString(ID_PIBVSP_LABEL_DCCU2, software_version1);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2, run_status_data97);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_GW2, comm_status_data78);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC20, comm_status_data73);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC21, comm_status_data74);


//    door_gw1 = StrFromInt(comm_status_data79/256, 2);
//    door_gw2 = StrFromInt(comm_status_data80/256, 2);
//    door_gw3 = StrFromInt(comm_status_data81/256, 2);
//    door_gw4 = StrFromInt(comm_status_data82/256, 2);
//    door_gw5 = StrFromInt(comm_status_data83/256, 2);
//    door_gw6 = StrFromInt(comm_status_data84/256, 2);



//    return;
}

void CVialSignalPage::SetVSDataLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}

void CVialSignalPage::SetVialSigLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
