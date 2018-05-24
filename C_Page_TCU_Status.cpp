#include "C_Page_TCU_Status.h"

ROMDATA g_PicRom_CarStatus2[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QObject::trUtf8("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEUP             },
#endif

#ifdef PAGE_HEADER_NEW
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("牵引状态") )
//    {"",                          D_FONT_BOLD(4),       QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS2_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS2_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS2_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("牵引") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS2_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS2_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS2_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

        {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS2_COMMINTERRUPT          },
        {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_V                },

        {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_A                },

        {QObject::trUtf8("牵引*制动级位"),          D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TRACTIONMODEL    },

        {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_SPEED            },

        {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCARS2_ICON_WARNNING          },
        {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCARS2_TRAIN                  },
        {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS2_ARROW_RIGHT            },
        {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS2_ARROW_LEFT             },

#endif


    {"",                          D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(700-1, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(204, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBCARS2_LABEL_CARNUMBER2        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(304, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBCARS2_LABEL_CARNUMBER3         },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(404, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBCARS2_LABEL_CARNUMBER4        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(504, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBCARS2_LABEL_CARNUMBER5         },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("牵引系统状态"),          D_FONT_BOLD(6),      QRect( 11, 183, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DCU主断允许"),           D_FONT_BOLD(6),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("主断状态"),           D_FONT_BOLD(6),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("牵引/电制动力"),           D_FONT_BOLD(4),       QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电制动能力"),             D_FONT_BOLD(6),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电网电压"),            D_FONT_BOLD(6),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("逆变电流"),             D_FONT_BOLD(6),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("模块1制动\n电阻斩波电流"),         D_FONT_BOLD(4),      QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("模块2制动\n电阻斩波电流"),         D_FONT_BOLD(4),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("MCC启/停指令"),                D_FONT_BOLD(6),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(103, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(253, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    //DCU Main cut enable
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 213,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2DCUMAINCUTENABLE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3DCUMAINCUTENABLE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4DCUMAINCUTENABLE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5DCUMAINCUTENABLE        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


   //Main cut state
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 243,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2MAINCUTSTATE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3MAINCUTSTATE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4MAINCUTSTATE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5MAINCUTSTATE        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


   //RealTracOrBrakeForce
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 273,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2REALTRAORBRKF        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3REALTRAORBRKF        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4REALTRAORBRKF        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5REALTRAORBRKF        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


   //Electric brake force
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 303,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2ELECTBRKF        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3ELECTBRKF        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4ELECTBRKF        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5ELECTBRKF        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //Line voltage
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2LINEVOLTAGE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3LINEVOLTAGE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4LINEVOLTAGE        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5LINEVOLTAGE        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //Inverse current
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2INVERSECURRENT        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3INVERSECURRENT        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4INVERSECURRENT        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5INVERSECURRENT        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //Current chop 1
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 393,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2CURRENTCHOP1        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3CURRENTCHOP1        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4CURRENTCHOP1        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5CURRENTCHOP1        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //Current chop 2
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 423,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2CURRENTCHOP2        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3CURRENTCHOP2        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4CURRENTCHOP2        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5CURRENTCHOP2        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 423,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //MCC start or stop cmd
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 453,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA2MCCSTARTORSTOPCMB        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA3MCCSTARTORSTOPCMB        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA4MCCSTARTORSTOPCMB        },
   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_CRA5MCCSTARTORSTOPCMB        },
   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 453,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },



    //HSCB
    //{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104,213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA4HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA5HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6HSCBSTATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA7HSCBSTATUS        },
    //{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 243,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

   // {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 273,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

    // 牵引制动力
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(178, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE     },
    //{QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(204, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE     },
    //{QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(304, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE     },
    //{QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(404, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE     },
    //{QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(504, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE     },
//    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE     },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },

//逆变电流
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 333,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },


//    // FCC
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA4KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA5KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6KCCCSTATE         },
////    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA7KCCCSTATE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(604, 333,  70,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },



    //电机转速
    //{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(178, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2DYNAMOREV        },
    //{QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3DYNAMOREV        },
    //{QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA4DYNAMOREV        },
    //{QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA5DYNAMOREV        },
    //{QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6DYNAMOREV        },
