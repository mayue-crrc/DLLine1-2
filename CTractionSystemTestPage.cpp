#include "CTractionSystemTestPage.h"

ROMDATA g_PicRom_TractionSystemTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif

//   D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8(" 制动自检") )

   D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("电热\n状态") )
   {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_TRACTSYSTEST_TRAIN                      },
   {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_TRACTSYSTEST_ARROW_RIGHT                },
   {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_TRACTSYSTEST_ARROW_LEFT                 },


    {"",                   D_FONT_BOLD(6),      QRect( 10, 180-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 210-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 240-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 270-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(100, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(200, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(300, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(400, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(500, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(600, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(700, 180-30,   1, 90),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },


    {QObject::trUtf8("车  号"),                D_FONT_BOLD(8),      QRect(11,  180-30, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),                    D_FONT_BOLD(8),      QRect(102,  180-30,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
 //   {QObject::trUtf8("2"),                    D_FONT_BOLD(8),      QRect(178,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("2"),                    D_FONT_BOLD(8),      QRect(202,  180-30,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("3"),                    D_FONT_BOLD(8),      QRect(302,  180-30,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("4"),                    D_FONT_BOLD(8),      QRect(402,  180-30,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("6"),                    D_FONT_BOLD(8),      QRect(478,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("5"),                    D_FONT_BOLD(8),      QRect(502,  180-30,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("6"),                    D_FONT_BOLD(8),      QRect(602,  180-30,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },



    {QObject::trUtf8("电加热集控"),      D_FONT_BOLD(6),      QRect( 13, 212-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),            D_FONT_BOLD(6), QRect(103, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HVAC_HEATING1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6), QRect(203, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HVAC_HEATING2      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6), QRect(303, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HVAC_HEATING3      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6), QRect(403, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HVAC_HEATING4      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6), QRect(503, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HVAC_HEATING5      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6), QRect(603, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HVAC_HEATING6      },



    {QObject::trUtf8(""),      D_FONT_BOLD(6),      QRect( 13, 242-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(103, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(203, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(303, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(403, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(503, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(603, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE      },


//    {QObject::trUtf8("测试条件"),               D_FONT_BOLD(8),      QRect(11, 181+TractionSystemTest_y, 88,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(103, 181+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(178, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(253, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(328, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(403, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION5         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(478, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(553, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION7         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(628, 181+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

//    {QObject::trUtf8("牵引高压"),               D_FONT_BOLD(8),      QRect(11, 231+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("测试"),                  D_FONT_BOLD(8),      QRect(11, 255+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(103, 231+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(178, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(253, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(328, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(403, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE5         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(478, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(553, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE7         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(628, 231+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

//    {QObject::trUtf8("测试条件"),               D_FONT_BOLD(8),      QRect(11, 281+TractionSystemTest_y, 88,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(103, 281+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(178, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(253, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(328, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(403, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION5         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(478, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(553, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION7         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(628, 281+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("牵引低压"),               D_FONT_BOLD(8),      QRect(11,  331+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("测试"),                  D_FONT_BOLD(8),      QRect(11,  355+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(103, 331+TractionSystemTest_y,  70,  48),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(178, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(253, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(328, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(403, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE5         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(478, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(553, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE7         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(628, 331+TractionSystemTest_y,  70,  48),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("电暖气开启时间(范围 25-120分钟):"),              D_FONT_BOLD(8),        QRect(90, 275, 300, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电暖气关闭时间(范围 10-60 分钟):"),              D_FONT_BOLD(8),        QRect(90, 345, 300, 40),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 340, 275, 70, 40),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_SETTING6         },
    {QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 340, 345, 70, 40),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_SETTING7         },

    {QObject::trUtf8("▲"),                D_FONT_BOLD(15),        QRect(90+ 440,  270,  80,  50),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_TRACTSYSTEST_BUTTON_UP6               },
    {QObject::trUtf8("▼"),                D_FONT_BOLD(15),        QRect(90+ 555,  270,  80,  50),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_TRACTSYSTEST_BUTTON_DOWN6                 },
    {QObject::trUtf8("▲"),                D_FONT_BOLD(15),        QRect(90+ 440,  340,  80,  50),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_TRACTSYSTEST_BUTTON_UP7              },
    {QObject::trUtf8("▼"),                D_FONT_BOLD(15),        QRect(90+ 555,  340,  80,  50),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_TRACTSYSTEST_BUTTON_DOWN7                 },

    {QObject::trUtf8("启动"),                  D_FONT_BOLD(8),      QRect( 140, 400,  80,  40),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_TRACTSYSTEST_BUTTON_HIGHPREESURE               },
    {QObject::trUtf8("停止"),                  D_FONT_BOLD(8),      QRect( 240, 400,  80,  40),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE  },

//    {QObject::trUtf8("TCU版本检查"),            D_FONT_BOLD(8),      QRect( 20, 420, 150,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("1.3.4"),                      D_FONT_BOLD(7),      QRect(178, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION1         },
//    {QObject::trUtf8("1.3.4"),                      D_FONT_BOLD(7),      QRect(253, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION2         },
//    {QObject::trUtf8("1.3.4"),                      D_FONT_BOLD(7),      QRect(328, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION3         },
//    {QObject::trUtf8("1.3.4"),                      D_FONT_BOLD(7),      QRect(403, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION4         },
//    {QObject::trUtf8("1.3.4"),                      D_FONT_BOLD(7),      QRect(478, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION5         },
//    {QObject::trUtf8("1.3.4"),                      D_FONT_BOLD(7),      QRect(553, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION6         },


};
int g_TractionSystemTestRomLen = sizeof(g_PicRom_TractionSystemTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTractionSystemTestPage,CPage)
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

        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_UP6,OnDoorParaSetUp6Clk)
        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_UP7,OnDoorParaSetUp7Clk)
        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_DOWN6,OnDoorParaSetDown6Clk)
        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_DOWN7,OnDoorParaSetDown7Clk)
        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE, OnHighTestStartBtnClk)
        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE,OnLowerTestStartBtnClk)

END_MESSAGE_MAP()

CTractionSystemTestPage::CTractionSystemTestPage()
{
}

void CTractionSystemTestPage::OnUpdatePage()
{  

    ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_SETTING6))->SetCtrlText(QString::number(HMCT_HeaterWorkingTime_U8));
    ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_SETTING7))->SetCtrlText(QString::number(HMCT_HeaterquiescentTime_U8));
    UpPressTestStatus();
    updateTrain(ID_TRACTSYSTEST_TRAIN);
    updateArrow(ID_TRACTSYSTEST_ARROW_LEFT,ID_TRACTSYSTEST_ARROW_RIGHT);

    updateErrorLine(ID_TRACTSYSTEST_TRAIN);

    UpHeating();


}

void CTractionSystemTestPage::OnInitPage()
{
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_SETTING6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_SETTING7))->SetBorderColor(Qt::white);

    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->m_bAutoUpState = false;

    if(HMCT_HeaterTimingControl)
    {
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);
    }

}

void CTractionSystemTestPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));

