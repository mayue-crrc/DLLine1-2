#include "C_Page_SIV_Status3.h"

ROMDATA  g_PicRom_SIV_Status3[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_3_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_3_BUTTON_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW

    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("车辆状态") )
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("辅助状态") )
//    {"",                          D_FONT_BOLD(4),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_3_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_3_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_3_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("辅助") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_3_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_3_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_3_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

    {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),         Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS1_3_COMMINTERRUPT              },
    {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_V                    },

    {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_A                    },

    {QObject::trUtf8("牵引*制动级位"),         D_FONT_BOLD(8),      QRect(470,  45, 150,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),       QRect(630,  45, 80,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(630,  66, 80,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_SPEED                },

    {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBCARS1_3_ICON_WARNNING              },
    {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_3_TRAIN                      },
    {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_3_ARROW_RIGHT                },
    {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_3_ARROW_LEFT                 },
#endif


    {"",                          D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700-1, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("SIV正常信号"),              D_FONT_BOLD(6),      QRect( 11, 181,  88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QObject::trUtf8("线路输入\n电压Ud"),              D_FONT_BOLD(4),      QRect( 11, 211,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
  //  {QObject::trUtf8("烟火报警"),               D_FONT_BOLD(6),      QRect( 11, 241,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QObject::trUtf8("逆变器输入\n电流Id"),                   D_FONT_BOLD(4),      QRect(11, 241,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("逆变器输出\nA相电流Ia"),                D_FONT_BOLD(4),      QRect( 11, 271,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("逆变器输出\nC相电流Ic"),                D_FONT_BOLD(4),      QRect( 11, 301,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("逆变器输出\n相电压"),                 D_FONT_BOLD(4),      QRect( 11, 421,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect( 11, 451,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("逆变器输出\n相电流"),                   D_FONT_BOLD(4),      QRect( 11, 331,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("逆变器输出频率"),                       D_FONT_BOLD(4),      QRect(11, 361,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("充电机输入整流\n桥后直流电压"),           D_FONT_BOLD(4),      QRect( 11, 391,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CARNUMBER1        },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 181,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(201, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(301, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(401, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(501, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("7"),                   D_FONT_BOLD(6),      QRect(553, 181,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 154,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_PIBCARS1_3_LABEL1_CARNUMBER2       },





    //ACU_OK
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 184,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1ACUOK       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                   D_FONT_BOLD(4),      QRect(303, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 184,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6ACUOK       },



    //InputLineVoltageUd
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 214,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INPUTVOLTAGEUD      },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 214,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INPUTVOLTAGEUD      },


    //InputCurrentId
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 244,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INPUTCURRENTID      },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 244,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INPUTCURRENTID      },


    //InverseCurrentIa
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 274,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTIA       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 274,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTIA       },


    //InverseCurrentIc
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 304,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTIC      },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 304,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTIC      },

    //OutputVoltageUu
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 424,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEU     },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(203, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEV         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(303, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEW         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(403, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEW        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(503, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEV       },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 424,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEU    },


    //InverseCurrentIu/v/w
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 334,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTU      },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(203, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTV       },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(303, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTW         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(403, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTW        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(4),      QRect(503, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTV        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 334,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTU     },


    //InverseFrequency
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 364,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1INVERSEFREQUENCY       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 364,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6INVERSEFREQUENCY       },

    //ChargeDirectCurrent
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 394,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR1CHARGEDIRECTCURRENT       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 394,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_3_LABEL1_CAR6CHARGEDIRECTCURRENT       },



    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_ATOMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_NETMODE         },
    {QObject::trUtf8("逆变模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_CONTRAVARIANTMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_WASHCARMODE         },
   // {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_TOWMODE         },
    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE         },
        {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_3_BUTTON_EMERGENCYBROADCAST         },
    //{QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS1_3_BUTTON_FASPAGE         },
    //  {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },

    {QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,         ID_PIBCARS1_3_BUTTON_FASPAGE         },



{QObject::trUtf8("旁路"),          D_FONT_BOLD(8),      QRect( 720, 190, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCARS1_3_LABEL_ByPass         },
{QObject::trUtf8("烟火"),          D_FONT_BOLD(8),      QRect(720, 250, 60,  40),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBCARS1_3_LABEL_FAS_status         },
//{QObject::trUtf8("电制动\n已切除"),   D_FONT_BOLD(8),      QRect(720, 310, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,            ID_PIBCARS1_3_LABEL_DisEBTest         },

    {QObject::trUtf8("上一页"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,    ID_PIBCARS1_3_BUTTON_PGUP         },
    // {QObject::trUtf8("下一页"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE3_BUTTON_PGDN         },



};
int g_SIV_Status3RomLen = sizeof(g_PicRom_SIV_Status3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_SIV_Status3,CPage)
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
        ON_BTNCLK(  ID_PIBCARS1_3_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif
        ON_BTNCLK(ID_PIBCARS1_3_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)

      //  ON_BTNCLK(ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS1_3_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBCARS1_3_BUTTON_FASPAGE, OnFASpageBtnClk)

        ON_BTNCLK(ID_PIBCARS1_3_BUTTON_PGUP, OnPageUpBtnClk)
       // ON_BTNCLK(ID_PIBCARS1_3_BUTTON_PGDN, OnPageDownBtnClk)

       // ON_BTNCLK(ID_PIBCARS1_3_BUTTON_ACURESET, OnACUReset)
END_MESSAGE_MAP()

C_Page_SIV_Status3::C_Page_SIV_Status3()
{
}

void C_Page_SIV_Status3::OnUpdatePage()
{
    updateTrain(ID_PIBCARS1_3_TRAIN);
    updateArrow(ID_PIBCARS1_3_ARROW_LEFT,ID_PIBCARS1_3_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS1_3_TRAIN);

    UpdateByPass_Hide();
    UpdateSIV_Online();


    UpdateACU_OK();
    UpdateInputLineVoltageUd();
    UpdateInputCurrentId();
    UpdateInverseCurrentIa();
    UpdateInverseCurrentIc();
    UpdateOutputVoltageUuvw();
    UpdateInverseCurrentIuvw();
    UpdateInverseFrequency();
    UpdateChargeDirectCurrent();



    //UpdateACU();
    UpdateKAUX();
    UpdateVeerLoad();
    UpdateATOMode();
    UpdateNETMode();
    //UpdateChargeCurrent();
    //Update110Voltage();
    //UpdateBatteryTemp();
    //UpdateInhibitKAUXClose();

    UpdateContravariant();
    UpdateWashCarMode();
    UpdateTowMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();

    UpdateEscapeDoor();




#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBCARS1_3_COMMINTERRUPT);

    updateFault(ID_PIBCARS1_3_ICON_WARNNING);

#endif
//    UpdateEmergencyBroadcast();

//    if (m_bResetACU)
//    {
//        static int times = 0;
//        times++;
//        if (times%times_nimes_n == 0)
//        {
//            ACU_test_timer--;
//            if (ACU_test_timer <= 0)
//            {
//                m_bResetACU = false;
//                BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮
//                ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_ACURESET))->ChangeButtonState(LBUTTON_UP);
//            }
//        }
//    }

    //update acu button state
//    if(ACU_status1 == 3 || ACU_status2 == 3)
//    {
//        if(((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_ACURESET))->IsHide())
//            ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_ACURESET))->ShowButton();
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_ACURESET))->HideButton();
//    }
}

void C_Page_SIV_Status3::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS1_3_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_3_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS1_3_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_3_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

 //   ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   //((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_TOWMODE))->SetBorderColor(Qt::white);

   // ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_ACURESET))->m_bAutoUpState = false;
}

