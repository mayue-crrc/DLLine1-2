#include "C_Page_HVAC_Setting.h"
#include "c_page_hvac_heater.h"

ROMDATA g_PicRom_HVACSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    D_COMMON_PAGE_HEADER(QObject::trUtf8("空调设置"))


//    {"",                   D_FONT_BOLD(4),      QRect(178, 108, 600,  70),            Qt::black,                Qt::gray,                CONTROL_TRAIN,          ID_CHVACSET_TRAIN                         },
//    {"RIGHT",              D_FONT_BOLD(6),      QRect(700, 140,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_RIGHT                   },
//    {"LEFT",               D_FONT_BOLD(6),      QRect( 58, 140,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_LEFT                    },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("空调") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_CHVACSET_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_CHVACSET_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_CHVACSET_ARROW_LEFT                 },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 210-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 240-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 270-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 300-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 330-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 360-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 390-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 420-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 450-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(100, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(200, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(300, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(400, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(500, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(600, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(550, 180-30,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(625, 180-30,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(700-1, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

   // {QObject::trUtf8("自动制冷"),       D_FONT_BOLD(8),      QRect(10,  480, 180,  60),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_CHVACSET_LABEL_DEBUG                },


    {QObject::trUtf8("自动制冷/制暖"),       D_FONT_BOLD(6),      QRect( 15,  435,  110,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自动制冷"),       D_FONT_BOLD(8),      QRect(130,  435, 115,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_CHVACSET_LABEL_RUNMODEL                },

    {QObject::trUtf8("设置温度"),      D_FONT_BOLD(8),      QRect(250,  435,  80,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(340,  435, 100,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPV                   },

    {QObject::trUtf8("▼"),                D_FONT_BOLD(8),      QRect( 460,  435,  60,  30),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPDOWN               },
    {QObject::trUtf8("▲"),                D_FONT_BOLD(8),      QRect( 540,  435,  60,  30),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPUP                 },
    {QObject::trUtf8("确   定"),      D_FONT_BOLD(8),      QRect( 640,  435, 100,  30),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_CONFIRM                },

    {QObject::trUtf8("电热状态"),      D_FONT_BOLD(8),      QRect( 18, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_PRECOOL             },


    {QObject::trUtf8("强   冷"),      D_FONT_BOLD(8),      QRect( 212, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STRONGCOLD             },
    {QObject::trUtf8("弱   冷"),      D_FONT_BOLD(8),      QRect( 309, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WEAKCOLD               },
    {QObject::trUtf8("自动制冷"),      D_FONT_BOLD(8),      QRect( 406, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOCOLD               },
    {QObject::trUtf8("紧急通风"),      D_FONT_BOLD(8),      QRect( 503, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AMERGEWIND                   },

    //   {QObject::trUtf8("紧急通风\n停止"),  D_FONT_BOLD(6),      QRect( 697, 455+8, 85,  38),            Qt::black,                Qt::green,               CONTROL_LABEL,          ID_CHVACSET_LABEL_EmergencyModeStatus             },
   //   {QObject::trUtf8("全   暖"),      D_FONT_BOLD(8),      QRect( 155, 500, 100,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM               },


    {QObject::trUtf8("全   暖"),      D_FONT_BOLD(8),      QRect( 212, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM             },
    {QObject::trUtf8("半   暖"),   D_FONT_BOLD(8),         QRect( 309, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_HALFWARM               },
    {QObject::trUtf8("自动制暖"),   D_FONT_BOLD(8),         QRect( 406, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOWARM               },
    {QObject::trUtf8("通   风"),      D_FONT_BOLD(8),      QRect( 503, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WIND                   },
    {QObject::trUtf8("停   止"),      D_FONT_BOLD(8),      QRect( 600, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STOP                   },

    {QObject::trUtf8("全车"),         D_FONT_BOLD(6),      QRect( 13, 182-30,  84,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR                     },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1                    },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(178, 182-30,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2                    },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(203, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3                    },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(303, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4                    },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(403, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5                    },
    {QObject::trUtf8("5"),           D_FONT_BOLD(6),      QRect(503, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6                    },
//    {QObject::trUtf8("7"),           D_FONT_BOLD(6),      QRect(553, 182-30,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7                    },
    {QObject::trUtf8("6"),           D_FONT_BOLD(6),      QRect(603, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8                    },


    {QObject::trUtf8("控制模式"),      D_FONT_BOLD(6),      QRect( 13, 212-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(103, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR1      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(203, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR2      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(303, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR3      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(403, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR4      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(503, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR5      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(603, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR6      },



    {QObject::trUtf8("运行模式"),      D_FONT_BOLD(6),      QRect( 13, 242-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(103, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(203, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(303, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(403, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(503, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(603, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6RUNMODEL      },

    {QObject::trUtf8("设置温度"),      D_FONT_BOLD(6),      QRect( 13, 272-30,  84,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(103, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR1     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(203, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR2     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(303, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR3     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(403, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR4     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(503, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR5     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(603, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR6     },

    {QObject::trUtf8("车内(外)温度"),      D_FONT_BOLD(4),      QRect( 13, 302-30,  84,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(103, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR1        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(203, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR2        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(303, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR3        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(403, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR4        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(503, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR5        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(603, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR6        },

    {QObject::trUtf8("压缩机"),       D_FONT_BOLD(6),      QRect( 13, 332-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS4          },

//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(553, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(571, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(589, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(607, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS4          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS3          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS2          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS1          },
    {QObject::trUtf8("冷凝机"),       D_FONT_BOLD(6),      QRect( 13, 362-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD4             },

//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(553, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD1             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(571, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD2             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(589, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD3             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(607, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD4             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD4             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD3             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD2             },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD1             },

    {QObject::trUtf8("通风机"),       D_FONT_BOLD(6),      QRect( 13, 392-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND4             },



{QObject::trUtf8("预热器"),       D_FONT_BOLD(6),      QRect( 13, 422-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1HEAT2             },
{QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1HEAT3             },
{QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1HEAT4             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2HEAT2             },
{QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2HEAT3             },
{QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2HEAT4             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3HEAT2             },
{QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3HEAT3             },
{QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3HEAT4             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4HEAT2             },
{QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4HEAT3             },
{QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4HEAT4             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5HEAT2             },
{QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5HEAT3             },
{QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5HEAT4             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6HEAT2             },
{QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6HEAT3             },
{QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 424-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6HEAT4             },



//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(553, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND1             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(571, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND2             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(589, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND3             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(607, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND4             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND4             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND3             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND2             },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND1             },

//    {QObject::trUtf8("电热"),         D_FONT_BOLD(6),      QRect( 13, 392-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(104, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(153, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(178, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(214, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(204, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(253, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(304, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(353, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(404, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(453, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(504, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(589, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(604, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(653, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },


//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(121, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(139, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(157, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(178, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(196, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(214, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(232, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(253, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(271, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(289, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(307, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(328, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(346, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(364, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(382, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(403, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(421, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(439, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(457, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(478, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(496, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(514, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(532, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(553, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(571, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(589, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(607, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM4          },

//    {QObject::trUtf8("新风阀"),       D_FONT_BOLD(6),      QRect( 13, 362-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(104, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(153, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(139, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(157, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(203, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(214, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(214, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(232, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(204, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(253, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(289, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(307, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(304, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(353, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(364, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(382, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(403, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(421, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(404, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(453, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND2          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(478, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(496, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(504, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND2          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(553, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(571, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(589, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND2          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(604, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(653, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND1          },

//    {QObject::trUtf8("运行模式"),      D_FONT_BOLD(6),      QRect( 13, 392 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(103, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(178, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(253, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(328, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(403, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(478, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(553, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(628, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8RUNMODEL      },





};
int g_HVACSettingRomLen = sizeof(g_PicRom_HVACSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHVACSettingPage,CPage)
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

        ON_BTNCLK(ID_CHVACSET_BUTTON_STRONGCOLD,OnSTRONGCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_WEAKCOLD, OnWEAKCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTOCOLD, OnAUTOCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AMERGEWIND, OnAMERGEWINDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_FULLWARM, OnFULLWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_HALFWARM, OnHALFWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTOWARM, OnAUTOWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_WIND, OnWINDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_STOP, OnSTOPClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_TEMPDOWN, OnThempDownClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_TEMPUP, OnThempUpClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_CONFIRM, OnConfirmClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_PRECOOL, OnPRECOOLClk)

        ON_BTNCLK(ID_CHVACSET_LABEL_CAR,OnCarClk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR1,OnCar1Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR2,OnCar2Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR3,OnCar3Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR4,OnCar4Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR5,OnCar5Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR6,OnCar6Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR7,OnCar7Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR8,OnCar8Clk);

END_MESSAGE_MAP()

CHVACSettingPage::CHVACSettingPage()
{
        m_bpreAutoTempV = false;  //预留暂时没有使用
        m_bAutoTempV = false;   //只有自动制冷，自动制暖模式下 才可以设置温度
        m_bBtnPress=false;     //是否有按钮按下，如果有按钮按下则必须等按钮弹起后才可以点击其它按钮



}

void CHVACSettingPage::OnUpdatePage()
{
/*
    ((CButton*)GetDlgItem(ID_CHVACSET_LABEL_DEBUG))->SetCtrlText(QString::number(m_bAutoTempV)
                                                                 +QString::number(m_bBtnPress)
                                                                 +QString::number(HVAC_command_hide)
                                                                 +QString::number(HVAC_button_color)
                                                                 +QString::number(HVAC_mode_se1ect)
                                                                 +QString::number(m_PressBtnID)
                                                                 +QString::number(HVAC_valid_timer)
                                                                 );
*/
  updateTrain(ID_CHVACSET_TRAIN);
    updateArrow(ID_CHVACSET_ARROW_LEFT,ID_CHVACSET_ARROW_RIGHT);

    updateErrorLine(ID_CHVACSET_TRAIN);
    UpdateCarTem();
    UpdateIndoorCarTem();

    UpdateHMIActive();
    UpdateHVAC_mode();
    UpdateHVAC_RUNmode();
    UpdateHVACState();
    UpdateHVAC_Compressor();
    UpdateHVAC_Condenser();
    UpdateHVAC_EvaporatorFan();
    UpdateHVAC_HotElectricity();
    UpdateHVAC_NewWind();
    updateTempV();
    UpdateEmergencyMode();

    if (m_bBtnPress==false)
    {
        //空调模式设置按钮只有在司机室钥匙激活侧司机室才可以按下
        updateCtrl();
    }


    if (m_bBtnPress==false)
    {
        static int preHide = Bit(HVAC_command_hide,0);
        if(preHide != Bit(HVAC_command_hide,0))
        {
            updateCtrl();
            preHide = Bit(HVAC_command_hide,0);
        }
    }
    if (m_bBtnPress)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            HVAC_valid_timer--;
            if (HVAC_valid_timer==0)
            {
                ((CButton*)GetDlgItem(m_PressBtnID))->ChangeButtonState(LBUTTON_UP);

                m_bBtnPress = false;

                HMCT_SetHVACEnableTC1_B1=false; //TC1车空调设定使能
                HMCT_SetHVACEnableMP1_B1=false; //MP1车空调设定使能
                HMCT_SetHVACEnableM1_B1 =false; //M1车空调设定使能
                HMCT_SetHVACEnableM2_B1 =false; //M2车空调设定使能
                HMCT_SetHVACEnableMP2_B1=false; //MP2车空调设定使能
                HMCT_SetHVACEnableTC2_B1=false; //TC2车空调设定使能


            //    HMI_send_data24=HMI_send_data24&255;
                HVAC_button_color=0;
                HVAC_mode_se1ect=0;
                //
                ReSetCtrlButtonState();
            }
        }
    }
}

void CHVACSettingPage::OnInitPage()
{

  // TC1_HMI = 1;
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetBorderColor(Qt::white);
    //初始化 空调模式设置按钮和温度设定确定按钮设置为不可按，不自动弹起
    int nIDArray[] =
    {
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_CONFIRM,
      ID_CHVACSET_BUTTON_STOP,
    };
    for (int i = 0; i < 10; i++)
    {
        ((CButton*)GetDlgItem(nIDArray[i]))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
    }
    //温度增加和减少按钮初始化设置为不可按，自动暖，自动冷模式下按钮才可以按
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);

    //默认选择设置全车
    OnCarClk();
    //暂时隐藏   by lishizhi 2015-5-19
  ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->HideButton();
}

void CHVACSettingPage::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif

    //update ctrl
    updateCtrl();

    this->InitPageHeader();
   // HVAC_valid_timer = 5;
}


//空调模式设置按钮只有在司机室钥匙激活侧司机室才可以按下
void CHVACSettingPage::updateCtrl()
{
    int nIDArray[] =
    {
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
    };

   for (int i = 0; i < 9; i++)
   {
       if (Bit(HVAC_command_hide,0))
       {
           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
       }
       else
       {
           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
       }
   }
}

void CHVACSettingPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAIN);
}

void CHVACSettingPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void CHVACSettingPage::OnComBtn3Clk()
{
     ChangePage(PAGE_BRAKESTATUS);
}

void CHVACSettingPage::OnComBtn4Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS2);
}

void CHVACSettingPage::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS1);
}

void CHVACSettingPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_CARSTATUS3);
}
void CHVACSettingPage::OnComBtn7Clk()
{
     ChangePage(PAGE_INDEX_HVACSETTING);
}

void CHVACSettingPage::OnComBtn8Clk()
{
    ChangePage(PAGE_INDEX_HVACSETTINGHELP);
}


void CHVACSettingPage::OnCarClk()
{
    HVAC_select_color = 0;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar1Clk()
{
    HVAC_select_color = 1;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,0);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar2Clk()
{


}

void CHVACSettingPage::OnCar3Clk()
{
    HVAC_select_color = 2;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar4Clk()
{
    HVAC_select_color = 3;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar5Clk()
{
    HVAC_select_color = 4;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar6Clk()
{
    HVAC_select_color = 5;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,0);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar7Clk()
{

}

void CHVACSettingPage::OnCar8Clk()
{
    HVAC_select_color = 6;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,0);
}

void CHVACSettingPage::SetLabelBkColorCar(int id, int colorVal)
{
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CHVACSettingPage::UpdateHMIActive()
{
    if (TC1_HMI == 1)
    {

            if (CTHM_TC1CabActive_B1)
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }

    }
    if (TC2_HMI == 1)
    {
            if (CTHM_TC2CabActive_B1)
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }
    }

    static int preHide = -1;
    if(preHide !=  Bit(HVAC_command_hide,0))
    {
        updateCtrl();
        preHide = Bit(HVAC_command_hide,0);
    }
}



void CHVACSettingPage::OnSTRONGCOLDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_STRONGCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=1;
        HVAC_valid_timer=5;
        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_STRONGCOLD);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=3;
            HMCT_SetHVACModeMP1_U8=3;
            HMCT_SetHVACModeM1_U8 =3;
            HMCT_SetHVACModeM2_U8 =3;
            HMCT_SetHVACModeMP2_U8=3;
            HMCT_SetHVACModeTC2_U8=3;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=3;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=3;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =3;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =3;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=3;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=3;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }

}

void CHVACSettingPage::OnWEAKCOLDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_WEAKCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=2;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_WEAKCOLD);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=2;
            HMCT_SetHVACModeMP1_U8=2;
            HMCT_SetHVACModeM1_U8 =2;
            HMCT_SetHVACModeM2_U8 =2;
            HMCT_SetHVACModeMP2_U8=2;
            HMCT_SetHVACModeTC2_U8=2;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=2;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=2;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =2;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =2;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=2;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=2;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }
}

void CHVACSettingPage::OnAUTOCOLDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOCOLD;

    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=3;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOCOLD);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=1;
            HMCT_SetHVACModeMP1_U8=1;
            HMCT_SetHVACModeM1_U8 =1;
            HMCT_SetHVACModeM2_U8 =1;
            HMCT_SetHVACModeMP2_U8=1;
            HMCT_SetHVACModeTC2_U8=1;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=1;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=1;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =1;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =1;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=1;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=1;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }
}

void CHVACSettingPage::OnPRECOOLClk()
{

  //  ChangePage(PAGE_INDEX_TRACTIONSYSTEMTEST);
}

void CHVACSettingPage::OnAMERGEWINDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AMERGEWIND;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=4;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AMERGEWIND);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=10;
            HMCT_SetHVACModeMP1_U8=10;
            HMCT_SetHVACModeM1_U8 =10;
            HMCT_SetHVACModeM2_U8 =10;
            HMCT_SetHVACModeMP2_U8=10;
            HMCT_SetHVACModeTC2_U8=10;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=10;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=10;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =10;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =10;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=10;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=10;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }

}

void CHVACSettingPage::OnFULLWARMClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_FULLWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=5;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_FULLWARM);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=7;
            HMCT_SetHVACModeMP1_U8=7;
            HMCT_SetHVACModeM1_U8 =7;
            HMCT_SetHVACModeM2_U8 =7;
            HMCT_SetHVACModeMP2_U8=7;
            HMCT_SetHVACModeTC2_U8=7;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=7;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=7;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =7;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =7;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=7;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=7;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }

}

void CHVACSettingPage::OnHALFWARMClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_HALFWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=6;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_HALFWARM);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=6;
            HMCT_SetHVACModeMP1_U8=6;
            HMCT_SetHVACModeM1_U8 =6;
            HMCT_SetHVACModeM2_U8 =6;
            HMCT_SetHVACModeMP2_U8=6;
            HMCT_SetHVACModeTC2_U8=6;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=6;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=6;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =6;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =6;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=6;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=6;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }

}

void CHVACSettingPage::OnAUTOWARMClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=7;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOWARM);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=5;
            HMCT_SetHVACModeMP1_U8=5;
            HMCT_SetHVACModeM1_U8 =5;
            HMCT_SetHVACModeM2_U8 =5;
            HMCT_SetHVACModeMP2_U8=5;
            HMCT_SetHVACModeTC2_U8=5;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=5;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=5;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =5;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =5;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=5;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=5;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }

}

void CHVACSettingPage::OnWINDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_WIND;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=8;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_WIND);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=9;
            HMCT_SetHVACModeMP1_U8=9;
            HMCT_SetHVACModeM1_U8 =9;
            HMCT_SetHVACModeM2_U8 =9;
            HMCT_SetHVACModeMP2_U8=9;
            HMCT_SetHVACModeTC2_U8=9;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=9;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=9;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =9;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =9;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=9;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=9;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }
}

void CHVACSettingPage::OnSTOPClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_STOP;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=9;
        HVAC_valid_timer=5;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        SetCtrlButtonState(ID_CHVACSET_BUTTON_STOP);

        if (HVAC_select_color==0)  // All Car
        {
            HMCT_SetHVACModeTC1_U8=0;
            HMCT_SetHVACModeMP1_U8=0;
            HMCT_SetHVACModeM1_U8 =0;
            HMCT_SetHVACModeM2_U8 =0;
            HMCT_SetHVACModeMP2_U8=0;
            HMCT_SetHVACModeTC2_U8=0;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
        if (HVAC_select_color==1)
        {
            HMCT_SetHVACModeTC1_U8=0;
            HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMCT_SetHVACModeMP1_U8=0;
            HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMCT_SetHVACModeM1_U8 =0;
            HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMCT_SetHVACModeM2_U8 =0;
            HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMCT_SetHVACModeMP2_U8=0;
            HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMCT_SetHVACModeTC2_U8=0;
            HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
        }
    }
}

void CHVACSettingPage::OnThempDownClk()
{
    if (HVAC_state==QObject::trUtf8("自动制暖"))
    {
        if (setting_temp2 > 12)
        {
            setting_temp2 -= 1;
        }
    }
    if (HVAC_state==QObject::trUtf8("自动制冷"))
    {
        if (setting_temp > 22)
        {
            setting_temp -= 1;
        }
    }
}

void CHVACSettingPage::OnThempUpClk()
{
    if (HVAC_state==QObject::trUtf8("自动制暖"))
    {
       // if (setting_temp2 < 20)
              if (setting_temp2 < 26)
        {
            setting_temp2 += 1;
        }
    }
    if (HVAC_state==QObject::trUtf8("自动制冷"))
    {
      if (setting_temp < 28)
      {
        setting_temp += 1;
      }
    }
}

void CHVACSettingPage::OnConfirmClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_CONFIRM;
    if (HVAC_valid_timer==0)
    {

        HVAC_button_color=1;
        HVAC_valid_timer=5;
        if (HVAC_select_color==0)
        {
            if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
            {

                  HMCT_SetHVACTempTC1_U8=setting_temp2;
                  HMCT_SetHVACTempMP1_U8=setting_temp2;
                  HMCT_SetHVACTempM1_U8=setting_temp2;
                  HMCT_SetHVACTempM2_U8=setting_temp2;
                  HMCT_SetHVACTempMP2_U8=setting_temp2;
                  HMCT_SetHVACTempTC2_U8=setting_temp2;

                  HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
                  HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
                  HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
                  HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
                  HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
                  HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
            }
            if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
            {
                    HMCT_SetHVACTempTC1_U8=setting_temp;
                    HMCT_SetHVACTempMP1_U8=setting_temp;
                    HMCT_SetHVACTempM1_U8=setting_temp;
                    HMCT_SetHVACTempM2_U8=setting_temp;
                    HMCT_SetHVACTempMP2_U8=setting_temp;
                    HMCT_SetHVACTempTC2_U8=setting_temp;

                    HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
                    HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
                    HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
                    HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
                    HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
                    HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
            }
        }
        else
        {
            if (HVAC_select_color==1)
            {
                if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
                {
                      HMCT_SetHVACTempTC1_U8=setting_temp2;

                      HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能

                }
                if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
                {
                        HMCT_SetHVACTempTC1_U8=setting_temp;
                        HMCT_SetHVACEnableTC1_B1=true; //TC1车空调设定使能
                }
            }
            else
            {
                HMCT_SetHVACTempTC1_U8 = AC1CT_SetTemp_U8;

            }
            if (HVAC_select_color==2)
            {
                if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
                {
                      HMCT_SetHVACTempMP1_U8=setting_temp2;
                      HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
                }
                if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
                {
                      HMCT_SetHVACTempMP1_U8=setting_temp;
                      HMCT_SetHVACEnableMP1_B1=true; //MP1车空调设定使能
                }
            }
            else
            {
                HMCT_SetHVACTempMP1_U8 = AC2CT_SetTemp_U8;

            }
            if (HVAC_select_color==3)
            {
                if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
                {
                      HMCT_SetHVACTempM1_U8=setting_temp2;
                      HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
                }
                if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
                {
                      HMCT_SetHVACTempM1_U8=setting_temp;
                      HMCT_SetHVACEnableM1_B1 =true; //M1车空调设定使能
                }
            }
            else
            {
                HMCT_SetHVACTempM1_U8 = AC3CT_SetTemp_U8;

            }
            if (HVAC_select_color==4)
            {
                if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
                {
                      HMCT_SetHVACTempM2_U8=setting_temp2;
                      HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
                }
                if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
                {
                      HMCT_SetHVACTempM2_U8=setting_temp;
                      HMCT_SetHVACEnableM2_B1 =true; //M2车空调设定使能
                }
            }
            else
            {

                HMCT_SetHVACTempM2_U8 = AC4CT_SetTemp_U8;

            }
            if (HVAC_select_color==5)
            {
                if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
                {
                      HMCT_SetHVACTempMP2_U8=setting_temp2;
                      HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
                }
                if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
                {
                      HMCT_SetHVACTempMP2_U8=setting_temp;
                      HMCT_SetHVACEnableMP2_B1=true; //MP2车空调设定使能
                }
            }
            else
            {
                HMCT_SetHVACTempMP2_U8 = AC5CT_SetTemp_U8;
            }
            if (HVAC_select_color==6)
            {
                if (HVAC_state==QObject::trUtf8("自动制暖"))//制热
                {
                      HMCT_SetHVACTempTC2_U8=setting_temp2;
                      HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
                }
                if (HVAC_state==QObject::trUtf8("自动制冷"))//制冷
                {
                      HMCT_SetHVACTempTC2_U8=setting_temp;
                      HMCT_SetHVACEnableTC2_B1=true; //TC2车空调设定使能
                }
            }
            else
            {
                HMCT_SetHVACTempTC2_U8 = AC6CT_SetTemp_U8;
            }

        }

        SetCtrlButtonState(ID_CHVACSET_BUTTON_CONFIRM);
    }
}

//自动制冷、自动制暖当前状态
void CHVACSettingPage::UpdateHVACState()
{

//首先判断选择要设置的车厢位置，如果是整车设置则判断是否有处于网控且处于自动制冷和自动制暖的车厢，
//然后计算这些车厢中自动制冷和自动制暖状态的车厢个数，个数多的状态即为当前要设置的温度值的模式。
//制热范围：12-26  制冷范围：22-28
    if (HVAC_select_color==0)  // All Car
    {
        //ControlMode 控制状态	1网络控制，0面板控制
//        TC1车HVAC1			端口地址：0x910
//        MP1车HVAC2			端口地址：0x920
//        M1车HVAC3			端口地址：0x930
//        M2车HVAC4			端口地址：0x940
//        MP2车HVAC5			端口地址：0x950
//        TC2车HVAC6			端口地址：0x960



        if(  ( ((CTHM_SetHVACModeTC1_U8==1)&&AC1CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP1_U8==1)&&AC2CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM1_U8==1) &&AC3CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM2_U8==1) &&AC4CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP2_U8==1)&&AC5CT_ControlMode_B1)
            ||((CTHM_SetHVACModeTC2_U8==1)&&AC6CT_ControlMode_B1))||
            ( ((CTHM_SetHVACModeTC1_U8==5)&&AC1CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP1_U8==5)&&AC2CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM1_U8==5) &&AC3CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM2_U8==5) &&AC4CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP2_U8==5)&&AC5CT_ControlMode_B1)
            ||((CTHM_SetHVACModeTC2_U8==5)&&AC6CT_ControlMode_B1))  )


            {

                int Auto_Warm_num=0;
                int Auto_Cool_num=0;

                if((CTHM_SetHVACModeTC1_U8==1)&&AC1CT_ControlMode_B1)
                {
                   Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeMP1_U8==1)&&AC2CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeM1_U8==1)&&AC3CT_ControlMode_B1)
                {
                    Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeM2_U8==1)&&AC4CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeMP2_U8==1)&&AC5CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeTC2_U8==1)&&AC6CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }


                if((CTHM_SetHVACModeTC1_U8==5)&&AC1CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeMP1_U8==5)&&AC2CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeM1_U8==5)&&AC3CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeM2_U8==5)&&AC4CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeMP2_U8==5)&&AC5CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeTC2_U8==5)&&AC6CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }

                if(Auto_Cool_num>=Auto_Warm_num)
                {
                    HVAC_state = QObject::trUtf8("自动制冷");
                    m_bAutoTempV = true;

                }
                else
                {
                    HVAC_state = QObject::trUtf8("自动制暖");
                    m_bAutoTempV = true;
                }

            }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==1)
    {
        if(  ((CTHM_SetHVACModeTC1_U8==1)||(CTHM_SetHVACModeTC1_U8==5))&&AC1CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeTC1_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeTC1_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }

    }
    if (HVAC_select_color==2)
    {
        if(  ((CTHM_SetHVACModeMP1_U8==1)||(CTHM_SetHVACModeMP1_U8==5))&&AC2CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeMP1_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeMP1_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==3)
    {
        if(  ((CTHM_SetHVACModeM1_U8==1)||(CTHM_SetHVACModeM1_U8==5))&&AC3CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeM1_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeM1_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==4)
    {
        if(  ((CTHM_SetHVACModeM2_U8==1)||(CTHM_SetHVACModeM2_U8==5))&&AC4CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeM2_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeM2_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==5)
    {
        if(  ((CTHM_SetHVACModeMP2_U8==1)||(CTHM_SetHVACModeMP2_U8==5))&&AC5CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeMP2_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeMP2_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==6)
    {
        if(  ((CTHM_SetHVACModeTC2_U8==1)||(CTHM_SetHVACModeTC2_U8==5))&&AC6CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeTC2_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeTC2_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }

    if (m_bBtnPress==false)
    {
        SpecialButtonState();
    }
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
}

//        if(  (    ((AC1CT_WorkMode_U8==1)&&AC1CT_ControlMode_B1)
//                ||((AC2CT_WorkMode_U8==1)&&AC2CT_ControlMode_B1)
//                ||((AC3CT_WorkMode_U8==1)&&AC3CT_ControlMode_B1)
//                ||((AC4CT_WorkMode_U8==1)&&AC4CT_ControlMode_B1)
//                ||((AC5CT_WorkMode_U8==1)&&AC5CT_ControlMode_B1)
//                ||((AC6CT_WorkMode_U8==1)&&AC6CT_ControlMode_B1)  ) ||
//             (    ((AC1CT_WorkMode_U8==5)&&AC1CT_ControlMode_B1)
//                ||((AC2CT_WorkMode_U8==5)&&AC2CT_ControlMode_B1)
//                ||((AC3CT_WorkMode_U8==5)&&AC3CT_ControlMode_B1)
//                ||((AC4CT_WorkMode_U8==5)&&AC4CT_ControlMode_B1)
//                ||((AC5CT_WorkMode_U8==5)&&AC5CT_ControlMode_B1)
//                ||((AC6CT_WorkMode_U8==5)&&AC6CT_ControlMode_B1)  )

//           )
//        {

//            int Auto_Warm_num=0;
//            int Auto_Cool_num=0;

//            if((AC1CT_WorkMode_U8==1)&&AC1CT_ControlMode_B1)
//            {
//               Auto_Cool_num++;
//            }
//            if((AC2CT_WorkMode_U8==1)&&AC2CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }
//            if((AC3CT_WorkMode_U8==1)&&AC3CT_ControlMode_B1)
//            {
//                Auto_Cool_num++;
//            }
//            if((AC4CT_WorkMode_U8==1)&&AC4CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }
//            if((AC5CT_WorkMode_U8==1)&&AC5CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }
//            if((AC6CT_WorkMode_U8==1)&&AC6CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }


//            if((AC1CT_WorkMode_U8==5)&&AC1CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC2CT_WorkMode_U8==5)&&AC2CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC3CT_WorkMode_U8==5)&&AC3CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC4CT_WorkMode_U8==5)&&AC4CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC5CT_WorkMode_U8==5)&&AC5CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC6CT_WorkMode_U8==5)&&AC6CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }

//            if(Auto_Cool_num>=Auto_Warm_num)
//            {
//                HVAC_state = QObject::trUtf8("自动制冷");
//                m_bAutoTempV = true;

//            }
//            else
//            {
//                HVAC_state = QObject::trUtf8("自动制暖");
//                m_bAutoTempV = true;
//            }

//        }
//        else
//        {
//            HVAC_state = QObject::trUtf8("");
//            m_bAutoTempV = false;

//        }

//    }
//    if (HVAC_select_color==1)
//    {
//        if(  ((AC1CT_WorkMode_U8==1)||(AC1CT_WorkMode_U8==5))&&AC1CT_ControlMode_B1)
//        {
//            if(AC1CT_WorkMode_U8==1)
//            {
//                HVAC_state = QObject::trUtf8("自动制冷");
//                m_bAutoTempV = true;
//            }
//            if(AC1CT_WorkMode_U8==5)
//            {
//                HVAC_state = QObject::trUtf8("自动制暖");
//                m_bAutoTempV = true;
//            }

//        }
//        else
//        {
//            HVAC_state = QObject::trUtf8("");
//            m_bAutoTempV = false;

//        }

//    }
/*    if (HVAC_select_color==2)
    {
        if(  ((AC2CT_WorkMode_U8==1)||(AC2CT_WorkMode_U8==5))&&AC2CT_ControlMode_B1)
        {
            if(AC2CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC2CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==3)
    {
        if(  ((AC3CT_WorkMode_U8==1)||(AC3CT_WorkMode_U8==5))&&AC3CT_ControlMode_B1)
        {
            if(AC3CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC3CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==4)
    {
        if(  ((AC4CT_WorkMode_U8==1)||(AC4CT_WorkMode_U8==5))&&AC4CT_ControlMode_B1)
        {
            if(AC4CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC4CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==5)
    {
        if(  ((AC5CT_WorkMode_U8==1)||(AC5CT_WorkMode_U8==5))&&AC5CT_ControlMode_B1)
        {
            if(AC5CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC5CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==6)
    {
        if(  ((AC6CT_WorkMode_U8==1)||(AC6CT_WorkMode_U8==5))&&AC6CT_ControlMode_B1)
        {
            if(AC6CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC6CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }

    if (m_bBtnPress==false)
    {
        SpecialButtonState();
    }
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
}
*/
//设置温度
void CHVACSettingPage::UpdateCarTem()
{

    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR1))->SetCtrlText(QString::number(CTHM_SetHVACTempTC1_U8)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR2))->SetCtrlText(QString::number(CTHM_SetHVACTempMP1_U8)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR3))->SetCtrlText(QString::number(CTHM_SetHVACTempM1_U8)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR4))->SetCtrlText(QString::number(CTHM_SetHVACTempM2_U8)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR5))->SetCtrlText(QString::number(CTHM_SetHVACTempMP2_U8)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR6))->SetCtrlText(QString::number(CTHM_SetHVACTempTC2_U8)+QObject::trUtf8(" ℃"));

  /*
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR1))->SetCtrlText(QString::number(AC1CT_SetTemp_U8 )+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR2))->SetCtrlText(QString::number(AC2CT_SetTemp_U8 )+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR3))->SetCtrlText(QString::number(AC3CT_SetTemp_U8 )+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR4))->SetCtrlText(QString::number(AC4CT_SetTemp_U8 )+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR5))->SetCtrlText(QString::number(AC5CT_SetTemp_U8 )+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR6))->SetCtrlText(QString::number(AC6CT_SetTemp_U8 )+QObject::trUtf8(" ℃"));
*/
}