#endif

    this->InitPageHeader();
    if(HMCT_HeaterTimingControl)
    {
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);
    }
}

void CTractionSystemTestPage::OnLeavePage()
{
//    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_TRACTIONSYSTEMTESTHELP)
//    {
//        ResetUI();
//    }
}

#ifdef PAGE_BUTTON_BAR_NEW
void CTractionSystemTestPage::OnComBtn1Clk()
{

}

void CTractionSystemTestPage::OnComBtn2Clk()
{

}

void CTractionSystemTestPage::OnComBtn3Clk()
{

}

void CTractionSystemTestPage::OnComBtn4Clk()
{

}

void CTractionSystemTestPage::OnComBtn5Clk()
{

}

void CTractionSystemTestPage::OnComBtn6Clk()
{

}
void CTractionSystemTestPage::OnComBtn7Clk()
{
    //ChangePage(PAGE_INDEX_TRACTIONSYSTEMTESTHELP);
}
void CTractionSystemTestPage::OnComBtn8Clk()
{
    ChangePage(PAGE_INDEX_HVACSETTING);
}
#else
void CTractionSystemTestPage::OnComBtn1Clk()
{

}

void CTractionSystemTestPage::OnComBtn2Clk()
{

}

void CTractionSystemTestPage::OnComBtn3Clk()
{

}