//    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA7DYNAMOREV        },
   // {QObject::trUtf8("-- --"),                     D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },


    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    //预留
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(103, 423,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(603, 423,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(103, 453,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(603, 453,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

//    // k750
//    {QObject::trUtf8("- -"),              D_FONT_BOLD(6),      QRect(103, 361,  94,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("受电弓位"),                 D_FONT_BOLD(6),      QRect(203, 365,  94,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR1IESSTATE         },
////    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("受电弓位"),                 D_FONT_BOLD(6),      QRect(328, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR4IESSTATE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 361,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("接地位"),                 D_FONT_BOLD(6),      QRect(503, 365,  94,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR8IESSTATE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(603, 361,  94,  28),           Qt::white,                Qt::transparent,             CONTROL_LABEL,           ID_IGNORE        },

    //ATC
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(103, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA1ATC1STATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(139, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA1ATC2STATUS        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(628, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6ATC1STATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(664, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6ATC2STATUS        },

    // 主熔断器状态
 //   {"",                          D_FONT_BOLD(6),      QRect(138, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(250, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(288, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(363, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(438, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(513, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(550, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(663, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


//    {QObject::trUtf8("- -"),                    D_FONT_BOLD(6),      QRect(103, 393,  94,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(203, 393, 42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2Mainfuse1         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(253, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2Mainfuse2         },
////    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(253, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR4Mainfuse1         },
////    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(365, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR4Mainfuse2         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
///*    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         }*/
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(503, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR7Mainfuse1         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(553, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR7Mainfuse2         },
//    {QObject::trUtf8("- -"),                    D_FONT_BOLD(6),      QRect(603, 395,  94,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },



//  //  {QObject::trUtf8("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_ATOMODE               },
//    {QObject::trUtf8("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_NETMODE               },
//    {QObject::trUtf8("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CONTRAVARIANTMODE     },
//    {QObject::trUtf8("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_WASHCARMODE           },
////    {QObject::trUtf8("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),           Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBCARS2_BUTTON_EMERGENCYRESCUE      },


    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_ATOMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_NETMODE         },
    {QObject::trUtf8("逆变模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CONTRAVARIANTMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_WASHCARMODE         },
   // {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TOWMODE         },
    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYRESCUE         },
        {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST         },
//    {QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_FASPAGE         },
//    //  {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST         },


{QObject::trUtf8("旁路"),          D_FONT_BOLD(8),      QRect( 720, 190, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBTCU_1_LABEL_ByPass         },
{QObject::trUtf8("烟火"),          D_FONT_BOLD(8),      QRect(720, 250, 60,  40),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBTCU_1_LABEL_FAS_status         },
//{QObject::trUtf8("电制动\n已切除"),   D_FONT_BOLD(8),      QRect(720, 310, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,            ID_PIBTCU_1_LABEL_DisEBTest         },


    {QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_FASPAGE         },
    //{QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE_BUTTON_FASPAGE         },
    {QObject::trUtf8("下一页"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,              ID_PIBCARS2_BUTTON_PGDN         },


//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEDOWN            },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEUP              },

};
int g_CarStatus2RomLen = sizeof(g_PicRom_CarStatus2)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCarStatus2Page,CPage)
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
        ON_BTNCLK(  ID_PIBCARS2_BUTTON_PAGEUP, OnPageUpBtnClk)
        ON_BTNCLK(  ID_PIBCARS2_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif


    //    ON_BTNCLK(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS2_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBCARS2_BUTTON_FASPAGE, OnFASpageBtnClk)
        ON_BTNCLK(ID_PIBCARS2_BUTTON_PGDN, OnPageDownBtnClk)
         ON_BTNCLK(ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST ,OnBroadCastBtnClk)
END_MESSAGE_MAP()

CCarStatus2Page::CCarStatus2Page()
{
}

void CCarStatus2Page::OnUpdatePage()
{


    updateTrain(ID_PIBCARS2_TRAIN);
    updateArrow(ID_PIBCARS2_ARROW_LEFT,ID_PIBCARS2_ARROW_RIGHT);
    updateErrorLine(ID_PIBCARS2_TRAIN);


       UpdateByPass_Hide();
       UpdateTCU_Online();
       UpdateDCUMainCutEnable();
       UpdateMainCutState();
       UpdateRealTracOrBrakeF();
       UpdateElecBRKF();
       UpdateLineVoltage();
       UpdateInverseCurrent();
       UpdateCurrentChop1();
       UpdateCurrentChop2();
       UpdateMCCStartOrStopCmd();

    //UpdateHSCB();
    UpdateKIC();
    UpdateKCCC();

    //UpdateDrawBCUForce();
    //UpdateDynamorev();
    UpdateMainfuse();
    UpdateIES();
    UpdateATOMode();

    UpdateNETMode();
    UpdateContravariant();
    UpdateWashCarMode();
    UpdateTowMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    UpdateTcu_Enable();
    UpdateTCUStatus();

#ifdef PAGE_HEADER_OLD
    //    UpdateEmergencyBroadcast();

    UpdateCommInterrupt(ID_PIBCARS2_COMMINTERRUPT);

    updateFault(ID_PIBCARS2_ICON_WARNNING);

#endif

}



void CCarStatus2Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif
//    ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->SetBorderColor(Qt::white);

}

void CCarStatus2Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
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
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void CCarStatus2Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CCarStatus2Page::OnPageUpBtnClk()
{

}

void CCarStatus2Page::OnPageDownBtnClk()
{
    ChangePage(PAGE_INDEX_TCUSTATUS2);

}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus2Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus2Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus2Page::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void CCarStatus2Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus2Page::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus2Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus2Page::OnComBtn7Clk()
    {
     //    ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus2Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#else
    void CCarStatus2Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus2Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus2Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus2Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus2Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus2Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#endif

    void CCarStatus2Page::OnBroadCastBtnClk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus2Page::UpdateByPass_Hide()
        {

            if
         (       RIOM1CT_DIM3DI2_B1||RIOM1CT_DIM3DI2_B1||RIOM1CT_DIM3DI4_B1||RIOM1CT_DIM3DI5_B1||RIOM1CT_DIM3DI6_B1||RIOM1CT_DIM1DI12_B1||RIOM1CT_DIM3DI1_B1||RIOM1CT_DIM4DI3_B1||
                 RIOM6CT_DIM3DI2_B1||RIOM6CT_DIM3DI2_B1||RIOM6CT_DIM3DI4_B1||RIOM6CT_DIM3DI5_B1||RIOM6CT_DIM3DI6_B1||RIOM6CT_DIM1DI12_B1||RIOM6CT_DIM3DI1_B1||RIOM6CT_DIM4DI3_B1)
          {
                ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_ByPass))->ShowLabel();
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_ByPass))->HideLabel();
            }

            if(
                     FAU1CT_FAU1FireAlert_B1 ||  FAU1CT_FAU2FireAlert_B1 ||  FAU1CT_FAU3FireAlert_B1 ||  FAU1CT_FAU4FireAlert_B1 ||  FAU1CT_FAU5FireAlert_B1 ||  FAU1CT_FAU6FireAlert_B1
                 ||  FAU1CT_FAU7FireAlert_B1 ||  FAU1CT_FAU8FireAlert_B1 ||  FAU1CT_FAU9FireAlert_B1 || FAU1CT_FAU10FireAlert_B1 || FAU1CT_FAU11FireAlert_B1 || FAU1CT_FAU12FireAlert_B1
                 || FAU1CT_FAU13FireAlert_B1 || FAU1CT_FAU14FireAlert_B1 || FAU1CT_FAU15FireAlert_B1 || FAU1CT_FAU16FireAlert_B1 || FAU1CT_FAU17FireAlert_B1 || FAU1CT_FAU18FireAlert_B1
                 || FAU1CT_FAU19FireAlert_B1 || FAU1CT_FAU20FireAlert_B1 || FAU1CT_FAU21FireAlert_B1 || FAU1CT_FAU22FireAlert_B1 || FAU1CT_FAU23FireAlert_B1 || FAU1CT_FAU24FireAlert_B1
                 || FAU1CT_FAU25FireAlert_B1 || FAU1CT_FAU26FireAlert_B1 || FAU1CT_FAU27FireAlert_B1 || FAU1CT_FAU28FireAlert_B1
                    )
                {
                     ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_FAS_status))->ShowLabel();
                }
                else
                {
                     ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_FAS_status))->HideLabel();
                }
        }


    void CCarStatus2Page::UpdateTCU_Online()
    {

        int TCU2_Online_BKColor;
        int TCU3_Online_BKColor;
        int TCU4_Online_BKColor;
        int TCU5_Online_BKColor;

        if (CTHM_DCU2_Online_B1)
        {
            TCU2_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER2))->SetCtrlText("2");
              ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER2,TCU2_Online_BKColor);
        }
        else
        {
            TCU2_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER2))->SetCtrlText(QObject::trUtf8("通信异常"));
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER2))->SetTxtColor(Qt::black);
            SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER2,TCU2_Online_BKColor);

        }


        if (CTHM_DCU3_Online_B1)
        {
            TCU3_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER3))->SetCtrlText("3");
              ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER3,TCU3_Online_BKColor);
        }
        else
        {
            TCU3_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER3))->SetCtrlText(QObject::trUtf8("通信异常"));
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER3))->SetTxtColor(Qt::black);
            SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER3,TCU3_Online_BKColor);

        }


        if (CTHM_DCU4_Online_B1)
        {
            TCU4_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER4))->SetCtrlText("4");
              ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER4,TCU4_Online_BKColor);
        }
        else
        {
            TCU4_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER4))->SetCtrlText(QObject::trUtf8("通信异常"));
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER4))->SetTxtColor(Qt::black);
            SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER4,TCU4_Online_BKColor);

        }


        if (CTHM_DCU5_Online_B1)
        {
            TCU5_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER5))->SetCtrlText("5");
              ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER5,TCU5_Online_BKColor);
        }
        else
        {
            TCU5_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER5))->SetCtrlText(QObject::trUtf8("通信异常"));
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CARNUMBER5))->SetTxtColor(Qt::black);
            SetOnlineLabelColor(ID_PIBCARS2_LABEL_CARNUMBER5,TCU5_Online_BKColor);

        }

    }

    void CCarStatus2Page::UpdateDCUMainCutEnable()
    {
        int Car2_DCUMainCutEnable_color=0;
        int Car3_DCUMainCutEnable_color=0;
        int Car4_DCUMainCutEnable_color=0;
        int Car5_DCUMainCutEnable_color=0;

        if (DR1CT_DCUMainCutEnable_B1)
        {
            Car2_DCUMainCutEnable_color=1;
        }
        else
        {
            Car2_DCUMainCutEnable_color=0;
        }

        if (DR2CT_DCUMainCutEnable_B1)
        {
            Car3_DCUMainCutEnable_color=1;
        }
        else
        {
            Car3_DCUMainCutEnable_color=0;
        }

        if (DR3CT_DCUMainCutEnable_B1)
        {
            Car4_DCUMainCutEnable_color=1;
        }
        else
        {
            Car4_DCUMainCutEnable_color=0;
        }

        if (DR4CT_DCUMainCutEnable_B1)
        {
            Car5_DCUMainCutEnable_color=1;
        }
        else
        {
            Car5_DCUMainCutEnable_color=0;
        }

        SetLabelColor(ID_PIBTCU_1_LABEL_CRA2DCUMAINCUTENABLE,Car2_DCUMainCutEnable_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA3DCUMAINCUTENABLE,Car3_DCUMainCutEnable_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA4DCUMAINCUTENABLE,Car4_DCUMainCutEnable_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA5DCUMAINCUTENABLE,Car5_DCUMainCutEnable_color);
    }
    void CCarStatus2Page::UpdateMainCutState()
    {
        int Car2_MainCutState_color=0;
        int Car3_MainCutState_color=0;
        int Car4_MainCutState_color=0;
        int Car5_MainCutState_color=0;

        if (DR1CT_MainCutState_B1)
        {
            Car2_MainCutState_color=1;
        }
        else
        {
            Car2_MainCutState_color=0;
        }

        if (DR2CT_MainCutState_B1)
        {
            Car3_MainCutState_color=1;
        }
        else
        {
            Car3_MainCutState_color=0;
        }

        if (DR3CT_MainCutState_B1)
        {
            Car4_MainCutState_color=1;
        }
        else
        {
            Car4_MainCutState_color=0;
        }

        if (DR4CT_MainCutState_B1)
        {
            Car5_MainCutState_color=1;
        }
        else
        {
            Car5_MainCutState_color=0;
        }

        SetLabelColor(ID_PIBTCU_1_LABEL_CRA2MAINCUTSTATE,Car2_MainCutState_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA3MAINCUTSTATE,Car3_MainCutState_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA4MAINCUTSTATE,Car4_MainCutState_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA5MAINCUTSTATE,Car5_MainCutState_color);
    }
    void CCarStatus2Page::UpdateRealTracOrBrakeF()
    {
        double Car_2_RealTraOrBra_Force=0;
        double Car_3_RealTraOrBra_Force=0;
        double Car_4_RealTraOrBra_Force=0;
        double Car_5_RealTraOrBra_Force=0;

        Car_2_RealTraOrBra_Force=DR1CT_RealTracOrBrakeForce_U16*10;
        Car_3_RealTraOrBra_Force=DR2CT_RealTracOrBrakeForce_U16*10;
        Car_4_RealTraOrBra_Force=DR3CT_RealTracOrBrakeForce_U16*10;
        Car_5_RealTraOrBra_Force=DR4CT_RealTracOrBrakeForce_U16*10;


        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA2REALTRAORBRKF))->SetCtrlText(QString::number(Car_2_RealTraOrBra_Force));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA3REALTRAORBRKF))->SetCtrlText(QString::number(Car_3_RealTraOrBra_Force));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA4REALTRAORBRKF))->SetCtrlText(QString::number(Car_4_RealTraOrBra_Force));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA5REALTRAORBRKF))->SetCtrlText(QString::number(Car_5_RealTraOrBra_Force));

    }
    void CCarStatus2Page::UpdateElecBRKF()
    {
        double Car_2_ElecBRK_Force=0;
        double Car_3_ElecBRK_Force=0;
        double Car_4_ElecBRK_Force=0;
        double Car_5_ElecBRK_Force=0;

        Car_2_ElecBRK_Force=DR1CT_ElectricBrakeForce_U16*10;
        Car_3_ElecBRK_Force=DR2CT_ElectricBrakeForce_U16*10;
        Car_4_ElecBRK_Force=DR3CT_ElectricBrakeForce_U16*10;
        Car_5_ElecBRK_Force=DR4CT_ElectricBrakeForce_U16*10;


        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA2ELECTBRKF))->SetCtrlText(QString::number(Car_2_ElecBRK_Force));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA3ELECTBRKF))->SetCtrlText(QString::number(Car_3_ElecBRK_Force));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA4ELECTBRKF))->SetCtrlText(QString::number(Car_4_ElecBRK_Force));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA5ELECTBRKF))->SetCtrlText(QString::number(Car_5_ElecBRK_Force));
    }
    void CCarStatus2Page::UpdateLineVoltage()
    {
        double Car_2_Line_Voltage=0;
        double Car_3_Line_Voltage=0;
        double Car_4_Line_Voltage=0;
        double Car_5_Line_Voltage=0;

        Car_2_Line_Voltage=DR1CT_LineVoltage_U16;
        Car_3_Line_Voltage=DR2CT_LineVoltage_U16;
        Car_4_Line_Voltage=DR3CT_LineVoltage_U16;
        Car_5_Line_Voltage=DR4CT_LineVoltage_U16;


        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA2LINEVOLTAGE))->SetCtrlText(QString::number(Car_2_Line_Voltage));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA3LINEVOLTAGE))->SetCtrlText(QString::number(Car_3_Line_Voltage));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA4LINEVOLTAGE))->SetCtrlText(QString::number(Car_4_Line_Voltage));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA5LINEVOLTAGE))->SetCtrlText(QString::number(Car_5_Line_Voltage));
    }
    void CCarStatus2Page::UpdateInverseCurrent()
    {
        double Car_2_Inverse_Current=0;
        double Car_3_Inverse_Current=0;
        double Car_4_Inverse_Current=0;
        double Car_5_Inverse_Current=0;

        Car_2_Inverse_Current=DR1CT_InverseCurrent_U16;
        Car_3_Inverse_Current=DR2CT_InverseCurrent_U16;
        Car_4_Inverse_Current=DR3CT_InverseCurrent_U16;
        Car_5_Inverse_Current=DR4CT_InverseCurrent_U16;


        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA2INVERSECURRENT))->SetCtrlText(QString::number(Car_2_Inverse_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA3INVERSECURRENT))->SetCtrlText(QString::number(Car_3_Inverse_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA4INVERSECURRENT))->SetCtrlText(QString::number(Car_4_Inverse_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA5INVERSECURRENT))->SetCtrlText(QString::number(Car_5_Inverse_Current));
    }
    void CCarStatus2Page::UpdateCurrentChop1()
    {
        double Car_2_Chop_1_Current=0;
        double Car_3_Chop_1_Current=0;
        double Car_4_Chop_1_Current=0;
        double Car_5_Chop_1_Current=0;

        Car_2_Chop_1_Current=DR1CT_Ichop1_U16;
        Car_3_Chop_1_Current=DR2CT_Ichop1_U16;
        Car_4_Chop_1_Current=DR3CT_Ichop1_U16;
        Car_5_Chop_1_Current=DR4CT_Ichop1_U16;


        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA2CURRENTCHOP1))->SetCtrlText(QString::number(Car_2_Chop_1_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA3CURRENTCHOP1))->SetCtrlText(QString::number(Car_3_Chop_1_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA4CURRENTCHOP1))->SetCtrlText(QString::number(Car_4_Chop_1_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA5CURRENTCHOP1))->SetCtrlText(QString::number(Car_5_Chop_1_Current));
    }
    void CCarStatus2Page::UpdateCurrentChop2()
    {
        double Car_2_Chop_2_Current=0;
        double Car_3_Chop_2_Current=0;
        double Car_4_Chop_2_Current=0;
        double Car_5_Chop_2_Current=0;

        Car_2_Chop_2_Current=DR1CT_Ichop2_U16;
        Car_3_Chop_2_Current=DR2CT_Ichop2_U16;
        Car_4_Chop_2_Current=DR3CT_Ichop2_U16;
        Car_5_Chop_2_Current=DR4CT_Ichop2_U16;


        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA2CURRENTCHOP2))->SetCtrlText(QString::number(Car_2_Chop_2_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA3CURRENTCHOP2))->SetCtrlText(QString::number(Car_3_Chop_2_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA4CURRENTCHOP2))->SetCtrlText(QString::number(Car_4_Chop_2_Current));
        ((CLabel *)GetDlgItem(ID_PIBTCU_1_LABEL_CRA5CURRENTCHOP2))->SetCtrlText(QString::number(Car_5_Chop_2_Current));
    }
    void CCarStatus2Page::UpdateMCCStartOrStopCmd()
    {
        int Car2_MCC_Start_Or_Stop_cmd_color=0;
        int Car3_MCC_Start_Or_Stop_cmd_color=0;
        int Car4_MCC_Start_Or_Stop_cmd_color=0;
        int Car5_MCC_Start_Or_Stop_cmd_color=0;

        if (DR1CT_MCCStartOrStopCmd_B1)
        {
            Car2_MCC_Start_Or_Stop_cmd_color=1;
        }
        else
        {
            Car2_MCC_Start_Or_Stop_cmd_color=0;
        }

        if (DR2CT_MCCStartOrStopCmd_B1)
        {
            Car3_MCC_Start_Or_Stop_cmd_color=1;
        }
        else
        {
            Car3_MCC_Start_Or_Stop_cmd_color=0;
        }

        if (DR3CT_MCCStartOrStopCmd_B1)
        {
            Car4_MCC_Start_Or_Stop_cmd_color=1;
        }
        else
        {
            Car4_MCC_Start_Or_Stop_cmd_color=0;
        }

        if (DR4CT_MCCStartOrStopCmd_B1)
        {
            Car5_MCC_Start_Or_Stop_cmd_color=1;
        }
        else
        {
            Car5_MCC_Start_Or_Stop_cmd_color=0;
        }

        SetLabelColor(ID_PIBTCU_1_LABEL_CRA2MCCSTARTORSTOPCMB,Car2_MCC_Start_Or_Stop_cmd_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA3MCCSTARTORSTOPCMB,Car3_MCC_Start_Or_Stop_cmd_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA4MCCSTARTORSTOPCMB,Car4_MCC_Start_Or_Stop_cmd_color);
        SetLabelColor(ID_PIBTCU_1_LABEL_CRA5MCCSTARTORSTOPCMB,Car5_MCC_Start_Or_Stop_cmd_color);
    }

    void CCarStatus2Page::SetLabelColor(int id,int colorVal)
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

