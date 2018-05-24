#include "C_Page_Brake_Sefl_Test_Help.h"


ROMDATA g_PicRom_BrakeSelfTestHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("制动自检帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 50,  80, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 110, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 145, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 180, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 215, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 250, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 285, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 320, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 355, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 390, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 425, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 460, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 495, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 530, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 50,  80,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  80,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  80,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  80,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  80,   1, 450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  80, 150,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(200,  80, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("显示"),                   D_FONT_BOLD(8),      QRect(310,  80, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("备注"),                   D_FONT_BOLD(8),      QRect(420,  80, 330,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("AS压力"),             D_FONT_BOLD(8),      QRect( 50, 110, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("正常"),                   D_FONT_BOLD(8),      QRect(200, 110, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("6.1"),                      D_FONT_BOLD(8),      QRect(325, 118,  80,  20),           Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("5.5"),                      D_FONT_BOLD(8),      QRect(325, 153,  80,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("ASP过高或者过低都是错误"),  D_FONT_BOLD(8),      QRect(420, 145, 330,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("超出范围"),               D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("BSR过低"),                D_FONT_BOLD(8),      QRect( 50, 180, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("正常"),                   D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("过低"),                   D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("6.9"),                      D_FONT_BOLD(8),      QRect(325, 192,  80,  20),           Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(325, 222,  80,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("对应转向架的BSR<6.5(bar)"),D_FONT_BOLD(8),      QRect(420, 217, 330,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("转向架隔离"),              D_FONT_BOLD(8),      QRect( 50, 250, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("正常"),                   D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("被隔离"),                 D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(325, 293,  80,  20),           Qt::white,                Qt::transparent,                  CONTROL_LABEL,          ID_BRAKESELFTESTHELP_LABEL_X         },
    {QObject::trUtf8("BSR<1(bar),对应转向架被隔离"), D_FONT_BOLD(8),  QRect(420, 285, 330,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检条件"),               D_FONT_BOLD(8),      QRect( 50, 320, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("满足条件"),               D_FONT_BOLD(8),      QRect(200, 320, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("不满足"),                 D_FONT_BOLD(8),      QRect(200, 355, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(325, 328,  80,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(325, 363,  80,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检结果"),               D_FONT_BOLD(8),      QRect( 50, 390, 150, 140),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检激活"),                 D_FONT_BOLD(8),      QRect(200, 390, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检激活"),                 D_FONT_BOLD(8),      QRect(310, 390, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检成功"),                    D_FONT_BOLD(8),      QRect(200, 425, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检成功"),                    D_FONT_BOLD(8),      QRect(310, 425, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检失败"),                    D_FONT_BOLD(8),      QRect(200, 460, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检失败"),                    D_FONT_BOLD(8),      QRect(325, 468, 80,  20),           Qt::white,                Qt::red,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("测试中断，没有通过测试"),   D_FONT_BOLD(8),      QRect(445, 495, 210,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检中断"),                    D_FONT_BOLD(8),      QRect(200, 495, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自检中断"),                    D_FONT_BOLD(8),      QRect(325, 503, 80,  20),           Qt::white,                Qt::red,          CONTROL_LABEL,          ID_IGNORE         },


};
int g_BrakeSelfTestHelpRomLen = sizeof(g_PicRom_BrakeSelfTestHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CBrakeSelfTestHelpPage,CPage)
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

CBrakeSelfTestHelpPage::CBrakeSelfTestHelpPage()
{
}

void CBrakeSelfTestHelpPage::OnUpdatePage()
{

}

void CBrakeSelfTestHelpPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_BRAKESELFTESTHELP_LABEL_X))->SetLabelState(6);
}

void CBrakeSelfTestHelpPage::OnShowPage()
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
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif
     this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CBrakeSelfTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_BRAKESELFTEST);
        }

        void CBrakeSelfTestHelpPage::OnComBtn2Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn3Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn4Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn5Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn6Clk()
        {

        }
        void CBrakeSelfTestHelpPage::OnComBtn7Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CBrakeSelfTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_BRAKESELFTEST);
        }

        void CBrakeSelfTestHelpPage::OnComBtn2Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn3Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn4Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn5Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn6Clk()
        {

        }
#endif


