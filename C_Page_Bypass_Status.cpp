#include "C_Page_Bypass_Status.h"


ROMDATA g_PicRom_CarStatus3[] =
{


#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QObject::trUtf8("第3页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_PAGEUP             },

#endif
#ifdef PAGE_HEADER_NEW
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("旁路状态") )
//    {"",                          D_FONT_BOLD(4),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS3_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("旁路") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS3_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

    {QObject::trUtf8("通信中断"),                D_FONT_BOLD(8),      QRect( 20, 6,  162, 30),          Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS3_COMMINTERRUPT          },
    {QObject::trUtf8("网压"),                   D_FONT_BOLD(8),      QRect(40, 45, 120, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(40, 66, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_V                },

    {QObject::trUtf8("网流"),                   D_FONT_BOLD(8),      QRect(180, 45, 120, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(180,66, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_A                },

    {QObject::trUtf8("牵引*制动级位"),            D_FONT_BOLD(8),      QRect(470, 45, 150, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(470, 66, 150, 30),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_TRACTIONMODEL    },

    {QObject::trUtf8("速度"),                   D_FONT_BOLD(8),      QRect(630, 45, 80, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(630, 66, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_SPEED            },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720, 50, 65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCARS3_ICON_WARNNING          },

    {"",                            D_FONT_BOLD(4),      QRect(178,110,600, 60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCARS3_TRAIN                  },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700,128, 45, 20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS3_ARROW_RIGHT            },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(58, 128, 45, 20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS3_ARROW_LEFT             },

#endif
    {"",                            D_FONT_BOLD(6),      QRect(10, 150, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 180, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 210, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 240, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 270, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 300, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 330, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 360, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 390, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 420, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(10, 150, 1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(300, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(500, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700-1, 150, 1, 270),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("车号"),                   D_FONT_BOLD(4),      QRect(11, 151, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("信号门旁路"),            D_FONT_BOLD(4),      QRect(11, 181, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("门安全线旁路"),                 D_FONT_BOLD(4),      QRect(11, 211, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停放制动旁路"),            D_FONT_BOLD(4),      QRect(11, 241, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动不缓解旁路"),            D_FONT_BOLD(4),      QRect(11,271, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("紧急制动旁路"),            D_FONT_BOLD(4),      QRect(11, 301, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电制动切除"),            D_FONT_BOLD(4),      QRect(11, 331, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警惕旁路"),                D_FONT_BOLD(4),      QRect(11, 361, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC切除"),               D_FONT_BOLD(4),      QRect(11, 391, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(103, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(203, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(303, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(403, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(503, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(603, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //信号门旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 184, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1ATCDOORCUTOFF      },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2ATCDOORCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3ATCDOORCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4ATCDOORCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5ATCDOORCUTOFF          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 184, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ATCDOORCUTOFF     },

    //	门安全线旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 214, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR1DOORLINECUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR2DOORLINECUTOFF      },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR3DOORLINECUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR4DOORLINECUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR5DOORLINECUTOFF       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 214, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR6DOORLINECUTOFF          },

    //停放制动旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 244, 94, 23),          Qt::white,                Qt::black,                  CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR1PARBRKCUTOFF     },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2PARBRKCUTOFF        },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3PARBRKCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4PARBRKCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5PARBRKCUTOFF         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 244, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6PARBRKCUTOFF      },

    //   制动不缓解旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 274, 94, 23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1BRKNORELSCUTOFF },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2BRKNORELSCUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3BRKNORELSCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4BRKNORELSCUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5BRKNORELSCUTOFF        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 274, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6BRKNORELSCUTOFF },

    //    紧急制动旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 304, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1EBCUTOFF    },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 304, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR2EBCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 304, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR3EBCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 304, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR4EBCUTOFF          },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 304, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR5EBCUTOFF          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 304, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR6EBCUTOFF     },

    //      电制动切除
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 334, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1EBISOFF  },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 334, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2EBISOFF        },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 334, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3EBISOFF        },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 334, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4EBISOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 334, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5EBISOFF         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 334, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6EBISOFF   },

    //警惕旁路
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(103, 364, 94, 23),          Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1ALERTCUTOFF     },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 364, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR2ALERTCUTOFF          },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 364, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR3ALERTCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 364, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR4ALERTCUTOFF          },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 364, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR5ALERTCUTOFF         },
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(603, 364, 94, 23),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ALERTCUTOFF    },

    // ATC切除
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(103, 394, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1ATCCUTOFF   },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 394, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 394, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 394, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 394, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(603, 394, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ATCCUTOFF    },



//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 424, 94, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass1    },
////    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(178, 424, 70, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass2         },
//    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(203, 424, 94, 23),           Qt::white,                Qt::green,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CommonBrakeAppBypass3         },
//    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(303, 424, 94, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass4         },
//    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(403, 424, 94, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass5         },
//    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(503, 424, 94, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass6         },
////    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(553, 424, 70, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass7         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 424, 94,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass8    },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 454, 94, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeRelBypass1    },
////    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(178, 451, 94, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(203,451, 94, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(303, 451, 94, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(403, 451, 94, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(503, 451, 94, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(553, 451, 94, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 454, 94,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeRelBypass2    },


    // //   {QObject::trUtf8("第3页/共3页"),             D_FONT_BOLD(6),      QRect(675, 480, 120, 20),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("ATO模式"),                D_FONT_BOLD(8),      QRect(25, 500, 100, 39),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_ATOMODE             },
//    {QObject::trUtf8("网络模式"),                D_FONT_BOLD(8),      QRect(155, 500, 100, 39),         Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_NETMODE             },
//    {QObject::trUtf8("逆变模式"),                D_FONT_BOLD(8),      QRect(285, 500, 100, 39),         Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CONTRAVARIANTMODE   },
//    {QObject::trUtf8("洗车模式"),                D_FONT_BOLD(8),      QRect(415, 500, 100, 39),         Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_WASHCARMODE         },
////    {QObject::trUtf8("被救援"),                 D_FONT_BOLD(8),      QRect(545, 500, 100, 39),         Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBCARS3_BUTTON_EMERGENCYRESCUE    },
////    {"<<",                          D_FONT_BOLD(6),      QRect(675, 500, 50, 39),          Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBCARS3_BUTTON_PAGEDOWN           },
////    {">>",                          D_FONT_BOLD(6),      QRect(725, 500, 50, 39),          Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBCARS3_BUTTON_PAGEUP             },

    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_ATOMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_NETMODE         },
    {QObject::trUtf8("逆变模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CONTRAVARIANTMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_WASHCARMODE         },
   // {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_TOWMODE         },
    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE         },
        {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST         },
    {QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_FASPAGE         },
    //  {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },
{QObject::trUtf8("烟火"),          D_FONT_BOLD(8),        QRect(705, 200, 80,  30),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBCARS3_LABEL_FAS_status         },

};
int g_CarStatus3RomLen = sizeof(g_PicRom_CarStatus3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus3Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)

        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)

#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#else
        ON_BTNCLK(  ID_PIBCARS3_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif

        ON_BTNCLK(ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
     //   ON_BTNCLK(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS3_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBCARS3_BUTTON_FASPAGE, OnFASpageBtnClk)

END_MESSAGE_MAP()

CCarStatus3Page::CCarStatus3Page()
{
}

void CCarStatus3Page::OnUpdatePage()
{
    //UpdateColor();


   UpdateEBCutoff();
   UpdateBrkNoRelsCutoff();
   UpdateParkBrkCutoff();
   UpdateATCDoorCutoff();
   UpdateDoorLineCutoff();
   UpdateAlertCutoff();
   UpdateATCCutoff();
   UpdateEBisOff();

    UpdateATOMode();
    UpdateNETMode();
    UpdateContravariant();
    UpdateWashCarMode();
    UpdateTowMode();

    updateTrain(ID_PIBCARS3_TRAIN);
    updateArrow(ID_PIBCARS3_ARROW_LEFT,ID_PIBCARS3_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS3_TRAIN);


    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
#ifdef PAGE_HEADER_OLD
    UpdateCommInterrupt(ID_PIBCARS3_COMMINTERRUPT);
    updateFault(ID_PIBCARS3_ICON_WARNNING);
#endif
//    UpdateEmergencyBroadcast();


}


void CCarStatus3Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_SPEED))->SetBorderColor(Qt::white);
#endif
 //   ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->SetBorderColor(Qt::white);

}

void CCarStatus3Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("紧急广播"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void CCarStatus3Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus3Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus3Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus3Page::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void CCarStatus3Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus3Page::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus3Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus3Page::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus3Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3HELP);
    }
#else
    void CCarStatus3Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus3Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus3Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus3Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus3Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus3Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3HELP);
    }