void CCarStatus2Page::UpdateAValue()
{


}

void CCarStatus2Page::UpdateVValue()
{


}

void CCarStatus2Page::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBCARS2_LABEL_TRACTIONMODEL);

#endif

}

void CCarStatus2Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void CCarStatus2Page::UpdateMainfuse()
{

    int CAR2_Mainfuse1_OK  = 0;
    int CAR2_Mainfuse2_OK  = 0;
    int CAR4_Mainfuse1_OK  = 0;
    int CAR4_Mainfuse2_OK  = 0;
    int CAR7_Mainfuse1_OK  = 0;
    int CAR7_Mainfuse2_OK  = 0;

    if (Bit( DI_120_3, 2) == 1)
    {
        CAR2_Mainfuse2_OK = 1;
    }
    else
    {
        CAR2_Mainfuse2_OK = 0;
    }

    if (Bit( DI_120_3, 16)== 1)
    {
        CAR2_Mainfuse1_OK = 1;
    }
    else
    {
        CAR2_Mainfuse1_OK = 0;
    }

    if (Bit( DI_140_3, 2) == 1)
    {
        CAR4_Mainfuse2_OK = 1;
    }
    else
    {
        CAR4_Mainfuse2_OK = 0;
    }

    if (Bit( DI_140_3, 16)== 1)
    {
        CAR4_Mainfuse1_OK = 1;
    }
    else
    {
        CAR4_Mainfuse1_OK = 0;
    }

    if (Bit( DI_170_3, 2) == 1)
    {
        CAR7_Mainfuse2_OK = 1;
    }
    else
    {
        CAR7_Mainfuse2_OK = 0;
    }

    if (Bit( DI_170_3, 16)== 1)
    {
        CAR7_Mainfuse1_OK = 1;
    }
    else
    {
        CAR7_Mainfuse1_OK = 0;
    }

//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2Mainfuse1, CAR2_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2Mainfuse2, CAR2_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR4Mainfuse1, CAR4_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR4Mainfuse2, CAR4_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR7Mainfuse1, CAR7_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR7Mainfuse2, CAR7_Mainfuse2_OK);

}
/*
void CCarStatus2Page::UpdateHSCB()
{
    if (Bit(CCU_HMI_222_9, 2 )  == 0)
    {
        HSCB_color1 = 3;
    }
    else
    {
        if (Bit( TCU_510_14, 10 ) )
        {
            HSCB_color1 = 1;
        }
        else
        {
            HSCB_color1 = 0;
        }
        if (Bit( TCU_511_7, 8 ) )
        {
            HSCB_color1 = 2;
        }
        if (Bit( TCU_511_7, 7 ))
        {
            HSCB_color1 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 1 )   == 0)
    {
        HSCB_color2 = 3;
    }
    else
    {
        if (Bit( TCU_520_14, 10 ) )
        {
            HSCB_color2 = 1;
        }
        else
        {
            HSCB_color2 = 0;
        }
        if (Bit( TCU_521_7, 8 ) )
        {
            HSCB_color2 = 2;
        }
        if (Bit( TCU_521_7, 7 ))
        {
            HSCB_color2 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 16 ) == 0)
    {
        HSCB_color3 = 3;
    }
    else
    {
        if (Bit( TCU_530_14, 10 ) )
        {
            HSCB_color3 = 1;
        }
        else
        {
            HSCB_color3 = 0;
        }
        if (Bit( TCU_531_7, 8 ) )
        {
            HSCB_color3 = 2;
        }
        if (Bit( TCU_531_7, 7 ) )
        {
            HSCB_color3 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 15 )== 0)
    {
        HSCB_color4 = 3;
    }
    else
    {
        if (Bit( TCU_540_14, 10 ) )
        {
            HSCB_color4 = 1;
        }
        else
        {
            HSCB_color4 = 0;
        }
        if (Bit( TCU_541_7, 8 ) )
        {
            HSCB_color4 = 2;
        }
        if (Bit( TCU_541_7, 7 ) )
        {
            HSCB_color4 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 14 )== 0)
    {
        HSCB_color5 = 3;
    }
    else
    {
        if (Bit( TCU_550_14, 10 ))
        {
            HSCB_color5 = 1;
        }
        else
        {
            HSCB_color5 = 0;
        }
        if (Bit( TCU_551_7, 8 ) )
        {
            HSCB_color5 = 2;
        }
        if (Bit( TCU_551_7, 7 ))
        {
            HSCB_color5 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 13 )== 0)
    {
        HSCB_color6 = 3;
    }
    else
    {
        if (Bit( TCU_560_14, 10 ))
        {
            HSCB_color6 = 1;
        }
        else
        {
            HSCB_color6 = 0;
        }
        if (Bit( TCU_561_7, 8 ))
        {
            HSCB_color6 = 2;
        }
        if (Bit( TCU_561_7, 7 ) )
        {
            HSCB_color6 = 2;
        }
    }

//    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA2HSCBSTATUS, HSCB_color1);
    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA3HSCBSTATUS, HSCB_color2);
    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA4HSCBSTATUS, HSCB_color3);
    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA5HSCBSTATUS, HSCB_color4);
    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA6HSCBSTATUS, HSCB_color5);
//    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA7HSCBSTATUS, HSCB_color6);
}*/

