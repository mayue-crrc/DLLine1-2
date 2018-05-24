#include "C_Page_Main.h"


ROMDATA g_PicRom_Main[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("主菜单") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBMAIN_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QObject::trUtf8("主菜单"))
    D_COMMON_PAGE_BUTTON_BAR
//    {QObject::trUtf8("通信中断"),               D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),          Qt::red,                  Qt::white,                CONTROL_LABEL,          ID_PIBMAIN_COMMINTERRUPT          },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBMAIN_ICON_WARNNING          },
    {"",                            D_FONT_BOLD(4),      QRect(180, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBMAIN_TRAIN                  },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_RIGHT            },
    {"LEFT",                        D_FONT_BOLD(6),      QRect( 60, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_LEFT             },

#endif


    {"",                            D_FONT_BOLD(6),      QRect( 40, 210, 661,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 255, 661,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(300, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(500, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("车号"),                   D_FONT_BOLD(6),      QRect( 40, 210,  60,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1"),                     D_FONT_BOLD(6),      QRect(112, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("2"),                     D_FONT_BOLD(6),      QRect(212, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3"),                     D_FONT_BOLD(6),      QRect(312, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("4"),                     D_FONT_BOLD(6),      QRect(412, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5"),                     D_FONT_BOLD(6),      QRect(512, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6"),                     D_FONT_BOLD(6),      QRect(612, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
#ifdef PAGE_BUTTON_BAR_NEW
    {QObject::trUtf8("初始设定"),               D_FONT_BOLD(8),      QRect(600, 500, 85,  40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBMAIN_BUTTON_ORIGINATIONSET  },
#else
    {QObject::trUtf8("初始设定"),               D_FONT_BOLD(8),      QRect(545, 500, 100,  40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBMAIN_BUTTON_ORIGINATIONSET  },
#endif
};
int g_MainRomLen = sizeof(g_PicRom_Main)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CMainPage,CPage)
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
        ON_BTNCLK(ID_PIBMAIN_BUTTON_ORIGINATIONSET, OnInitialSetBtnClk)
        ON_BTNCLK(ID_PIBMAIN_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)

END_MESSAGE_MAP()

CMainPage::CMainPage()
{
}

void CMainPage::OnUpdatePage()
{

    updateTrain(ID_PIBMAIN_TRAIN);
    updateArrow(ID_PIBMAIN_ARROW_LEFT,ID_PIBMAIN_ARROW_RIGHT);

    updateErrorLine(ID_PIBMAIN_TRAIN);

#ifdef PAGE_HEADER_OLD

//    UpdateCommInterrupt(ID_PIBMAIN_COMMINTERRUPT);

    updateFault(ID_PIBMAIN_ICON_WARNNING);

#endif
}

void CMainPage::OnInitPage()
{

}

void CMainPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("网   络"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("维修菜单"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("通信状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("维修菜单"));
#endif

    this->InitPageHeader();
}


#ifdef PAGE_BUTTON_BAR_NEW
        void CMainPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_COMMSTATUS);
        }

        void CMainPage::OnComBtn2Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CMainPage::OnComBtn3Clk()
        {
            ChangePage(PAGE_BRAKESTATUS);
        }

        void CMainPage::OnComBtn4Clk()
        {
             ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CMainPage::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);

        }

        void CMainPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }
        void CMainPage::OnComBtn7Clk()
        {
             ChangePage(PAGE_INDEX_HVACSETTING);
        }

        void CMainPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CMainPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_COMMSTATUS);
        }

        void CMainPage::OnComBtn2Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CMainPage::OnComBtn3Clk()
        {
             ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CMainPage::OnComBtn4Clk()
        {
             ChangePage(PAGE_INDEX_HVACSETTING);
        }

        void CMainPage::OnComBtn5Clk()
        {
             ChangePage(PAGE_INDEX_FAULT);
        }

        void CMainPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }
#endif


void CMainPage::OnInitialSetBtnClk()
{
    pw_select=4;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CMainPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}
