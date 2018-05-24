#include <stdio.h>
#include "CVersionInfoPage.h"

ROMDATA g_PicRom_VersionInfo[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("版本信息"))
    {"",                            D_FONT_BOLD(4),      QRect(60, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVIP_TRAIN               },
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
    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("CCU"),        D_FONT_BOLD(6),      QRect( 6, 121,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("IO-GW"),      D_FONT_BOLD(6),      QRect( 6, 151,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DI"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DO"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("AX"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("PWM"),            D_FONT_BOLD(6),      QRect( 6, 271,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("SIV"),        D_FONT_BOLD(6),      QRect( 6, 301,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("BCU"),           D_FONT_BOLD(6),      QRect( 6, 331,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DCU"),          D_FONT_BOLD(6),      QRect( 6, 361,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HVAC"),          D_FONT_BOLD(6),      QRect( 6, 391,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR"),        D_FONT_BOLD(6),      QRect( 6, 421,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("PIS1"),           D_FONT_BOLD(6),      QRect( 6, 451,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("ATC"),          D_FONT_BOLD(6),      QRect( 6, 481,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HMI"),          D_FONT_BOLD(6),      QRect( 6, 511,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(   61,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU1ORCCU2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(  181,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU1            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(  301,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU2            },
    {QObject::trUtf8("ERM"),                   D_FONT_BOLD(6),      QRect( 421,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU1            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU2            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(4),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("ERM"),                   D_FONT_BOLD(6),      QRect( 511,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU2            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI8            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX2            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX4            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_PWM1            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 151,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 301,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_PWM8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU11            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 151,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU12            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU13            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU81            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU82            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 601,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU83            },

    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU11            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 151,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU55            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU88            },

    {QObject::trUtf8("- -"),                         D_FONT_BOLD(6),      QRect( 61,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU77            },
    {QObject::trUtf8("- -"),                         D_FONT_BOLD(6),      QRect( 661,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QObject::trUtf8(""),                         D_FONT_BOLD(4),      QRect( 61,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC55            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC77            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC66            },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,405, 115, 15),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW1            },
////    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW3            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW4            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW5            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW6            },
////    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW7            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW8            },

//    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 241,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC33            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 331,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC44            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC55            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 511,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC77            },
//    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 691,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC88            },


    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR1            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR5            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR6            },

//    {QObject::trUtf8(""),                         D_FONT_BOLD(4),      QRect( 61,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 241,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR3            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 331,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR4            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR5            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 511,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR7            },
//    {QObject::trUtf8(""),                         D_FONT_BOLD(4),      QRect( 691,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR8            },


    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS1            },
    {QObject::trUtf8("FAS1"),                      D_FONT_BOLD(6),      QRect( 181,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_FAS1            },
    {QObject::trUtf8("FAS2"),                      D_FONT_BOLD(6),      QRect( 421,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_FAS8            },
    {QObject::trUtf8("PIS2"),                      D_FONT_BOLD(6),      QRect( 661,451, 40, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 702,451, 40, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS8            },

    {QObject::trUtf8("--"),                         D_FONT_BOLD(6),      QRect( 61,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 511,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(541,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,              ID_PIBVIP_LABEL_ATC11            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ATC10            },

    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HMI1            },
    {QObject::trUtf8("18.05.08"),                  D_FONT_BOLD(6),      QRect( 181,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    //2014.11.03:C_Page_SIV_Status_1,2,3:car number
    //  {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 241,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HMI2            },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 45,107, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_CCU1          },
//    {QObject::trUtf8("CCU1"),                  D_FONT_BOLD(4),      QRect( 50,122, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(685,107, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_CCU2          },
//    {QObject::trUtf8("CCU2"),                  D_FONT_BOLD(4),      QRect(690,122, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(685,172, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DCCU2         },
//    {QObject::trUtf8("DCCU2"),                 D_FONT_BOLD(4),      QRect(690,187, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 45,172, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DCCU1         },
//    {QObject::trUtf8("DCCU1"),                 D_FONT_BOLD(4),      QRect( 50,187, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(  5,235, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HMI1          },
//    {QObject::trUtf8("HMI"),                   D_FONT_BOLD(4),      QRect( 20,255, 35, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(730,235, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HMI2          },
//    {QObject::trUtf8("HMI"),                   D_FONT_BOLD(4),      QRect(750,255, 35, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 70,248, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW1           },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect( 70,263, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(675,248, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW2           },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(680,263, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 60,310, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC10         },
//    {QObject::trUtf8("ATC10"),                 D_FONT_BOLD(4),      QRect( 70,325, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 60,360, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC11         },
//    {QObject::trUtf8("ATC11"),                 D_FONT_BOLD(4),      QRect( 70,375, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(690,310, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC20         },
//    {QObject::trUtf8("ATC20"),                 D_FONT_BOLD(4),      QRect(700,325, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(690,355, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC21         },
//    {QObject::trUtf8("ATC21"),                 D_FONT_BOLD(4),      QRect(700,370, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW11       },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(172,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(165,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ACU11         },
//    {QObject::trUtf8("ACU"),                   D_FONT_BOLD(4),      QRect(172,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(165,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU11         },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(172,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(172,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW11          },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(172,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(160,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC11        },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(172,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(165,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_PA11          },
//    {QObject::trUtf8("PA"),                    D_FONT_BOLD(4),      QRect(172,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(165,460, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TV11          },
//    {QObject::trUtf8("TV"),                    D_FONT_BOLD(4),      QRect(172,477, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(262,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW22       },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(262,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(257,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU22         },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(262,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(262,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW22          },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(262,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(252,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC22        },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(262,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(257,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_AU_DB22       },
//    {QObject::trUtf8("AU_DB"),                 D_FONT_BOLD(4),      QRect(262,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW33       },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(352,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(347,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU33         },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(352,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(347,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU33         },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(352,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(352,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW33          },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(352,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(342,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC33        },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(352,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(347,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ST_DB33       },
//    {QObject::trUtf8("ST_DB"),                 D_FONT_BOLD(4),      QRect(352,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW44       },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(442,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(435,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU44         },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(442,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(435,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU44       },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(442,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(442,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW44          },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(442,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(430,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC44        },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(442,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(435,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ST_DB44       },
//    {QObject::trUtf8("ST_DB"),                 D_FONT_BOLD(4),      QRect(442,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(532,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW55       },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(532,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(527,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU55         },
//    {QObject::trUtf8("TCU"),                   D_FONT_BOLD(4),      QRect(532,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(532,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW55          },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(532,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(520,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC55        },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(532,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(527,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_AU_DB55       },
//    {QObject::trUtf8("AU_DB"),                 D_FONT_BOLD(4),      QRect(532,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW66       },
//    {QObject::trUtf8("IO-GW"),                 D_FONT_BOLD(4),      QRect(622,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(615,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ACU66         },
//    {QObject::trUtf8("ACU"),                   D_FONT_BOLD(4),      QRect(622,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(610,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU66         },
//    {QObject::trUtf8("BCU"),                   D_FONT_BOLD(4),      QRect(622,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(622,338, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW66          },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(622,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(610,382, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC66        },
//    {QObject::trUtf8("HVAC"),                  D_FONT_BOLD(4),      QRect(622,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(615,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_PA66          },
//    {QObject::trUtf8("PA"),                    D_FONT_BOLD(4),      QRect(622,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(615,460, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TV66          },
//    {QObject::trUtf8("TV"),                    D_FONT_BOLD(4),      QRect(622,477, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 99, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR1       },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect( 99, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(150, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR1         },
//    {QObject::trUtf8("DOOR"),                  D_FONT_BOLD(4),      QRect(150, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(210, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR2       },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(210, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(261, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR2         },
//    {QObject::trUtf8("DOOR"),                  D_FONT_BOLD(4),      QRect(261, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(321, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR3       },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(321, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(372, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR3         },
//    {QObject::trUtf8("DOOR"),                  D_FONT_BOLD(4),      QRect(372, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(432, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR4       },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(432, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(483, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR4         },
//    {QObject::trUtf8("DOOR"),                  D_FONT_BOLD(4),      QRect(483, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(543, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR5       },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(543, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(594, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR5         },
//    {QObject::trUtf8("DOOR"),                  D_FONT_BOLD(4),      QRect(594, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(654, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR6       },
//    {QObject::trUtf8("GW"),                    D_FONT_BOLD(4),      QRect(654, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(705, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR6         },
//    {QObject::trUtf8("DOOR"),                  D_FONT_BOLD(4),      QRect(705, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("当前显示屏软件版本：V1.10.31"), D_FONT_BOLD(5),   QRD_FONT_BOLD(4)0, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

  D_COMMON_PAGE_BUTTON_BAR

};
  int g_VersionInfoRomLen = sizeof(g_PicRom_VersionInfo)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVersionInfoPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVersionInfoPage::CVersionInfoPage()
{
}

void CVersionInfoPage::OnUpdatePage()
{
    UpdateVersionIofo();
    updateTrain(ID_PIBVIP_TRAIN);

    updateErrorLine(ID_PIBVIP_TRAIN);
  //  updateArrow(ID_PIBVIP_LEFTARROW,ID_PIBVIP_RIGHTARROW);
}

void CVersionInfoPage::OnInitPage()
{

}

void CVersionInfoPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    this->InitPageHeader();
}

void CVersionInfoPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVersionInfoPage::OnComBtn2Clk()
{

}

void CVersionInfoPage::OnComBtn3Clk()
{

}

void CVersionInfoPage::OnComBtn4Clk()
{

}

void CVersionInfoPage::OnComBtn5Clk()
{

}

void CVersionInfoPage::OnComBtn6Clk()
{

}

void CVersionInfoPage::UpdateVersionIofo()
{

    //
    qreal Version_CCU1_Vxworks = 0;
    qreal Version_CCU1_Mvb     = 0;
    qreal Version_CCU1_Sdb     = 0;
    qreal Version_CCU1_Plc     = 0;

    qreal Version_CCU2_Vxworks = 0;
    qreal Version_CCU2_Mvb     = 0;
    qreal Version_CCU2_Sdb     = 0;
    qreal Version_CCU2_Plc     = 0;

    qreal Version_DCCU1_Vxworks = 0;
    qreal Version_DCCU1_Mvb     = 0;
    qreal Version_DCCU1_Sdb     = 0;
    qreal Version_DCCU1_Plc     = 0;

    qreal Version_DCCU2_Vxworks = 0;
    qreal Version_DCCU2_Mvb     = 0;
    qreal Version_DCCU2_Sdb     = 0;
    qreal Version_DCCU2_Plc     = 0;

    qreal Version_HMI1     = 0;
    qreal Version_HMI2     = 0;


    qreal Version_IO_GW1 = 0;
    qreal Version_IO_GW2 = 0;
    qreal Version_IO_GW3 = 0;
    qreal Version_IO_GW4 = 0;
    qreal Version_IO_GW5 = 0;
    qreal Version_IO_GW6 = 0;
    qreal Version_IO_GW7 = 0;
    qreal Version_IO_GW8 = 0;

    qreal Version_IO_DI1 = 0;
    qreal Version_IO_DI2 = 0;
    qreal Version_IO_DI3 = 0;
    qreal Version_IO_DI4 = 0;
    qreal Version_IO_DI5 = 0;
    qreal Version_IO_DI6 = 0;
    qreal Version_IO_DI7 = 0;
    qreal Version_IO_DI8 = 0;

    qreal Version_IO_DO1 = 0;
    qreal Version_IO_DO2 = 0;
    qreal Version_IO_DO3 = 0;
    qreal Version_IO_DO4 = 0;
    qreal Version_IO_DO5 = 0;
    qreal Version_IO_DO6 = 0;
    qreal Version_IO_DO7 = 0;
    qreal Version_IO_DO8 = 0;

    qreal Version_IO_AX1 = 0;
    qreal Version_IO_AX2 = 0;
    qreal Version_IO_AX4 = 0;
    qreal Version_IO_AX7 = 0;
    qreal Version_IO_AX8 = 0;

    qreal Version_IO_PWM1 = 0;
    qreal Version_IO_PWM8 = 0;

    QString ACU__version12="";
    QString ACU__version13="";
    QString ACU__version22="";
    QString ACU__version23="";


    Version_IO_GW1=DivNum(RIOM1CT_GWVersion_U8,10);
    Version_IO_GW2=DivNum(RIOM2CT_GWVersion_U8,10);
    Version_IO_GW3=DivNum(RIOM3CT_GWVersion_U8,10);
    Version_IO_GW4=DivNum(RIOM4CT_GWVersion_U8,10);
    Version_IO_GW5=DivNum(RIOM5CT_GWVersion_U8,10);
    Version_IO_GW6=DivNum(RIOM6CT_GWVersion_U8,10);


    Version_IO_DI1=DivNum(RIOM1CT_DIVersion_U8,10);
    Version_IO_DI2=DivNum(RIOM2CT_DIVersion_U8,10);
    Version_IO_DI3=DivNum(RIOM3CT_DIVersion_U8,10);
    Version_IO_DI4=DivNum(RIOM4CT_DIVersion_U8,10);
    Version_IO_DI5=DivNum(RIOM5CT_DIVersion_U8,10);
    Version_IO_DI6=DivNum(RIOM6CT_DIVersion_U8,10);


    Version_IO_DO1=DivNum(RIOM1CT_DOVersion_U8,10);
    Version_IO_DO2=DivNum(RIOM2CT_DOVersion_U8,10);
    Version_IO_DO3=DivNum(RIOM3CT_DOVersion_U8,10);
    Version_IO_DO4=DivNum(RIOM4CT_DOVersion_U8,10);
    Version_IO_DO5=DivNum(RIOM5CT_DOVersion_U8,10);
    Version_IO_DO6=DivNum(RIOM6CT_DOVersion_U8,10);



    Version_IO_AX1=DivNum(RIOM1CT_AIVersion_U8,10);
//    Version_IO_AX2=DivNum(RIOM1CT_AIVersion_U8,10);
//    Version_IO_AX4=DivNum(RIOM1CT_AIVersion_U8,10);
//    Version_IO_AX7=DivNum(RIOM1CT_AIVersion_U8,10);
    Version_IO_AX8=DivNum(RIOM6CT_AIVersion_U8,10);

    Version_IO_PWM1=DivNum(RIOM1CT_PWMVersion_U8,10);
    Version_IO_PWM8=DivNum(RIOM6CT_PWMVersion_U8,10);
    char buff[10];
//    char buff2[10];

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Version1_CCU);
//    memset(buff2, '\0', 10);
//    sprintf(buff2, "%.1f", Version1_CCU);



   HMI_version1 = StrFromInt( int (HM1CT_Version_U8/10), 10 )+"."+StrFromInt( int (HM1CT_Version_U8%10), 10 );
   HMI_version2 = StrFromInt( int (HM2CT_Version_U8/10), 10 )+"."+StrFromInt( int (HM2CT_Version_U8%10), 10 );





    Version_CCU1_Vxworks=DivNum(CTHM_CCU1_VersionVxworks_U8,10);
    Version_CCU1_Mvb    =DivNum(CTHM_CCU1_VersionMVB_U8,10);
    Version_CCU1_Sdb    =DivNum(CTHM_CCU1_VersionSdb_U8,10);
    Version_CCU1_Plc    =DivNum(CTHM_CCU1_VersionPlc_U8,10);

    Version_CCU2_Vxworks=DivNum(CTHM_CCU2_VersionVxworks_U8,10);
    Version_CCU2_Mvb    =DivNum(CTHM_CCU2_VersionMVB_U8,10);
    Version_CCU2_Sdb    =DivNum(CTHM_CCU2_VersionSdb_U8,10);
    Version_CCU2_Plc    =DivNum(CTHM_CCU2_VersionPlc_U8,10);

    Version_DCCU1_Vxworks=DivNum(DT1HM_VersionVxworks_U8,10);
    Version_DCCU1_Mvb    =DivNum(DT1HM_VersionMVB_U8,10);
    Version_DCCU1_Sdb    =DivNum(DT1HM_VersionSdb_U8,10);
    Version_DCCU1_Plc    =DivNum(DT1HM_VersionPlc_U8,10);

    Version_DCCU2_Vxworks=DivNum(DT2HM_VersionVxworks_U8,10);
    Version_DCCU2_Mvb    =DivNum(DT2HM_VersionMVB_U8,10);
    Version_DCCU2_Sdb    =DivNum(DT2HM_VersionSdb_U8,10);
    Version_DCCU2_Plc    =DivNum(DT2HM_VersionPlc_U8,10);

    CCU_version ="PLC:"+QString::number(Version_CCU1_Plc,'f',1)+" "+"MVB:"+QString::number(Version_CCU1_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_CCU1_Sdb,'f',1)+" "+"VXW:"+QString::number(Version_CCU1_Vxworks,'f',1);
    CCU_version2="PLC:"+QString::number(Version_CCU2_Plc,'f',1)+" "+"MVB:"+QString::number(Version_CCU2_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_CCU2_Sdb,'f',1)+" "+"VXW:"+QString::number(Version_CCU2_Vxworks,'f',1);

    DCCU_version ="PLC:"+QString::number(Version_DCCU1_Plc,'f',1)+" "+"MVB:"+QString::number(Version_DCCU1_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_DCCU1_Sdb,'f',1)+" "+"VXW:"+QString::number(Version_DCCU1_Vxworks,'f',1);
    DCCU_version2="PLC:"+QString::number(Version_DCCU2_Plc,'f',1)+" "+"MVB:"+QString::number(Version_DCCU2_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_DCCU2_Sdb,'f',1)+" "+"VXW:"+QString::number(Version_DCCU2_Vxworks,'f',1);




    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW1))->SetCtrlText(QString::number(Version_IO_GW1,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW3))->SetCtrlText(QString::number(Version_IO_GW2,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW4))->SetCtrlText(QString::number(Version_IO_GW3,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW5))->SetCtrlText(QString::number(Version_IO_GW4,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW6))->SetCtrlText(QString::number(Version_IO_GW5,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW8))->SetCtrlText(QString::number(Version_IO_GW6,'f',1));

    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI1))->SetCtrlText(QString::number(Version_IO_DI1,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI3))->SetCtrlText(QString::number(Version_IO_DI2,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI4))->SetCtrlText(QString::number(Version_IO_DI3,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI5))->SetCtrlText(QString::number(Version_IO_DI4,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI6))->SetCtrlText(QString::number(Version_IO_DI5,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI8))->SetCtrlText(QString::number(Version_IO_DI6,'f',1));

    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO1))->SetCtrlText(QString::number(Version_IO_DO1,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO3))->SetCtrlText(QString::number(Version_IO_DO2,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO4))->SetCtrlText(QString::number(Version_IO_DO3,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO5))->SetCtrlText(QString::number(Version_IO_DO4,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO6))->SetCtrlText(QString::number(Version_IO_DO5,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO8))->SetCtrlText(QString::number(Version_IO_DO6,'f',1));

    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX1))->SetCtrlText(QString::number(Version_IO_AX1,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX8))->SetCtrlText(QString::number(Version_IO_AX8,'f',1));

    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_PWM1))->SetCtrlText(QString::number(Version_IO_PWM1,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_PWM8))->SetCtrlText(QString::number(Version_IO_PWM1,'f',1));


    ACU__version1 ="DSP: "+StrFromInt( SIV1CT_SIVDSPVersion_U16/256, 10 )+"."+StrFromInt( int((SIV1CT_SIVDSPVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV1CT_SIVDSPVersion_U16%256)%16), 10 );
    ACU__version12="PPC: "+StrFromInt( SIV1CT_SIVPPCVersion_U16/256, 10 )+"."+StrFromInt( int((SIV1CT_SIVPPCVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV1CT_SIVPPCVersion_U16%256)%16), 10 );
    ACU__version13=QObject::trUtf8("充电机:")+StrFromInt( SIV1CT_SIVChargeVersion_U16/256, 10 )+"."+StrFromInt( int((SIV1CT_SIVChargeVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV1CT_SIVChargeVersion_U16%256)%16), 10 );

    ACU__version2 ="DSP: "+StrFromInt( SIV2CT_SIVDSPVersion_U16/256, 10 )+"."+StrFromInt( int((SIV2CT_SIVDSPVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV2CT_SIVDSPVersion_U16%256)%16), 10 );
    ACU__version22="PPC: "+StrFromInt( SIV2CT_SIVPPCVersion_U16/256, 10 )+"."+StrFromInt( int((SIV2CT_SIVPPCVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV2CT_SIVPPCVersion_U16%256)%16), 10 );
    ACU__version23=QObject::trUtf8("充电机:")+StrFromInt( SIV2CT_SIVChargeVersion_U16/256, 10 )+"."+StrFromInt( int((SIV2CT_SIVChargeVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV2CT_SIVChargeVersion_U16%256)%16), 10 );

    BCU__version1=StrFromInt( BCU_TC1_414_424_1%256, 10 )+"."+StrFromInt( BCU_TC1_414_424_1/256, 10 )+"."+StrFromInt( BCU_TC1_414_424_2%256, 10 );
    BCU__version2=StrFromInt( BCU_TC1_414_424_2/256, 10 )+"."+StrFromInt( BCU_TC1_414_424_3%256, 10 )+"."+StrFromInt( BCU_TC1_414_424_3/256, 10 );
    BCU__version3=StrFromInt( BCU_TC2_434_444_1%256, 10 )+"."+StrFromInt( BCU_TC2_434_444_1/256, 10 )+"."+StrFromInt( BCU_TC2_434_444_2%256, 10 );
    BCU__version4=StrFromInt( BCU_TC2_434_444_2/256, 10 )+"."+StrFromInt( BCU_TC2_434_444_3%256, 10 )+"."+StrFromInt( BCU_TC2_434_444_3/256, 10 );


    TCU__version1="SMC:"+StrFromInt( int(DR1CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR1CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR1CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR1CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR1CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR1CT_MCUVersion_U16%10, 10 );
    TCU__version2="SMC:"+StrFromInt( int(DR2CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR2CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR2CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR2CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR2CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR2CT_MCUVersion_U16%10, 10 );
    TCU__version3="SMC:"+StrFromInt( int(DR3CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR3CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR3CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR3CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR3CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR3CT_MCUVersion_U16%10, 10 );
    TCU__version4="SMC:"+StrFromInt( int(DR4CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR4CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR4CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR4CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR4CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR4CT_MCUVersion_U16%10, 10 );

    HVAC_Versino1=StrFromInt( AC1CT_Version1_U8, 10 )+"."+StrFromInt( AC1CT_Version2_U8, 10 );
    HVAC_Versino2=StrFromInt( AC2CT_Version1_U8, 10 )+"."+StrFromInt( AC2CT_Version2_U8, 10 );
    HVAC_Versino3=StrFromInt( AC3CT_Version1_U8, 10 )+"."+StrFromInt( AC3CT_Version2_U8, 10 );
    HVAC_Versino4=StrFromInt( AC4CT_Version1_U8, 10 )+"."+StrFromInt( AC4CT_Version2_U8, 10 );
    HVAC_Versino5=StrFromInt( AC5CT_Version1_U8, 10 )+"."+StrFromInt( AC5CT_Version2_U8, 10 );
    HVAC_Versino6=StrFromInt( AC6CT_Version1_U8, 10 )+"."+StrFromInt( AC6CT_Version2_U8, 10 );

    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC11, HVAC_Versino1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC22, HVAC_Versino2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC33, HVAC_Versino3);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC44, HVAC_Versino4);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC55, HVAC_Versino5);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC66, HVAC_Versino6);



//    TCU__version2=StrFromInt( TCU_521_1%256, 10 )+"."+StrFromInt( TCU_521_1/256, 10 )+"."+StrFromInt( TCU_521_2%256, 10 );
//    TCU__version3=StrFromInt( TCU_531_1%256, 10 )+"."+StrFromInt( TCU_531_1/256, 10 )+"."+StrFromInt( TCU_531_2%256, 10 );
//    TCU__version4=StrFromInt( TCU_541_1%256, 10 )+"."+StrFromInt( TCU_541_1/256, 10 )+"."+StrFromInt( TCU_541_2%256, 10 );
//    TCU__version5=StrFromInt( TCU_551_1%256, 10 )+"."+StrFromInt( TCU_551_1/256, 10 )+"."+StrFromInt( TCU_551_2%256, 10 );
//    TCU__version6=StrFromInt( TCU_561_1%256, 10 )+"."+StrFromInt( TCU_561_1/256, 10 )+"."+StrFromInt( TCU_561_2%256, 10 );

     ATC__version1="Soft "+StrFromInt( soft_version21/256, 10 );
     ATC__version2="Data "+StrFromInt( soft_version23/256, 10 );
//    ATC__version3=StrFromInt( soft_version25/256, 10 )+"."+StrFromInt( soft_version25%256, 10 )+"."+StrFromInt( soft_version26/256, 10 );
//    ATC__version4=StrFromInt( soft_version27/256, 10 )+"."+StrFromInt( soft_version27%256, 10 )+"."+StrFromInt( soft_version28/256, 10 );
    PIS_PA_version1=StrFromInt( PIS1CT_Version_U8/10, 10 )+"."+StrFromInt( PIS1CT_Version_U8%10, 10 );
    PIS_PA_version2=StrFromInt( PIS2CT_Version_U8/10, 10 )+"."+StrFromInt( PIS2CT_Version_U8%10, 10 );
    FAS_version1=StrFromInt( FAU1CT_VersionY_U8, 10 )+"."+StrFromInt( FAU1CT_VersionX_U8, 10 );
    FAS_version2=StrFromInt( FAU2CT_VersionY_U8, 10 )+"."+StrFromInt( FAU2CT_VersionX_U8, 10 );

//    Door_GW_Version1=StrFromInt( soft_version45/256, 10 )+"."+StrFromInt( soft_version45%256, 10 );
//    Door_GW_Version2=StrFromInt( soft_version47/256, 10 )+"."+StrFromInt( soft_version47%256, 10 );
//    Door_GW_Version3=StrFromInt( soft_version49/256, 10 )+"."+StrFromInt( soft_version49%256, 10 );
//    Door_GW_Version4=StrFromInt( soft_version51/256, 10 )+"."+StrFromInt( soft_version51%256, 10 );
//    Door_GW_Version5=StrFromInt( soft_version53/256, 10 )+"."+StrFromInt( soft_version53%256, 10 );
//    Door_GW_Version6=StrFromInt( soft_version55/256, 10 )+"."+StrFromInt( soft_version55%256, 10 );


    Door_Ctr_Version1=StrFromInt( EDR1CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR1CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR1CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR1CT_Edcu2Version_U8%10, 10 );
    Door_Ctr_Version2=StrFromInt( EDR3CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR3CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR3CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR3CT_Edcu2Version_U8%10, 10 );
    Door_Ctr_Version3=StrFromInt( EDR5CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR5CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR5CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR5CT_Edcu2Version_U8%10, 10 );
    Door_Ctr_Version4=StrFromInt( EDR7CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR7CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR7CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR7CT_Edcu2Version_U8%10, 10 );
    Door_Ctr_Version5=StrFromInt( EDR9CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR9CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR9CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR9CT_Edcu2Version_U8%10, 10 );
    Door_Ctr_Version6=StrFromInt( EDRBCT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDRBCT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDRBCT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDRBCT_Edcu2Version_U8%10, 10 );

//    Door_Ctr_Version7=StrFromInt( DCU_771_1/256, 10 )+"."+StrFromInt( DCU_771_1%256, 10 );
//    Door_Ctr_Version8=StrFromInt( DCU_781_1/256, 10 )+"."+StrFromInt( DCU_781_1%256, 10 );

    HVAC_Versino1=StrFromInt( HVAC_810_7%256, 10 )+"."+StrFromInt( HVAC_810_7/256, 10 )+"."+StrFromInt( HVAC_810_8%256, 10 )+"."+StrFromInt( HVAC_810_8/256, 10 );
    HVAC_Versino2=StrFromInt( HVAC_820_7%256, 10 )+"."+StrFromInt( HVAC_820_7/256, 10 )+"."+StrFromInt( HVAC_820_8%256, 10 )+"."+StrFromInt( HVAC_820_8/256, 10 );
    HVAC_Versino3=StrFromInt( HVAC_830_7%256, 10 )+"."+StrFromInt( HVAC_830_7/256, 10 )+"."+StrFromInt( HVAC_830_8%256, 10 )+"."+StrFromInt( HVAC_830_8/256, 10 );
    HVAC_Versino4=StrFromInt( HVAC_840_7%256, 10 )+"."+StrFromInt( HVAC_840_7/256, 10 )+"."+StrFromInt( HVAC_840_8%256, 10 )+"."+StrFromInt( HVAC_840_8/256, 10 );
    HVAC_Versino5=StrFromInt( HVAC_850_7%256, 10 )+"."+StrFromInt( HVAC_850_7/256, 10 )+"."+StrFromInt( HVAC_850_8%256, 10 )+"."+StrFromInt( HVAC_850_8/256, 10 );
    HVAC_Versino6=StrFromInt( HVAC_860_7%256, 10 )+"."+StrFromInt( HVAC_860_7/256, 10 )+"."+StrFromInt( HVAC_860_8%256, 10 )+"."+StrFromInt( HVAC_860_8/256, 10 );
    HVAC_Versino7=StrFromInt( HVAC_870_7%256, 10 )+"."+StrFromInt( HVAC_870_7/256, 10 )+"."+StrFromInt( HVAC_870_8%256, 10 )+"."+StrFromInt( HVAC_870_8/256, 10 );
    HVAC_Versino8=StrFromInt( HVAC_880_7%256, 10 )+"."+StrFromInt( HVAC_880_7/256, 10 )+"."+StrFromInt( HVAC_880_8%256, 10 )+"."+StrFromInt( HVAC_880_8/256, 10 );

    HVAC_GW_Versino1="GW "+StrFromInt( HVAC_810_16/256, 10 )+"."+StrFromInt( HVAC_810_16%256, 10 );
    HVAC_GW_Versino2="GW "+StrFromInt( HVAC_820_16/256, 10 )+"."+StrFromInt( HVAC_820_16%256, 10 );
    HVAC_GW_Versino3="GW "+StrFromInt( HVAC_830_16/256, 10 )+"."+StrFromInt( HVAC_830_16%256, 10 );
    HVAC_GW_Versino4="GW "+StrFromInt( HVAC_840_16/256, 10 )+"."+StrFromInt( HVAC_840_16%256, 10 );
    HVAC_GW_Versino5="GW "+StrFromInt( HVAC_850_16/256, 10 )+"."+StrFromInt( HVAC_850_16%256, 10 );
    HVAC_GW_Versino6="GW "+StrFromInt( HVAC_860_16/256, 10 )+"."+StrFromInt( HVAC_860_16%256, 10 );
    HVAC_GW_Versino7="GW "+StrFromInt( HVAC_870_16/256, 10 )+"."+StrFromInt( HVAC_870_16%256, 10 );
    HVAC_GW_Versino8="GW "+StrFromInt( HVAC_880_16/256, 10 )+"."+StrFromInt( HVAC_880_16%256, 10 );
//    HMI_version1 = StrFromInt( HMI_202_2%256, 10 )+"."+StrFromInt( HMI_202_1/256, 10 )+"."+StrFromInt( HMI_202_1%256, 10 );
//    HMI_version2=  StrFromInt( HMI_282_2%256, 10 )+"."+StrFromInt( HMI_282_1/256, 10 )+"."+StrFromInt( HMI_282_1%256, 10 );

    //判断现在显示屏收到的数据时哪端CCU
    if (CTHM_CCU1_IsMaster_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("CCU1");
    }
    if (CTHM_CCU2_IsMaster_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("CCU2");
    }
    if (!(CTHM_CCU1_IsMaster_B1) &&!(CTHM_CCU2_IsMaster_B1))
    {
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("NULL");
    }
    if (CTHM_CCU1_IsMaster_B1&&CTHM_CCU2_IsMaster_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("CCU1&2");
    }
//    CCU_version="soft:"+StrFromInt( CCU_HMI_220_16/256, 10 )+"."+StrFromInt( CCU_HMI_220_16%256, 10 )+"  "+"MVB:"+StrFromInt( CCU_HMI_223_3/256, 10 )+"."+StrFromInt( CCU_HMI_223_3%256, 10 )+"\n"+"SDB:"+StrFromInt( CCU_HMI_223_4/256, 10 )+"."+StrFromInt( CCU_HMI_223_4%256, 10 )+"  "+"VXW:"+StrFromInt( CCU_HMI_223_5/256, 10 )+"."+StrFromInt( CCU_HMI_223_5%256, 10 );
//    DCCU_version="soft:"+StrFromInt( ERM_F00_16/256, 10 )+"."+StrFromInt( ERM_F00_16%256, 10 )+"  "+"MVB:"+StrFromInt( ERM_F02_2/256, 10 )+"."+StrFromInt( ERM_F02_2%256, 10 )+"\n"+"SDB:"+StrFromInt( ERM_F02_3/256, 10 )+"."+StrFromInt( ERM_F02_3%256, 10 )+"  "+"VXW:"+StrFromInt( ERM_F02_1/256, 10 )+"."+StrFromInt( ERM_F02_1%256, 10 );
//    DCCU_version2="soft:"+StrFromInt( ERM_F10_16/256, 10 )+"."+StrFromInt( ERM_F10_16%256, 10 )+"  "+"MVB:"+StrFromInt( ERM_F12_2/256, 10 )+"."+StrFromInt( ERM_F12_2%256, 10 )+"\n"+"SDB:"+StrFromInt( ERM_F12_3/256, 10 )+"."+StrFromInt( ERM_F12_3%256, 10 )+"  "+"VXW:"+StrFromInt( ERM_F12_1/256, 10 )+"."+StrFromInt( ERM_F12_1%256, 10 );

    //    IO_GW_version1=StrFromInt( soft_version85/256, 10 )+"."+StrFromInt( soft_version85%256, 10 );
//    IO_GW_version2=StrFromInt( soft_version86/256, 10 )+"."+StrFromInt( soft_version86%256, 10 );
//    IO_GW_version3=StrFromInt( soft_version87/256, 10 )+"."+StrFromInt( soft_version87%256, 10 );
//    IO_GW_version4=StrFromInt( soft_version88/256, 10 )+"."+StrFromInt( soft_version88%256, 10 );
//    IO_GW_version5=StrFromInt( soft_version89/256, 10 )+"."+StrFromInt( soft_version89%256, 10 );
//    IO_GW_version6=StrFromInt( soft_version90/256, 10 )+"."+StrFromInt( soft_version90%256, 10 );

        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU11, ACU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU12, ACU__version12);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU13, ACU__version13);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU81, ACU__version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU82, ACU__version22);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU83, ACU__version23);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU11, BCU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU44, BCU__version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU55, BCU__version3);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU88, BCU__version4);