void C_Page_SIV_Status3::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("紧急广播"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    ACU_test_timer = 3;
    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮

    this->InitPageHeader();
}

void C_Page_SIV_Status3::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_SIV_Status3::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_SIV_Status3::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_SIV_Status3::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void C_Page_SIV_Status3::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void C_Page_SIV_Status3::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_SIV_Status3::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void C_Page_SIV_Status3::OnComBtn7Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_SIV_Status3::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
    }
#else
    void C_Page_SIV_Status3::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_SIV_Status3::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_SIV_Status3::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_SIV_Status3::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_SIV_Status3::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void C_Page_SIV_Status3::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
    }
#endif

    void C_Page_SIV_Status3::OnBroadCastBtnCl()
    {
          ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_SIV_Status3::UpdateByPass_Hide()
        {

            if
         (       RIOM1CT_DIM3DI2_B1||RIOM1CT_DIM3DI2_B1||RIOM1CT_DIM3DI4_B1||RIOM1CT_DIM3DI5_B1||RIOM1CT_DIM3DI6_B1||RIOM1CT_DIM1DI12_B1||RIOM1CT_DIM3DI1_B1||RIOM1CT_DIM4DI3_B1||
                 RIOM6CT_DIM3DI2_B1||RIOM6CT_DIM3DI2_B1||RIOM6CT_DIM3DI4_B1||RIOM6CT_DIM3DI5_B1||RIOM6CT_DIM3DI6_B1||RIOM6CT_DIM1DI12_B1||RIOM6CT_DIM3DI1_B1||RIOM6CT_DIM4DI3_B1)
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_ByPass))->ShowLabel();
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_ByPass))->HideLabel();
            }

            if(
                     FAU1CT_FAU1FireAlert_B1 ||  FAU1CT_FAU2FireAlert_B1 ||  FAU1CT_FAU3FireAlert_B1 ||  FAU1CT_FAU4FireAlert_B1 ||  FAU1CT_FAU5FireAlert_B1 ||  FAU1CT_FAU6FireAlert_B1
                 ||  FAU1CT_FAU7FireAlert_B1 ||  FAU1CT_FAU8FireAlert_B1 ||  FAU1CT_FAU9FireAlert_B1 || FAU1CT_FAU10FireAlert_B1 || FAU1CT_FAU11FireAlert_B1 || FAU1CT_FAU12FireAlert_B1
                 || FAU1CT_FAU13FireAlert_B1 || FAU1CT_FAU14FireAlert_B1 || FAU1CT_FAU15FireAlert_B1 || FAU1CT_FAU16FireAlert_B1 || FAU1CT_FAU17FireAlert_B1 || FAU1CT_FAU18FireAlert_B1
                 || FAU1CT_FAU19FireAlert_B1 || FAU1CT_FAU20FireAlert_B1 || FAU1CT_FAU21FireAlert_B1 || FAU1CT_FAU22FireAlert_B1 || FAU1CT_FAU23FireAlert_B1 || FAU1CT_FAU24FireAlert_B1
                 || FAU1CT_FAU25FireAlert_B1 || FAU1CT_FAU26FireAlert_B1 || FAU1CT_FAU27FireAlert_B1 || FAU1CT_FAU28FireAlert_B1
                    )
                {
                     ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_FAS_status))->ShowLabel();
                }
                else
                {
                     ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_FAS_status))->HideLabel();
                }
        }


    void  C_Page_SIV_Status3::UpdateSIV_Online()
        {

            int SIV1_Online_BKColor;
            int SIV2_Online_BKColor;


            if (CTHM_SIV1_Online_B1)
            {
                SIV1_Online_BKColor=1;
                 ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER1))->SetCtrlText("1");
                  ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER1))->SetTxtColor(Qt::white);
                   SetOnlineLabelColor(ID_PIBCARS1_3_LABEL1_CARNUMBER1,SIV1_Online_BKColor);
            }
            else
            {
                SIV1_Online_BKColor=0;
                ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER1))->SetCtrlText(QObject::trUtf8("通信异常"));
                ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER1))->SetTxtColor(Qt::black);
                SetOnlineLabelColor(ID_PIBCARS1_3_LABEL1_CARNUMBER1,SIV1_Online_BKColor);

            }


            if (CTHM_SIV2_Online_B1)
            {
                SIV2_Online_BKColor=1;
                 ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER2))->SetCtrlText("6");
                  ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER2))->SetTxtColor(Qt::white);
                   SetOnlineLabelColor(ID_PIBCARS1_3_LABEL1_CARNUMBER2,SIV2_Online_BKColor);
            }
            else
            {
                SIV2_Online_BKColor=0;
                ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER2))->SetCtrlText(QObject::trUtf8("通信异常"));
                ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CARNUMBER2))->SetTxtColor(Qt::black);
                SetOnlineLabelColor(ID_PIBCARS1_3_LABEL1_CARNUMBER2,SIV2_Online_BKColor);

            }




        }

        void C_Page_SIV_Status3::SetOnlineLabelColor(int id, int colorVal)
        {
            ASSERT((colorVal >= 0) && (colorVal <= 2));
            if (0 == colorVal)
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
            }
            else if (1 == colorVal)
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
            }
            else if (2 == colorVal)
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
            }

            return;
        }



    void C_Page_SIV_Status3::UpdateACU_OK()
    {
                     int Car1_ACU_OK_Color=0;
                     int Car6_ACU_OK_Color=0;

                     if(SIV1CT_ACU_OK_B1)
                     {
                       Car1_ACU_OK_Color=1;
                     }
                     else
                     {
                       Car1_ACU_OK_Color=0;
                     }
                     if(SIV2CT_ACU_OK_B1)
                     {
                       Car6_ACU_OK_Color=1;
                     }
                     else
                     {
                       Car6_ACU_OK_Color=0;
                     }

                     SetLabelColor(ID_PIBCARS1_3_LABEL1_CAR1ACUOK,Car1_ACU_OK_Color);
                     SetLabelColor(ID_PIBCARS1_3_LABEL1_CAR6ACUOK,Car6_ACU_OK_Color);
    }

    void C_Page_SIV_Status3::UpdateInputLineVoltageUd()
    {
        double Car1_InputLineVoltageUd=0;
        double Car6_InputLineVoltageUd=0;

        Car1_InputLineVoltageUd=SIV1CT_InputVoltageUd_U16;
        Car6_InputLineVoltageUd=SIV2CT_InputVoltageUd_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INPUTVOLTAGEUD ))->SetCtrlText(QString::number(Car1_InputLineVoltageUd));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INPUTVOLTAGEUD ))->SetCtrlText(QString::number(Car6_InputLineVoltageUd));

    }

    void C_Page_SIV_Status3::UpdateInputCurrentId()
    {
        double Car1_InputCurrentId=0;
        double Car6_InputCurrentId=0;

        Car1_InputCurrentId=SIV1CT_InputCurrentId_U16;
        Car6_InputCurrentId=SIV2CT_InputCurrentId_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INPUTCURRENTID ))->SetCtrlText(QString::number(Car1_InputCurrentId));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INPUTCURRENTID ))->SetCtrlText(QString::number(Car6_InputCurrentId));

    }

    void C_Page_SIV_Status3::UpdateInverseCurrentIa()
    {
        double Car1_InverseCurrentIa=0;
        double Car6_InverseCurrentIa=0;

        Car1_InverseCurrentIa=SIV1CT_InverseCurrentIa_U16;
        Car6_InverseCurrentIa=SIV2CT_InverseCurrentIa_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTIA ))->SetCtrlText(QString::number(Car1_InverseCurrentIa));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTIA ))->SetCtrlText(QString::number(Car6_InverseCurrentIa));

    }

    void C_Page_SIV_Status3::UpdateInverseCurrentIc()
    {
        double Car1_InverseCurrentIc=0;
        double Car6_InverseCurrentIc=0;

        Car1_InverseCurrentIc=SIV1CT_InverseCurrentIc_U16;
        Car6_InverseCurrentIc=SIV2CT_InverseCurrentIc_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTIC ))->SetCtrlText(QString::number(Car1_InverseCurrentIc));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTIC ))->SetCtrlText(QString::number(Car6_InverseCurrentIc));

    }

    void C_Page_SIV_Status3::UpdateOutputVoltageUuvw()
    {
        double Car1_OutputVoltageUuvw=0;
        double Car6_OutputVoltageUuvw=0;

        Car1_OutputVoltageUuvw=SIV1CT_OutputVoltageUu_U16;
        Car6_OutputVoltageUuvw=SIV2CT_OutputVoltageUu_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEU ))->SetCtrlText(QString::number(Car1_OutputVoltageUuvw).append(" V_Uu"));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEU ))->SetCtrlText(QString::number(Car6_OutputVoltageUuvw).append(" V_Uu"));


        double Car2_OutputVoltageUuvw=0;
        double Car5_OutputVoltageUuvw=0;

        Car2_OutputVoltageUuvw=SIV1CT_InverseVoltageUv_U16;
        Car5_OutputVoltageUuvw=SIV2CT_InverseVoltageUv_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEV))->SetCtrlText(QString::number(Car2_OutputVoltageUuvw).append(" V_Uv"));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEV))->SetCtrlText(QString::number(Car5_OutputVoltageUuvw).append(" V_Uv"));


        double Car3_OutputVoltageUuvw=0;
        double Car4_OutputVoltageUuvw=0;

        Car3_OutputVoltageUuvw=SIV1CT_InverseVoltageUv_U16;
        Car4_OutputVoltageUuvw=SIV2CT_InverseVoltageUv_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1OUTPUTVOLTAGEW ))->SetCtrlText(QString::number(Car3_OutputVoltageUuvw).append(" V_Uw"));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6OUTPUTVOLTAGEW ))->SetCtrlText(QString::number(Car4_OutputVoltageUuvw).append(" V_Uw"));

}

    void C_Page_SIV_Status3::UpdateInverseCurrentIuvw()
    {
        double Car1_INVERSECURRENTIuvw=0;
        double Car6_INVERSECURRENTIuvw=0;

        Car1_INVERSECURRENTIuvw=SIV1CT_InverseCurrentIu_U16;
        Car6_INVERSECURRENTIuvw=SIV2CT_InverseCurrentIu_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTU ))->SetCtrlText(QString::number(Car1_INVERSECURRENTIuvw).append(" A_Iu"));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTU ))->SetCtrlText(QString::number(Car6_INVERSECURRENTIuvw).append(" A_Iu"));


        double Car2_INVERSECURRENTIuvw=0;
        double Car5_INVERSECURRENTIuvw=0;

        Car2_INVERSECURRENTIuvw=SIV1CT_InverseCurrentIv_U16;
        Car5_INVERSECURRENTIuvw=SIV2CT_InverseCurrentIv_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTV))->SetCtrlText(QString::number(Car2_INVERSECURRENTIuvw).append(" A_Iv"));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTV))->SetCtrlText(QString::number(Car5_INVERSECURRENTIuvw).append(" A_Iv"));


        double Car3_INVERSECURRENTIuvw=0;
        double Car4_INVERSECURRENTIuvw=0;

        Car3_INVERSECURRENTIuvw=SIV1CT_InverseCurrentIw_U16;
        Car4_INVERSECURRENTIuvw=SIV2CT_InverseCurrentIw_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INVERSECURRENTW ))->SetCtrlText(QString::number(Car3_INVERSECURRENTIuvw).append(" A_Iw"));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INVERSECURRENTW ))->SetCtrlText(QString::number(Car4_INVERSECURRENTIuvw).append(" A_Iw"));

    }

    void C_Page_SIV_Status3::UpdateInverseFrequency()
    {
        double Car1_InverseFrequency=0;
        double Car6_InverseFrequency=0;

        Car1_InverseFrequency=SIV1CT_InverseFrequency_U16;
        Car6_InverseFrequency=SIV2CT_InverseFrequency_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1INVERSEFREQUENCY ))->SetCtrlText(QString::number(Car1_InverseFrequency));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6INVERSEFREQUENCY ))->SetCtrlText(QString::number(Car6_InverseFrequency));

    }

    void C_Page_SIV_Status3::UpdateChargeDirectCurrent()
    {
        double Car1_ChargeDirectCurrent=0;
        double Car6_ChargeDirectCurrent=0;

        Car1_ChargeDirectCurrent=SIV1CT_ChargeDirectCurrent_U16;
        Car6_ChargeDirectCurrent=SIV2CT_ChargeDirectCurrent_U16;

        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR1CHARGEDIRECTCURRENT ))->SetCtrlText(QString::number(Car1_ChargeDirectCurrent));
        ((CLabel *)GetDlgItem( ID_PIBCARS1_3_LABEL1_CAR6CHARGEDIRECTCURRENT ))->SetCtrlText(QString::number(Car6_ChargeDirectCurrent));

    }


    void C_Page_SIV_Status3::SetLabelColor(int id,int colorVal)
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
                              ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                          }

                          return;
    }

    void C_Page_SIV_Status3::OnPageUpBtnClk()
    {
        ChangePage(PAGE_INDEX_SIVSTATUS2);
    }


    void C_Page_SIV_Status3::OnPageDownBtnClk()
    {


    }

