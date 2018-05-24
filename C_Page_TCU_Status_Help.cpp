#include "C_Page_TCU_Status_Help.h"

ROMDATA g_PicRom_CarStatusHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("牵引状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
/*
    {"",                            D_FONT_BOLD(6),      QRect( 50,  55, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  85, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 120, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 155, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 190, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 225, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 260, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 295, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 330, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 365, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 400, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 435, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 470, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 505, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 540, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  55,   1, 486),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  55, 150,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(200,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("显示"),                  D_FONT_BOLD(8),      QRect(310,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("备注"),                  D_FONT_BOLD(8),      QRect(420,  55, 330,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("高速断路器状态"),     D_FONT_BOLD(8),      QRect( 50,  85, 150, 140),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),                  D_FONT_BOLD(8),      QRect(200,  85, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("闭合"),                  D_FONT_BOLD(8),      QRect(200, 120, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(330, 125,  70,  25),            Qt::white,                Qt::green,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                  D_FONT_BOLD(8),      QRect(200, 155, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(330, 160,  70,  25),            Qt::white,                Qt::red,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开或闭合失败"),          D_FONT_BOLD(8),      QRect(460, 155, 250,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(200, 190, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(330, 195,  70,  25),            Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("KIC状态\nKCCC状态"),      D_FONT_BOLD(8),      QRect( 50, 225, 150, 105),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("闭合"),                  D_FONT_BOLD(8),      QRect(200, 225, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(330, 230,  70,  25),            Qt::white,                Qt::green,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),                  D_FONT_BOLD(8),      QRect(200, 260, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                  D_FONT_BOLD(8),      QRect(200, 295, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(330, 300,  70,  25),            Qt::white,                Qt::red,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("KIC,KCCC为牵引系统内部接触器，\nKIC为线路接触器，KCCC为预充电接触器"),          D_FONT_BOLD(8),      QRect(421, 225, 329,  70),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("闭合或断开失败"),          D_FONT_BOLD(8),      QRect(460, 295, 250,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("牵引制动力"),       D_FONT_BOLD(8),      QRect( 50, 330, 150, 70),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("牵引时"),                  D_FONT_BOLD(8),      QRect(200, 330, 110,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("160"),                     D_FONT_BOLD(6),      QRect(330, 335,  70,  25),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("正值代表牵引力"),         D_FONT_BOLD(8),      QRect(460, 330, 250,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动时"),                 D_FONT_BOLD(8),      QRect(200, 365, 110,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-80"),                      D_FONT_BOLD(6),      QRect(330, 370,  70,  25),            Qt::white,                Qt::transparent,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("负值代表电制动力"),         D_FONT_BOLD(8),      QRect(460, 365, 250,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE          },

    {QObject::trUtf8("IES状态"),       D_FONT_BOLD(8),      QRect( 50, 400, 150, 70),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("正常时"),               D_FONT_BOLD(8),      QRect(200, 400, 110,  35),             Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("受电弓位"),                     D_FONT_BOLD(6),      QRect(330, 405,  70,  25),             Qt::black,                Qt::green,               CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("通信异常"),                  D_FONT_BOLD(8),      QRect(200, 435, 110,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(330, 440,  70,  25),             Qt::white,                Qt::white,                 CONTROL_LABEL,          ID_IGNORE         },
{QObject::trUtf8("IES有受电弓位，接地位和车间电源位3种\n状态，分别显示汉字"),            D_FONT_BOLD(5),      QRect(421, 400, 329,  35),  Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("主熔断器状态"),         D_FONT_BOLD(8),      QRect( 50, 470, 150, 70),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("正常时"),               D_FONT_BOLD(8),      QRect(200, 470, 110,  35),             Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(330, 475,  70,  25),             Qt::black,                Qt::green,               CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("不正常时"),                    D_FONT_BOLD(8),      QRect(200, 505, 110,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(330, 510,  70,  25),             Qt::white,                Qt::transparent,                 CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(460, 470, 250,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },

    // {QObject::trUtf8("备注：KIC,KCCC为牵引系统内部接触器，KIC为线路接触器，KCCC为预充电接触器"),            D_FONT_BOLD(8),      QRect(30, 470, 700,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
*/
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 429, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  370),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  370),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  370),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

   {"",                            D_FONT_BOLD(6),      QRect( 40, 400, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },




    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("DCU主断允许\n主断状态闭合\nMCC启/停指令有效\nSMC放电斩波指令有效\n制动电阻风机启动指令有效\n空转状态\n过压斩波允许\n充电接触器控制指令有效\n充电接触器闭合\n短接接触器控制指令有效\n短接接触器闭合\n电制动可用\n电制动有效\n电制动衰减\n电制动滑行"),
                                    D_FONT_BOLD(8),      QRect( 41,  91, 198, 298 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
   {QObject::trUtf8("通讯异常或未上电"),          D_FONT_BOLD(8),      QRect( 41,  401, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  245, 60,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
   {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  405, 60, 20),          Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },



    {"",                            D_FONT_BOLD(6),      QRect( 440,  60,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  90,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  120, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  150, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  180, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  210, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  240, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  270, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  300, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  330, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  360, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  390, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  420, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(440,  60, 1,  360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600,  60, 1,  360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect(441,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引/电制动力"),                D_FONT_BOLD(8),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(" 电制动能力"),                D_FONT_BOLD(8),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(" 电网网压"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("逆变电流"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("斩波电流"),                D_FONT_BOLD(8),      QRect(441,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("SMC给定MCC力"),                D_FONT_BOLD(8),      QRect(441,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("中间电压"),                D_FONT_BOLD(8),      QRect(441,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("中间电流"),                D_FONT_BOLD(8),      QRect(441,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("综合转速"),                D_FONT_BOLD(8),      QRect(441,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("转速"),                D_FONT_BOLD(8),      QRect(441,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("电机温度"),                D_FONT_BOLD(8),      QRect(441,  391, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("km/h"),                D_FONT_BOLD(8),      QRect(601,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("r/min"),                D_FONT_BOLD(8),      QRect(601,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("℃"),                D_FONT_BOLD(8),      QRect(601,  391, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



};
int g_CarStatusHelpRomLen = sizeof(g_PicRom_CarStatusHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatusHelpPage,CPage)
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

CCarStatusHelpPage::CCarStatusHelpPage()
{
}

void CCarStatusHelpPage::OnUpdatePage()
{

}

void CCarStatusHelpPage::OnInitPage()
{

}

void CCarStatusHelpPage::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif

    this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatusHelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }

#endif