void CCarStatus2Page::UpdateKIC()
{

    if (Bit( TCU_510_15, 7 ))
    {
        KIC1_color = 1;

    }
    else
    {
        KIC1_color = 0;
    }
    if ( (Bit( TCU_511_8, 6 ) ) || (Bit( TCU_511_8, 5 ) ) )
    {
        KIC1_color = 2;
    }

    if (Bit( TCU_520_15, 7 ))
    {
        KIC2_color = 1;

    }
    else
    {
        KIC2_color = 0;
    }
    if ( (Bit( TCU_521_8, 6 ))  || (Bit( TCU_521_8, 5 ) ) )
    {
        KIC2_color = 2;
    }

    if (Bit( TCU_530_15, 7 ) )
    {
        KIC3_color = 1;

    }
    else
    {
        KIC3_color = 0;
    }
    if ( (Bit( TCU_531_8, 6 ) ) || (Bit( TCU_531_8, 5 ) ) )
    {
        KIC3_color = 2;
    }

    if (Bit( TCU_540_15, 7 ) )
    {
        KIC4_color = 1;

    }
    else
    {
        KIC4_color = 0;
    }
    if ( (Bit( TCU_541_8, 6 ) ) || (Bit( TCU_541_8, 5 ) ) )
    {
        KIC4_color = 2;
    }

    if (Bit( TCU_550_15, 7 ) )
    {
        KIC5_color = 1;

    }
    else
    {
        KIC5_color = 0;
    }
    if ( (Bit( TCU_551_8, 6 ) ) || (Bit( TCU_551_8, 5 ) ) )
    {
        KIC5_color = 2;
    }

    if (Bit( TCU_560_15, 7 ) )
    {
        KIC6_color = 1;

    }
    else
    {
        KIC6_color = 0;
    }
    if ( (Bit( TCU_561_8, 6 ) ) || (Bit( TCU_561_8, 5 ) ) )
    {
        KIC6_color = 2;
    }


//    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA2KICSTATE, KIC1_color);
//    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA3KICSTATE, KIC2_color);
//    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA4KICSTATE, KIC3_color);
//    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA5KICSTATE, KIC4_color);
//    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA6KICSTATE, KIC5_color);
//    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA7KICSTATE, KIC6_color);

}