void C_Page_SIV_Status3::UpdateRidingRate()
{
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(train_status_data7));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(train_status_data8));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(train_status_data9));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(train_status_data10));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(train_status_data11));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(train_status_data12));


}
/*
void C_Page_SIV_Status3::UpdateACU()
{
  //  BitSet(comm_status_data86, 14,1 );
  //  BitSet(comm_status_data86, 14,1 );
    if (Bit(CCU_HMI_222_9, 6 )  )
    {
         if (Bit( ACU_611_7, 16 ) || Bit( ACU_611_7, 15 ) || Bit( ACU_610_8, 6 ) )
        {
             if (Bit( ACU_610_8, 6 ) )  //逆变模式
             {
                 ACU_status1 = 2;
             }
             if (Bit( ACU_611_7, 15 ) )  //可复位故障
             {
                 ACU_status1 = 3;
             }
             if (Bit( ACU_611_7, 16 ) )  //不可复位故障
             {
                 ACU_status1 = 1;
             }
        }
        else
        {
            ACU_status1 = 0;
            if (Bit( ACU_611_7, 13 ) )  //停机
            {
                ACU_status1 = 4;
            }
        }
    }
    else
    {
        ACU_status1 = 5;     //通信异常
    }

    if (Bit(CCU_HMI_222_9, 5 ) )
    {
        if (Bit( ACU_621_7, 16 ) || Bit( ACU_621_7, 15 ) || Bit( ACU_621_8, 6 ) )
        {
             if (Bit( ACU_620_8, 8 ) )
             {
                 ACU_status2 = 2;
             }
             if (Bit( ACU_621_7, 15 ) )
             {
                 ACU_status2 = 3;
             }
             if (Bit( ACU_621_7, 16 ) )
             {
                 ACU_status2 = 1;
             }
        }
        else
        {
            ACU_status2 = 0;
            if (Bit( ACU_621_7, 13 ) )
            {
                ACU_status2 = 4;
            }
        }
    }
    else
    {
        ACU_status2 = 5;
    }


    if ( 0 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V")+"\n"+QString::number(ACU_610_5/256 * 2).append(" A"));


    }
    if ( 1 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetCtrlText("");

    }
    if ( 2 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V")+"\n"+QString::number(ACU_610_5/256 * 2).append(" A"));

    }
    if ( 3 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS))->SetCtrlText("");
    }

    if ( 0 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V")+"\n"+QString::number(ACU_620_5/256 * 2).append(" A"));

    }
    if ( 1 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetCtrlText("");

    }
    if ( 2 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V")+"\n"+QString::number(ACU_620_5/256 * 2).append(" A"));

    }
    if ( 3 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS))->SetCtrlText("");
    }


    SetAcuLabelColor(ID_PIBCARS1_3_LABEL1_CAR1ASSISTSYS, ACU_status1);
    SetAcuLabelColor(ID_PIBCARS1_3_LABEL1_CAR6ASSISTSYS, ACU_status2);

}
*/
void C_Page_SIV_Status3::UpdateIES()
{
//    if (Bit( train_status2_data13, 13 ) )
//    {
//        if (Bit( train_status2_data13, 16 ) )
//        {
//            IES1_string = QObject::trUtf8("集电靴");
//        }
//        if (Bit( train_status2_data13, 15 ) )
//        {
//            IES1_string = QObject::trUtf8("接地");
//        }
//        if (Bit( train_status2_data13, 14 ) )
//        {
//            IES1_string = QObject::trUtf8("车间电源");
//        }
//    }

//    if ( ( train_status2_data13&61440) == 0)
//    {
//        IES1_string = QObject::trUtf8("- -");
//    }

//    if (Bit( train_status2_data13, 9 ) )
//    {
//        if (Bit( train_status2_data13, 12 ) )
//        {
//            IES2_string = QObject::trUtf8("集电靴");
//        }
//        if (Bit( train_status2_data13, 11 ) )
//        {
//            IES2_string = QObject::trUtf8("接地");
//        }
//        if (Bit( train_status2_data13, 10 ) )
//        {
//            IES2_string = QObject::trUtf8("车间电源");
//        }
//    }

//    if ( ( train_status2_data13 & 3840) == 0)
//    {
//        IES2_string = QObject::trUtf8("- -");
//    }

//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6IESSTATE))->SetCtrlText(IES2_string);
}