#endif
    void CCarStatus3Page::OnPageDownBtnClk()
    {
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS2);
#endif

    }

    void CCarStatus3Page::OnBroadCastBtnCl()
                      {
                            ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
                      }

void CCarStatus3Page::UpdateAValue()
{

#ifdef PAGE_HEADER_OLD
    if (currency_data2>32767)
    {
       webflow = currency_data2-65536;
    }
    else
    {
       webflow = currency_data2;
    }

    SetAValue(ID_PIBCARS3_LABEL_A, webflow);
#endif
}

void CCarStatus3Page::UpdateVValue()
{

#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBCARS3_LABEL_V);
#endif
}

void CCarStatus3Page::UpdateTractionBrak()
{

#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBCARS3_LABEL_TRACTIONMODEL);
#endif
}

void CCarStatus3Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));
#endif

}


/*
void CCarStatus3Page::UpdateColor()
{
    int zerospeed_color1        = 0;
    int zerospeed_color2        = 0;
    int door_color1             = 0;
    int door_color2             = 0;
    int placeremit_color1       = 0;
    int placeremit_color2       = 0;
    int commonuseremit_color1   = 0;
    int commonuseremit_color2   = 0;
    int windpresslow_color1     = 0;
    int windpresslow_color2     = 0;
    int jjzdhl_color1           = 0;
    int jjzdhl_color2           = 0;
    int atccut_color1           = 0;
    int atccut_color2           = 0;
    int CommonBrakeAppBypass1   = 0;
    int CommonBrakeAppBypass2   = 0;
    int CommonBrakeAppBypass3   = 0;
    int CommonBrakeAppBypass4   = 0;
    int CommonBrakeAppBypass5   = 0;
    int CommonBrakeAppBypass6   = 0;
    int CommonBrakeAppBypass7   = 0;
    int CommonBrakeAppBypass8   = 0;
    int CommonBrakeRelBypass1   = 0;
    int CommonBrakeRelBypass2   = 0;
    //int A130A =0;//modify
    //CTHM_Tc1DI2On_B1	TC1车DI2在线
    if ( (Bit(CCU_HMI_222_11, 14 ))== 1)
    {
        //DICT_TractionSafeLoopBypassMonitTci_B1   	牵引安全环路旁路监视
        if (Bit( DI_110_3, 1 ) == 1)
        {
            zerospeed_color1 = 2;
        }
        else
        {
            zerospeed_color1 = 1;
        }

        if(Bit( DI_110_3, 14 )==1)
        {
            atccut_color1 = 2;
        }
        else
        {
            atccut_color1 = 1;
        }
    }
    else
    {
        zerospeed_color1 = 0;
        atccut_color1 = 0;

    }

    if ( (Bit(CCU_HMI_222_11, 13 ))== 1)
    {
        //DICT_BypassAllDoorsClosedTci_B1    门旁路
        if (Bit( DI_110_5, 6 ) == 1)
        {
            door_color1 = 2;
        }
        else
        {
            door_color1 = 1;
        }
        //DICT_BypassAllPBreleasedTci_B1    旁路：停放制动缓解
        if (Bit( DI_110_5, 7 ) == 1)
        {
            placeremit_color1 = 2;
        }
        else
        {
            placeremit_color1 = 1;
        }
        //DICT_BypassPneumaticSerBrakesTci_B1    旁路：常用制动施加
        if (Bit( DI_110_5, 8 ) == 1)
        {
            commonuseremit_color1 = 2;
        }
        else
        {
            commonuseremit_color1 = 1;
        }
        //DICT_BypassMRpressureTci_B1    旁路：总风低压
        if (Bit( DI_110_6, 9 ) == 1)
        {
            windpresslow_color1 = 2;
        }
        else
        {
            windpresslow_color1 = 1;
        }
        //DICT_BypassEmergencyLoopTci_B1    旁路：安全环路
        if(Bit( DI_110_5, 5 )==1)
        {
            jjzdhl_color1 = 2;
        }
        else
        {
            jjzdhl_color1 = 1;
        }

    }
    else
    {
        door_color1 = 0;
        placeremit_color1 = 0;
        commonuseremit_color1 = 0;
        windpresslow_color1 = 0;
        jjzdhl_color1 = 0;

    }

    if ( (Bit(CCU_HMI_222_11, 12 ))== 1)
    {

        if (Bit( DI_110_7, 9 ) == 1)
        {
            CommonBrakeAppBypass1 = 2;
        }
        else
        {
            CommonBrakeAppBypass1 = 1;
        }
        //DICT_ CommonBrakeAppBypassSwitchMonitor Tci_B1    本车常用制动施加旁路开关监视
        if (Bit( DI_110_7, 10 ) == 1)
        {
            CommonBrakeRelBypass1 = 2;
        }
        else
        {
            CommonBrakeRelBypass1 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass1 = 0;
        CommonBrakeRelBypass1 = 0;
    }



    if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
    {
        if (Bit( DI_180_3, 1 ) == 1)
        {
            zerospeed_color2 = 2;
        }
        else
        {
            zerospeed_color2 = 1;
        }

        if(Bit( DI_180_3, 14 ) == 1)
        {
            atccut_color2 = 2;
        }
        else
        {
            atccut_color2=1;
        }
    }
    else
    {
        zerospeed_color2 = 0;
        atccut_color2 = 0;

    }

    if ( (Bit(CCU_HMI_222_15, 5 ))== 1)
    {
        if (Bit( DI_180_5, 6 ) == 1)
        {
            door_color2 = 2;
        }
        else
        {
            door_color2 = 1;
        }
        if (Bit( DI_180_5,7 ) == 1)
        {
            placeremit_color2 = 2;
        }
        else
        {
            placeremit_color2 = 1;
        }
        if (Bit( DI_180_5, 8 ) == 1)
        {
            commonuseremit_color2 = 2;
        }
        else
        {
            commonuseremit_color2 = 1;
        }
        if (Bit( DI_180_6, 9 ) == 1)
        {
            windpresslow_color2 = 2;
        }
        else
        {
            windpresslow_color2 = 1;
        }
        if(Bit( DI_180_5, 5 ) == 1)
        {
            jjzdhl_color2 = 2;
        }
        else
        {
            jjzdhl_color2=1;
        }
    }
    else
    {
        door_color2 = 0;
        placeremit_color2 = 0;
        commonuseremit_color2 = 0;
        windpresslow_color2 = 0;
        jjzdhl_color2 = 0;
    }

    if ( (Bit(CCU_HMI_222_15, 4 ))== 1)
    {
        if (Bit( DI_180_7, 9 ) == 1)
        {
            CommonBrakeAppBypass8 = 2;
        }
        else
        {
            CommonBrakeAppBypass8 = 1;
        }

        if (Bit( DI_180_7, 10 ) == 1)
        {
            CommonBrakeRelBypass2 = 2;
        }
        else
        {
            CommonBrakeRelBypass2 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass8 = 0;
        CommonBrakeRelBypass2 = 0;

    }


    if ( (Bit(CCU_HMI_222_12, 6 ))== 1)
    {
        if (Bit( DI_120_3, 4 ) == 1)
        {
            CommonBrakeAppBypass2 = 2;
        }
        else
        {
            CommonBrakeAppBypass2 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass2 = 0;
    }

    if ( (Bit(CCU_HMI_222_12, 14 ))== 1)
    {
        if (Bit( DI_130_3, 4 ) == 1)
        {
            CommonBrakeAppBypass3 = 2;
        }
        else
        {
            CommonBrakeAppBypass3 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass3 = 0;
    }

    if ( (Bit(CCU_HMI_222_13, 6 ))== 1)
    {
        if (Bit( DI_140_3, 4 ) == 1)
        {
            CommonBrakeAppBypass4 = 2;
        }
        else
        {
            CommonBrakeAppBypass4 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass4 = 0;
    }

    if ( (Bit(CCU_HMI_222_13, 14 ))== 1)
    {
        if (Bit( DI_150_3, 4 ) == 1)
        {
            CommonBrakeAppBypass5 = 2;
        }
        else
        {
            CommonBrakeAppBypass5 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass5 = 0;
    }

    if ( (Bit(CCU_HMI_222_14, 6 ))== 1)
    {
        if (Bit( DI_160_3, 4 ) == 1)
        {
            CommonBrakeAppBypass6 = 2;
        }
        else
        {
            CommonBrakeAppBypass6 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass6 = 0;
    }

    if ( (Bit(CCU_HMI_222_14, 14 ))== 1)
    {
        if (Bit( DI_170_3, 4 ) == 1)
        {
            CommonBrakeAppBypass7 = 2;
        }
        else
        {
            CommonBrakeAppBypass7 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass7 = 0;
    }




    SetLabelColor(ID_PIBCARS3_LABEL_CAR1AEROSPEED,zerospeed_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6AEROSPEED,zerospeed_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1DOOR,door_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6DOOR,door_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1PLACEREMIT,placeremit_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6PLACEREMIT,placeremit_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1COMMONUSEREMIT,commonuseremit_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6COMMONUSEREMIT,commonuseremit_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1WINDPRESSLOW,windpresslow_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6WINDPRESSLOW,windpresslow_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1JJZDHL, jjzdhl_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6JJZDHL, jjzdhl_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ATPCUT, atccut_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ATPCUT, atccut_color2);

//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass1, CommonBrakeAppBypass1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass2, CommonBrakeAppBypass2);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass3, CommonBrakeAppBypass3);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass4, CommonBrakeAppBypass4);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass5, CommonBrakeAppBypass5);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass6, CommonBrakeAppBypass6);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass7, CommonBrakeAppBypass7);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass8, CommonBrakeAppBypass8);

//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeRelBypass1, CommonBrakeRelBypass1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeRelBypass2, CommonBrakeRelBypass2);
}
*/
     void CCarStatus3Page::UpdateEBCutoff()
     {

         if(
                     FAU1CT_FAU1FireAlert_B1 ||  FAU1CT_FAU2FireAlert_B1 ||  FAU1CT_FAU3FireAlert_B1 ||  FAU1CT_FAU4FireAlert_B1 ||  FAU1CT_FAU5FireAlert_B1 ||  FAU1CT_FAU6FireAlert_B1
                 ||  FAU1CT_FAU7FireAlert_B1 ||  FAU1CT_FAU8FireAlert_B1 ||  FAU1CT_FAU9FireAlert_B1 || FAU1CT_FAU10FireAlert_B1 || FAU1CT_FAU11FireAlert_B1 || FAU1CT_FAU12FireAlert_B1
                 || FAU1CT_FAU13FireAlert_B1 || FAU1CT_FAU14FireAlert_B1 || FAU1CT_FAU15FireAlert_B1 || FAU1CT_FAU16FireAlert_B1 || FAU1CT_FAU17FireAlert_B1 || FAU1CT_FAU18FireAlert_B1
                 || FAU1CT_FAU19FireAlert_B1 || FAU1CT_FAU20FireAlert_B1 || FAU1CT_FAU21FireAlert_B1 || FAU1CT_FAU22FireAlert_B1 || FAU1CT_FAU23FireAlert_B1 || FAU1CT_FAU24FireAlert_B1
                 || FAU1CT_FAU25FireAlert_B1 || FAU1CT_FAU26FireAlert_B1 || FAU1CT_FAU27FireAlert_B1 || FAU1CT_FAU28FireAlert_B1
                    )

             {
                  ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_FAS_status))->ShowLabel();
             }
             else
             {
                  ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_FAS_status))->HideLabel();
             }

                int Car1_EBCutOff_color  = 0;
              // int Car2_EBCutOff_color  = 0;
              //  int Car3_EBCutOff_color  = 0;
              //  int Car4_EBCutOff_color  = 0;
              //  int Car5_EBCutOff_color  = 0;
                int Car6_EBCutOff_color  = 0;