void CCarStatus2Page::UpdateKCCC()
{

    if (Bit( TCU_510_15, 6 ))
    {
        KCC1_color = 1;

    }
    else
    {
        KCC1_color = 0;
    }
    if (  (Bit( TCU_511_8, 4 ) ) || (Bit( TCU_511_8, 3 ) )  )
    {
        KCC1_color = 2;
    }

    if (Bit( TCU_520_15, 6 ) )
    {
        KCC2_color = 1;

    }
    else
    {
        KCC2_color = 0;
    }
    if (  (Bit( TCU_521_8, 4 ) ) || (Bit( TCU_521_8, 3 ) )  )
    {
        KCC2_color = 2;
    }

    if (Bit( TCU_530_15, 6 ) )
    {
        KCC3_color = 1;

    }
    else
    {
        KCC3_color = 0;
    }
    if (  (Bit( TCU_531_8, 4 ) ) || (Bit( TCU_531_8, 3 ) )  )
    {
        KCC3_color = 2;
    }

    if (Bit( TCU_540_15, 6 ))
    {
        KCC4_color = 1;

    }
    else
    {
        KCC4_color = 0;
    }
    if ( (Bit( TCU_541_8, 4 ) ) || (Bit( TCU_541_8, 3 ) )  )
    {
        KCC4_color = 2;
    }

    if (Bit( TCU_550_15, 6 ))
    {
        KCC5_color = 1;

    }
    else
    {
        KCC5_color = 0;
    }
    if ( (Bit( TCU_551_8, 4 ) ) || (Bit( TCU_551_8, 3 ) )  )
    {
        KCC5_color = 2;
    }

    if (Bit( TCU_560_15, 6 ))
    {
        KCC6_color = 1;

    }
    else
    {
        KCC6_color = 0;
    }
    if ( (Bit( TCU_561_8, 4 ) ) || (Bit( TCU_561_8, 3 ) )  )
    {
        KCC6_color = 2;
    }


//    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA2KCCCSTATE, KCC1_color);
//    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA3KCCCSTATE, KCC2_color);
//    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA4KCCCSTATE, KCC3_color);
//    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA5KCCCSTATE, KCC4_color);
//    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA6KCCCSTATE, KCC5_color);
//    SetKcccLabelColor(, KCC6_color);

}

