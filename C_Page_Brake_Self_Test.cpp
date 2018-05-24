#include "C_Page_Brake_Self_Test.h"


ROMDATA g_PicRom_BrakeSelfTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("制动\n自检") )
 //   D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8(" 制动自检") )


    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCAR2BCU_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBST_RIGHTARROW                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBST_LEFTARROW                 },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("制动自检"))
    D_COMMON_PAGE_BUTTON_BAR

    {"",                           D_FONT_BOLD(4),      QRect(178,  100, 600,  60),          Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBCAR2BCU_TRAIN                 },
    {"RIGHT",                      D_FONT_BOLD(6),      QRect(700,  118,  45,  20),          Qt::white,                Qt::white,               CONTROL_ARROW,           ID_PIBBST_RIGHTARROW                },
    {"LEFT",                       D_FONT_BOLD(6),      QRect(58,  118,  45,  20),          Qt::white,                Qt::white,               CONTROL_ARROW,           ID_PIBBST_LEFTARROW                 },


#endif



    {"",                           D_FONT_BOLD(6),      QRect(10,  170+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  200+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  230+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  260+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  290+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  320+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   // {"",                           D_FONT_BOLD(6),      QRect(10,  350+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(10,  180, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(100,  180, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(150,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(200,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(250,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(300,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(350,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(400,  180, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(450,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(500,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(550,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(600,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(650,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(700,  180, 1,  151),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("车  号"),                D_FONT_BOLD(8),      QRect(11,  180, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),                    D_FONT_BOLD(8),      QRect(102,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
 //   {QObject::trUtf8("2"),                    D_FONT_BOLD(8),      QRect(178,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("2"),                    D_FONT_BOLD(8),      QRect(202,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("3"),                    D_FONT_BOLD(8),      QRect(302,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("4"),                    D_FONT_BOLD(8),      QRect(402,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("6"),                    D_FONT_BOLD(8),      QRect(478,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("5"),                    D_FONT_BOLD(8),      QRect(502,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("6"),                    D_FONT_BOLD(8),      QRect(602,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },


        {QObject::trUtf8("空气簧压力"),      D_FONT_BOLD(8),      QRect(11,  210, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(104, 211,  44, 28),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(154, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(204, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(254, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(304, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(354, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(404, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(454, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(504, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(554, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(604, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(654, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2        },


   /*
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(103,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE1         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(153,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE2         },
  //  {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(179,  211,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE3         },
  //  {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(216,  211,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE4         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(203,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE5         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(253,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE6         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(303,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE7         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(353,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE8         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE9         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(453,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE10        },
  //  {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(479,  211,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE11        },
  //  {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(516,  211,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE12        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(503,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE13        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(553,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE14        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(603,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE15        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(653,  211,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE16        },
*/
    {QObject::trUtf8("制动缸压力"),               D_FONT_BOLD(8),      QRect(11,  240, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
   {QObject::trUtf8("4.1"),              D_FONT_BOLD(4),      QRect(104, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(154, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(204, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.1"),              D_FONT_BOLD(4),      QRect(254, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(304, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(354, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(404, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1        },
   {QObject::trUtf8("3.9"),              D_FONT_BOLD(4),      QRect(454, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(504, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.1"),              D_FONT_BOLD(4),      QRect(554, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(604, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.1"),              D_FONT_BOLD(4),      QRect(654, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2        },


/*
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect(103,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW1             },
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect(153,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW2             },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(179,  241,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW3             },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(216,  241,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW4             },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(203,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW5             },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(253,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW6             },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(303,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW7             },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(353,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW8             },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW9             },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(453,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW10            },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(479,  241,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW11            },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(516,  241,  32, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW12            },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(503,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW13            },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(553,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW14            },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(603,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW15            },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(653,  241,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW16            },
*/
    {QObject::trUtf8("转向架隔离"),            D_FONT_BOLD(8),      QRect(11,  270, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(103,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE1       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(153,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE2       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(203,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE3       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(253,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE4       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(303,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE5       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(353,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE6       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE7       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(453,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE8      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(503,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE9      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(553,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE10      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(603,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE11      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(653,  271,  46, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE12      },


//    {QObject::trUtf8("自检条件"),              D_FONT_BOLD(8),      QRect(11,  300, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(103,  301,  296, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_TESTSELFCON1        },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  301,  296, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_TESTSELFCON2        },


    {QObject::trUtf8("制动自检"),              D_FONT_BOLD(8),      QRect(11,  300, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(103,  301,  296, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF1      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  301,  296, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF2      },

   // {QObject::trUtf8(" 请将手柄放到制动7级位，确认两个自检条件满足后按[开始]键，进行制动自检。"), D_FONT_BOLD(8), QRect( 50, 370, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT1        },
    {QObject::trUtf8(" 请将手柄放到制动7级位，确认自检条件满足后按[开始]键，进行制动自检。"), D_FONT_BOLD(8), QRect( 150, 370, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT1        },
    {QObject::trUtf8("【注意】自检进行中请保持本页面，切换到其它页面会终止自检指令信号。"), D_FONT_BOLD(8), QRect( 150, 405, 600, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT2        },
    {QObject::trUtf8("开   始"),              D_FONT_BOLD(8),      QRect( 25, 460, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_TESTSTART         },
    //{QObject::trUtf8("终   止"),              D_FONT_BOLD(8),      QRect(155, 460, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_TESTSTOP          },

    {QObject::trUtf8(""),              D_FONT_BOLD(8),      QRect( 485, 460, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_MODE1         },
    {QObject::trUtf8(""),              D_FONT_BOLD(8),      QRect(615, 460, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_MODE2          },

};
int g_BrakeSelfTestRomLen = sizeof(g_PicRom_BrakeSelfTest)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CBrakeSelfTestPage,CPage)
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
        ON_BTNCLK(ID_PIBBST_BUTTON_TESTSTART,OnBCU_Selftest_StartClk)
        //ON_BTNCLK(ID_PIBBST_BUTTON_TESTSTOP,OnBCU_Selftest_StopClk)
        ON_BTNCLK(ID_PIBBST_BUTTON_MODE1,On_Mode1_Clk)
        ON_BTNCLK(ID_PIBBST_BUTTON_MODE2,On_Mode2_Clk)

END_MESSAGE_MAP()

CBrakeSelfTestPage::CBrakeSelfTestPage()
{
    m_bStart = false;
}

void CBrakeSelfTestPage::OnUpdatePage()
{
    UpdateAirSpringPressure();
    UpdateBRKCYLPressure();
    UpdateBCU_selftest_test();
    UpdateBCU_selftest_LabelColor();
    //UpdateBCU_selftest_ConColor();
    updateTrain(ID_PIBCAR2BCU_TRAIN);
    updateArrow(ID_PIBBST_LEFTARROW,ID_PIBBST_RIGHTARROW);

    updateErrorLine(ID_PIBCAR2BCU_TRAIN);

   //测试代码，测试时用
   // ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT1))->SetCtrlText(QString::number(time_set_timer)+"  "+QString::number(bcu_selftest_temp2)+" "+QString::number(m_bStart)
     //            +" "+QString::number(BCU3CT_Selftest_active_1_B1)+" "+QString::number(BCU3CT_Selftest_succces_1_B1)+" "+QString::number(BCU3CT_Selftest_failed_1_B1));
      if (HMCT_BackPressureSelection2_B1)
     {
          ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->SetCtrlText(QObject::trUtf8("客运模式"));
          ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->ChangeButtonState(LBUTTON_DOWN);


      }
      else
      {
          ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->SetCtrlText(QObject::trUtf8("货运模式"));

          ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->ChangeButtonState(LBUTTON_UP);


      }
          if(HMCT_BackPressureSelection_B1)
      {
          ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->SetCtrlText(QObject::trUtf8("6Bar"));
          ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->ChangeButtonState(LBUTTON_DOWN);



      }
          else
      {
         ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->SetCtrlText(QObject::trUtf8("5Bar"));
         ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->ChangeButtonState(LBUTTON_UP);


      }
      if(m_bStart)
      {

           static quint32 times = 0;

           times=times+1;

           if (times%times_n==0)
          {
               time_set_timer--;
               if (time_set_timer==0)
               {
                  m_bStart = false;
                  times = 0;
                  time_set_timer = 5;
                  HMCT_BCUSelfDetection_B1 = false;
                  ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);

                }
          }
//           if( (BCU1CT_Selftest_failed_1_B1 || BCU1CT_Selftest_succces_1_B1 || BCU1CT_Last_selftest_aborted_1_B1)
//               &&(BCU3CT_Selftest_failed_1_B1 || BCU3CT_Selftest_succces_1_B1 ||BCU1CT_Last_selftest_aborted_1_B1))
//           {
//               m_bStart = false;
//               times = 0;
//               time_set_timer = 5;
//               HMCT_BCUSelfDetection_B1 = false;
//               ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
//           }
       }
      }
//           else
//           {

            //}




void CBrakeSelfTestPage::OnInitPage()
{

    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->m_bAutoUpState = false;

    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->m_bAutoUpState = false;
    //((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTOP))->HideButton();

    ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT2))->SetAlignment(Qt::AlignLeft);


}

void CBrakeSelfTestPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返   回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));

#endif
    this->InitPageHeader();
    BCU_test_timer=5;
    time_set_timer = 5;


}

void CBrakeSelfTestPage::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_BRAKESELFTESTHELP)
    {
        OnBCU_Selftest_Stop();
    }
}


void CBrakeSelfTestPage::OnComBtn1Clk()
{

}

void CBrakeSelfTestPage::OnComBtn2Clk()
{

}

void CBrakeSelfTestPage::OnComBtn3Clk()
{

}

void CBrakeSelfTestPage::OnComBtn4Clk()
{

}

void CBrakeSelfTestPage::OnComBtn5Clk()
{

}

void CBrakeSelfTestPage::OnComBtn6Clk()
{

}
void CBrakeSelfTestPage::OnComBtn7Clk()
{

    ChangePage(PAGE_INDEX_BRAKESELFTESTHELP);
}
void CBrakeSelfTestPage::OnComBtn8Clk()
{
    OnBCU_Selftest_Stop();
    ChangePage(PAGE_INDEX_MAINTAIN);
}




void CBrakeSelfTestPage::OnBCU_Selftest_StartClk()
{

    BCU_selftest_string1 = "";
    BCU_selftest_string2 = "";
    BCU_selftest_color1 = 0;
    BCU_selftest_color2 = 0;

    HMCT_BCUSelfDetection_B1=true;
    UpdateBCU_selftest_test();
    m_bStart = true;
    time_set_timer = 5;

}

void CBrakeSelfTestPage::OnBCU_Selftest_Stop()
{
    HMCT_BCUSelfDetection_B1=false;
    m_bStart = false;
    UpdateBCU_selftest_test();
    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
}

void CBrakeSelfTestPage::UpdateBRKCYLPressure()
{
    int CAR1_pressure_color  = 0;
    int CAR2_pressure_color  = 0;
    int CAR3_pressure_color  = 0;
    int CAR4_pressure_color  = 0;
    int CAR5_pressure_color  = 0;
    int CAR6_pressure_color  = 0;
    int CAR7_pressure_color  = 0;
    int CAR8_pressure_color  = 0;
    int CAR9_pressure_color  = 0;
    int CAR10_pressure_color = 0;
    int CAR11_pressure_color = 0;
    int CAR12_pressure_color = 0;

    double Brake_cylinder_pressure1=0;
    double Brake_cylinder_pressure2=0;
    double Brake_cylinder_pressure3=0;
    double Brake_cylinder_pressure4=0;
    double Brake_cylinder_pressure5=0;
    double Brake_cylinder_pressure6=0;
    double Brake_cylinder_pressure7=0;
    double Brake_cylinder_pressure8=0;
    double Brake_cylinder_pressure9=0;
    double Brake_cylinder_pressure10=0;
    double Brake_cylinder_pressure11=0;
    double Brake_cylinder_pressure12=0;

        Brake_cylinder_pressure1 = BCU1CT_BRK_cyl_pressure_1_U16*0.05/100;
        Brake_cylinder_pressure2 = BCU1CT_BRK_cyl_pressure_2_U16*0.05/100;
        Brake_cylinder_pressure3 = BCU1CT_BRK_cyl_pressure_3_U16*0.05/100;
        Brake_cylinder_pressure4 = BCU1CT_BRK_cyl_pressure_4_U16*0.05/100;
        Brake_cylinder_pressure5 = BCU1CT_BRK_cyl_pressure_5_U16*0.05/100;
        Brake_cylinder_pressure6 = BCU1CT_BRK_cyl_pressure_6_U16*0.05/100;
        Brake_cylinder_pressure7 = BCU3CT_BRK_cyl_pressure_6_U16*0.05/100;
        Brake_cylinder_pressure8 = BCU3CT_BRK_cyl_pressure_5_U16*0.05/100;
        Brake_cylinder_pressure9 = BCU3CT_BRK_cyl_pressure_4_U16*0.05/100;
        Brake_cylinder_pressure10 = BCU3CT_BRK_cyl_pressure_3_U16*0.05/100;
        Brake_cylinder_pressure11 = BCU3CT_BRK_cyl_pressure_2_U16*0.05/100;
        Brake_cylinder_pressure12 = BCU3CT_BRK_cyl_pressure_1_U16*0.05/100;


        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure5,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure6,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure7,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure8,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure9,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure10,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure11,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure12,'f',2));


        if (BCU1CT_BRK_cyl_pressure_1_Active_B1)
        {
            CAR1_pressure_color = 1;
        }
        else
        {
            CAR1_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_2_Active_B1)
        {
            CAR2_pressure_color = 1;
        }
        else
        {
            CAR2_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_3_Active_B1)
        {
            CAR3_pressure_color = 1;
        }
        else
        {
            CAR3_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_4_Active_B1)
        {
            CAR4_pressure_color = 1;
        }
        else
        {
            CAR4_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_5_Active_B1)
        {
            CAR5_pressure_color = 1;
        }
        else
        {
            CAR5_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_6_Active_B1)
        {
            CAR6_pressure_color = 1;
        }
        else
        {
            CAR6_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_1_Active_B1)
        {
            CAR12_pressure_color = 1;
        }
        else
        {
            CAR12_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_2_Active_B1)
        {
            CAR11_pressure_color = 1;
        }
        else
        {
            CAR11_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_3_Active_B1)
        {
            CAR10_pressure_color = 1;
        }
        else
        {
            CAR10_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_4_Active_B1)
        {
            CAR9_pressure_color = 1;
        }
        else
        {
            CAR9_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_5_Active_B1)
        {
            CAR8_pressure_color = 1;
        }
        else
        {
            CAR8_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_6_Active_B1)
        {
            CAR7_pressure_color = 1;
        }
        else
        {
            CAR7_pressure_color = 0;
        }



    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1, CAR1_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2, CAR2_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1, CAR3_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2, CAR4_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1, CAR5_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2, CAR6_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1, CAR7_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2, CAR8_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1, CAR9_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2, CAR10_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1, CAR11_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2, CAR12_pressure_color);



}

void CBrakeSelfTestPage::SetBRKCYLPressureLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}


void CBrakeSelfTestPage::UpdateAirSpringPressure()
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

        double Brake_cylinder_pressure1=0;
        double Brake_cylinder_pressure2=0;
        double Brake_cylinder_pressure3=0;
        double Brake_cylinder_pressure4=0;
        double Brake_cylinder_pressure5=0;
        double Brake_cylinder_pressure6=0;
        double Brake_cylinder_pressure7=0;
        double Brake_cylinder_pressure8=0;
        double Brake_cylinder_pressure9=0;
        double Brake_cylinder_pressure10=0;
        double Brake_cylinder_pressure11=0;
        double Brake_cylinder_pressure12=0;

            Brake_cylinder_pressure1  = BCU1CT_Air_spring_pressure_1_U16*0.05/100;
            Brake_cylinder_pressure2  = BCU1CT_Air_spring_pressure_2_U16*0.05/100;
            Brake_cylinder_pressure3  = BCU1CT_Air_spring_pressure_3_U16*0.05/100;
            Brake_cylinder_pressure4  = BCU1CT_Air_spring_pressure_4_U16*0.05/100;
            Brake_cylinder_pressure5  = BCU1CT_Air_spring_pressure_5_U16*0.05/100;
            Brake_cylinder_pressure6  = BCU1CT_Air_spring_pressure_6_U16*0.05/100;
            Brake_cylinder_pressure7  = BCU3CT_Air_spring_pressure_6_U16*0.05/100;
            Brake_cylinder_pressure8  = BCU3CT_Air_spring_pressure_5_U16*0.05/100;
            Brake_cylinder_pressure9  = BCU3CT_Air_spring_pressure_4_U16*0.05/100;
            Brake_cylinder_pressure10 = BCU3CT_Air_spring_pressure_3_U16*0.05/100;
            Brake_cylinder_pressure11 = BCU3CT_Air_spring_pressure_2_U16*0.05/100;
            Brake_cylinder_pressure12 = BCU3CT_Air_spring_pressure_1_U16*0.05/100;


            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure5,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure6,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure7,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure8,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure9,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure10,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure11,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure12,'f',2));


            if (BCU1CT_Air_spr_pressure_1_Active_B1)
            {
                BCU1_pressure_color = 1;
            }
            else
            {
                BCU1_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_2_Active_B1)
            {
                BCU2_pressure_color = 1;
            }
            else
            {
                BCU2_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_3_Active_B1)
            {
                BCU3_pressure_color = 1;
            }
            else
            {
                BCU3_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_4_Active_B1)
            {
                BCU4_pressure_color = 1;
            }
            else
            {
                BCU4_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_5_Active_B1)
            {
                BCU5_pressure_color = 1;
            }
            else
            {
                BCU5_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_6_Active_B1)
            {
                BCU6_pressure_color = 1;
            }
            else
            {
                BCU6_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_1_Active_B1)
            {
                BCU12_pressure_color = 1;
            }
            else
            {
                BCU12_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_2_Active_B1)
            {
                BCU11_pressure_color = 1;
            }
            else
            {
                BCU11_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_3_Active_B1)
            {
                BCU10_pressure_color = 1;
            }
            else
            {
                BCU10_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_4_Active_B1)
            {
                BCU9_pressure_color = 1;
            }
            else
            {
                BCU9_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_5_Active_B1)
            {
                BCU8_pressure_color = 1;
            }
            else
            {
                BCU8_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_6_Active_B1)
            {
                BCU7_pressure_color = 1;
            }
            else
            {
                BCU7_pressure_color = 0;
            }



        SetLabelColor(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1, BCU1_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2, BCU2_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1, BCU3_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2, BCU4_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1, BCU5_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2, BCU6_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1, BCU7_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2, BCU8_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1, BCU9_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2, BCU10_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1, BCU11_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2, BCU12_pressure_color);

}

void CBrakeSelfTestPage::SetLabelColor(int id, int colorVal)
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



void CBrakeSelfTestPage::UpdateBCU_selftest_test()
{


        //BCU1CT_Selftest_active_1_B1                   g_dataBuffer_Display[466]& bit1
        bcu_selftest_signal = BCU1CT_Selftest_active_1_B1^bcu_selftest_temp;
        if ( bcu_selftest_signal != 0 )
        {
            if ( bcu_selftest_signal )
            {
                if ( BCU1CT_Selftest_active_1_B1)//466_9
                {
                    BCU_selftest_string1 = QObject::trUtf8("自检激活");
                     BCU_selftest_color1 = 0;
                }
                else
                {
                    if ( BCU1CT_Selftest_succces_1_B1)//466_10
                    {
                        BCU_selftest_string1 = QObject::trUtf8("自检成功");
                         BCU_selftest_color1 = 0;
                    }
                    if ( BCU1CT_Selftest_failed_1_B1)//466_11
                    {
                        BCU_selftest_string1 = QObject::trUtf8("自检失败");
                        BCU_selftest_color1 = 1;
                    }
                    if (BCU1CT_Last_selftest_aborted_1_B1)//466_8
                    {
                        BCU_selftest_string1 = QObject::trUtf8("自检中断");
                         BCU_selftest_color1 = 1;
                    }
                }


                bcu_selftest_temp = BCU1CT_Selftest_active_1_B1;
                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_string1 );
                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_color1 );
            }
            bcu_selftest_temp = BCU1CT_Selftest_active_1_B1;
        }

        bcu_selftest_signal2 = BCU3CT_Selftest_active_1_B1^bcu_selftest_temp2;
        if ( bcu_selftest_signal2 != 0 )
        {
            if ( bcu_selftest_signal2 )
            {
                if ( BCU3CT_Selftest_active_1_B1)//658_9
                {
                    BCU_selftest_string2 = QObject::trUtf8("自检激活");
                     BCU_selftest_color2 = 0;
                }
                else
                {
                    if ( BCU3CT_Selftest_succces_1_B1)//658_10
                    {
                        BCU_selftest_string2 = QObject::trUtf8("自检成功");
                         BCU_selftest_color2 = 0;
                    }
                     if ( BCU3CT_Selftest_failed_1_B1)//658_11
                    {
                        BCU_selftest_string2 = QObject::trUtf8("自检失败");
                        BCU_selftest_color2 = 1;
                    }
                     if (BCU3CT_Last_selftest_aborted_1_B1)//658_8
                     {
                         BCU_selftest_string2 = QObject::trUtf8("自检中断");
                          BCU_selftest_color2 = 1;
                     }
                }

                bcu_selftest_temp2 = BCU3CT_Selftest_active_1_B1;
                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );
            }

            bcu_selftest_temp2 = BCU3CT_Selftest_active_1_B1;
        }








    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_string1 );
    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_color1 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );

}


void CBrakeSelfTestPage::On_Mode1_Clk()
{
    if(HMCT_BackPressureSelection2_B1)
    {
        HMCT_BackPressureSelection2_B1=false;
        ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->ChangeButtonState(LBUTTON_UP);
    }
    else
    {
         HMCT_BackPressureSelection2_B1=true;
         ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE1))->ChangeButtonState(LBUTTON_DOWN);
     }
}

void CBrakeSelfTestPage::On_Mode2_Clk()
{
    if(HMCT_BackPressureSelection_B1)
    {
        HMCT_BackPressureSelection_B1=false;
        ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->ChangeButtonState(LBUTTON_UP);
    }
    else
    {
         HMCT_BackPressureSelection_B1=true;
         ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_MODE2))->ChangeButtonState(LBUTTON_DOWN);
    }
}

void CBrakeSelfTestPage::UpdateBCU_selftest_LabelColor()
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



    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE1,CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE2,CAR1_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE3,CAR2_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE4,CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE5,CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE6,CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE7,CAR4_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE8,CAR4_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE9,CAR5_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE10,CAR5_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE11,CAR6_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE12,CAR6_Bogie1_separater);


}

//void CBrakeSelfTestPage::UpdateBCU_selftest_ConColor()
//{
//    int testself_con1 = 0;
//    int testself_con2 = 0;

//    ASSERT((testself_con1 >= 0) && (testself_con1 <= 2));
//    ASSERT((testself_con2 >= 0) && (testself_con2 <= 2));

//    testself_con1 = Bit(BCU_TC1_412_422_15,9);
//    testself_con2 = Bit(BCU_TC2_432_442_15,9);

//    if ( testself_con1 == 1 )
//    {
//            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON1))->SetCtrlBKColor(Qt::green);
//    }
//    else
//    {
//            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON1))->SetCtrlBKColor(Qt::red);
//    }

//    if ( testself_con2 == 1 )
//    {
//            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON2))->SetCtrlBKColor(Qt::green);
//    }
//    else
//    {
//            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON2))->SetCtrlBKColor(Qt::red);
//    }
//}



void CBrakeSelfTestPage::SetBCUSeparaterLabelColor(int id, int colorVal)
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


void CBrakeSelfTestPage::SetBCU_selftest_resultColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    return;
}

void CBrakeSelfTestPage::SetBCU_selftest_LabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}



void CBrakeSelfTestPage::SetBCU_selftest_LabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
       // ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (2 == colorVal)
    {
      ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}