if(CTHM_RIOM1_DIM3_IsOnline_B1)
                {
                            if (RIOM1CT_DIM3DI6_B1)
                            {
                                Car1_EBCutOff_color = 1;
                            }
                            else
                            {
                                Car1_EBCutOff_color = 0;
                            }
                        }
/*
                            if (RIOM2CT_DIM3DI6_B1)
                            {
                                Car2_EBCutOff_color = 1;
                            }
                            else
                            {
                                Car2_EBCutOff_color = 0;
                            }

                            if (RIOM3CT_DIM3DI6_B1)
                            {
                                Car3_EBCutOff_color = 1;
                            }
                            else
                            {
                                Car3_EBCutOff_color = 0;
                            }

                            if (RIOM4CT_DIM3DI6_B1)
                            {
                                Car4_EBCutOff_color = 1;
                            }
                            else
                            {
                                Car4_EBCutOff_color = 0;
                            }

                            if (RIOM5CT_DIM3DI6_B1)
                            {
                                Car5_EBCutOff_color = 1;
                            }
                            else
                            {
                                Car5_EBCutOff_color = 0;
                            }
*/

else
{
    Car1_EBCutOff_color = 2;

}
if(CTHM_RIOM6_DIM3_IsOnline_B1)
{
                            if (RIOM6CT_DIM3DI6_B1)
                            {
                                Car6_EBCutOff_color = 1;
                            }
                            else
                            {
                                Car6_EBCutOff_color = 0;
                            }
                        }