void CCarStatus2Page::UpdateK750()
{

    if (Bit( train_status_data5, 12 ) )
    {
        K750_color1 = 1;
    }
    else
    {
        K750_color1 = 0;
    }
    if (Bit( train_status_data5, 13 ) )
    {
        K750_color1 = 2;
    }
    if (Bit( train_status_data1, 14 ) )
    {
        K750_color1 = 2;
    }
    if (Bit( train_status_data6, 12 ) )
    {
        K750_color2 = 1;
    }
    else
    {
        K750_color2 = 0;
    }
    if (Bit( train_status_data6, 13 ) )
    {
        K750_color2 = 2;
    }
    if (Bit( train_status_data6, 14 ) )
    {
        K750_color2 = 2;
    }

    SetK750LabelColor(ID_PIBCARS2_LABEL_CRA1K750STATUS, K750_color1);
    SetK750LabelColor(ID_PIBCARS2_LABEL_CRA6K750STATUS, K750_color2);

}

void CCarStatus2Page::UpdateATC()
{

    if ( (Bit( train_status_data31, 16 ) ) || (Bit( train_status_data31, 15 ) )
        || (Bit( train_status_data31, 14 ) ) )
    {
        ATC10_color = 3;
    }
    if (Bit( train_status_data31, 13 ) )
    {
        ATC10_color = 0;
        if (Bit( train_status_data31, 12 ) == 0)
        {
            ATC10_color = 1;
        }
        if ( (Bit( train_status_data31, 16 ) ) || (Bit( train_status_data31, 15 ) )
            || (Bit( train_status_data31, 14 ) ) )
        {
            ATC10_color = 3;
        }
    }
    else
    {
        ATC10_color = 2;
    }

    if (Bit( train_status_data31, 5 ) )
    {
        ATC11_color = 0;
        if (Bit( train_status_data31, 4 ) == 0)
        {
            ATC11_color = 1;
        }
        if ( (Bit( train_status_data31, 8 ) ) || (Bit( train_status_data31, 7 ) )
            || (Bit( train_status_data31, 6 ) ) )
        {
            ATC11_color = 3;
        }
    }
    else
    {
        ATC11_color = 2;
    }

    if (Bit( train_status_data33, 13 ) )
    {
        ATC20_color = 0;
        if (Bit( train_status_data33, 12 ) == 0)
        {
            ATC20_color = 1;
        }
        if ( (Bit( train_status_data33, 16 ) ) || (Bit( train_status_data33, 15 ) )
            || (Bit( train_status_data33, 14 ) ) )
        {
            ATC20_color = 3;
        }
    }
    else
    {
        ATC20_color = 2;
    }

    if (Bit( train_status_data33, 5 ) )
    {
        ATC21_color = 0;
        if (Bit( train_status_data33, 4 ) ==0 )
        {
            ATC21_color = 1;
        }
        if ( (Bit( train_status_data33, 8 ) ) || (Bit( train_status_data33, 7 ) )
            ||(Bit( train_status_data33, 6 ) ) )
        {
            ATC21_color = 3;
        }
    }
    else
    {
        ATC21_color = 2;
    }

    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA1ATC1STATUS, ATC10_color);
    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA1ATC2STATUS, ATC11_color);
    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA6ATC1STATUS, ATC20_color);
    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA6ATC2STATUS, ATC21_color);
}