void C_Page_SIV_Status3::UpdateKAUX()
{
    int kaux_color = 0;

    if (Bit(DI_140_1,2) == 0)
    {
        kaux_color = 0;
    }
    else if (Bit(DI_140_1,2) == 1)
    {
        kaux_color = 1;
    }
    //kaux_color = 1;
//    SetKauxLabelColor(ID_PIBCARS1_3_LABEL_CAR3KAUXSTATE, kaux_color);


//    int kaux_color = 0;

//    if (Bit(train_status_data30,16) == 0)
//    {
//        kaux_color = 0;
//    }
//    else if (Bit(train_status_data30,16) == 1)
//    {
//        kaux_color = 1;
//    }

//    SetKauxLabelColor(ID_PIBCARS1_3_LABEL_CAR3KAUXSTATE, kaux_color);
}

void C_Page_SIV_Status3::UpdateVeerLoad()
{
    int veerload1_color = 0;
    int veerload2_color = 0;
    int veerload3_color = 0;
    int veerload4_color = 0;
    int veerload5_color = 0;
    int veerload6_color = 0;
    int veerload7_color = 0;
    int veerload8_color = 0;
    int veerload9_color = 0;
    int veerload10_color = 0;
    int veerload11_color = 0;
    int veerload12_color = 0;
    int veerload13_color = 0;
    int veerload14_color = 0;
    int veerload15_color = 0;
    int veerload16_color = 0;

    BCU_Mass1 = DivNum(BCU_TC1_410_420_2 , 10);
    BCU_Mass2 = DivNum(BCU_TC1_410_420_3 , 10);
    BCU_Mass3 = DivNum(BCU_TC1_410_420_4 , 10);
    BCU_Mass4 = DivNum(BCU_TC1_410_420_5 , 10);
    BCU_Mass5 = DivNum(BCU_TC1_410_420_6 , 10);
    BCU_Mass6 = DivNum(BCU_TC1_410_420_7 , 10);
    BCU_Mass7 = DivNum(BCU_TC1_410_420_8 , 10);
    BCU_Mass8 = DivNum(BCU_TC1_410_420_9 , 10);
    BCU_Mass9 = DivNum(BCU_TC2_430_440_2 , 10);
    BCU_Mass10 = DivNum(BCU_TC2_430_440_3 , 10);
    BCU_Mass11 = DivNum(BCU_TC2_430_440_4 , 10);
    BCU_Mass12 = DivNum(BCU_TC2_430_440_5 , 10);
    BCU_Mass13 = DivNum(BCU_TC2_430_440_6 , 10);
    BCU_Mass14 = DivNum(BCU_TC2_430_440_7 , 10);
    BCU_Mass15 = DivNum(BCU_TC2_430_440_8 , 10);
    BCU_Mass16 = DivNum(BCU_TC2_430_440_9 , 10);

    char buff[10] = {'\0'};

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass1);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass2);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass3);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass4);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass5);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR3VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass6);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR3VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass7);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass8);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass15);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR5VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass16);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR5VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass13);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass14);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass11);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR7VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass12);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR7VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass9);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR8VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass10);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR8VEER2LOAD))->SetCtrlText(buff);

    if (Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
    {

        if (Bit(BCU_TC1_413_423_9,16) == 0)
        {
            veerload1_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,16) == 1)
        {
            veerload1_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,15) == 0)
        {
            veerload2_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,15) == 1)
        {
            veerload2_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,14) == 0)
        {
            veerload3_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,14) == 1)
        {
            veerload3_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,13) == 0)
        {
            veerload4_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,13) == 1)
        {
            veerload4_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,12) == 0)
        {
            veerload5_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,12) == 1)
        {
            veerload5_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,11) == 0)
        {
            veerload6_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,11) == 1)
        {
            veerload6_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,10) == 0)
        {
            veerload7_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,10) == 1)
        {
            veerload7_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,9) == 0)
        {
            veerload8_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,9) == 1)
        {
            veerload8_color = 1;
        }

    }
    else
    {
        veerload1_color = 2;
        veerload2_color = 2;
        veerload3_color = 2;
        veerload4_color = 2;
        veerload5_color = 2;
        veerload6_color = 2;
        veerload7_color = 2;
        veerload8_color = 2;

    }

    if (Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 ))
    {

        if (Bit(BCU_TC2_433_443_9,16) == 0)
        {
            veerload9_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,16) == 1)
        {
            veerload9_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,15) == 0)
        {
            veerload10_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,15) == 1)
        {
            veerload10_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,14) == 0)
        {
            veerload11_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,14) == 1)
        {
            veerload11_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,13) == 0)
        {
            veerload12_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,13) == 1)
        {
            veerload12_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,12) == 0)
        {
            veerload13_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,12) == 1)
        {
            veerload13_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,11) == 0)
        {
            veerload14_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,11) == 1)
        {
            veerload14_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,10) == 0)
        {
            veerload15_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,10) == 1)
        {
            veerload15_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,9) == 0)
        {
            veerload16_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,9) == 1)
        {
            veerload16_color = 1;
        }
    }
    else
    {
        veerload9_color = 2;
        veerload10_color = 2;
        veerload11_color = 2;
        veerload12_color = 2;
        veerload13_color = 2;
        veerload14_color = 2;
        veerload15_color = 2;
        veerload16_color = 2;
    }