else
{
    Car6_EBCutOff_color = 2;
}

                            SetLabelColor(ID_PIBCARS3_LABEL_CAR1EBCUTOFF, Car1_EBCutOff_color);
                            //SetLabelColor(ID_PIBCARS3_LABEL_CAR2EBCUTOFF, Car2_EBCutOff_color);
                            //SetLabelColor(ID_PIBCARS3_LABEL_CAR3EBCUTOFF, Car3_EBCutOff_color);
                            //SetLabelColor(ID_PIBCARS3_LABEL_CAR4EBCUTOFF, Car4_EBCutOff_color);
                            //SetLabelColor(ID_PIBCARS3_LABEL_CAR5EBCUTOFF, Car5_EBCutOff_color);
                            SetLabelColor(ID_PIBCARS3_LABEL_CAR6EBCUTOFF, Car6_EBCutOff_color);

     }

    void CCarStatus3Page::UpdateBrkNoRelsCutoff()
    {
        int Car1_BrkNoRelsCutoff_color  = 0;
        //int Car2_BrkNoRelsCutoff_color  = 0;
        //int Car3_BrkNoRelsCutoff_color  = 0;
        //int Car4_BrkNoRelsCutoff_color  = 0;
        //int Car5_BrkNoRelsCutoff_color  = 0;
        int Car6_BrkNoRelsCutoff_color  = 0;
if(CTHM_RIOM1_DIM3_IsOnline_B1)
        {
                    if (RIOM1CT_DIM3DI5_B1)
                    {
                        Car1_BrkNoRelsCutoff_color = 1;
                    }
                    else
                    {
                        Car1_BrkNoRelsCutoff_color = 0;
                    }
                }
else
{
     Car1_BrkNoRelsCutoff_color = 2;
}
/*
                    if (RIOM2CT_DIM3DI5_B1)
                    {
                        Car2_BrkNoRelsCutoff_color = 1;
                    }
                    else
                    {
                        Car2_BrkNoRelsCutoff_color = 0;
                    }

                    if (RIOM3CT_DIM3DI5_B1)
                    {
                        Car3_BrkNoRelsCutoff_color = 1;
                    }
                    else
                    {
                        Car3_BrkNoRelsCutoff_color = 0;
                    }

                    if (RIOM4CT_DIM3DI5_B1)
                    {
                        Car4_BrkNoRelsCutoff_color = 1;
                    }
                    else
                    {
                        Car4_BrkNoRelsCutoff_color = 0;
                    }

                    if (RIOM5CT_DIM3DI5_B1)
                    {
                        Car5_BrkNoRelsCutoff_color = 1;
                    }
                    else
                    {
                        Car5_BrkNoRelsCutoff_color = 0;
                    }
*/
if(CTHM_RIOM6_DIM3_IsOnline_B1)
{
                    if (RIOM6CT_DIM3DI5_B1)
                    {
                        Car6_BrkNoRelsCutoff_color = 1;
                    }
                    else
                    {
                        Car6_BrkNoRelsCutoff_color = 0;
                    }
                }
else
{
     Car6_BrkNoRelsCutoff_color = 2;
}
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1BRKNORELSCUTOFF, Car1_BrkNoRelsCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR2BRKNORELSCUTOFF, Car2_BrkNoRelsCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR3BRKNORELSCUTOFF, Car3_BrkNoRelsCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR4BRKNORELSCUTOFF, Car4_BrkNoRelsCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR5BRKNORELSCUTOFF, Car5_BrkNoRelsCutoff_color);
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6BRKNORELSCUTOFF, Car6_BrkNoRelsCutoff_color);
    }

    void CCarStatus3Page::UpdateParkBrkCutoff()
    {
        int Car1_ParkBrkCutoff_color  = 0;
       // int Car2_ParkBrkCutoff_color  = 0;
       // int Car3_ParkBrkCutoff_color  = 0;
       // int Car4_ParkBrkCutoff_color  = 0;
       // int Car5_ParkBrkCutoff_color  = 0;
        int Car6_ParkBrkCutoff_color  = 0;

        if (CTHM_RIOM1_DIM3_IsOnline_B1)
        {
                    if (RIOM1CT_DIM3DI4_B1)
                    {
                        Car1_ParkBrkCutoff_color = 1;
                    }
                    else
                    {
                        Car1_ParkBrkCutoff_color = 0;
                    }
       }
        else
        {
            Car1_ParkBrkCutoff_color = 2;
        }

                   /* if (RIOM2CT_DIM3DI4_B1)
                    {
                        Car2_ParkBrkCutoff_color = 1;
                    }
                    else
                    {
                        Car2_ParkBrkCutoff_color = 0;
                    }

                    if (RIOM3CT_DIM3DI4_B1)
                    {
                        Car3_ParkBrkCutoff_color = 1;
                    }
                    else
                    {
                        Car3_ParkBrkCutoff_color = 0;
                    }

                    if (RIOM4CT_DIM3DI4_B1)
                    {
                        Car4_ParkBrkCutoff_color = 1;
                    }
                    else
                    {
                        Car4_ParkBrkCutoff_color = 0;
                    }

                    if (RIOM5CT_DIM3DI4_B1)
                    {
                        Car5_ParkBrkCutoff_color = 1;
                    }
                    else
                    {
                        Car5_ParkBrkCutoff_color = 0;
                    }
                    */
        if(CTHM_RIOM6_DIM3_IsOnline_B1)
        {

                    if (RIOM6CT_DIM3DI4_B1)
                    {
                        Car6_ParkBrkCutoff_color = 1;
                    }
                    else
                    {
                        Car6_ParkBrkCutoff_color = 0;
                    }
        }
        else
        {
            Car6_ParkBrkCutoff_color = 2;
        }
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1PARBRKCUTOFF, Car1_ParkBrkCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR2PARBRKCUTOFF, Car2_ParkBrkCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR3PARBRKCUTOFF, Car3_ParkBrkCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR4PARBRKCUTOFF, Car4_ParkBrkCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR5PARBRKCUTOFF, Car5_ParkBrkCutoff_color);
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6PARBRKCUTOFF, Car6_ParkBrkCutoff_color);
    }

    void CCarStatus3Page::UpdateATCDoorCutoff()
    {
        int Car1_ATCDoorCutoff_color  = 0;
       // int Car2_ATCDoorCutoff_color  = 0;
       // int Car3_ATCDoorCutoff_color  = 0;
       // int Car4_ATCDoorCutoff_color  = 0;
       // int Car5_ATCDoorCutoff_color  = 0;
        int Car6_ATCDoorCutoff_color  = 0;

        if(CTHM_RIOM1_DIM3_IsOnline_B1)
        {
                    if (RIOM1CT_DIM3DI3_B1)
                    {
                        Car1_ATCDoorCutoff_color = 1;
                    }
                    else
                    {
                        Car1_ATCDoorCutoff_color = 0;
                    }
         }
        else
        {
            Car1_ATCDoorCutoff_color = 2;
        }


/*
                    if (RIOM2CT_DIM3DI3_B1)
                    {
                        Car2_ATCDoorCutoff_color = 1;
                    }
                    else
                    {
                        Car2_ATCDoorCutoff_color = 0;
                    }

                    if (RIOM3CT_DIM3DI3_B1)
                    {
                        Car3_ATCDoorCutoff_color = 1;
                    }
                    else
                    {
                        Car3_ATCDoorCutoff_color = 0;
                    }

                    if (RIOM4CT_DIM3DI3_B1)
                    {
                        Car4_ATCDoorCutoff_color = 1;
                    }
                    else
                    {
                        Car4_ATCDoorCutoff_color = 0;
                    }

                    if (RIOM5CT_DIM3DI3_B1)
                    {
                        Car5_ATCDoorCutoff_color = 1;
                    }
                    else
                    {
                        Car5_ATCDoorCutoff_color = 0;
                    }
                    */
        if(CTHM_RIOM6_DIM3_IsOnline_B1)
        {

                    if (RIOM6CT_DIM3DI3_B1)
                    {
                        Car6_ATCDoorCutoff_color = 1;
                    }
                    else
                    {
                        Car6_ATCDoorCutoff_color = 0;
                    }
                }
        else
        {
            Car6_ATCDoorCutoff_color = 2;
        }

                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ATCDOORCUTOFF, Car1_ATCDoorCutoff_color);
                  //  SetLabelColor(ID_PIBCARS3_LABEL_CAR2ATCDOORCUTOFF, Car2_ATCDoorCutoff_color);
                  //  SetLabelColor(ID_PIBCARS3_LABEL_CAR3ATCDOORCUTOFF, Car3_ATCDoorCutoff_color);
                  //  SetLabelColor(ID_PIBCARS3_LABEL_CAR4ATCDOORCUTOFF, Car4_ATCDoorCutoff_color);
                  //  SetLabelColor(ID_PIBCARS3_LABEL_CAR5ATCDOORCUTOFF, Car5_ATCDoorCutoff_color);
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ATCDOORCUTOFF, Car6_ATCDoorCutoff_color);
    }

    void CCarStatus3Page::UpdateDoorLineCutoff()
    {
        int Car1_DoorLineCutoff_color  = 0;
       // int Car2_DoorLineCutoff_color  = 0;
       // int Car3_DoorLineCutoff_color  = 0;
       // int Car4_DoorLineCutoff_color  = 0;
       // int Car5_DoorLineCutoff_color  = 0;
        int Car6_DoorLineCutoff_color  = 0;
if(CTHM_RIOM1_DIM3_IsOnline_B1)
        {
                    if (RIOM1CT_DIM3DI2_B1)
                    {
                        Car1_DoorLineCutoff_color = 1;
                    }
                    else
                    {
                        Car1_DoorLineCutoff_color = 0;
                    }
                }
else
{
    Car1_DoorLineCutoff_color = 2;
}
/*
                    if (RIOM2CT_DIM3DI2_B1)
                    {
                        Car2_DoorLineCutoff_color = 1;
                    }
                    else
                    {
                        Car2_DoorLineCutoff_color = 0;
                    }

                    if (RIOM3CT_DIM3DI2_B1)
                    {
                        Car3_DoorLineCutoff_color = 1;
                    }
                    else
                    {
                        Car3_DoorLineCutoff_color = 0;
                    }

                    if (RIOM4CT_DIM3DI2_B1)
                    {
                        Car4_DoorLineCutoff_color = 1;
                    }
                    else
                    {
                        Car4_DoorLineCutoff_color = 0;
                    }

                    if (RIOM5CT_DIM3DI2_B1)
                    {
                        Car5_DoorLineCutoff_color = 1;
                    }
                    else
                    {
                        Car5_DoorLineCutoff_color = 0;
                    }
                    */
if(CTHM_RIOM6_DIM3_IsOnline_B1)
{

                    if (RIOM6CT_DIM3DI2_B1)
                    {
                        Car6_DoorLineCutoff_color = 1;
                    }
                    else
                    {
                        Car6_DoorLineCutoff_color = 0;
                    }
                }
else
{
    Car6_DoorLineCutoff_color = 2;
}
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1DOORLINECUTOFF, Car1_DoorLineCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR2DOORLINECUTOFF, Car2_DoorLineCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR3DOORLINECUTOFF, Car3_DoorLineCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR4DOORLINECUTOFF, Car4_DoorLineCutoff_color);
                   // SetLabelColor(ID_PIBCARS3_LABEL_CAR5DOORLINECUTOFF, Car5_DoorLineCutoff_color);
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6DOORLINECUTOFF, Car6_DoorLineCutoff_color);
    }

    void CCarStatus3Page::UpdateAlertCutoff()
    {
        int Car1_AlertCutoff_color  = 0;
        //int Car2_AlertCutoff_color  = 0;
        //int Car3_AlertCutoff_color  = 0;
        //int Car4_AlertCutoff_color  = 0;
        //int Car5_AlertCutoff_color  = 0;
        int Car6_AlertCutoff_color  = 0;
if(CTHM_RIOM1_DIM3_IsOnline_B1)
        {
                    if (RIOM1CT_DIM3DI1_B1)
                    {
                        Car1_AlertCutoff_color = 1;
                    }
                    else
                    {
                        Car1_AlertCutoff_color = 0;
                    }
                }
else
{
    Car1_AlertCutoff_color = 2;
}
/*
                    if (RIOM2CT_DIM3DI1_B1)
                    {
                        Car2_AlertCutoff_color = 1;
                    }
                    else
                    {
                        Car2_AlertCutoff_color = 0;
                    }

                    if (RIOM3CT_DIM3DI1_B1)
                    {
                        Car3_AlertCutoff_color = 1;
                    }
                    else
                    {
                        Car3_AlertCutoff_color = 0;
                    }

                    if (RIOM4CT_DIM3DI1_B1)
                    {
                        Car4_AlertCutoff_color = 1;
                    }
                    else
                    {
                        Car4_AlertCutoff_color = 0;
                    }

                    if (RIOM5CT_DIM3DI1_B1)
                    {
                        Car5_AlertCutoff_color = 1;
                    }
                    else
                    {
                        Car5_AlertCutoff_color = 0;
                    }
*/
if(CTHM_RIOM6_DIM3_IsOnline_B1)
{
                    if (RIOM6CT_DIM3DI1_B1)
                    {
                        Car6_AlertCutoff_color = 1;
                    }
                    else
                    {
                        Car6_AlertCutoff_color = 0;
                    }
                }
else
{
    Car6_AlertCutoff_color = 2;
}
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ALERTCUTOFF, Car1_AlertCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR2ALERTCUTOFF, Car2_AlertCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR3ALERTCUTOFF, Car3_AlertCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR4ALERTCUTOFF, Car4_AlertCutoff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR5ALERTCUTOFF, Car5_AlertCutoff_color);
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ALERTCUTOFF, Car6_AlertCutoff_color);
    }

    void CCarStatus3Page::UpdateATCCutoff()
    {
        int Car1_ATCCutoff_color  = 0;
        int Car6_ATCCutoff_color  = 0;

if(CTHM_RIOM1_DIM4_IsOnline_B1)
        {
                    if (RIOM1CT_DIM4DI3_B1)
                    {
                        Car1_ATCCutoff_color = 1;
                    }
                    else
                    {
                        Car1_ATCCutoff_color = 0;
                    }
                }
else
{
     Car1_ATCCutoff_color = 2;

}
if(CTHM_RIOM6_DIM4_IsOnline_B1)
{

                    if (RIOM6CT_DIM4DI3_B1)
                    {
                        Car6_ATCCutoff_color = 1;
                    }
                    else
                    {
                        Car6_ATCCutoff_color = 0;
                    }
                }
else
{
     Car6_ATCCutoff_color = 2;

}
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ATCCUTOFF, Car1_ATCCutoff_color);

                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ATCCUTOFF, Car6_ATCCutoff_color);
    }

    void CCarStatus3Page::UpdateEBisOff()
    {
        int Car1_EBisOff_color  = 0;
        //int Car2_EBisOff_color  = 0;
        //int Car3_EBisOff_color  = 0;
        //int Car4_EBisOff_color  = 0;
        //int Car5_EBisOff_color  = 0;
        int Car6_EBisOff_color  = 0;
if(CTHM_RIOM1_DIM1_IsOnline_B1)
        {
                    if (RIOM1CT_DIM1DI12_B1)
                    {
                        Car1_EBisOff_color = 1;
                    }
                    else
                    {
                        Car1_EBisOff_color = 0;
                    }
                }
else
{
    Car1_EBisOff_color = 2;
}
/*
                    if (RIOM2CT_DIM1DI12_B1)
                    {
                        Car2_EBisOff_color = 1;
                    }
                    else
                    {
                        Car2_EBisOff_color = 0;
                    }

                    if (RIOM3CT_DIM1DI12_B1)
                    {
                        Car3_EBisOff_color = 1;
                    }
                    else
                    {
                        Car3_EBisOff_color = 0;
                    }

                    if (RIOM4CT_DIM1DI12_B1)
                    {
                        Car4_EBisOff_color = 1;
                    }
                    else
                    {
                        Car4_EBisOff_color = 0;
                    }

                    if (RIOM5CT_DIM1DI12_B1)
                    {
                        Car5_EBisOff_color = 1;
                    }
                    else
                    {
                        Car5_EBisOff_color = 0;
                    }
*/
if(CTHM_RIOM6_DIM1_IsOnline_B1)
{
                    if (RIOM6CT_DIM1DI12_B1)
                    {
                        Car6_EBisOff_color = 1;
                    }
                    else
                    {
                        Car6_EBisOff_color = 0;
                    }
                }
else
{
    Car6_EBisOff_color = 2;
}
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR1EBISOFF, Car1_EBisOff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR2EBISOFF, Car2_EBisOff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR3EBISOFF, Car3_EBisOff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR4EBISOFF, Car4_EBisOff_color);
                 //   SetLabelColor(ID_PIBCARS3_LABEL_CAR5EBISOFF, Car5_EBisOff_color);
                    SetLabelColor(ID_PIBCARS3_LABEL_CAR6EBISOFF, Car6_EBisOff_color);
    }


void CCarStatus3Page::UpdateATOMode()
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

    SetATOModeLabelColor(ID_PIBCARS3_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBCARS3_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}

void CCarStatus3Page::UpdateNETMode()
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
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBCARS3_LABEL_NETMODE, modecolor);
}

void CCarStatus3Page::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void CCarStatus3Page::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->HideLabel();

//    }

}

void CCarStatus3Page::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
                }
            }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
    }
}

//void CCarStatus3Page::UpdateEmergencyBroadcast()
//{
//    if (reserve_hide)
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->ShowButton();
//
//    }
//    else
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->HideButton();
//    }
//}

void CCarStatus3Page::SetNETModeLabelColor(int id, int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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


void CCarStatus3Page::SetATOModeLabelColor(int id,int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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


void CCarStatus3Page::SetLabelColor(int id, int colorVal)
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

//void CCarStatus3Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus3Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

