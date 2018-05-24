#include "C_Page_SIV_Status_Help.h"

ROMDATA  g_PicRom_CarStatus1Help2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("辅助状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
 /*   {"",                            D_FONT_BOLD(6),      QRect( 50,  55, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50,  85, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 115, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 145, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
  //  {"",                            D_FONT_BOLD(6),      QRect(200, 175, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 205, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 235, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 265, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 295, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 325, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 355, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 385, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 415, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 445, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 475, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 505, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 175, 220,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  55,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  55,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  55,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  55,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  55, 150,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(200,  55, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                  D_FONT_BOLD(8),      QRect(310,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                  D_FONT_BOLD(8),      QRect(420,  55, 330,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("抑制扩展供电"),            D_FONT_BOLD(8),      QRect( 50,  85, 150,  60),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有抑制"),                  D_FONT_BOLD(8),      QRect(200,  85, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("没有抑制"),                D_FONT_BOLD(8),      QRect(200, 115, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("抑制扩展"),                  D_FONT_BOLD(8),      QRect(320,  90,  90,  20),            Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(330, 120,  70,  20),            Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("KAUX状态\n(扩展供电)"),    D_FONT_BOLD(8),      QRect(50, 146, 150, 58),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
  //  {QObject::trUtf8("(扩展供电)"),             D_FONT_BOLD(8),      QRect(50, 91, 150, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("无"),                    D_FONT_BOLD(8),      QRect(200, 146, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有"),                    D_FONT_BOLD(8),      QRect(200, 176, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 146, 90, 20),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("扩展供电"),                      D_FONT_BOLD(8),      QRect(320, 180, 90, 20),            Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(" [辅助状态]行第4车厢绿色表示有扩展供电，\n扩展由正常辅助系统向故障辅助方向扩展"), D_FONT_BOLD(8), QRect(420, 146, 330, 58),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8("IES有集电靴，接地和车间电源3种\n状态，分别显示汉字"), D_FONT_BOLD(8),QRect(420, 85, 330, 60), Qt::white,          Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("乘车率"),                D_FONT_BOLD(8),      QRect(50, 145, 150, 60),              Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("显示实际值"),             D_FONT_BOLD(8),     QRect(200, 145, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("传送异常"),               D_FONT_BOLD(8),     QRect(200, 175, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("75%"),                   D_FONT_BOLD(8),      QRect(310, 145, 110,30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(330, 180, 70, 20),             Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("转向架载荷"),             D_FONT_BOLD(8),      QRect(50, 205, 150, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("（吨）"),                D_FONT_BOLD(8),      QRect(50, 230, 150, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("正常"),                  D_FONT_BOLD(8),      QRect(200, 205, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("无效"),                  D_FONT_BOLD(8),      QRect(200, 235, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("8"),                     D_FONT_BOLD(8),      QRect(310, 205, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("9"),                      D_FONT_BOLD(6),      QRect(330, 240, 70, 20),             Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示正常数值"),            D_FONT_BOLD(8),      QRect(460, 205, 250, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示另一转向架数值或AW3值"),D_FONT_BOLD(8),      QRect(460, 235, 250, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助系统"),               D_FONT_BOLD(8),      QRect(50, 265, 150, 180),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("正常模式"),               D_FONT_BOLD(8),      QRect(200, 265, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("380V"),                  D_FONT_BOLD(6),      QRect(330, 266, 70, 15),             Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("120A"),                  D_FONT_BOLD(6),      QRect(330, 280, 70, 15),             Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("逆变模式"),               D_FONT_BOLD(8),      QRect(200, 295, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("250V"),                  D_FONT_BOLD(6),      QRect(330, 296, 70, 15),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("120A"),                  D_FONT_BOLD(6),      QRect(330, 310, 70, 15),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停止状态"),               D_FONT_BOLD(8),      QRect(200, 325, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停机"),                  D_FONT_BOLD(8),      QRect(310, 325, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("可复位故障"),             D_FONT_BOLD(8),      QRect(200, 355, 110, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("可复位"),                      D_FONT_BOLD(8),      QRect(330, 360, 70, 20),             Qt::white,               Qt::darkRed,      CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("不可复位故障"),            D_FONT_BOLD(8),      QRect(200, 385, 110, 30),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 390, 70, 20),            Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(200, 415, 110, 30),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 420, 70, 20),            Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("逃生门状态"),            D_FONT_BOLD(8),      QRect( 50,  445, 150,  60),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("逃生门关闭"),            D_FONT_BOLD(8),      QRect(200,  445, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("逃生门打开"),            D_FONT_BOLD(8),      QRect(200, 475, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(330,  450,  70,  20),            Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(330, 480,  70,  20),            Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },

    //    {QObject::trUtf8("KAUX状态"),               D_FONT_BOLD(8),      QRect(50, 460, 150, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("(扩展供电)"),             D_FONT_BOLD(8),      QRect(50, 485, 150, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("无"),                    D_FONT_BOLD(8),      QRect(200, 445, 110, 45),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("有"),                    D_FONT_BOLD(8),      QRect(200, 490, 110, 45),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 450, 70, 20),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 503, 70, 20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("绿色表示KAUX闭合，有扩展供电，扩展由\n正常辅助系统向故障辅助方向扩展"), D_FONT_BOLD(7), QRect(420, 490, 330, 45),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },
*/

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 390, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 330, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 360, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 390, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },




    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("SIV启动信号有效\nKM1SKM1闭合\nKM1SKM2闭合\nKMASKMA闭合\nDC110V输出正常\nFANS散热风机正常\nRest复位信号有效\n输入保护开关用QF11正常\nKMA_ONKMA闭合指令有效\nKM2_ONKM2闭合指令有效\nKM1_ONKM1闭合指令有效\nSIV正常"),
                                    D_FONT_BOLD(8),      QRect( 41,  91, 198, 238 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("A10H逆变器85 ℃超温"),             D_FONT_BOLD(8),      QRect( 41,  331, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("通讯异常或未上电"),             D_FONT_BOLD(8),      QRect( 41,  361, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  180, 60,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  335, 60,20),          Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  365, 60, 20),          Qt::white,                Qt::white,                CONTROL_LABEL,            ID_IGNORE      },



    {"",                            D_FONT_BOLD(6),      QRect( 440,  60,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  90,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  120, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  150, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  180, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  210, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(440,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect(441,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("电流"),                D_FONT_BOLD(8),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("电压"),                D_FONT_BOLD(8),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("温度"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("频率"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("℃"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("Hz"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


};
int g_CarStatus1Help2RomLen = sizeof(g_PicRom_CarStatus1Help2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help2Page,CPage)
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
END_MESSAGE_MAP()

CCarStatus1Help2Page::CCarStatus1Help2Page()
{
}

void CCarStatus1Help2Page::OnUpdatePage()
{

}

void CCarStatus1Help2Page::OnInitPage()
{

}

void CCarStatus1Help2Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif

    this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatus1Help2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CCarStatus1Help2Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help2Page::OnComBtn7Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn8Clk()
        {

        }
#else
        void CCarStatus1Help2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CCarStatus1Help2Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn5Clk()
        {
        }

        void CCarStatus1Help2Page::OnComBtn6Clk()
        {

        }

#endif