void CTractionSystemTestPage::OnComBtn4Clk()
{

}

void CTractionSystemTestPage::OnComBtn5Clk()
{
      ChangePage(PAGE_INDEX_TRACTIONSYSTEMTESTHELP);
}

void CTractionSystemTestPage::OnComBtn6Clk()
{
   ResetUI();
   ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif



void CTractionSystemTestPage::OnHighTestStartBtnClk()
{

        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);

        HMCT_HeaterTimingControl=true;
}

void CTractionSystemTestPage::OnLowerTestStartBtnClk()
{
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);

    HMCT_HeaterTimingControl=false;


}

void CTractionSystemTestPage::UpPressTestStatus()
{


}

void CTractionSystemTestPage::SetPTStatusColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }

    return;
}
void CTractionSystemTestPage::UpHighPressTest()
{   



}

void CTractionSystemTestPage::UpLowerPressTest()
{





}
void CTractionSystemTestPage::SetPressTestValue(int id, QString rValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(rValue);
}

void CTractionSystemTestPage::SetPTColor(int id, int colorVal)
{
    if (colorVal > 0)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }

    return;
}


void CTractionSystemTestPage::UpHeating()
{
    if(AC1CT_HeaterControlCmd_B1)
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING1))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING1))->SetCtrlText(QObject::trUtf8("已启动"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING1))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING1))->SetCtrlText(QObject::trUtf8("未启动"));
    }

    if(AC2CT_HeaterControlCmd_B1)
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING2))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING2))->SetCtrlText(QObject::trUtf8("已启动"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING2))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING2))->SetCtrlText(QObject::trUtf8("未启动"));

    }

    if(AC3CT_HeaterControlCmd_B1)
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING3))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING3))->SetCtrlText(QObject::trUtf8("已启动"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING3))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING3))->SetCtrlText(QObject::trUtf8("未启动"));

    }

    if(AC4CT_HeaterControlCmd_B1)
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING4))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING4))->SetCtrlText(QObject::trUtf8("已启动"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING4))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING4))->SetCtrlText(QObject::trUtf8("未启动"));

    }

    if(AC5CT_HeaterControlCmd_B1)
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING5))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING5))->SetCtrlText(QObject::trUtf8("已启动"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING5))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING5))->SetCtrlText(QObject::trUtf8("未启动"));

    }

    if(AC6CT_HeaterControlCmd_B1)
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING6))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING6))->SetCtrlText(QObject::trUtf8("已启动"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING6))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_TRACTSYSTEST_LABEL_HVAC_HEATING6))->SetCtrlText(QObject::trUtf8("未启动"));

    }


}


void CTractionSystemTestPage::SetTCUVersion(int id, QString vVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(vVal);

}

void CTractionSystemTestPage::ResetUI()
{

}


void CTractionSystemTestPage:: OnDoorParaSetDown6Clk()
{
    if (!m_MakeSure)
    {
     if(HMCT_HeaterWorkingTime_U8>25)
    {
         HMCT_HeaterWorkingTime_U8 -= 1;
    }
 }
}

void CTractionSystemTestPage:: OnDoorParaSetDown7Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_HeaterquiescentTime_U8>10)
    {
        HMCT_HeaterquiescentTime_U8 -= 1;
    }
}

}



void CTractionSystemTestPage:: OnDoorParaSetUp6Clk()
{
     if(HMCT_HeaterWorkingTime_U8<120)
    {
         HMCT_HeaterWorkingTime_U8 += 1;
    }
}

void CTractionSystemTestPage:: OnDoorParaSetUp7Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_HeaterquiescentTime_U8<60)
    {
        HMCT_HeaterquiescentTime_U8 += 1;
    }
}

}