//        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU22, TCU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU33, TCU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU44, TCU__version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU55, TCU__version3);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU66, TCU__version4);
//        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU77, TCU__version6);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC10, ATC__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC11, ATC__version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC20, ATC__version3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC21, ATC__version4);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS1, PIS_PA_version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS8, PIS_PA_version2);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_FAS1, FAS_version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_FAS8, FAS_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_AU_DB22, PIS_DB_version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ST_DB33, PIS_ST_version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_TV11, PIS_TV_version1);

//    SetVerInfoLabelString(ID_PIBVIP_LABEL_AU_DB55, PIS_DB_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ST_DB44, PIS_ST_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_TV66, PIS_TV_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR1, Door_GW_Version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR2, Door_GW_Version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR3, Door_GW_Version3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR4, Door_GW_Version4);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR5, Door_GW_Version5);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR6, Door_GW_Version6);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR1, Door_Ctr_Version1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR2, Door_Ctr_Version2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR3, Door_Ctr_Version3);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR4, Door_Ctr_Version4);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR5, Door_Ctr_Version5);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR6, Door_Ctr_Version6);




    //    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC11, HVAC_Versino1);
////    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC22, HVAC_Versino2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC33, HVAC_Versino3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC44, HVAC_Versino4);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC55, HVAC_Versino5);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC66, HVAC_Versino6);
////    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC77, HVAC_Versino7);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC88, HVAC_Versino8);

//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW1, HVAC_GW_Versino1);
////    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW2, HVAC_GW_Versino2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW3, HVAC_GW_Versino3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW4, HVAC_GW_Versino4);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW5, HVAC_GW_Versino5);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW6, HVAC_GW_Versino6);
////    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW7, HVAC_GW_Versino7);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW8, HVAC_GW_Versino8);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_HMI1, HMI_version1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HMI2, HMI_version2);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_CCU1, CCU_version);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_CCU2, CCU_version2);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_DCCU1, DCCU_version);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DCCU2, DCCU_version2);


    return;
}

void CVersionInfoPage::SetVerInfoLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}

