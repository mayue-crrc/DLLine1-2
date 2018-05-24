#include "C_Page_Run_Status_Help2.h"

ROMDATA g_PicRom_RunHelp2[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 40, 180, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 220, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 270, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 40, 510, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 100, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 140, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect(200, 180, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


   // {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 324, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 372, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 460, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 500, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40, 60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 60,   1, 482),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
// black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QObject::trUtf8("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QObject::trUtf8("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },   {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108,  28),          Qt::white,                Qt::
    {QObject::trUtf8("受电弓状态"),                 D_FONT_BOLD(8),      QRect( 41, 62, 158,  156),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("升弓"),                      D_FONT_BOLD(8),      QRect(201, 62, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("降弓"),                      D_FONT_BOLD(8),      QRect(201, 102, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("动作中"),                    D_FONT_BOLD(8),      QRect(201, 142, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("通信异常"),                    D_FONT_BOLD(8),    QRect(201, 182, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("up.PNG"),                   D_FONT_BOLD(8),      QRect(326, 67,  90,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_UP        },
    {QObject::trUtf8("down.PNG"),                 D_FONT_BOLD(8),      QRect(326, 107,  90,  26),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP2_DOWN        },
    {QObject::trUtf8("no_up_down.PNG"),           D_FONT_BOLD(8),      QRect(326, 147, 90,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_NO_UP_DOWN        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),            QRect(326, 187,  90,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("升弓到位"),           D_FONT_BOLD(8),             QRect(421, 62, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("降弓到位"),           D_FONT_BOLD(8),             QRect(421, 102, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("受电弓动作中"),           D_FONT_BOLD(8),          QRect(421, 142, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),        QRect( 41, 228, 158,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),        QRect(201, 228, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {"warning.PNG",                             D_FONT_BOLD(8),         QRect(326, 232,  90,  26),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP2_WARNING        },
    {QObject::trUtf8("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),         QRect(421, 228, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("辅助系统"),               D_FONT_BOLD(8),      QRect(41, 270, 158, 156),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("正常模式"),               D_FONT_BOLD(8),      QRect(201, 280, 108, 36),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("220V"),                  D_FONT_BOLD(6),      QRect(321, 284, 90, 26),             Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("逆变模式"),               D_FONT_BOLD(8),      QRect(201, 302, 108, 36),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   // {QObject::trUtf8("250V"),                  D_FONT_BOLD(6),      QRect(321, 307, 90,26),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停止状态"),               D_FONT_BOLD(8),      QRect(201, 332, 108, 36),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停机    "),                  D_FONT_BOLD(8),      QRect(321, 337, 108,26),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(200, 378, 108, 36),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 383, 90, 26),            Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("牵引系统状态"),               D_FONT_BOLD(8),      QRect( 41, 422, 158,  116),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("正常"),                   D_FONT_BOLD(8),      QRect(201, 422, 108,  36),         Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引隔离"),               D_FONT_BOLD(8),      QRect(201, 462, 108,   36),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 502, 108,  36),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(8),      QRect(320, 427,  90,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 467,  90,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_RUNHELP2_ICON1 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 507,  90,  26),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("牵引系统逆变电流值(0~2500A)"),     D_FONT_BOLD(8),      QRect(421, 422, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("发生重大故障自动隔离"),     D_FONT_BOLD(8),      QRect(421, 462, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect(421, 502, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("停放制动"),               D_FONT_BOLD(8),      QRect( 41, 285, 158,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("缓解"),                   D_FONT_BOLD(8),      QRect(201, 271, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("施加"),                   D_FONT_BOLD(8),      QRect(201, 301, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 275,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("(P)"),                   D_FONT_BOLD(8),      QRect(320, 305,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },


//    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),      QRect( 41, 345, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),      QRect(201, 345, 108,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//     {QObject::trUtf8("warning.PNG"),           D_FONT_BOLD(8),      QRect(320, 335,  80,  50),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP2_WARNING        },
//   // {QObject::trUtf8("终点"),                   D_FONT_BOLD(8),      QRect(350, 360,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),      QRect(421, 345, 338,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("受电弓状态"),                 D_FONT_BOLD(8),      QRect( 41, 405, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("升弓"),              D_FONT_BOLD(8),      QRect(201, 391, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("降弓"),                D_FONT_BOLD(8),      QRect(201, 421, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("up.PNG"),                    D_FONT_BOLD(8),      QRect(321, 391,  90,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_UP        },
//    {QObject::trUtf8("down.PNG"),                    D_FONT_BOLD(8),      QRect(320, 421,  90,  28),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP2_DOWN        },
//    {QObject::trUtf8(""), D_FONT_BOLD(8),   QRect(421, 391, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),   D_FONT_BOLD(8),   QRect(421, 421, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



};
int g_RunHelp2RomLen = sizeof(g_PicRom_RunHelp2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp2Page,CPage)
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

CRunHelp2Page::CRunHelp2Page()
{
}

void CRunHelp2Page::OnUpdatePage()
{

}

void CRunHelp2Page::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON2))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON1))->SetLabelState(6);
   // ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON3))->SetLabelState(6);

   // ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_WARNING))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_UP))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_DOWN))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_NO_UP_DOWN))->ShowImage();
}

void CRunHelp2Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("下一页"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif

    this->InitPageHeader();

}

#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {

        }

        void CRunHelp2Page::OnComBtn6Clk()
        {

        }
        void CRunHelp2Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_RUNHELP3);
        }
#else
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP3);
        }

#endif