void CCarStatus2Page::UpdatePIS()
{
    if (Bit( train_status_data32, 14 ) )
    {
        train_pis1_color = 0;
        if (Bit( train_status_data32, 13 ) == 0)
        {
            train_pis1_color = 1;
        }
        if ( (Bit( train_status_data32, 16 ) ) || (Bit( train_status_data32, 15 ) )
            || (Bit( train_status_data32, 12 ) ) || (Bit( train_status_data32, 11 ) ) )
        {
            train_pis1_color = 3;
        }
    }
    else
    {
        train_pis1_color = 2;
    }

    if (Bit( train_status_data32, 6 ) )
    {
        train_pis2_color = 0;
        if (Bit( train_status_data32, 5 ) == 0)
        {
            train_pis2_color = 1;
        }
        if ( (Bit( train_status_data32, 8 ) ) || (Bit( train_status_data32, 7 ) )
            || (Bit( train_status_data32, 4 ) ) || (Bit( train_status_data32, 3 ) ) )
        {
            train_pis2_color = 3;
        }
    }
    else
    {
        train_pis2_color = 2;
    }

    SetPisLabelColor(ID_PIBCARS2_LABEL_CRA1PISSTATUS,train_pis1_color);
    SetPisLabelColor(ID_PIBCARS2_LABEL_CRA6PISSTATUS,train_pis2_color);

}
/*
void CCarStatus2Page::UpdateDrawBCUForce()
{

//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5%256)));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5/256)));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6%256)));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6/256)));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7%256)));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7/256)));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8%256)));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8/256)));

//    if(CCU_HMI_222_5%256>127)
//      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256-256));
//    else
//      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256));

//    if(CCU_HMI_222_5/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256));

//    if(CCU_HMI_222_6%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256));

//    if(CCU_HMI_222_6/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256));

//    if(CCU_HMI_222_7%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256));

//    if(CCU_HMI_222_7/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256));

//    if(CCU_HMI_222_8%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256));

//    if(CCU_HMI_222_8/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256));
}

void CCarStatus2Page::UpdateDynamorev()
{
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DYNAMOREV))->SetCtrlText(QString::number(TCU_510_5));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DYNAMOREV))->SetCtrlText(QString::number(TCU_520_5));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DYNAMOREV))->SetCtrlText(QString::number(TCU_530_5));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DYNAMOREV))->SetCtrlText(QString::number(TCU_540_5));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DYNAMOREV))->SetCtrlText(QString::number(TCU_550_5));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DYNAMOREV))->SetCtrlText(QString::number(TCU_560_5));
}
*/


void CCarStatus2Page::UpdateATOMode()
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


    SetATOModeLabelColor(ID_PIBCARS2_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBCARS2_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}


void CCarStatus2Page::UpdateNETMode()
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

    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBCARS2_LABEL_NETMODE, modecolor);
}

void CCarStatus2Page::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
     ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void CCarStatus2Page::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->HideLabel();

//    }

}

void CCarStatus2Page::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
                }
            }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
    }
}

//void CCarStatus2Page::UpdateEmergencyBroadcast()
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

void CCarStatus2Page::SetNETModeLabelColor(int id, int colorVal)
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


void CCarStatus2Page::SetOnlineLabelColor(int id, int colorVal)
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
void CCarStatus2Page::SetATOModeLabelColor(int id,int colorVal)
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


void CCarStatus2Page::SetCommInterruptLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetHscbLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetKicLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetKcccLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetK750LabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetAtcLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCarStatus2Page::SetPisLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

//void CCarStatus2Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus2Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CCarStatus2Page::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE2))->HideLabel();

    }
}