//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR1VEER1LOAD, veerload1_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR1VEER2LOAD, veerload2_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR2VEER1LOAD, veerload3_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR2VEER2LOAD, veerload4_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR3VEER1LOAD, veerload5_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR3VEER2LOAD, veerload6_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR4VEER1LOAD, veerload7_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR4VEER2LOAD, veerload8_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR5VEER2LOAD, veerload16_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR5VEER1LOAD, veerload15_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR6VEER2LOAD, veerload14_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR6VEER1LOAD, veerload13_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR7VEER2LOAD, veerload12_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR7VEER1LOAD, veerload11_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR8VEER2LOAD, veerload10_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_3_LABEL_CAR8VEER1LOAD, veerload9_color);

}


void C_Page_SIV_Status3::UpdateAValue()
{

}

void C_Page_SIV_Status3::UpdateVValue()
{


}

void C_Page_SIV_Status3::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBCARS1_3_LABEL_TRACTIONMODEL);

#endif

}

void C_Page_SIV_Status3::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void C_Page_SIV_Status3::UpdateATOMode()
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



    SetATOModeLabelColor(ID_PIBCARS1_3_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBCARS1_3_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}



void C_Page_SIV_Status3::UpdateNETMode()
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

    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBCARS1_3_LABEL_NETMODE, modecolor);
}
/*
void C_Page_SIV_Status3::UpdateChargeCurrent()
{

    //AXiCT_BatCur_I8	直流电池电流
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1CHARGECURRENT))->SetCtrlText(QString::number(((int8_t)(ACU_610_4/256) )* 2).append(" A"));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6CHARGECURRENT))->SetCtrlText(QString::number(((int8_t)(ACU_620_4/256) )* 2).append(" A"));

}

void C_Page_SIV_Status3::Update110Voltage()
{
    //AXiCT_DCOutputVolt_U8	直流输出电压
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1VOLTAGE))->SetCtrlText(QString::number(ACU_610_3/256).append(" V"));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6VOLTAGE))->SetCtrlText(QString::number(ACU_620_3/256).append(" V"));

}

void C_Page_SIV_Status3::UpdateBatteryTemp()
{
    //AXiCT_BatTemp_I8	电池温度
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1BATTERTEMP))->SetCtrlText(QString::number((int8_t)ACU_611_3%256).append(QObject::trUtf8(" ℃")));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR6BATTERTEMP))->SetCtrlText(QString::number((int8_t)ACU_621_3%256).append(QObject::trUtf8(" ℃")));
}

*/