//车内（外）温度
void CHVACSettingPage::UpdateIndoorCarTem()
{
    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlText(QString::number(AC1CT_IndoorTemp_U8-40)+QObject::trUtf8(" ( ")+QString::number(AC1CT_OutdoorTemp_U8-40)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlText(QString::number(AC2CT_IndoorTemp_U8-40)+QObject::trUtf8(" ( ")+QString::number(AC2CT_OutdoorTemp_U8-40)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlText(QString::number(AC3CT_IndoorTemp_U8-40)+QObject::trUtf8(" ( ")+QString::number(AC3CT_OutdoorTemp_U8-40)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::white);
    }


    if (CTHM_HVAC4_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlText(QString::number(AC4CT_IndoorTemp_U8-40)+QObject::trUtf8(" ( ")+QString::number(AC4CT_OutdoorTemp_U8-40)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlText(QString::number(AC5CT_IndoorTemp_U8-40)+QObject::trUtf8(" ( ")+QString::number(AC5CT_OutdoorTemp_U8-40)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlText(QString::number(AC6CT_IndoorTemp_U8-40)+QObject::trUtf8(" ( ")+QString::number(AC6CT_OutdoorTemp_U8-40)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::white);
    }
/*
    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlText(QString::number(AC1CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC1CT_OutdoorTemp_U8)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlText(QString::number(AC2CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC2CT_OutdoorTemp_U8)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlText(QString::number(AC3CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC3CT_OutdoorTemp_U8)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::white);
    }


    if (CTHM_HVAC4_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlText(QString::number(AC4CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC4CT_OutdoorTemp_U8)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlText(QString::number(AC5CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC5CT_OutdoorTemp_U8)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlText(QString::number(AC6CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC6CT_OutdoorTemp_U8)+QObject::trUtf8(" )")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::white);
    }


 */
}


void CHVACSettingPage::SetCarTem(int lableId,qreal temperature)
{
    char buff[10] = {'\0'};
    sprintf(buff, "%.1f", temperature);
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString(buff).append(QObject::trUtf8("℃")));
}

//控制模式
void CHVACSettingPage::UpdateHVAC_mode()
{
    if (AC1CT_ControlMode_B1)
    {
        HVAC_mode1=QObject::trUtf8("集控 ");
        if(CTHM_SetHVACModeTC1_U8<11)
        {
            if(CTHM_SetHVACModeTC1_U8==0)
            {
                HVAC_RUNmode1 = QObject::trUtf8("停  止");
            }
            if(CTHM_SetHVACModeTC1_U8==1)
            {
                HVAC_RUNmode1 = QObject::trUtf8("自动制冷");
            }
            if(CTHM_SetHVACModeTC1_U8==2)
            {
                HVAC_RUNmode1 = QObject::trUtf8("半   冷");
            }
            if(CTHM_SetHVACModeTC1_U8==3)
            {
                HVAC_RUNmode1 = QObject::trUtf8("全   冷");
            }
            if(CTHM_SetHVACModeTC1_U8==4)
            {
                HVAC_RUNmode1 = QString::number(CTHM_SetHVACModeTC1_U8);
            }
            if(CTHM_SetHVACModeTC1_U8==5)
            {
                HVAC_RUNmode1 = QObject::trUtf8("自动制暖");
            }
            if(CTHM_SetHVACModeTC1_U8==6)
            {
                HVAC_RUNmode1 = QObject::trUtf8("半   暖");
            }
            if(CTHM_SetHVACModeTC1_U8==7)
            {
                HVAC_RUNmode1 = QObject::trUtf8("全   暖");
            }
            if(CTHM_SetHVACModeTC1_U8==8)
            {
                HVAC_RUNmode1 = QString::number(CTHM_SetHVACModeTC1_U8);
            }
            if(CTHM_SetHVACModeTC1_U8==9)
            {
                HVAC_RUNmode1 = QObject::trUtf8("通  风");
            }
            if(CTHM_SetHVACModeTC1_U8==10)
            {
                HVAC_RUNmode1 = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode1 = QString::number(CTHM_SetHVACModeTC1_U8);

        }
    }
    else
    {
        HVAC_mode1=QObject::trUtf8("本控");
        HVAC_RUNmode1 = QObject::trUtf8("");
    }


    if (AC2CT_ControlMode_B1)
    {
        HVAC_mode2=QObject::trUtf8("集控 ");
        if(CTHM_SetHVACModeMP1_U8<11)
        {
            if(CTHM_SetHVACModeMP1_U8==0)
            {
                HVAC_RUNmode2 = QObject::trUtf8("停  止");
            }
            if(CTHM_SetHVACModeMP1_U8==1)
            {
                HVAC_RUNmode2 = QObject::trUtf8("自动制冷");
            }
            if(CTHM_SetHVACModeMP1_U8==2)
            {
                HVAC_RUNmode2 = QObject::trUtf8("半   冷");
            }
            if(CTHM_SetHVACModeMP1_U8==3)
            {
                HVAC_RUNmode2 = QObject::trUtf8("全   冷");
            }
            if(CTHM_SetHVACModeMP1_U8==4)
            {
                HVAC_RUNmode2 = QString::number(CTHM_SetHVACModeMP1_U8);
            }
            if(CTHM_SetHVACModeMP1_U8==5)
            {
                HVAC_RUNmode2 = QObject::trUtf8("自动制暖");
            }
            if(CTHM_SetHVACModeMP1_U8==6)
            {
                HVAC_RUNmode2 = QObject::trUtf8("半   暖");
            }
            if(CTHM_SetHVACModeMP1_U8==7)
            {
                HVAC_RUNmode2 = QObject::trUtf8("全   暖");
            }
            if(CTHM_SetHVACModeMP1_U8==8)
            {
                HVAC_RUNmode2 = QString::number(CTHM_SetHVACModeMP1_U8);
            }
            if(CTHM_SetHVACModeMP1_U8==9)
            {
                HVAC_RUNmode2 = QObject::trUtf8("通  风");
            }
            if(CTHM_SetHVACModeMP1_U8==10)
            {
                HVAC_RUNmode2 = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode2 = QString::number(CTHM_SetHVACModeMP1_U8);

        }
    }
    else
    {
        HVAC_mode2=QObject::trUtf8("本控");
        HVAC_RUNmode2 = QObject::trUtf8("");
    }

    if (AC3CT_ControlMode_B1)
    {
        HVAC_mode3=QObject::trUtf8("集控 ");
        if(CTHM_SetHVACModeM1_U8<11)
        {
            if(CTHM_SetHVACModeM1_U8==0)
            {
                HVAC_RUNmode3 = QObject::trUtf8("停  止");
            }
            if(CTHM_SetHVACModeM1_U8==1)
            {
                HVAC_RUNmode3 = QObject::trUtf8("自动制冷");
            }
            if(CTHM_SetHVACModeM1_U8==2)
            {
                HVAC_RUNmode3 = QObject::trUtf8("半   冷");
            }
            if(CTHM_SetHVACModeM1_U8==3)
            {
                HVAC_RUNmode3 = QObject::trUtf8("全   冷");
            }
            if(CTHM_SetHVACModeM1_U8==4)
            {
                HVAC_RUNmode3 = QString::number(CTHM_SetHVACModeM1_U8);
            }
            if(CTHM_SetHVACModeM1_U8==5)
            {
                HVAC_RUNmode3 = QObject::trUtf8("自动制暖");
            }
            if(CTHM_SetHVACModeM1_U8==6)
            {
                HVAC_RUNmode3 = QObject::trUtf8("半   暖");
            }
            if(CTHM_SetHVACModeM1_U8==7)
            {
                HVAC_RUNmode3 = QObject::trUtf8("全   暖");
            }
            if(CTHM_SetHVACModeM1_U8==8)
            {
                HVAC_RUNmode3 = QString::number(CTHM_SetHVACModeM1_U8);
            }
            if(CTHM_SetHVACModeM1_U8==9)
            {
                HVAC_RUNmode3 = QObject::trUtf8("通  风");
            }
            if(CTHM_SetHVACModeM1_U8==10)
            {
                HVAC_RUNmode3 = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode3 = QString::number(CTHM_SetHVACModeM1_U8);

        }
    }
    else
    {
        HVAC_mode3=QObject::trUtf8("本控");
        HVAC_RUNmode3 = QObject::trUtf8("");
    }

    if (AC4CT_ControlMode_B1)
    {
         HVAC_mode4=QObject::trUtf8("集控 ");
        if(CTHM_SetHVACModeM2_U8<11)
        {
            if(CTHM_SetHVACModeM2_U8==0)
            {
                HVAC_RUNmode4 = QObject::trUtf8("停  止");
            }
            if(CTHM_SetHVACModeM2_U8==1)
            {
                HVAC_RUNmode4 = QObject::trUtf8("自动制冷");
            }
            if(CTHM_SetHVACModeM2_U8==2)
            {
                HVAC_RUNmode4 = QObject::trUtf8("半   冷");
            }
            if(CTHM_SetHVACModeM2_U8==3)
            {
                HVAC_RUNmode4 = QObject::trUtf8("全   冷");
            }
            if(CTHM_SetHVACModeM2_U8==4)
            {
                HVAC_RUNmode4 = QString::number(CTHM_SetHVACModeM2_U8);
            }
            if(CTHM_SetHVACModeM2_U8==5)
            {
                HVAC_RUNmode4 = QObject::trUtf8("自动制暖");
            }
            if(CTHM_SetHVACModeM2_U8==6)
            {
                HVAC_RUNmode4 = QObject::trUtf8("半   暖");
            }
            if(CTHM_SetHVACModeM2_U8==7)
            {
                HVAC_RUNmode4 = QObject::trUtf8("全   暖");
            }
            if(CTHM_SetHVACModeM2_U8==8)
            {
                HVAC_RUNmode4 = QString::number(CTHM_SetHVACModeM2_U8);
            }
            if(CTHM_SetHVACModeM2_U8==9)
            {
                HVAC_RUNmode4 = QObject::trUtf8("通  风");
            }
            if(CTHM_SetHVACModeM2_U8==10)
            {
                HVAC_RUNmode4 = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode4 = QString::number(CTHM_SetHVACModeM2_U8);

        }
    }
    else
    {
        HVAC_mode4=QObject::trUtf8("本控");
        HVAC_RUNmode4 = QObject::trUtf8("");
    }

    if (AC5CT_ControlMode_B1)
    {
        HVAC_mode5=QObject::trUtf8("集控 ");
        if(CTHM_SetHVACModeMP2_U8<11)
        {
            if(CTHM_SetHVACModeMP2_U8==0)
            {
                HVAC_RUNmode5 = QObject::trUtf8("停  止");
            }
            if(CTHM_SetHVACModeMP2_U8==1)
            {
                HVAC_RUNmode5 = QObject::trUtf8("自动制冷");
            }
            if(CTHM_SetHVACModeMP2_U8==2)
            {
                HVAC_RUNmode5 = QObject::trUtf8("半   冷");
            }
            if(CTHM_SetHVACModeMP2_U8==3)
            {
                HVAC_RUNmode5 = QObject::trUtf8("全   冷");
            }
            if(CTHM_SetHVACModeMP2_U8==4)
            {
                HVAC_RUNmode5 = QString::number(CTHM_SetHVACModeMP2_U8);
            }
            if(CTHM_SetHVACModeMP2_U8==5)
            {
                HVAC_RUNmode5 = QObject::trUtf8("自动制暖");
            }
            if(CTHM_SetHVACModeMP2_U8==6)
            {
                HVAC_RUNmode5 = QObject::trUtf8("半   暖");
            }
            if(CTHM_SetHVACModeMP2_U8==7)
            {
                HVAC_RUNmode5 = QObject::trUtf8("全   暖");
            }
            if(CTHM_SetHVACModeMP2_U8==8)
            {
                HVAC_RUNmode5 = QString::number(CTHM_SetHVACModeMP2_U8);
            }
            if(CTHM_SetHVACModeMP2_U8==9)
            {
                HVAC_RUNmode5 = QObject::trUtf8("通  风");
            }
            if(CTHM_SetHVACModeMP2_U8==10)
            {
                HVAC_RUNmode5 = QObject::trUtf8("紧急通风");
            }
        }
        else
        {
            HVAC_RUNmode5 = QString::number(CTHM_SetHVACModeMP2_U8);
        }
    }
    else
    {
        HVAC_mode5=QObject::trUtf8("本控");
        HVAC_RUNmode5 = QObject::trUtf8("");
    }


    if (AC6CT_ControlMode_B1)
    {
        HVAC_mode6=QObject::trUtf8("集控 ");
        if(CTHM_SetHVACModeTC2_U8<11)
        {
            if(CTHM_SetHVACModeTC2_U8==0)
            {
                HVAC_RUNmode6 = QObject::trUtf8("停  止");
            }
            if(CTHM_SetHVACModeTC2_U8==1)
            {
                HVAC_RUNmode6 = QObject::trUtf8("自动制冷");
            }
            if(CTHM_SetHVACModeTC2_U8==2)
            {
                HVAC_RUNmode6 = QObject::trUtf8("半   冷");
            }
            if(CTHM_SetHVACModeTC2_U8==3)
            {
                HVAC_RUNmode6 = QObject::trUtf8("全   冷");
            }
            if(CTHM_SetHVACModeTC2_U8==4)
            {
                HVAC_RUNmode6 = QString::number(CTHM_SetHVACModeTC2_U8);
            }
            if(CTHM_SetHVACModeTC2_U8==5)
            {
                HVAC_RUNmode6 = QObject::trUtf8("自动制暖");
            }
            if(CTHM_SetHVACModeTC2_U8==6)
            {
                HVAC_RUNmode6 = QObject::trUtf8("半   暖");
            }
            if(CTHM_SetHVACModeTC2_U8==7)
            {
                HVAC_RUNmode6 = QObject::trUtf8("全   暖");
            }
            if(CTHM_SetHVACModeTC2_U8==8)
            {
                HVAC_RUNmode6 = QString::number(CTHM_SetHVACModeTC2_U8);
            }
            if(CTHM_SetHVACModeTC2_U8==9)
            {
                HVAC_RUNmode6 = QObject::trUtf8("通  风");
            }
            if(CTHM_SetHVACModeTC2_U8==10)
            {
                HVAC_RUNmode6 = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode6 = QString::number(CTHM_SetHVACModeTC2_U8);

        }
    }
    else
    {
        HVAC_mode6=QObject::trUtf8("本控");
        HVAC_RUNmode6 = QObject::trUtf8("");
    }


    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR1,HVAC_mode1+" "+HVAC_RUNmode1);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR2,HVAC_mode2+" "+HVAC_RUNmode2);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR3,HVAC_mode3+" "+HVAC_RUNmode3);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR4,HVAC_mode4+" "+HVAC_RUNmode4);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR5,HVAC_mode5+" "+HVAC_RUNmode5);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR6,HVAC_mode6+" "+HVAC_RUNmode6);
}

//运行模式
void CHVACSettingPage::UpdateHVAC_RUNmode()
{
    QString HVAC_RUNmode1_Active = "";
    QString HVAC_RUNmode2_Active = "";
    QString HVAC_RUNmode3_Active = "";
    QString HVAC_RUNmode4_Active = "";
    QString HVAC_RUNmode5_Active = "";
    QString HVAC_RUNmode6_Active = "";

    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR1RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC1CT_WorkMode_U8<11)
        {
            if(AC1CT_WorkMode_U8==0)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("停  止");
            }
            if(AC1CT_WorkMode_U8==1)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("自动制冷");
            }
            if(AC1CT_WorkMode_U8==2)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("半   冷");
            }
            if(AC1CT_WorkMode_U8==3)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("全   冷");
            }
            if(AC1CT_WorkMode_U8==4)
            {
                HVAC_RUNmode1_Active = QString::number(AC1CT_WorkMode_U8);
            }
            if(AC1CT_WorkMode_U8==5)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("自动制暖");
            }
            if(AC1CT_WorkMode_U8==6)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("半   暖");
            }
            if(AC1CT_WorkMode_U8==7)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("全   暖");
            }
            if(AC1CT_WorkMode_U8==8)
            {
                HVAC_RUNmode1_Active = QString::number(AC1CT_WorkMode_U8);
            }
            if(AC1CT_WorkMode_U8==9)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("通  风");
            }
            if(AC1CT_WorkMode_U8==10)
            {
                HVAC_RUNmode1_Active = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode1_Active = QString::number(AC1CT_WorkMode_U8);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR1RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR2RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC2CT_WorkMode_U8<11)
        {
            if(AC2CT_WorkMode_U8==0)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("停  止");
            }
            if(AC2CT_WorkMode_U8==1)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("自动制冷");
            }
            if(AC2CT_WorkMode_U8==2)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("半   冷");
            }
            if(AC2CT_WorkMode_U8==3)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("全   冷");
            }
            if(AC2CT_WorkMode_U8==4)
            {
                HVAC_RUNmode2_Active = QString::number(AC2CT_WorkMode_U8);
            }
            if(AC2CT_WorkMode_U8==5)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("自动制暖");
            }
            if(AC2CT_WorkMode_U8==6)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("半   暖");
            }
            if(AC2CT_WorkMode_U8==7)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("全   暖");
            }
            if(AC2CT_WorkMode_U8==8)
            {
                HVAC_RUNmode2_Active = QString::number(AC2CT_WorkMode_U8);
            }
            if(AC2CT_WorkMode_U8==9)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("通  风");
            }
            if(AC2CT_WorkMode_U8==10)
            {
                HVAC_RUNmode2_Active = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode2_Active = QString::number(AC2CT_WorkMode_U8);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR2RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR3RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC3CT_WorkMode_U8<11)
        {
            if(AC3CT_WorkMode_U8==0)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("停  止");
            }
            if(AC3CT_WorkMode_U8==1)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("自动制冷");
            }
            if(AC3CT_WorkMode_U8==2)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("半   冷");
            }
            if(AC3CT_WorkMode_U8==3)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("全   冷");
            }
            if(AC3CT_WorkMode_U8==4)
            {
                HVAC_RUNmode3_Active = QString::number(AC3CT_WorkMode_U8);
            }
            if(AC3CT_WorkMode_U8==5)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("自动制暖");
            }
            if(AC3CT_WorkMode_U8==6)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("半   暖");
            }
            if(AC3CT_WorkMode_U8==7)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("全   暖");
            }
            if(AC3CT_WorkMode_U8==8)
            {
                HVAC_RUNmode3_Active = QString::number(AC3CT_WorkMode_U8);
            }
            if(AC3CT_WorkMode_U8==9)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("通  风");
            }
            if(AC3CT_WorkMode_U8==10)
            {
                HVAC_RUNmode3_Active = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode3_Active = QString::number(AC3CT_WorkMode_U8);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR3RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC4_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR4RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC4CT_WorkMode_U8<11)
        {
            if(AC4CT_WorkMode_U8==0)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("停  止");
            }
            if(AC4CT_WorkMode_U8==1)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("自动制冷");
            }
            if(AC4CT_WorkMode_U8==2)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("半   冷");
            }
            if(AC4CT_WorkMode_U8==3)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("全   冷");
            }
            if(AC4CT_WorkMode_U8==4)
            {
                HVAC_RUNmode4_Active = QString::number(AC4CT_WorkMode_U8);
            }
            if(AC4CT_WorkMode_U8==5)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("自动制暖");
            }
            if(AC4CT_WorkMode_U8==6)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("半   暖");
            }
            if(AC4CT_WorkMode_U8==7)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("全   暖");
            }
            if(AC4CT_WorkMode_U8==8)
            {
                HVAC_RUNmode4_Active = QString::number(AC4CT_WorkMode_U8);
            }
            if(AC4CT_WorkMode_U8==9)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("通  风");
            }
            if(AC4CT_WorkMode_U8==10)
            {
                HVAC_RUNmode4_Active = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode4_Active = QString::number(AC4CT_WorkMode_U8);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR4RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR5RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC5CT_WorkMode_U8<11)
        {
            if(AC5CT_WorkMode_U8==0)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("停  止");
            }
            if(AC5CT_WorkMode_U8==1)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("自动制冷");
            }
            if(AC5CT_WorkMode_U8==2)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("半   冷");
            }
            if(AC5CT_WorkMode_U8==3)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("全   冷");
            }
            if(AC5CT_WorkMode_U8==4)
            {
                HVAC_RUNmode5_Active = QString::number(AC5CT_WorkMode_U8);
            }
            if(AC5CT_WorkMode_U8==5)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("自动制暖");
            }
            if(AC5CT_WorkMode_U8==6)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("半   暖");
            }
            if(AC5CT_WorkMode_U8==7)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("全   暖");
            }
            if(AC5CT_WorkMode_U8==8)
            {
                HVAC_RUNmode5_Active = QString::number(AC5CT_WorkMode_U8);
            }
            if(AC5CT_WorkMode_U8==9)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("通  风");
            }
            if(AC5CT_WorkMode_U8==10)
            {
                HVAC_RUNmode5_Active = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode5_Active = QString::number(AC5CT_WorkMode_U8);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR5RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR6RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC6CT_WorkMode_U8<11)
        {
            if(AC6CT_WorkMode_U8==0)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("停  止");
            }
            if(AC6CT_WorkMode_U8==1)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("自动制冷");
            }
            if(AC6CT_WorkMode_U8==2)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("半   冷");
            }
            if(AC6CT_WorkMode_U8==3)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("全   冷");
            }
            if(AC6CT_WorkMode_U8==4)
            {
                HVAC_RUNmode6_Active = QString::number(AC6CT_WorkMode_U8);
            }
            if(AC6CT_WorkMode_U8==5)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("自动制暖");
            }
            if(AC6CT_WorkMode_U8==6)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("半   暖");
            }
            if(AC6CT_WorkMode_U8==7)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("全   暖");
            }
            if(AC6CT_WorkMode_U8==8)
            {
                HVAC_RUNmode6_Active = QString::number(AC6CT_WorkMode_U8);
            }
            if(AC6CT_WorkMode_U8==9)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("通  风");
            }
            if(AC6CT_WorkMode_U8==10)
            {
                HVAC_RUNmode6_Active = QObject::trUtf8("紧急通风");
            }

        }
        else
        {
            HVAC_RUNmode6_Active = QString::number(AC6CT_WorkMode_U8);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR6RUNMODEL))->SetCtrlBKColor(Qt::white);
    }
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR1RUNMODEL,HVAC_RUNmode1_Active);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR2RUNMODEL,HVAC_RUNmode2_Active);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR3RUNMODEL,HVAC_RUNmode3_Active);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR4RUNMODEL,HVAC_RUNmode4_Active);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR5RUNMODEL,HVAC_RUNmode5_Active);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR6RUNMODEL,HVAC_RUNmode6_Active);

}

