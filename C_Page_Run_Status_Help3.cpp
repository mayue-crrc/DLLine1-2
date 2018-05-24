#include "C_Page_Run_Status_Help3.h"


ROMDATA  g_PicRom_RunHelp3[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  120, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 330, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 510, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 90, 220,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 114+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 139+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 165+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 192+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 218+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 247+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 274+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
 //   {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 360, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 420, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  451),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QObject::trUtf8("KAUX状态\n(扩展供电)"),    D_FONT_BOLD(8),      QRect(50, 61, 150, 58),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
  //  {QObject::trUtf8("(扩展供电)"),             D_FONT_BOLD(8),      QRect(50, 91, 150, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("无扩展供电"),                    D_FONT_BOLD(8),      QRect(200, 61, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有扩展供电"),                    D_FONT_BOLD(8),      QRect(200, 91, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 61, 90, 20),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("扩展供电"),                      D_FONT_BOLD(8),      QRect(320, 95, 90, 20),            Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(" [辅助状态]行第3车厢绿色表示有扩展供电"), D_FONT_BOLD(8), QRect(420, 61, 330, 58),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("1侧门"),                 D_FONT_BOLD(8),      QRect( 41, 150+30, 158, 30),           Qt::white,                Qt::black,                 CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2侧门"),                 D_FONT_BOLD(8),      QRect( 41, 180+30, 158, 30),           Qt::white,                Qt::black,                 CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("关好 "),                 D_FONT_BOLD(8),      QRect(201,  91+30, 108, 24),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门开 "),                 D_FONT_BOLD(8),      QRect(201, 116+30, 108, 24),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("动作中 "),                 D_FONT_BOLD(8),      QRect(201, 142+30, 108, 24),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("隔离 "),                 D_FONT_BOLD(8),      QRect(201, 168+30, 108, 24),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("紧急解锁"),               D_FONT_BOLD(8),      QRect(201, 194+30, 108, 24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("有障碍物"),               D_FONT_BOLD(8),      QRect(201, 220+30, 108, 24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("车门故障"),               D_FONT_BOLD(8),      QRect(201, 248+30, 108, 24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 275+30, 108, 24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("制动缸压力(bar)"),             D_FONT_BOLD(8),      QRect( 41, 315+30, 158, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 301+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("压力不足"),               D_FONT_BOLD(8),      QRect(201, 331+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 331+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("实际制动力满足所需"),       D_FONT_BOLD(8),      QRect(421, 301+30, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("实际制动力小于所需"),       D_FONT_BOLD(8),      QRect(421, 331+30, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6.5"),                   D_FONT_BOLD(8),      QRect(311, 301+30, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("4.1"),                   D_FONT_BOLD(8),      QRect(320, 335+30,  90, 20),           Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 335+30,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("制动隔离"),                 D_FONT_BOLD(8),      QRect( 41, 405, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("未隔离"),                  D_FONT_BOLD(8),      QRect(201, 391, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("隔离"),                    D_FONT_BOLD(8),       QRect(201, 421, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),       QRect(320, 425,  90,  20),           Qt::white,                Qt::black,                  CONTROL_LABEL,           ID_PIBRUNHELP_ICON3       },
    {QObject::trUtf8("当BSR < 1 bar时，制动转向架隔离"),     D_FONT_BOLD(8),      QRect(421, 421, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },

    {QObject::trUtf8("车内温度"),               D_FONT_BOLD(8),      QRect( 41, 375+90, 158, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 361+90, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 391+90, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("乘客报警"),               D_FONT_BOLD(8),      QRect( 41, 465, 168, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("无报警"),                 D_FONT_BOLD(8),      QRect(201, 451, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("有报警"),                 D_FONT_BOLD(8),      QRect(201, 481, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect(320, 485,  90,  20),          Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },



    {QObject::trUtf8("24℃"),                   D_FONT_BOLD(8),      QRect(311, 361+90, 108,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect(320, 395+90,  90,  20),          Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316,  92+30,  20,  21),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342,  92+30,  20,  21),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368,  92+30,  20,  21),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394,  92+30,  20,  21),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 117+30,  20,  21),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 117+30,  20,  21),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 117+30,  20,  21),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 117+30,  20,  21),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT1     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT4     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 222+30,  20,  21),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 222+30,  20,  21),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 222+30,  20,  21),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 222+30,  20,  21),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 250+30,  20,  21),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 250+30,  20,  21),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 250+30,  20,  21),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 250+30,  20,  21),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },


};
int g_RunHelp3RomLen = sizeof(g_PicRom_RunHelp3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp3Page,CPage)
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

CRunHelp3Page::CRunHelp3Page()
{
}

void CRunHelp3Page::OnUpdatePage()
{

}

void CRunHelp3Page::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT1))->SetLabelState(3);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT2))->SetLabelState(3);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT3))->SetLabelState(3);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT4))->SetLabelState(3);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON3))->SetLabelState(6);

}

void CRunHelp3Page::OnShowPage()
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
        void CRunHelp3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp3Page::OnComBtn2Clk()
        {

        }

        void CRunHelp3Page::OnComBtn3Clk()
        {

        }

        void CRunHelp3Page::OnComBtn4Clk()
        {

        }

        void CRunHelp3Page::OnComBtn5Clk()
        {

        }

        void CRunHelp3Page::OnComBtn6Clk()
        {

        }
        void CRunHelp3Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CRunHelp3Page::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }
#else
        void CRunHelp3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp3Page::OnComBtn2Clk()
        {

        }

        void CRunHelp3Page::OnComBtn3Clk()
        {

        }

        void CRunHelp3Page::OnComBtn4Clk()
        {

        }

        void CRunHelp3Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CRunHelp3Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

#endif