void C_Page_SIV_Status3::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void C_Page_SIV_Status3::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 ))
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_TOWMODE))->HideLabel();

//    }

}

void C_Page_SIV_Status3::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->HideLabel();
                }
            }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_WASHCARMODE))->HideLabel();
    }
}

//void C_Page_SIV_Status3::UpdateEmergencyBroadcast()
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

void C_Page_SIV_Status3::SetNETModeLabelColor(int id, int colorVal)
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

void C_Page_SIV_Status3::SetATOModeLabelColor(int id,int colorVal)
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


void C_Page_SIV_Status3::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
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

void C_Page_SIV_Status3::SetKauxLabelColor(int id, int colorVal)
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

void C_Page_SIV_Status3::SetVeerLoadLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

//void C_Page_SIV_Status3::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS1_3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void C_Page_SIV_Status3::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

//void C_Page_SIV_Status3::OnACUReset()
//{
//    m_bResetACU = true;
//
//    BitSet( HMI_send_data24, 7, 1 );
//    ACU_test_timer=3;
//}
/*
void C_Page_SIV_Status3::UpdateInhibitKAUXClose()
{
    if (1 == Bit(ACU_610_7,9) )
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_InhibitKAUXClose1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_InhibitKAUXClose1))->SetCtrlBKColor(Qt::black);

    }
    if (1 == Bit(ACU_620_7,9) )
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_InhibitKAUXClose2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_InhibitKAUXClose2))->SetCtrlBKColor(Qt::black);

    }
}
*/
void C_Page_SIV_Status3::UpdatePantographStatus()
{

//    if ((Bit(DI_120_3,12)&&Bit(CCU_HMI_222_12, 6 )) ||(Bit(DI_120_1,1)&&Bit(CCU_HMI_222_12, 7 ))== 1)
//    {

//        //DICT_PantographInDownpositionMpi_B1    降弓到位监视	高电平代表降弓到位
//        if (Bit(DI_120_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        //DICT_PantographInOnpositonMpi_B1    	升弓到位监视	高电平代表升弓到位
//        if (Bit(DI_120_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_12, 6 )&&Bit(CCU_HMI_222_12, 7 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::white);
//        }

//    }

//    if ((Bit(DI_140_3,12)&&Bit(CCU_HMI_222_13, 6 )) ||(Bit(DI_140_1,1)&&Bit(CCU_HMI_222_13, 7 ))== 1)
//    {
//        if (Bit(DI_140_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        if (Bit(DI_140_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }else
//    {
//        if((Bit(CCU_HMI_222_13, 6 )&&Bit(CCU_HMI_222_13, 7 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::white);
//        }

//    }

//    if ((Bit(DI_170_3,12)&&Bit(CCU_HMI_222_14, 14 )) ||(Bit(DI_170_1,1)&&Bit(CCU_HMI_222_14, 15 ))== 1)
//    {
//        if (Bit(DI_170_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        if (Bit(DI_170_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_14, 14 )&&Bit(CCU_HMI_222_14, 15 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::white);
//        }
//    }


}

void C_Page_SIV_Status3::UpdateEscapeDoor()
{
    if ( (Bit(CCU_HMI_222_11, 15 ))&&(Bit(CCU_HMI_222_11, 16 ))== 1)
    {
        if (1 == Bit(DI_110_5,4) )
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::green);

        }
        else
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::red);
        }
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::white);
    }

    if (  (Bit(CCU_HMI_222_15, 8 )) &&(Bit(CCU_HMI_222_15, 7 ))== 1 )
    {
        if (1 == Bit(DI_180_5,4) )
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::green);

        }
        else
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::red);
        }
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_3_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::white);
    }

}