void CHVACSettingPage::SetHVAC_mode(int lableId, QString modeValue)
{
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(modeValue);

}

//压缩机
void CHVACSettingPage::UpdateHVAC_Compressor()
{
    if(AC1CT_1_1CompressorState_B1) {car1_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::black);} else{car1_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC1CT_1_2CompressorState_B1) {car1_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::black);} else{car1_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC1CT_2_1CompressorState_B1) {car1_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::black);} else{car1_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC1CT_2_2CompressorState_B1) {car1_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::black);} else{car1_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC2CT_1_1CompressorState_B1) {car2_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::black);} else{car2_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC2CT_1_2CompressorState_B1) {car2_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::black);} else{car2_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC2CT_2_1CompressorState_B1) {car2_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::black);} else{car2_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC2CT_2_2CompressorState_B1) {car2_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::black);} else{car2_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC3CT_1_1CompressorState_B1) {car3_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::black);} else{car3_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC3CT_1_2CompressorState_B1) {car3_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::black);} else{car3_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC3CT_2_1CompressorState_B1) {car3_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::black);} else{car3_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC3CT_2_2CompressorState_B1) {car3_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::black);} else{car3_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC4CT_1_1CompressorState_B1) {car4_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::black);} else{car4_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC4CT_1_2CompressorState_B1) {car4_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::black);} else{car4_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC4CT_2_1CompressorState_B1) {car4_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::black);} else{car4_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC4CT_2_2CompressorState_B1) {car4_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::black);} else{car4_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC5CT_1_1CompressorState_B1) {car5_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::black);} else{car5_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC5CT_1_2CompressorState_B1) {car5_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::black);} else{car5_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC5CT_2_1CompressorState_B1) {car5_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::black);} else{car5_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC5CT_2_2CompressorState_B1) {car5_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::black);} else{car5_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC6CT_1_1CompressorState_B1) {car6_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::black);} else{car6_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC6CT_1_2CompressorState_B1) {car6_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::black);} else{car6_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC6CT_2_1CompressorState_B1) {car6_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::black);} else{car6_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC6CT_2_2CompressorState_B1) {car6_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::black);} else{car6_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::white);}





    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS1, car1_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS2, car1_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS3, car1_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS4, car1_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS1, car2_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS2, car2_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS3, car2_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS4, car2_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS1, car3_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS2, car3_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS3, car3_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS4, car3_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS1, car4_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS2, car4_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS3, car4_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS4, car4_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS1, car5_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS2, car5_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS3, car5_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS4, car5_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS1, car6_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS2, car6_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS3, car6_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS4, car6_Compressor4);


}
//冷凝机
void CHVACSettingPage::UpdateHVAC_Condenser()
{
    if(AC1CT_1_1CondensateState_B1) {car1_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::black);} else{car1_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::white);}
    if(AC1CT_1_2CondensateState_B1) {car1_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::black);} else{car1_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::white);}
    if(AC1CT_2_1CondensateState_B1) {car1_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::black);} else{car1_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::white);}
    if(AC1CT_2_2CondensateState_B1) {car1_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::black);} else{car1_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::white);}
    if(AC2CT_1_1CondensateState_B1) {car2_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::black);} else{car2_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::white);}
    if(AC2CT_1_2CondensateState_B1) {car2_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::black);} else{car2_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::white);}
    if(AC2CT_2_1CondensateState_B1) {car2_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::black);} else{car2_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::white);}
    if(AC2CT_2_2CondensateState_B1) {car2_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::black);} else{car2_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::white);}
    if(AC3CT_1_1CondensateState_B1) {car3_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::black);} else{car3_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::white);}
    if(AC3CT_1_2CondensateState_B1) {car3_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::black);} else{car3_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::white);}
    if(AC3CT_2_1CondensateState_B1) {car3_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::black);} else{car3_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::white);}
    if(AC3CT_2_2CondensateState_B1) {car3_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::black);} else{car3_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::white);}
    if(AC4CT_1_1CondensateState_B1) {car4_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::black);} else{car4_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::white);}
    if(AC4CT_1_2CondensateState_B1) {car4_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::black);} else{car4_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::white);}
    if(AC4CT_2_1CondensateState_B1) {car4_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::black);} else{car4_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::white);}
    if(AC4CT_2_2CondensateState_B1) {car4_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::black);} else{car4_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::white);}
    if(AC5CT_1_1CondensateState_B1) {car5_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::black);} else{car5_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::white);}
    if(AC5CT_1_2CondensateState_B1) {car5_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::black);} else{car5_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::white);}
    if(AC5CT_2_1CondensateState_B1) {car5_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::black);} else{car5_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::white);}
    if(AC5CT_2_2CondensateState_B1) {car5_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::black);} else{car5_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::white);}
    if(AC6CT_1_1CondensateState_B1) {car6_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::black);} else{car6_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::white);}
    if(AC6CT_1_2CondensateState_B1) {car6_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::black);} else{car6_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::white);}
    if(AC6CT_2_1CondensateState_B1) {car6_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::black);} else{car6_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::white);}
    if(AC6CT_2_2CondensateState_B1) {car6_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::black);} else{car6_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::white);}





    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD1, car1_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD2, car1_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD3, car1_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD4, car1_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD1, car2_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD2, car2_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD3, car2_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD4, car2_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD1, car3_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD2, car3_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD3, car3_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD4, car3_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD1, car4_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD2, car4_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD3, car4_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD4, car4_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD1, car5_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD2, car5_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD3, car5_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD4, car5_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD1, car6_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD2, car6_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD3, car6_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD4, car6_Condenser4);


}
//通风机
void CHVACSettingPage::UpdateHVAC_EvaporatorFan()
{
    if(AC1CT_1_1FanState_B1) {car1_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::white);}
    if(AC1CT_1_2FanState_B1) {car1_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::white);}
    if(AC1CT_2_1FanState_B1) {car1_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::white);}
    if(AC1CT_2_2FanState_B1) {car1_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::white);}
    if(AC2CT_1_1FanState_B1) {car2_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::white);}
    if(AC2CT_1_2FanState_B1) {car2_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::white);}
    if(AC2CT_2_1FanState_B1) {car2_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::white);}
    if(AC2CT_2_2FanState_B1) {car2_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::white);}
    if(AC3CT_1_1FanState_B1) {car3_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::white);}
    if(AC3CT_1_2FanState_B1) {car3_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::white);}
    if(AC3CT_2_1FanState_B1) {car3_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::white);}
    if(AC3CT_2_2FanState_B1) {car3_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::white);}
    if(AC4CT_1_1FanState_B1) {car4_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::white);}
    if(AC4CT_1_2FanState_B1) {car4_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::white);}
    if(AC4CT_2_1FanState_B1) {car4_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::white);}
    if(AC4CT_2_2FanState_B1) {car4_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::white);}
    if(AC5CT_1_1FanState_B1) {car5_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::white);}
    if(AC5CT_1_2FanState_B1) {car5_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::white);}
    if(AC5CT_2_1FanState_B1) {car5_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::white);}
    if(AC5CT_2_2FanState_B1) {car5_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::white);}
    if(AC6CT_1_1FanState_B1) {car6_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::white);}
    if(AC6CT_1_2FanState_B1) {car6_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::white);}
    if(AC6CT_2_1FanState_B1) {car6_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::white);}
    if(AC6CT_2_2FanState_B1) {car6_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::white);}





    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND1, car1_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND2, car1_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND3, car1_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND4, car1_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND1, car2_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND2, car2_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND3, car2_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND4, car2_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND1, car3_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND2, car3_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND3, car3_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND4, car3_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND1, car4_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND2, car4_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND3, car4_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND4, car4_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND1, car5_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND2, car5_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND3, car5_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND4, car5_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND1, car6_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND2, car6_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND3, car6_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND4, car6_EvaporatorFan4);


}
//预热器
void CHVACSettingPage::UpdateHVAC_HotElectricity()
{
    if(AC1CT_1_1PreHeaterState_B1) {car1_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT1))->SetTxtColor(Qt::black);} else{car1_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT1))->SetTxtColor(Qt::white);}
    if(AC1CT_1_2PreHeaterState_B1) {car1_HotElectricity2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT2))->SetTxtColor(Qt::black);} else{car1_HotElectricity2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT2))->SetTxtColor(Qt::white);}
    if(AC1CT_2_1PreHeaterState_B1) {car1_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT3))->SetTxtColor(Qt::black);} else{car1_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT3))->SetTxtColor(Qt::white);}
    if(AC1CT_2_2PreHeaterState_B1) {car1_HotElectricity4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT4))->SetTxtColor(Qt::black);} else{car1_HotElectricity4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT4))->SetTxtColor(Qt::white);}
    if(AC2CT_1_1PreHeaterState_B1) {car2_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT1))->SetTxtColor(Qt::black);} else{car2_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT1))->SetTxtColor(Qt::white);}
    if(AC2CT_1_2PreHeaterState_B1) {car2_HotElectricity2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT2))->SetTxtColor(Qt::black);} else{car2_HotElectricity2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT2))->SetTxtColor(Qt::white);}
    if(AC2CT_2_1PreHeaterState_B1) {car2_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT3))->SetTxtColor(Qt::black);} else{car2_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT3))->SetTxtColor(Qt::white);}
    if(AC2CT_2_2PreHeaterState_B1) {car2_HotElectricity4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT4))->SetTxtColor(Qt::black);} else{car2_HotElectricity4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT4))->SetTxtColor(Qt::white);}
    if(AC3CT_1_1PreHeaterState_B1) {car3_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT1))->SetTxtColor(Qt::black);} else{car3_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT1))->SetTxtColor(Qt::white);}
    if(AC3CT_1_2PreHeaterState_B1) {car3_HotElectricity2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT2))->SetTxtColor(Qt::black);} else{car3_HotElectricity2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT2))->SetTxtColor(Qt::white);}
    if(AC3CT_2_1PreHeaterState_B1) {car3_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT3))->SetTxtColor(Qt::black);} else{car3_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT3))->SetTxtColor(Qt::white);}
    if(AC3CT_2_2PreHeaterState_B1) {car3_HotElectricity4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT4))->SetTxtColor(Qt::black);} else{car3_HotElectricity4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT4))->SetTxtColor(Qt::white);}
    if(AC4CT_1_1PreHeaterState_B1) {car4_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT1))->SetTxtColor(Qt::black);} else{car4_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT1))->SetTxtColor(Qt::white);}
    if(AC4CT_1_2PreHeaterState_B1) {car4_HotElectricity2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT2))->SetTxtColor(Qt::black);} else{car4_HotElectricity2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT2))->SetTxtColor(Qt::white);}
    if(AC4CT_2_1PreHeaterState_B1) {car4_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT3))->SetTxtColor(Qt::black);} else{car4_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT3))->SetTxtColor(Qt::white);}
    if(AC4CT_2_2PreHeaterState_B1) {car4_HotElectricity4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT4))->SetTxtColor(Qt::black);} else{car4_HotElectricity4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT4))->SetTxtColor(Qt::white);}
    if(AC5CT_1_1PreHeaterState_B1) {car5_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT1))->SetTxtColor(Qt::black);} else{car5_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT1))->SetTxtColor(Qt::white);}
    if(AC5CT_1_2PreHeaterState_B1) {car5_HotElectricity2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT2))->SetTxtColor(Qt::black);} else{car5_HotElectricity2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT2))->SetTxtColor(Qt::white);}
    if(AC5CT_2_1PreHeaterState_B1) {car5_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT3))->SetTxtColor(Qt::black);} else{car5_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT3))->SetTxtColor(Qt::white);}
    if(AC5CT_2_2PreHeaterState_B1) {car5_HotElectricity4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT4))->SetTxtColor(Qt::black);} else{car5_HotElectricity4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT4))->SetTxtColor(Qt::white);}
    if(AC6CT_1_1PreHeaterState_B1) {car6_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT1))->SetTxtColor(Qt::black);} else{car6_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT1))->SetTxtColor(Qt::white);}
    if(AC6CT_1_2PreHeaterState_B1) {car6_HotElectricity2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT2))->SetTxtColor(Qt::black);} else{car6_HotElectricity2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT2))->SetTxtColor(Qt::white);}
    if(AC6CT_2_1PreHeaterState_B1) {car6_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT3))->SetTxtColor(Qt::black);} else{car6_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT3))->SetTxtColor(Qt::white);}
    if(AC6CT_2_2PreHeaterState_B1) {car6_HotElectricity4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT4))->SetTxtColor(Qt::black);} else{car6_HotElectricity4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT4))->SetTxtColor(Qt::white);}





    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1HEAT1, car1_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1HEAT2, car1_HotElectricity2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1HEAT3, car1_HotElectricity3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1HEAT4, car1_HotElectricity4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2HEAT1, car2_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2HEAT2, car2_HotElectricity2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2HEAT3, car2_HotElectricity3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2HEAT4, car2_HotElectricity4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3HEAT1, car3_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3HEAT2, car3_HotElectricity2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3HEAT3, car3_HotElectricity3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3HEAT4, car3_HotElectricity4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4HEAT1, car4_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4HEAT2, car4_HotElectricity2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4HEAT3, car4_HotElectricity3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4HEAT4, car4_HotElectricity4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5HEAT1, car5_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5HEAT2, car5_HotElectricity2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5HEAT3, car5_HotElectricity3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5HEAT4, car5_HotElectricity4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6HEAT1, car6_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6HEAT2, car6_HotElectricity2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6HEAT3, car6_HotElectricity3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6HEAT4, car6_HotElectricity4);


}

