#include "C_Page_Run_Status_Help4.h"

ROMDATA  g_PicRom_CarStatus1Help3[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect(40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
  //  {"",                            D_FONT_BOLD(6),      QRect(40,  90, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 120, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 210-30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 270-30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 330-30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 360, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(40, 570, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200,  90, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 180, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 270, 220,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 330, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 60, 1,  391),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 60, 1,  391),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 60, 1,  391),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 60, 1,  391),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 60, 1,  392),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {QObject::trUtf8("显示项目"),              D_FONT_BOLD(8),      QRect( 41, 61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("显示条件"),              D_FONT_BOLD(8),      QRect(201, 61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("显示"),                 D_FONT_BOLD(8),      QRect(311, 61, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("备注"),                 D_FONT_BOLD(8),      QRect(421, 61, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动"),               D_FONT_BOLD(8),      QRect( 41, 75, 158,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("缓解"),                   D_FONT_BOLD(8),      QRect(201, 61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("施加"),                   D_FONT_BOLD(8),      QRect(201, 91, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 65,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("(P)"),                   D_FONT_BOLD(8),      QRect(320, 95,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("通信状态"),                    D_FONT_BOLD(8),      QRect( 41, 91, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("通信中断"),                    D_FONT_BOLD(8),      QRect(201, 91, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("通信中断"),                    D_FONT_BOLD(8),      QRect(320, 95, 90, 20),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("显示屏与网关或CCU通信中断时显示"), D_FONT_BOLD(8),      QRect(421, 91, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空压机状态"),              D_FONT_BOLD(8),      QRect( 41, 135, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("未运行"),                D_FONT_BOLD(8),       QRect(201, 121, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("运行"),                  D_FONT_BOLD(8),       QRect(201, 151, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("故障"),                  D_FONT_BOLD(8),       QRect(201, 181, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),       QRect(320, 155,  90, 20),          Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),       QRect(320, 185,  90, 20),          Qt::black,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("乘车率"),                D_FONT_BOLD(8),      QRect(50, 225-30, 150, 30),              Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示实际值"),             D_FONT_BOLD(8),     QRect(200, 215-30, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),     QRect(200, 245-30, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("75%"),                   D_FONT_BOLD(8),      QRect(310, 215-30, 110,30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(330, 245-30, 70, 20),             Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },


//    {QObject::trUtf8("故障信息"),                    D_FONT_BOLD(8),      QRect( 41, 150, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("发生故障"),                    D_FONT_BOLD(8),      QRect(201, 150, 108, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {"FaultRed.PNG",                    D_DEFAULT_FONT,      QRect(330,  130,  70,  70),         Qt::black,                  Qt::red,                  CONTROL_IMAGE,            ID_IGNORE    },

//    {QObject::trUtf8("当前有1,2级故障发生时，点击故障"), D_FONT_BOLD(8),      QRect(421, 121, 330, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("按钮可以进入故障显示页面，正常情"), D_FONT_BOLD(8),      QRect(421, 151, 330, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("况下不显示故障三角"),            D_FONT_BOLD(8),      QRect(421, 181, 210, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("速度"),                    D_FONT_BOLD(8),      QRect(41, 211, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("显示实际值"),               D_FONT_BOLD(8),      QRect( 201, 211, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("60"),                     D_FONT_BOLD(8),      QRect( 320, 215, 90, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CARSTATUS1_HELP3_SPEEDVAL         },
//    {QObject::trUtf8("根据制动传感器计算的速度"),    D_FONT_BOLD(8),      QRect( 421, 211, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("ATC状态"),                        D_FONT_BOLD(8),      QRect(41, 241+45-30, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("ATC无效"),                        D_FONT_BOLD(8),      QRect( 201, 241+30-30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC无效"),                        D_FONT_BOLD(8),      QRect( 320, 245+30-30, 90, 20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC有效时,有6种状态（ATB模式,IATP模式,\nRM模式,ATP模式,ATO模式,ATC切除）"),          D_FONT_BOLD(8),      QRect( 421, 241+30-30, 338, 58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC有效"),                        D_FONT_BOLD(8),      QRect( 201, 271+30-30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATO模式"),                        D_FONT_BOLD(8),      QRect( 320, 275+30-30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("自动折返5种状态"),    D_FONT_BOLD(8),      QRect( 421, 271+30-30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("网络状态"),                    D_FONT_BOLD(8),      QRect(41, 301+45-30, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("网络模式"),                    D_FONT_BOLD(8),      QRect( 201, 301+30-30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("网络模式"),                    D_FONT_BOLD(8),      QRect( 320, 305+30-30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("车辆处于TCMS控制模式"),          D_FONT_BOLD(8),      QRect( 421, 301+30-30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备用模式"),                    D_FONT_BOLD(8),      QRect( 201, 331+30-30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备用模式"),                    D_FONT_BOLD(8),      QRect( 320, 335+30-30, 90, 20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("车辆处于硬线控制模式"),          D_FONT_BOLD(8),      QRect( 421, 331+30-30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("洗车模式"),                    D_FONT_BOLD(8),      QRect(41, 391-30, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("洗车模式"),                    D_FONT_BOLD(8),      QRect( 201, 391-30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("洗车模式"),                    D_FONT_BOLD(8),      QRect( 320, 395-30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("进入洗车模式显示，平时隐藏"),     D_FONT_BOLD(8),      QRect( 421, 391-30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
 //   {QObject::trUtf8("非洗车模式"),                  D_FONT_BOLD(8),      QRect( 201, 391, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("回送模式"),                     D_FONT_BOLD(8),      QRect(41, 421, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("回送模式"),                     D_FONT_BOLD(8),      QRect( 201, 421, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("回送模式"),                     D_FONT_BOLD(8),      QRect( 320, 425, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("进入回送模式显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 421, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("非逆变模式"),                    D_FONT_BOLD(8),      QRect( 201, 451, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("旁路"),                     D_FONT_BOLD(8),      QRect(41, 451-60, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("有设备旁路"),                     D_FONT_BOLD(8),      QRect( 201, 451-60, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("旁路"),                     D_FONT_BOLD(8),      QRect( 325, 451-60, 80, 28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("当前有设备被旁路时显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 451-60, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("烟火"),                     D_FONT_BOLD(8),      QRect(41, 481-60, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("有烟火报警"),                     D_FONT_BOLD(8),      QRect( 201, 481-60, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("烟火"),                     D_FONT_BOLD(8),      QRect( 325, 481-60, 80, 28),           Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("当前车辆有烟火报警时显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 481-60, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },



};
int g_CarStatus1Help3RomLen = sizeof(g_PicRom_CarStatus1Help3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help3Page,CPage)
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

CCarStatus1Help3Page::CCarStatus1Help3Page()
{
}

void CCarStatus1Help3Page::OnUpdatePage()
{

}

void CCarStatus1Help3Page::OnInitPage()
{
  //  ((CLabel *)GetDlgItem(ID_CARSTATUS1_HELP3_SPEEDVAL))->SetBorderColor(Qt::white);
}

void CCarStatus1Help3Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
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
        void CCarStatus1Help3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus1Help3Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help3Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP3);
        }

        void CCarStatus1Help3Page::OnComBtn8Clk()
        {
 //        ChangePage(PAGE_INDEX_RUNHELP4);
        }
#else

#endif


