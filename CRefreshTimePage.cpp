#include "CRefreshTimePage.h"
#include "PixyMvbLib.h"
ROMDATA g_PicRom_RefreshTime[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("刷新时间"))

    {"Head",                    D_FONT(8),      QRect(30,   9, 110,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_PIBRT_LABEL_HEAD },

    {"",                            D_FONT_BOLD(6),      QRect( 8,   60, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,   82, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  104, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  126, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  148, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  170, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  192, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  214, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  236, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  258, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  280, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  302, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  324, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  346, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  368, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  390, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  412, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  434, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  456, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  478, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  500, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  522, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(  8,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 60,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 140,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(190,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(270,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(320,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(530,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(580,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(660,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(710,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(640,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(674,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(718,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  463),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {QSTR("MVB_UDP"),               D_FONT_BOLD(6),      QRect(  61,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 191,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 321,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 451,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 581,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 711,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("地址"),                  D_FONT_BOLD(6),      QRect(  8,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(6),      QRect(  61,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(6),      QRect( 141,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(6),      QRect( 191,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(6),      QRect( 271,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(6),      QRect( 321,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(6),      QRect( 401,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(6),      QRect( 451,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(6),      QRect( 531,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(6),      QRect( 581,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                   D_FONT_BOLD(6),      QRect( 661,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(6),      QRect( 711,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("100"),                   D_FONT_BOLD(6),      QRect(  8,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("预留"),                   D_FONT_BOLD(6),      QRect(61,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("410_1"),                   D_FONT_BOLD(6),      QRect(141,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_410TIME         },
    {QSTR("500"),                   D_FONT_BOLD(6),      QRect(271,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("预留"),                   D_FONT_BOLD(6),      QRect(321,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("710_4"),                   D_FONT_BOLD(6),      QRect(401,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_710TIME         },
    {QSTR("7B0_4"),                   D_FONT_BOLD(6),      QRect(531,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7B0TIME         },
    {QSTR("910_4"),                   D_FONT_BOLD(6),      QRect(661,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_910TIME         },

    {QSTR("110_1"),                 D_FONT_BOLD(6),      QRect(  9, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_110TIME         },
    {QSTR("411_1"),                   D_FONT_BOLD(6),      QRect(141, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_411TIME         },
    {QSTR("510_1"),                   D_FONT_BOLD(6),      QRect(271, 104, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_510TIME         },
    {QSTR("711_8"),                   D_FONT_BOLD(6),      QRect(401, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_711TIME         },
    {QSTR("7B1_8"),                   D_FONT_BOLD(6),      QRect(  531, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7B1TIME         },
    {QSTR("911_4"),                   D_FONT_BOLD(6),      QRect(661, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_911TIME         },

    {QSTR("114_1"),                   D_FONT_BOLD(6),      QRect(  9, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_114TIME         },
    {QSTR("412_1"),                   D_FONT_BOLD(6),      QRect(141, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_412TIME         },
    {QSTR("511_4"),                   D_FONT_BOLD(6),      QRect(271, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_511TIME         },
    {QSTR("720_4"),                   D_FONT_BOLD(6),      QRect(401, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_720TIME         },
    {QSTR("7C0_4"),                   D_FONT_BOLD(6),      QRect(  531, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7C0TIME         },
    {QSTR("920_4"),                   D_FONT_BOLD(6),      QRect(661, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_920TIME         },

    {QSTR("120_1"),                   D_FONT_BOLD(6),      QRect(  8, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_120TIME         },
    {QSTR("413_1"),                   D_FONT_BOLD(6),      QRect(141, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_413TIME         },
    {QSTR("520_1"),                   D_FONT_BOLD(6),      QRect(271, 148, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_520TIME         },
    {QSTR("721_8"),                   D_FONT_BOLD(6),      QRect(401, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_721TIME         },
    {QSTR("7C1_8"),                   D_FONT_BOLD(6),      QRect(  531, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7C1TIME         },
    {QSTR("921_4"),                   D_FONT_BOLD(6),      QRect(661, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_921TIME         },

    {QSTR("130_1"),                   D_FONT_BOLD(6),      QRect(  8, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_130TIME         },
    {QSTR("414_4"),                   D_FONT_BOLD(6),      QRect(141, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_414TIME         },
    {QSTR("521_4"),                   D_FONT_BOLD(6),      QRect(271, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_521TIME         },
    {QSTR("730_4"),                   D_FONT_BOLD(6),      QRect(401, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_730TIME         },
    {QSTR("7D0_4"),                   D_FONT_BOLD(6),      QRect(  531, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7D0TIME         },
    {QSTR("A00_1"),                   D_FONT_BOLD(6),      QRect(661, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A00TIME         },

    {QSTR("140_1"),                   D_FONT_BOLD(6),      QRect(  8, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_140TIME         },
    {QSTR("420_1"),                   D_FONT_BOLD(6),      QRect(141, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_420TIME         },
    {QSTR("530_1"),                   D_FONT_BOLD(6),      QRect(271, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_530TIME         },
    {QSTR("731_8"),                   D_FONT_BOLD(6),      QRect(401, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_731TIME         },
    {QSTR("7D1_8"),                   D_FONT_BOLD(6),      QRect(  531, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7D1TIME         },
    {QSTR("A10_2"),                   D_FONT_BOLD(6),      QRect(661, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A10TIME         },

    {QSTR("150_1"),                   D_FONT_BOLD(6),      QRect(  8, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_150TIME         },
    {QSTR("421_1"),                   D_FONT_BOLD(6),      QRect(141, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_421TIME         },
    {QSTR("531_4"),                   D_FONT_BOLD(6),      QRect(271, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_531TIME         },
    {QSTR("740_4"),                   D_FONT_BOLD(6),      QRect(401, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_740TIME         },
    {QSTR("7E0_4"),                   D_FONT_BOLD(6),      QRect(  531, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7E0TIME         },
    {QSTR("A11_2"),                   D_FONT_BOLD(6),      QRect(661, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A11TIME         },

    {QSTR("160_1"),                   D_FONT_BOLD(6),      QRect(  8, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_160TIME         },
    {QSTR("422_1"),                   D_FONT_BOLD(6),      QRect(141, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_422TIME         },
    {QSTR("540_1"),                   D_FONT_BOLD(6),      QRect(271, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_540TIME         },
    {QSTR("741_8"),                   D_FONT_BOLD(6),      QRect(401, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_741TIME         },
    {QSTR("7E1_8"),                   D_FONT_BOLD(6),      QRect(  531, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7E1TIME         },
    {QSTR("B00_4"),                   D_FONT_BOLD(6),      QRect(661, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B00TIME         },

    {QSTR("170_1"),                   D_FONT_BOLD(6),      QRect(  8, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_170TIME         },
    {QSTR("423_1"),                   D_FONT_BOLD(6),      QRect(141, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_423TIME         },
    {QSTR("541_4"),                   D_FONT_BOLD(6),      QRect(271, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_541TIME         },
    {QSTR("750_4"),                   D_FONT_BOLD(6),      QRect(401, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_750TIME         },
    {QSTR("7F0_4"),                   D_FONT_BOLD(6),      QRect(  531, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7F0TIME         },
    {QSTR("B10_4"),                   D_FONT_BOLD(6),      QRect(661, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B10TIME         },

    {QSTR("180_1"),                   D_FONT_BOLD(6),      QRect(  8, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_180TIME         },
    {QSTR("424_4"),                   D_FONT_BOLD(6),      QRect(141, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_424TIME         },
    {QSTR("550_1"),                   D_FONT_BOLD(6),      QRect(271, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_550TIME         },
    {QSTR("751_8"),                   D_FONT_BOLD(6),      QRect(401, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_751TIME         },
    {QSTR("7F1_8"),                   D_FONT_BOLD(6),      QRect(  531, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,         ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7F1TIME         },
    {QSTR("B20_4"),                   D_FONT_BOLD(6),      QRect(661, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B20TIME         },

    {QSTR("184_1"),                   D_FONT_BOLD(6),      QRect(  8, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(61, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_184TIME         },
    {QSTR("430_1"),                   D_FONT_BOLD(6),      QRect(141, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_430TIME         },
    {QSTR("551_4"),                   D_FONT_BOLD(6),      QRect(271, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_551TIME         },
    {QSTR("760_4"),                   D_FONT_BOLD(6),      QRect(401, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_760TIME         },
    {QSTR("800_1"),                   D_FONT_BOLD(6),      QRect(  531, 303, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("预留"),                      D_FONT_BOLD(4),      QRect(581, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("F00_4"),                   D_FONT_BOLD(6),      QRect(661, 303, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F00TIME         },

    {QSTR("200_4"),                   D_FONT_BOLD(6),      QRect(  8, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_200TIME         },
    {QSTR("431_1"),                   D_FONT_BOLD(6),      QRect(141, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_431TIME         },
    {QSTR("560_1"),                   D_FONT_BOLD(6),      QRect(271, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_560TIME         },
    {QSTR("761_8"),                   D_FONT_BOLD(6),      QRect(401, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_761TIME         },
    {QSTR("810_4"),                   D_FONT_BOLD(6),      QRect(  531, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_810TIME         },
    {QSTR("F01_4"),                   D_FONT_BOLD(6),      QRect(661, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F01TIME         },

    {QSTR("201_4"),                   D_FONT_BOLD(6),      QRect(  8, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(4),      QRect(61, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_201TIME         },
    {QSTR("432_1"),                   D_FONT_BOLD(6),      QRect(141, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_432TIME         },
    {QSTR("561_4"),                   D_FONT_BOLD(6),      QRect(271, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_561TIME         },
    {QSTR("770_4"),                   D_FONT_BOLD(6),      QRect(401, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(451, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_770TIME         },
    {QSTR("820_4"),                   D_FONT_BOLD(6),      QRect(  531, 346, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_820TIME         },
    {QSTR("F02_4"),                   D_FONT_BOLD(6),      QRect(661, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F02TIME         },

    {QSTR("202_4"),                   D_FONT_BOLD(6),      QRect(  8, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_202TIME         },
    {QSTR("433_1"),                   D_FONT_BOLD(6),      QRect(141, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_433TIME         },
    {QSTR("600_1"),                   D_FONT_BOLD(6),      QRect(271, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("预留"),                      D_FONT_BOLD(6),      QRect(321, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("771_8"),                   D_FONT_BOLD(6),      QRect(401, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_771TIME         },
    {QSTR("830_4"),                   D_FONT_BOLD(6),      QRect(  531, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_830TIME         },
    {QSTR("F03_4"),                   D_FONT_BOLD(6),      QRect(661, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F03TIME         },

    {QSTR("203_4"),                   D_FONT_BOLD(6),      QRect(  8, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(61, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_203TIME         },
    {QSTR("434_4"),                   D_FONT_BOLD(6),      QRect(141, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_434TIME         },
    {QSTR("610_1"),                   D_FONT_BOLD(6),      QRect(271, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_610TIME         },
    {QSTR("780_4"),                   D_FONT_BOLD(6),      QRect(401, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_780TIME         },
    {QSTR("840_4"),                   D_FONT_BOLD(6),      QRect(  531, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_840TIME         },
    {QSTR("F10_4"),                   D_FONT_BOLD(6),      QRect(661, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F10TIME         },

    {QSTR("280_4"),                   D_FONT_BOLD(6),      QRect(  8, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_280TIME         },
    {QSTR("440_1"),                    D_FONT_BOLD(6),      QRect(141, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_440TIME         },
    {QSTR("611_4"),                   D_FONT_BOLD(6),      QRect(271, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_611TIME         },
    {QSTR("781_8"),                   D_FONT_BOLD(6),      QRect(401, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_781TIME         },
    {QSTR("850_4"),                   D_FONT_BOLD(6),      QRect(  531, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_850TIME         },
    {QSTR("F11_4"),                   D_FONT_BOLD(6),      QRect(661, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F11TIME         },

    {QSTR("281_4"),                   D_FONT_BOLD(6),      QRect(  8, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_281TIME         },
    {QSTR("441_1"),                   D_FONT_BOLD(6),      QRect(141, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_441TIME         },
    {QSTR("620_1"),                   D_FONT_BOLD(6),      QRect(271, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_620TIME         },
    {QSTR("790_4"),                   D_FONT_BOLD(6),      QRect(401, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_790TIME         },
    {QSTR("860_4"),                   D_FONT_BOLD(6),      QRect(  531, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_860TIME         },
    {QSTR("F12_4"),                   D_FONT_BOLD(6),      QRect(661, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F12TIME         },

    {QSTR("282_4"),                   D_FONT_BOLD(6),      QRect(  8, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_282TIME         },
    {QSTR("442_1"),                   D_FONT_BOLD(6),      QRect(141, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_442TIME         },
    {QSTR("621_4"),                   D_FONT_BOLD(6),      QRect(271, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_621TIME         },
    {QSTR("791_8"),                   D_FONT_BOLD(6),      QRect(401, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_791TIME         },
    {QSTR("870_4"),                   D_FONT_BOLD(6),      QRect(  531, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_870TIME         },
    {QSTR("F13_4"),                   D_FONT_BOLD(6),      QRect(661, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F13TIME         },

    {QSTR("283_4"),                   D_FONT_BOLD(6),      QRect(  8, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_283TIME         },
    {QSTR("443_1"),                   D_FONT_BOLD(6),      QRect(141, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_443TIME         },
    {QSTR("700_4"),                   D_FONT_BOLD(6),      QRect(271, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_700TIME         },
    {QSTR("7A0_4"),                   D_FONT_BOLD(6),      QRect(401, 478, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(451, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7A0TIME         },
    {QSTR("880_4"),                   D_FONT_BOLD(6),      QRect(  531, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_880TIME         },
    {QSTR(""),                   D_FONT_BOLD(6),      QRect(661, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("271"),                   D_FONT_BOLD(6),      QRect(  8, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("预留"),                      D_FONT_BOLD(6),      QRect(61, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("444_4"),                   D_FONT_BOLD(6),      QRect(141, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_444TIME         },
    {QSTR("701_8"),                   D_FONT_BOLD(6),      QRect(271, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_701TIME         },
    {QSTR("7A1_8"),                   D_FONT_BOLD(6),      QRect(401, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(451, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7A1TIME         },
    {QSTR("900_1"),                   D_FONT_BOLD(6),      QRect(  531, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("预留"),                      D_FONT_BOLD(4),      QRect(581, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(6),      QRect(661, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("220_4"),                   D_FONT_BOLD(6),      QRect(  8, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_220TIME         },
    {QSTR("221_4"),                   D_FONT_BOLD(6),      QRect(141, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_221TIME         },
    {QSTR("222_4"),                   D_FONT_BOLD(6),      QRect(271, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_222TIME         },
    {QSTR("223_4"),                   D_FONT_BOLD(6),      QRect(401, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(4),      QRect(451, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_223TIME         },


    D_COMMON_PAGE_BUTTON_BAR
};
int g_RefreshTimeRomLen = sizeof(g_PicRom_RefreshTime)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRefreshTimePage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CRefreshTimePage::CRefreshTimePage()
{
}

void CRefreshTimePage::OnUpdatePage()
{
    UpdateRefreshTime();
    ((CLabel *)GetDlgItem(ID_PIBRT_LABEL_HEAD))->SetCtrlText(QSTR("列车号:")+QString::number(CCU_HMI_221_9));
}

void CRefreshTimePage::OnInitPage()
{

}

void CRefreshTimePage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
}

void CRefreshTimePage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CRefreshTimePage::OnComBtn2Clk()
{

}

void CRefreshTimePage::OnComBtn3Clk()
{

}

void CRefreshTimePage::OnComBtn4Clk()
{

}

void CRefreshTimePage::OnComBtn5Clk()
{

}

void CRefreshTimePage::OnComBtn6Clk()
{
//    ChangePage(PAGE_INDEX_REFRESHTIME2);
}

void CRefreshTimePage::UpdateRefreshTime()
{


//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_100TIME,refresh_time_100);
   // SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110,65535);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110,refresh_time_udp_110);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_114TIME,65535-refresh_time_114,refresh_time_udp_114);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_120TIME,65535-refresh_time_120,refresh_time_udp_120);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130,refresh_time_udp_130);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_140TIME,65535-refresh_time_140,refresh_time_udp_140);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_150TIME,65535-refresh_time_150,refresh_time_udp_150);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_160TIME,65535-refresh_time_160,refresh_time_udp_160);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_170TIME,65535-refresh_time_170,refresh_time_udp_170);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_180TIME,65535-refresh_time_180,refresh_time_udp_180);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_184TIME,65535-refresh_time_184,refresh_time_udp_184);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_200TIME,65535-refresh_time_200,refresh_time_udp_200);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_201TIME,65535-refresh_time_201,refresh_time_udp_201);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_202TIME,65535-refresh_time_202,refresh_time_udp_202);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_203TIME,65535-refresh_time_203,refresh_time_udp_203);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_280TIME,65535-refresh_time_280,refresh_time_udp_280);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_281TIME,65535-refresh_time_281,refresh_time_udp_281);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_282TIME,65535-refresh_time_282,refresh_time_udp_282);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_283TIME,65535-refresh_time_283,refresh_time_udp_283);
 //   SetRefreshTimeLabelString(ID_PIBRT_LABEL_400TIME,65535-refresh_time_400,refresh_time_udp_110);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_410TIME,65535-refresh_time_410,refresh_time_udp_410);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_411TIME,65535-refresh_time_411,refresh_time_udp_411);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_412TIME,65535-refresh_time_412,refresh_time_udp_412);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_413TIME,65535-refresh_time_413,refresh_time_udp_413);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_414TIME,65535-refresh_time_414,refresh_time_udp_414);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_420TIME,65535-refresh_time_420,refresh_time_udp_420);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_421TIME,65535-refresh_time_421,refresh_time_udp_421);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_422TIME,65535-refresh_time_422,refresh_time_udp_422);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_423TIME,65535-refresh_time_423,refresh_time_udp_423);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_424TIME,65535-refresh_time_424,refresh_time_udp_424);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_430TIME,65535-refresh_time_430,refresh_time_udp_430);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_431TIME,65535-refresh_time_431,refresh_time_udp_431);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_432TIME,65535-refresh_time_432,refresh_time_udp_432);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_433TIME,65535-refresh_time_433,refresh_time_udp_433);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_434TIME,65535-refresh_time_434,refresh_time_udp_434);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_440TIME,65535-refresh_time_440,refresh_time_udp_440);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_441TIME,65535-refresh_time_441,refresh_time_udp_441);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_442TIME,65535-refresh_time_442,refresh_time_udp_442);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_443TIME,65535-refresh_time_443,refresh_time_udp_443);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_444TIME,65535-refresh_time_444,refresh_time_udp_444);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_500TIME,65535-refresh_time_500,refresh_time_udp_110);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_510TIME,65535-refresh_time_510,refresh_time_udp_510);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_511TIME,65535-refresh_time_511,refresh_time_udp_511);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_520TIME,65535-refresh_time_520,refresh_time_udp_520);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_521TIME,65535-refresh_time_521,refresh_time_udp_521);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_530TIME,65535-refresh_time_530,refresh_time_udp_530);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_531TIME,65535-refresh_time_531,refresh_time_udp_531);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_540TIME,65535-refresh_time_540,refresh_time_udp_540);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_541TIME,65535-refresh_time_541,refresh_time_udp_541);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_550TIME,65535-refresh_time_550,refresh_time_udp_550);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_551TIME,65535-refresh_time_551,refresh_time_udp_551);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_560TIME,65535-refresh_time_560,refresh_time_udp_560);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_561TIME,65535-refresh_time_561,refresh_time_udp_561);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_600TIME,65535-refresh_time_600,refresh_time_udp_110);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_610TIME,65535-refresh_time_610,refresh_time_udp_610);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_611TIME,65535-refresh_time_611,refresh_time_udp_611);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_620TIME,65535-refresh_time_620,refresh_time_udp_620);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_621TIME,65535-refresh_time_621,refresh_time_udp_621);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_700TIME,65535-refresh_time_700,refresh_time_udp_700);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_701TIME,65535-refresh_time_701,refresh_time_udp_701);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710,refresh_time_udp_710);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711,refresh_time_udp_711);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720,refresh_time_udp_720);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721,refresh_time_udp_721);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_730TIME,65535-refresh_time_730,refresh_time_udp_730);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_731TIME,65535-refresh_time_731,refresh_time_udp_731);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_740TIME,65535-refresh_time_740,refresh_time_udp_740);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_741TIME,65535-refresh_time_741,refresh_time_udp_741);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_750TIME,65535-refresh_time_750,refresh_time_udp_750);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_751TIME,65535-refresh_time_751,refresh_time_udp_751);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_760TIME,65535-refresh_time_760,refresh_time_udp_760);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_761TIME,65535-refresh_time_761,refresh_time_udp_761);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_770TIME,65535-refresh_time_770,refresh_time_udp_770);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_771TIME,65535-refresh_time_771,refresh_time_udp_771);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_780TIME,65535-refresh_time_780,refresh_time_udp_780);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_781TIME,65535-refresh_time_781,refresh_time_udp_781);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_790TIME,65535-refresh_time_790,refresh_time_udp_790);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_791TIME,65535-refresh_time_791,refresh_time_udp_791);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7A0TIME,65535-refresh_time_7A0,refresh_time_udp_7A0);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7A1TIME,65535-refresh_time_7A1,refresh_time_udp_7A1);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7B0TIME,65535-refresh_time_7B0,refresh_time_udp_7B0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7B1TIME,65535-refresh_time_7B1,refresh_time_udp_7B1);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7C0TIME,65535-refresh_time_7C0,refresh_time_udp_7C0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7C1TIME,65535-refresh_time_7C1,refresh_time_udp_7C1);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7D0TIME,65535-refresh_time_7D0,refresh_time_udp_7D0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7D1TIME,65535-refresh_time_7D1,refresh_time_udp_7D1);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7E0TIME,65535-refresh_time_7E0,refresh_time_udp_7E0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7E1TIME,65535-refresh_time_7E1,refresh_time_udp_7E1);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7F0TIME,65535-refresh_time_7F0,refresh_time_udp_7F0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7F1TIME,65535-refresh_time_7F1,refresh_time_udp_7F1);
      //  SetRefreshTimeLabelString(ID_PIBRT_LABEL_800TIME,65535-refresh_time_800,refresh_time_udp_800);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_810TIME,65535-refresh_time_810,refresh_time_udp_810);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_820TIME,65535-refresh_time_820,refresh_time_udp_820);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_830TIME,65535-refresh_time_830,refresh_time_udp_830);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_840TIME,65535-refresh_time_840,refresh_time_udp_840);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_850TIME,65535-refresh_time_850,refresh_time_udp_850);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_860TIME,65535-refresh_time_860,refresh_time_udp_860);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_870TIME,65535-refresh_time_870,refresh_time_udp_870);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_880TIME,65535-refresh_time_880,refresh_time_udp_880);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_910TIME,65535-refresh_time_910,refresh_time_udp_910);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_911TIME,65535-refresh_time_911,refresh_time_udp_911);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_920TIME,65535-refresh_time_920,refresh_time_udp_920);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_921TIME,65535-refresh_time_921,refresh_time_udp_921);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A00TIME,65535-refresh_time_A00,refresh_time_udp_A00);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A10TIME,65535-refresh_time_A10,refresh_time_udp_A10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A11TIME,65535-refresh_time_A11,refresh_time_udp_A11);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B00TIME,65535-refresh_time_B00,refresh_time_udp_B00);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10,refresh_time_udp_B10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B20TIME,65535-refresh_time_B20,refresh_time_udp_B20);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F00TIME,65535-refresh_time_F00,refresh_time_udp_F00);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F01TIME,65535-refresh_time_F01,refresh_time_udp_F01);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F02TIME,65535-refresh_time_F02,refresh_time_udp_F02);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F03TIME,65535-refresh_time_F03,refresh_time_udp_F03);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F10TIME,65535-refresh_time_F10,refresh_time_udp_F10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F11TIME,65535-refresh_time_F11,refresh_time_udp_F11);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F12TIME,65535-refresh_time_F12,refresh_time_udp_F12);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F13TIME,65535-refresh_time_F13,refresh_time_udp_F13);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_220TIME,65535-refresh_time_220,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_221TIME,65535-refresh_time_221,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_222TIME,65535-refresh_time_222,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_223TIME,65535-refresh_time_223,0);

//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,refresh_time_110);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_114TIME,refresh_time_114);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_120TIME,refresh_time_120);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_130TIME,refresh_time_130);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_140TIME,refresh_time_140);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_150TIME,refresh_time_150);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_160TIME,refresh_time_160);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_170TIME,refresh_time_170);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_180TIME,refresh_time_180);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_184TIME,refresh_time_184);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_200TIME,refresh_time_200);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_201TIME,refresh_time_201);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_202TIME,refresh_time_202);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_203TIME,refresh_time_203);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_280TIME,refresh_time_280);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_281TIME,refresh_time_281);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_282TIME,refresh_time_282);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_283TIME,refresh_time_283);
// //   SetRefreshTimeLabelString(ID_PIBRT_LABEL_400TIME,refresh_time_400);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_410TIME,refresh_time_410);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_411TIME,refresh_time_411);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_412TIME,refresh_time_412);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_413TIME,refresh_time_413);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_414TIME,refresh_time_414);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_420TIME,refresh_time_420);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_421TIME,refresh_time_421);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_422TIME,refresh_time_422);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_423TIME,refresh_time_423);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_424TIME,refresh_time_424);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_430TIME,refresh_time_430);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_431TIME,refresh_time_431);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_432TIME,refresh_time_432);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_433TIME,refresh_time_433);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_434TIME,refresh_time_434);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_440TIME,refresh_time_440);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_441TIME,refresh_time_441);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_442TIME,refresh_time_442);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_443TIME,refresh_time_443);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_444TIME,refresh_time_444);
////    SetRefreshTimeLabelString(ID_PIBRT_LABEL_500TIME,refresh_time_500);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_510TIME,refresh_time_510);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_511TIME,refresh_time_511);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_520TIME,refresh_time_520);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_521TIME,refresh_time_521);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_530TIME,refresh_time_530);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_531TIME,refresh_time_531);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_540TIME,refresh_time_540);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_541TIME,refresh_time_541);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_550TIME,refresh_time_550);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_551TIME,refresh_time_551);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_560TIME,refresh_time_560);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_561TIME,refresh_time_561);
////    SetRefreshTimeLabelString(ID_PIBRT_LABEL_600TIME,refresh_time_600);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_610TIME,refresh_time_610);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_611TIME,refresh_time_611);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_620TIME,refresh_time_620);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_621TIME,refresh_time_621);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_700TIME,refresh_time_700);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_701TIME,refresh_time_701);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_710TIME,refresh_time_710);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_711TIME,refresh_time_711);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_720TIME,refresh_time_720);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_721TIME,refresh_time_721);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_730TIME,refresh_time_730);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_731TIME,refresh_time_731);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_740TIME,refresh_time_740);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_741TIME,refresh_time_741);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_750TIME,refresh_time_750);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_751TIME,refresh_time_751);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_760TIME,refresh_time_760);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_761TIME,refresh_time_761);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_770TIME,refresh_time_770);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_771TIME,refresh_time_771);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_780TIME,refresh_time_780);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_781TIME,refresh_time_781);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_790TIME,refresh_time_790);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_791TIME,refresh_time_791);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7A0TIME,refresh_time_7A0);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7A1TIME,refresh_time_7A1);

//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7B0TIME,refresh_time_7B0);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7B1TIME,refresh_time_7B1);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7C0TIME,refresh_time_7C0);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7C1TIME,refresh_time_7C1);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7D0TIME,refresh_time_7D0);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7D1TIME,refresh_time_7D1);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7E0TIME,refresh_time_7E0);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7E1TIME,refresh_time_7E1);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7F0TIME,refresh_time_7F0);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_7F1TIME,refresh_time_7F1);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_800TIME,refresh_time_800);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_810TIME,refresh_time_810);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_820TIME,refresh_time_820);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_830TIME,refresh_time_830);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_840TIME,refresh_time_840);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_850TIME,refresh_time_850);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_860TIME,refresh_time_860);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_870TIME,refresh_time_870);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_880TIME,refresh_time_880);

//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_900TIME,refresh_time_900);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_910TIME,refresh_time_910);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_911TIME,refresh_time_911);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_920TIME,refresh_time_920);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_921TIME,refresh_time_921);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A00TIME,refresh_time_A00);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A10TIME,refresh_time_A10);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A11TIME,refresh_time_A11);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B00TIME,refresh_time_B00);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B10TIME,refresh_time_B10);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B20TIME,refresh_time_B20);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F00TIME,refresh_time_F00);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F01TIME,refresh_time_F01);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F02TIME,refresh_time_F02);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F03TIME,refresh_time_F03);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F10TIME,refresh_time_F10);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F11TIME,refresh_time_F11);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F12TIME,refresh_time_F12);
//        SetRefreshTimeLabelString(ID_PIBRT_LABEL_F13TIME,refresh_time_F13);



}

void CRefreshTimePage::SetRefreshTimeLabelString(int id, int DataVal,int DataVal2)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal)+"_"+QString::number(DataVal2));

    return;
}