void CHVACSettingPage::SetHVACStateColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CHVACSettingPage::UpdateHVACError()
{

    car1_HVAC_error1=Bit( hvac_status_data20, 16 )||(Bit( hvac_status_data20, 12 ))||(Bit( hvac_status_data20, 8 ))||(Bit( hvac_status_data20, 4 ))||(Bit( hvac_status_data28, 16 ))||(Bit( hvac_status_data28, 12 ))||(Bit( hvac_status_data28, 8 ));
    car1_HVAC_error2=Bit( hvac_status_data20, 15 )||(Bit( hvac_status_data20, 11 ))||(Bit( hvac_status_data20, 7 ))||(Bit( hvac_status_data20, 3 ))||(Bit( hvac_status_data28, 15 ))||(Bit( hvac_status_data28, 11 ))||(Bit( hvac_status_data28, 7 ));
    car1_HVAC_error3=Bit( hvac_status_data20, 14 )||(Bit( hvac_status_data20, 10 ))||(Bit( hvac_status_data20, 6 ))||(Bit( hvac_status_data20, 2 ))||(Bit( hvac_status_data28, 14))||(Bit( hvac_status_data28, 10 ))||(Bit( hvac_status_data28, 6 ));
    car1_HVAC_error4=Bit( hvac_status_data20, 13)||(Bit( hvac_status_data20, 9 ))||(Bit( hvac_status_data20, 5 ))||(Bit( hvac_status_data20, 1 ))||(Bit( hvac_status_data28, 13))||(Bit( hvac_status_data28, 9 ))||(Bit( hvac_status_data28, 5 ));

    car2_HVAC_error1=Bit( hvac_status_data21, 16 )||(Bit( hvac_status_data21, 12 ))||(Bit( hvac_status_data21, 8 ))||(Bit( hvac_status_data21, 4 ))||(Bit( hvac_status_data29, 16 ))||(Bit( hvac_status_data29, 12 ))||(Bit( hvac_status_data29, 8 ));
    car2_HVAC_error2=Bit( hvac_status_data21, 15 )||(Bit( hvac_status_data21, 11 ))||(Bit( hvac_status_data21, 7 ))||(Bit( hvac_status_data21, 3 ))||(Bit( hvac_status_data29, 15 ))||(Bit( hvac_status_data29, 11 ))||(Bit( hvac_status_data29, 7 ));
    car2_HVAC_error3=Bit( hvac_status_data21, 14 )||(Bit( hvac_status_data21, 10 ))||(Bit( hvac_status_data21, 6 ))||(Bit( hvac_status_data21, 2 ))||(Bit( hvac_status_data29, 14))||(Bit( hvac_status_data29, 10 ))||(Bit( hvac_status_data29, 6 ));
    car2_HVAC_error4=Bit( hvac_status_data21, 13)||(Bit( hvac_status_data21, 9 ))||(Bit( hvac_status_data21, 5 ))||(Bit( hvac_status_data21, 1 ))||(Bit( hvac_status_data29, 13))||(Bit( hvac_status_data29, 9 ))||(Bit( hvac_status_data29, 5 ));

    car3_HVAC_error1=Bit( hvac_status_data22, 16 )||(Bit( hvac_status_data22, 12 ))||(Bit( hvac_status_data22, 8 ))||(Bit( hvac_status_data22, 4 ))||(Bit( hvac_status_data30, 16 ))||(Bit( hvac_status_data30, 12 ))||(Bit( hvac_status_data30, 8 ));
    car3_HVAC_error2=Bit( hvac_status_data22, 15 )||(Bit( hvac_status_data22, 11 ))||(Bit( hvac_status_data22, 7 ))||(Bit( hvac_status_data22, 3 ))||(Bit( hvac_status_data30, 15 ))||(Bit( hvac_status_data30, 11 ))||(Bit( hvac_status_data30, 7 ));
    car3_HVAC_error3=Bit( hvac_status_data22, 14 )||(Bit( hvac_status_data22, 10 ))||(Bit( hvac_status_data22, 6 ))||(Bit( hvac_status_data22, 2 ))||(Bit( hvac_status_data30, 14))||(Bit( hvac_status_data30, 10 ))||(Bit( hvac_status_data30, 6 ));
    car3_HVAC_error4=Bit( hvac_status_data22, 13)||(Bit( hvac_status_data22, 9 ))||(Bit( hvac_status_data22, 5 ))||(Bit( hvac_status_data22, 1 ))||(Bit( hvac_status_data30, 13))||(Bit( hvac_status_data30, 9 ))||(Bit( hvac_status_data30, 5 ));

    car4_HVAC_error1=Bit( hvac_status_data23, 16 )||(Bit( hvac_status_data23, 12 ))||(Bit( hvac_status_data23, 8 ))||(Bit( hvac_status_data23, 4 ))||(Bit( hvac_status_data31, 16 ))||(Bit( hvac_status_data31, 12 ))||(Bit( hvac_status_data31, 8 ));
    car4_HVAC_error2=Bit( hvac_status_data23, 15 )||(Bit( hvac_status_data23, 11 ))||(Bit( hvac_status_data23, 7 ))||(Bit( hvac_status_data23, 3 ))||(Bit( hvac_status_data31, 15 ))||(Bit( hvac_status_data31, 11 ))||(Bit( hvac_status_data31, 7 ));
    car4_HVAC_error3=Bit( hvac_status_data23, 14 )||(Bit( hvac_status_data23, 10 ))||(Bit( hvac_status_data23, 6 ))||(Bit( hvac_status_data23, 2 ))||(Bit( hvac_status_data31, 14))||(Bit( hvac_status_data31, 10 ))||(Bit( hvac_status_data31, 6 ));
    car4_HVAC_error4=Bit( hvac_status_data23, 13)||(Bit( hvac_status_data23, 9 ))||(Bit( hvac_status_data23, 5 ))||(Bit( hvac_status_data23, 1 ))||(Bit( hvac_status_data31, 13))||(Bit( hvac_status_data31, 9 ))||(Bit( hvac_status_data31, 5 ));

    car5_HVAC_error1=Bit( hvac_status_data24, 16 )||(Bit( hvac_status_data24, 12 ))||(Bit( hvac_status_data24, 8 ))||(Bit( hvac_status_data24, 4 ))||(Bit( hvac_status_data32, 16 ))||(Bit( hvac_status_data32, 12 ))||(Bit( hvac_status_data32, 8 ));
    car5_HVAC_error2=Bit( hvac_status_data24, 15 )||(Bit( hvac_status_data24, 11 ))||(Bit( hvac_status_data24, 7 ))||(Bit( hvac_status_data24, 3 ))||(Bit( hvac_status_data32, 15 ))||(Bit( hvac_status_data32, 11 ))||(Bit( hvac_status_data32, 7 ));
    car5_HVAC_error3=Bit( hvac_status_data24, 14 )||(Bit( hvac_status_data24, 10 ))||(Bit( hvac_status_data24, 6 ))||(Bit( hvac_status_data24, 2 ))||(Bit( hvac_status_data32, 14))||(Bit( hvac_status_data32, 10 ))||(Bit( hvac_status_data32, 6 ));
    car5_HVAC_error4=Bit( hvac_status_data24, 13)||(Bit( hvac_status_data24, 9 ))||(Bit( hvac_status_data24, 5 ))||(Bit( hvac_status_data24, 1 ))||(Bit( hvac_status_data32, 13))||(Bit( hvac_status_data32, 9 ))||(Bit( hvac_status_data32, 5 ));

    car6_HVAC_error1=Bit( hvac_status_data26, 16 )||(Bit( hvac_status_data26, 12 ))||(Bit( hvac_status_data26, 8 ))||(Bit( hvac_status_data26, 4 ))||(Bit( hvac_status_data33, 16 ))||(Bit( hvac_status_data33, 12 ))||(Bit( hvac_status_data33, 8 ));
    car6_HVAC_error2=Bit( hvac_status_data26, 15 )||(Bit( hvac_status_data26, 11 ))||(Bit( hvac_status_data26, 7 ))||(Bit( hvac_status_data26, 3 ))||(Bit( hvac_status_data33, 15 ))||(Bit( hvac_status_data33, 11 ))||(Bit( hvac_status_data33, 7 ));
    car6_HVAC_error3=Bit( hvac_status_data26, 14 )||(Bit( hvac_status_data26, 10 ))||(Bit( hvac_status_data26, 6 ))||(Bit( hvac_status_data26, 2 ))||(Bit( hvac_status_data33, 14))||(Bit( hvac_status_data33, 10 ))||(Bit( hvac_status_data33, 6 ));
    car6_HVAC_error4=Bit( hvac_status_data26, 13)||(Bit( hvac_status_data26, 9 ))||(Bit( hvac_status_data26, 5 ))||(Bit( hvac_status_data26, 1 ))||(Bit( hvac_status_data33, 13))||(Bit( hvac_status_data33, 9 ))||(Bit( hvac_status_data33, 5 ));
}
//当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
void CHVACSettingPage::SetCtrlButtonState(int nID)
{
    int nIDArray[] =
    {
        ID_CHVACSET_BUTTON_STRONGCOLD,
        ID_CHVACSET_BUTTON_WEAKCOLD,
        ID_CHVACSET_BUTTON_AUTOCOLD,
        ID_CHVACSET_BUTTON_AMERGEWIND,
        ID_CHVACSET_BUTTON_FULLWARM,
        ID_CHVACSET_BUTTON_HALFWARM,
        ID_CHVACSET_BUTTON_AUTOWARM,
        ID_CHVACSET_BUTTON_WIND,
        ID_CHVACSET_BUTTON_STOP,
        ID_CHVACSET_BUTTON_CONFIRM
    };

    ((CButton*)GetDlgItem(nID))->ChangeButtonState(LBUTTON_DOWN);

   for (int i = 0; i <10; i++)
   {
       if (nID != nIDArray[i])
          ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
   }
}
//模式按钮设置完成弹起后，所有按钮恢复可按状态，并且判断是否处于自动制冷、自动制暖状态，
//如果处于自动制冷、自动制暖状态则显示设置温度，并且可以改变温度
void CHVACSettingPage::ReSetCtrlButtonState()
{
    int nIDArray[] =
    {
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
    };


   for (int i = 0; i < 9; i++)
   {
      ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
   }
   //m_bAutoTempV  只有自动制冷，自动制暖模式下 才可以设置温度
   if(m_bAutoTempV && Bit(HVAC_command_hide,0))
   {
       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
   }
}