void CCarStatus2Page::UpdateTCUStatus()
{

    if(CTHM_DCU2_Online_B1)
    {
        {
            TCU2_status=1;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(DR1CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR1CT_VVVFCutOffState_B1)
        {
            TCU2_status=5;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU2_status=3;
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_DCU3_Online_B1)
    {
        {
            TCU3_status=1;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(DR2CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR2CT_VVVFCutOffState_B1)
        {
            TCU3_status=5;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU3_status=3;
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_DCU4_Online_B1)
    {
        {
            TCU4_status=1;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(DR3CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR3CT_VVVFCutOffState_B1)
        {
            TCU4_status=5;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU4_status=3;
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_DCU5_Online_B1)
    {
        {
            TCU5_status=1;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(DR4CT_InverseCurrent_U16 ).append(" A"));
        }

        if(DR4CT_VVVFCutOffState_B1)
        {
            TCU5_status=5;
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU5_status=3;
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
    }

//  SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
    SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
    SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
    SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
    SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//  SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);


}


/*
        void CCarStatus2Page::UpdateTCUStatus()
        {
            if(Bit(CCU_HMI_222_9, 2 )==1)
            {
//                if(Bit( TCU_510_14, 13)==1)
//                {
//                    TCU1_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_4 ).append(" A"));

//                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//                }else
//                {
//                    TCU1_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//                }
//                if(Bit( TCU_511_5, 13)==1)
//                {
//                    TCU1_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");


//                }
//                if(Bit( TCU_511_5, 12)==1)
//                {
//                    TCU1_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");

//                }
//                if(Bit( TCU_511_5, 16)==1)
//                {
//                    TCU1_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//                }
            }
            else
            {
//                TCU1_status=3;
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 1 )==1)
            {
                if(Bit( TCU_520_14, 13)==1)
                {
                    TCU2_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU2_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_521_5, 13)==1)
                {
                    TCU2_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_521_5, 12)==1)
                {
                    TCU2_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_521_5, 16)==1)
                {
                    TCU2_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU2_status=3;
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 16 )==1)
            {
                if(Bit( TCU_530_14, 13)==1)
                {
                    TCU3_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_530_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU3_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_531_5, 13)==1)
                {
                    TCU3_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_531_5, 12)==1)
                {
                    TCU3_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_531_5, 16)==1)
                {
                    TCU3_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU3_status=3;
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 15 )==1)
            {
                if(Bit( TCU_540_14, 13)==1)
                {
                    TCU4_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_540_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU4_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_541_5, 13)==1)
                {
                    TCU4_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_541_5, 12)==1)
                {
                    TCU4_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_541_5, 16)==1)
                {
                    TCU4_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU4_status=3;
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 14 )==1)
            {
                if(Bit( TCU_550_14, 13)==1)
                {
                    TCU5_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_550_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU5_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_551_5, 13)==1)
                {
                    TCU5_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_551_5, 12)==1)
                {
                    TCU5_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_551_5, 16)==1)
                {
                    TCU5_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU5_status=3;
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 13 )==1)
            {
//                if(Bit( TCU_560_14, 13)==1)
//                {
//                    TCU6_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_560_4 ).append(" A"));

//                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//                }else
//                {
//                    TCU6_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//                }
//                if(Bit( TCU_561_5, 13)==1)
//                {
//                    TCU6_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");


//                }
//                if(Bit( TCU_561_5, 12)==1)
//                {
//                    TCU6_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");

//                }
//                if(Bit( TCU_561_5, 16)==1)
//                {
//                    TCU6_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//                }
            }
            else
            {
//                TCU6_status=3;
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
            }

//            SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
            SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
            SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
            SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
            SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//            SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);

//            if (Bit(TCU_511_5,12) || Bit(TCU_511_5,13) )
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);

//            if (Bit(TCU_521_5,12)|| Bit(TCU_521_5,13) )
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

//            if (Bit(TCU_531_5,12)||Bit(TCU_531_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);

//            if (Bit(TCU_541_5,12)||Bit(TCU_541_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);

//            if (Bit(TCU_551_5,12)||Bit(TCU_551_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);

//            if (Bit(TCU_561_5,12)||Bit(TCU_561_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
        }
*/
void CCarStatus2Page::SetTCUStatusLsbelColor(int id,int colorVal)
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

void CCarStatus2Page::SetMainfuseLabelColor(int id, int colorVal)
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

void CCarStatus2Page::UpdateIES()
{
    if (Bit(CCU_HMI_222_9, 2 ) )
    {
        if (Bit( TCU_511_6, 16 ) )
        {
            IES1_string = QObject::trUtf8("受电弓位");
        }
        if (Bit( TCU_511_6, 15 ) )
        {
            IES1_string = QObject::trUtf8("接地位");
        }
        if (Bit( TCU_511_6, 14 ) )
        {
            IES1_string = QObject::trUtf8("车间电源");
        }
        if ( ( TCU_511_6&57344) == 0)
        {
            IES1_string = QObject::trUtf8("- -");
        }
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES1_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::white);;

    }

    if (Bit(CCU_HMI_222_9, 16 ) )
    {
        if (Bit( TCU_531_6, 16 ) )
        {
            IES3_string = QObject::trUtf8("受电弓位");
        }
        if (Bit( TCU_531_6, 15 ) )
        {
            IES3_string = QObject::trUtf8("接地位");
        }
        if (Bit( TCU_531_6, 14 ) )
        {
            IES3_string = QObject::trUtf8("车间电源");
        }
        if ( ( TCU_531_6&57344) == 0)
        {
            IES3_string = QObject::trUtf8("- -");
        }
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES3_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



    if (Bit(CCU_HMI_222_9, 13 ))
    {
        if (Bit( TCU_561_6, 16 ) )
        {
            IES2_string = QObject::trUtf8("受电弓位");
        }
        if (Bit( TCU_561_6, 15 ) )
        {
            IES2_string = QObject::trUtf8("接地位");
        }
        if (Bit( TCU_561_6, 14 ) )
        {
            IES2_string = QObject::trUtf8("车间电源");
        }
        if ( ( TCU_561_6 & 57344) == 0)
        {
            IES2_string = QObject::trUtf8("- -");
        }
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES2_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlText(IES3_string);
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlText(IES2_string);
}