void CHVACSettingPage::updateTempV()
{
    if (m_bAutoTempV && Bit(HVAC_command_hide,0))
    {

        if (HVAC_state==QObject::trUtf8("自动制冷")||HVAC_state==QObject::trUtf8("自动制暖"))
        {
            if (HVAC_state==QObject::trUtf8("自动制冷"))
            {
                ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString::number(setting_temp,'f',0).append(QObject::trUtf8(" ℃")));
            }
            if (HVAC_state==QObject::trUtf8("自动制暖"))
            {
                ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString::number(setting_temp2,'f',0).append(QObject::trUtf8(" ℃")));
            }

        }
        else
        {
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QObject::trUtf8("    ℃"));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QObject::trUtf8("    ℃"));
    }
}

void CHVACSettingPage::SpecialButtonState()
{
    //m_bAutoTempV  只有自动制冷，自动制暖模式下 才可以设置温度
    if(m_bAutoTempV && Bit(HVAC_command_hide,0))
    {
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
    }
}


void CHVACSettingPage::UpdateHVAC_NewWind()
{
    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
    {
        car1_NewWind1=1;
        if(Bit( HVAC_810_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_810_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_810_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_810_9, 12 ))
        {
            car1_NewWind1=0;
        }
        else
        {
            car1_NewWind1=3;
        }

    }
    if(Bit( HVAC_810_9, 1 )||Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 ))
    {
        car1_NewWind2=1;
        if(Bit( HVAC_810_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_810_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_810_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_810_9, 11 ))
        {
            car1_NewWind2=0;
        }
        else
        {
            car1_NewWind2=3;
        }

    }
    if(Bit( HVAC_820_9, 2)||Bit( HVAC_820_9, 16)||Bit( HVAC_820_9, 14 ))
    {
        car2_NewWind1=1;
        if(Bit( HVAC_820_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_820_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_820_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_820_9, 12 ))
        {
            car2_NewWind1=0;
        }
        else
        {
            car2_NewWind1=3;
        }


    }
    if(Bit( HVAC_820_9, 1 )||Bit( HVAC_820_9, 15 )||Bit( HVAC_820_9, 13 ))
    {
        car2_NewWind2=1;
        if(Bit( HVAC_820_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_820_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_820_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_820_9, 11 ))
        {
            car2_NewWind2=0;
        }
        else
        {
            car2_NewWind2=3;
        }


    }
    if(Bit( HVAC_830_9, 2)||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
    {
        car3_NewWind1=1;
        if(Bit( HVAC_830_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_830_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_830_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_830_9, 12 ))
        {
            car3_NewWind1=0;
        }
        else
        {
            car3_NewWind1=3;
        }


    }
    if(Bit( HVAC_830_9, 1 )||Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 ))
    {
        car3_NewWind2=1;
        if(Bit( HVAC_830_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_830_9, 15))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_830_9, 13))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_830_9, 11 ))
        {
            car3_NewWind2=0;
        }
        else
        {
            car3_NewWind2=3;
        }


    }
    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 2 ))
    {
        car4_NewWind1=1;
        if(Bit( HVAC_840_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_840_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_840_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_840_9, 12 ))
        {
            car4_NewWind1=0;
        }
        else
        {
            car4_NewWind1=3;
        }


    }
    if(Bit( HVAC_840_9, 1 )||Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 ))
    {
        car4_NewWind2=1;
        if(Bit( HVAC_840_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_840_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_840_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_840_9, 11 ))
        {
            car4_NewWind2=0;
        }
        else
        {
            car4_NewWind2=3;
        }


    }
    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 2 ))
    {
        car5_NewWind1=1;
        if(Bit( HVAC_850_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_850_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_850_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_850_9, 12 ))
        {
            car5_NewWind1=0;
        }
        else
        {
            car5_NewWind1=3;
        }


    }
    if(Bit( HVAC_850_9, 1 )||Bit( HVAC_850_9, 15 )||Bit( HVAC_850_9, 13 ))
    {
        car5_NewWind2=1;
        if(Bit( HVAC_850_9, 1))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_850_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_850_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_850_9, 11 ))
        {
            car5_NewWind2=0;
        }
        else
        {
            car5_NewWind2=3;
        }


    }
    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 2 ))
    {
        car6_NewWind1=1;
        if(Bit( HVAC_860_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_860_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_860_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_860_9, 12))
        {
            car6_NewWind1=0;
        }
        else
        {
            car6_NewWind1=3;
        }


    }
    if(Bit( HVAC_860_9, 1 )||Bit( HVAC_860_9, 15 )||Bit( HVAC_860_9, 13 ))
    {
        car6_NewWind2=1;
        if(Bit( HVAC_860_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_860_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_860_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_860_9, 11))
        {
            car6_NewWind2=0;
        }
        else
        {
            car6_NewWind2=3;
        }


    }
    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 2 ))
    {
        car7_NewWind1=1;
        if(Bit( HVAC_870_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_870_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_870_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_870_9, 12))
        {
            car7_NewWind1=0;
        }
        else
        {
            car7_NewWind1=3;
        }


    }
    if(Bit( HVAC_870_9, 1 )||Bit( HVAC_870_9, 15 )||Bit( HVAC_870_9, 13 ))
    {
        car7_NewWind2=1;
        if(Bit( HVAC_870_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_870_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_870_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_870_9, 11))
        {
            car7_NewWind2=0;
        }
        else
        {
            car7_NewWind2=3;
        }


    }
    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 2 ))
    {
        car8_NewWind1=1;
        if(Bit( HVAC_880_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_880_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_880_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_880_9, 12))
        {
            car8_NewWind1=0;
        }
        else
        {
            car8_NewWind1=3;
        }


    }
    if(Bit( HVAC_880_9, 1 )||Bit( HVAC_880_9, 15 )||Bit( HVAC_880_9, 13 ))
    {
        car8_NewWind2=1;
        if(Bit( HVAC_880_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_880_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_880_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_880_9, 11))
        {
            car8_NewWind2=0;
        }
        else
        {
            car8_NewWind2=3;
        }


    }
    if(Bit( HVAC_810_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car1_NewWind1=2;
    }
    if(Bit( HVAC_810_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car1_NewWind2=2;
    }

    if(Bit( HVAC_820_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car2_NewWind1=2;
    }
    if(Bit( HVAC_820_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car2_NewWind2=2;
    }

    if(Bit( HVAC_830_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car3_NewWind1=2;
    }
    if(Bit( HVAC_830_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car3_NewWind2=2;
    }

    if(Bit( HVAC_840_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car4_NewWind1=2;
    }
    if(Bit( HVAC_840_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car4_NewWind2=2;
    }

    if(Bit( HVAC_850_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car5_NewWind1=2;
    }
    if(Bit( HVAC_850_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car5_NewWind2=2;
    }

    if(Bit( HVAC_860_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car6_NewWind1=2;
    }
    if(Bit( HVAC_860_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car6_NewWind2=2;
    }

    if(Bit( HVAC_870_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car7_NewWind1=2;
    }
    if(Bit( HVAC_870_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car7_NewWind2=2;
    }

    if(Bit( HVAC_880_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car8_NewWind1=2;
    }
    if(Bit( HVAC_880_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car8_NewWind2=2;
    }

//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);
}

void CHVACSettingPage::UpdateEmergencyMode()
{



}

/*
void CHVACSettingPage::UpdateHVAC_NewWind()
{
//    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 )||Bit( HVAC_810_9, 14 ))
//    {
//        car1_NewWind1=1;
//        if(Bit( HVAC_810_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_810_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car1_NewWind1=0;
//    }
//    if(Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
//    {
//        car1_NewWind2=1;
//        if(Bit( HVAC_810_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_810_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car1_NewWind2=0;
//    }
//    if(Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 )||Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 ))
//    {
//        car2_NewWind1=1;
//        if(Bit( HVAC_820_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_820_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car2_NewWind1=0;

//    }
//    if(Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 )||Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 ))
//    {
//        car2_NewWind2=1;
//        if(Bit( HVAC_820_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_820_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car2_NewWind2=0;

//    }
//    if(Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 )||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
//    {
//        car3_NewWind1=1;
//        if(Bit( HVAC_830_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_830_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car3_NewWind1=0;

//    }
//    if(Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 )||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
//    {
//        car3_NewWind2=1;
//        if(Bit( HVAC_830_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_830_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car3_NewWind2=0;

//    }
//    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 ))
//    {
//        car4_NewWind1=1;
//        if(Bit( HVAC_840_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_810_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car4_NewWind1=0;

//    }
//    if(Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 )||Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 ))
//    {
//        car4_NewWind2=1;
//        if(Bit( HVAC_840_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_840_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car4_NewWind2=0;

//    }
//    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 ))
//    {
//        car5_NewWind1=1;
//        if(Bit( HVAC_850_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_850_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car5_NewWind1=0;

//    }
//    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 ))
//    {
//        car5_NewWind2=1;
//        if(Bit( HVAC_850_7, 15))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_850_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car5_NewWind2=0;

//    }
//    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 ))
//    {
//        car6_NewWind1=1;
//        if(Bit( HVAC_860_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_860_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car6_NewWind1=0;

//    }
//    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 ))
//    {
//        car6_NewWind2=1;
//        if(Bit( HVAC_860_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_860_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car6_NewWind2=0;

//    }
//    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 ))
//    {
//        car7_NewWind1=1;
//        if(Bit( HVAC_870_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_870_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car7_NewWind1=0;

//    }
//    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 ))
//    {
//        car7_NewWind2=1;
//        if(Bit( HVAC_870_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_870_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car7_NewWind2=0;

//    }
//    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 ))
//    {
//        car8_NewWind1=1;
//        if(Bit( HVAC_880_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_880_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car8_NewWind1=0;

//    }
//    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 ))
//    {
//        car8_NewWind2=1;
//        if(Bit( HVAC_880_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("全开"));
//        }
//        if(Bit( HVAC_880_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("半开"));
//        }

//    }
//    else
//    {
//            car8_NewWind2=0;

//    }

//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);
}
*/

