#include "ctimesettingpage.h"
#include <qdatetime.h>


ROMDATA g_PicRom_TimeSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("时间设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("时间\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("CCU时间"),           D_FONT_BOLD(6),      QRect(460,  50+20,  80, 30),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("HMI时间"),           D_FONT_BOLD(6),      QRect(460,  90,  80, 30),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {"2010/07/10",              D_FONT(6),           QRect(540,  50+20, 100, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_CCUDATE         },
    {"2010/07/10",              D_FONT(6),           QRect(540,  90, 100, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_ATCDATE         },
    {"00:00:00",                D_FONT(6),           QRect(650,  50+20,  90, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_CCUTIME         },
    {"00:00:00",                D_FONT(6),           QRect(650,  90,  90, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_ATCTIME         },
//    {QObject::trUtf8("HMI校时"),            D_FONT_BOLD(8),      QRect(120, 60+20, 120, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PIBTIMESETTING_BUTTON_HMICHECKTIME   },
//    {QObject::trUtf8("ATC校时"),            D_FONT_BOLD(8),      QRect(260, 60+20, 120, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME   },
    {"",                      D_FONT(6),           QRect(410,  50+20,  40, 30),           Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL_ATCTIMEFLG1    },
    {"",                      D_FONT(6),           QRect(410,  90,  40, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_ATCTIMEFLG2    },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(120, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_YEAR            },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(255, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MONTH           },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(390, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_DAY             },
    {QObject::trUtf8("年"),                D_FONT_BOLD(9),      QRect(205, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("月"),                D_FONT_BOLD(9),      QRect(340, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("日"),                D_FONT_BOLD(9),      QRect(475, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(120, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_HOUR            },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(255, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MINUTE          },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(390, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_SECOND          },
    {QObject::trUtf8("时"),                D_FONT_BOLD(9),      QRect(205, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("分"),                D_FONT_BOLD(9),      QRect(340, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("秒"),                D_FONT_BOLD(9),      QRect(475, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("7"),                 D_FONT_BOLD(8),      QRect(535, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_7             },
    {QObject::trUtf8("8"),                 D_FONT_BOLD(8),      QRect(605, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_8             },
    {QObject::trUtf8("9"),                 D_FONT_BOLD(8),      QRect(675, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_9             },
    {QObject::trUtf8("4"),                 D_FONT_BOLD(8),      QRect(535, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_4             },
    {QObject::trUtf8("5"),                 D_FONT_BOLD(8),      QRect(605, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_5             },
    {QObject::trUtf8("6"),                 D_FONT_BOLD(8),      QRect(675, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_6             },
    {QObject::trUtf8("1"),                 D_FONT_BOLD(8),      QRect(535, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_1             },
    {QObject::trUtf8("2"),                 D_FONT_BOLD(8),      QRect(605, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_2             },
    {QObject::trUtf8("3"),                 D_FONT_BOLD(8),      QRect(675, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_3             },
    {QObject::trUtf8("0"),                 D_FONT_BOLD(8),      QRect(535, 345,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_0             },
    {QObject::trUtf8("启动"),              D_FONT_BOLD(8),      QRect( 25, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_START          },
    {QObject::trUtf8("清空"),              D_FONT_BOLD(8),      QRect(535, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CLEAR          },
    {QObject::trUtf8("确认"),              D_FONT_BOLD(8),      QRect(645, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CONFIRM        },
    {QObject::trUtf8("点击上方条目设置时间，全部设置完成后，点【确认】键。"),      D_FONT_BOLD(8),  QRect( 25, 420,  480, 38),      Qt::white,Qt::black,     CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL1       },
    {QObject::trUtf8("确认无误，按【启动】键启动时钟。"),      D_FONT_BOLD(8),      QRect( 25, 460,  300, 38),        Qt::white, Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL2       },

};
int g_TimeSettingRomLen = sizeof(g_PicRom_TimeSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTimeSettingPage,CPage)
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

        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_YEAR,OnYearEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MONTH,OnMonthEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_DAY,OnDayEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_HOUR,OnHourEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MINUTE,OnMinEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_SECOND,OnSecEditClk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_0, OnNum0Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_1, OnNum1Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_2, OnNum2Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_3, OnNum3Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_4, OnNum4Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_5, OnNum5Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_6, OnNum6Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_7, OnNum7Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_8, OnNum8Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_9, OnNum9Clk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_START, OnBtnStart)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CLEAR, OnBtnClear)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CONFIRM, OnBtnConfirm)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME, OnHMICheckTime)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME, OnATCCheckTime)


END_MESSAGE_MAP()

CTimeSettingPage::CTimeSettingPage()
{
    m_bSet = false;
}

void CTimeSettingPage::OnUpdatePage()
{
    UpdateCCUDate();
    UpdateCCUTime();
    UpdateATCDate();
    UpdateATCTime();
    UpdateATCtimeFlg();



//    read_time1 = 2000+CTALL_Year_U8;
//    read_time2 = CTALL_Month_U8;
//    read_time3 = CTALL_Day_U8;
//    read_time4 = CTALL_Hour_U8;
//    read_time5 = CTALL_Minite_U8;
//    read_time6 = CTALL_Second_U8;





//时间校准标志
//    if (time_set_mode==1)
//        BitSet( HMI_send_data28, 15, 1);
//    else
//        BitSet( HMI_send_data24, 15, 0);

// code move to dialog.cpp createSendData().
//    if (time_set_mode == 1)
//    {
//        if (Bit(ATC_time_flag,9)==1)
//        {
//            ATC_time_temp1 = 2000+ATC_time1/256;
//            ATC_time_temp2 = ATC_time1%256;
//            ATC_time_temp3 = ATC_time2/256;
//            ATC_time_temp4 = ATC_time2%256;
//            ATC_time_temp5 = ATC_time3/256;
//            ATC_time_temp6 = ATC_time3%256;
//            SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5);
//            ATC_time_flag = 0;
//        }
//    }

    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            time_settting_timer--;

            if (time_settting_timer == 0)
            {
                m_bSet = false;
                times = 0;
                time_settting_timer = 5;
                HMCT_TimeSetFlag_B1=false;
                HMCT_TimeCheck_U8=0x55;
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
                /*
                显示屏校时逻辑（大连地铁）
                1.显示屏程序启动后4秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
                2.显示屏接收到任意一个显示屏发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
                3.显示屏设置时间功能不直接修改显示屏时间，通过设置时间页面修改时间，等待按钮弹起时显示屏同CCU校时一次。
                */
            #ifdef USE_MVB_DATA
                if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
                {
                    ATC_time_temp1 = CTALL_Year_U8+2000;
                    ATC_time_temp2 = CTALL_Month_U8;
                    ATC_time_temp3 = CTALL_Day_U8;
                    ATC_time_temp4 = CTALL_Hour_U8;
                    ATC_time_temp5 = CTALL_Minite_U8;
                    ATC_time_temp6 = CTALL_Second_U8;
                    SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);

                    //SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
                  //  qDebug() <<"setting time   ok!";
                }

            #endif

            }
        }
    }
}

void CTimeSettingPage::OnInitPage()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_YEAR);

    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };
    for (int i=0; i<6; i++)
    {
        if (i == 0)
            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(4);
        else
            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(2);

        ((CEdit*)GetDlgItem(nIDArray[i]))->m_bIsPassWord = false;
    }

    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->m_bAutoUpState = false;
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->m_bAutoUpState = false;
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME))->m_bAutoUpState = false;
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_DOWN);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL2))->SetAlignment(Qt::AlignLeft);
}

void CTimeSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返 回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("返 回"));
#endif

     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(false);
     time_settting_timer = 5;

     QDate date = QDate::currentDate();
     GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText(QString::number(date.year()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
     QTime time = QDateTime::currentDateTime().time();
     GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));

     if(g_TimeSettingState == TIMESETTING_HMI)
         OnHMICheckTime();
     else if(g_TimeSettingState == TIMESETTING_ATC)
         OnATCCheckTime();

     this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CTimeSettingPage::OnComBtn1Clk()
        {

        }

        void CTimeSettingPage::OnComBtn2Clk()
        {

        }

        void CTimeSettingPage::OnComBtn3Clk()
        {

        }

        void CTimeSettingPage::OnComBtn4Clk()
        {

        }

        void CTimeSettingPage::OnComBtn5Clk()
        {

        }

        void CTimeSettingPage::OnComBtn6Clk()
        {

        }
        void CTimeSettingPage::OnComBtn7Clk()
        {

        }

        void CTimeSettingPage::OnComBtn8Clk()
        {
            HMCT_TimeSetFlag_B1=false;
            HMCT_TimeCheck_U8=0x55;
            m_bSet = false;
            ChangePage(PAGE_INDEX_MAINTAIN);
            time_setting_start = 0;
        }
#else
        void CTimeSettingPage::OnComBtn1Clk()
        {

        }

        void CTimeSettingPage::OnComBtn2Clk()
        {

        }

        void CTimeSettingPage::OnComBtn3Clk()
        {

        }

        void CTimeSettingPage::OnComBtn4Clk()
        {

        }

        void CTimeSettingPage::OnComBtn5Clk()
        {

        }

        void CTimeSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
            time_setting_start = 0;
        }

#endif


void CTimeSettingPage::OnYearEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_YEAR);
}

void CTimeSettingPage::OnMonthEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_MONTH);
}

void CTimeSettingPage::OnDayEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_DAY);
}

void CTimeSettingPage::OnHourEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_HOUR);
}

void CTimeSettingPage::OnMinEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_MINUTE);
}

void CTimeSettingPage::OnSecEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_SECOND);
}

void CTimeSettingPage::SetFocusEdit(int nEditID)
{
    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };

    for (int i=0; i<6; i++)
    {
        if (nEditID == nIDArray[i])
            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(true);
        else
            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
    }
}

void CTimeSettingPage::KillAllEditFocus()
{
    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };

    for(int i = 0; i < 6; i++)
    {
        ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
    }
}

int CTimeSettingPage::GetFocusEditID()
{
    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };

    bool bFind = true;
    for (int i=0; i<6; i++)
    {
        if (((CEdit*)GetDlgItem(nIDArray[i]))->GetSelected())
        {
           return nIDArray[i];
        }
        else
        {
            bFind = false;
        }
    }
    if (!bFind)
    {
        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR))->SetSelected(true);
        return ID_PIBTIMESETTING_EDIT_YEAR;
    }
}

void CTimeSettingPage::OnNum0Clk()
{
    AddStrToFocusEdit("0");
}

void CTimeSettingPage::OnNum1Clk()
{
    AddStrToFocusEdit("1");
}

void CTimeSettingPage::OnNum2Clk()
{
    AddStrToFocusEdit("2");
}

void CTimeSettingPage::OnNum3Clk()
{
    AddStrToFocusEdit("3");
}

void CTimeSettingPage::OnNum4Clk()
{
    AddStrToFocusEdit("4");
}

void CTimeSettingPage::OnNum5Clk()
{
    AddStrToFocusEdit("5");
}

void CTimeSettingPage::OnNum6Clk()
{
    AddStrToFocusEdit("6");
}

void CTimeSettingPage::OnNum7Clk()
{
    AddStrToFocusEdit("7");
}

void CTimeSettingPage::OnNum8Clk()
{
    AddStrToFocusEdit("8");
}

void CTimeSettingPage::OnNum9Clk()
{
    AddStrToFocusEdit("9");
}

void CTimeSettingPage::AddStrToFocusEdit(QString str)
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->AddEditStr(str);
}

void CTimeSettingPage::OnBtnStart()
{
    m_bSet = true;
    CheckDateInfo();

    time_settting_timer = 5;

    time_setting_1 = GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->GetCtrlText().toInt();
    time_setting_2 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText().toInt();
    time_setting_3 = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText().toInt();
    time_setting_4 = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText().toInt();
    time_setting_5 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText().toInt();
    time_setting_6 = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText().toInt();


    HMCT_Year_U8=time_setting_1-2000;
    HMCT_Month_U8=time_setting_2;
    HMCT_Day_U8=time_setting_3;
    HMCT_Hour_U8=time_setting_4;
    HMCT_Minute_U8=time_setting_5;
    HMCT_Second_U8=time_setting_6;


    //SetSystemTime(time_setting_1,time_setting_2,time_setting_3,time_setting_4,time_setting_5,time_setting_6);
    HMCT_TimeSetFlag_B1=true;
    HMCT_TimeCheck_U8=0xaa;
}

void CTimeSettingPage::OnBtnClear()
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

void CTimeSettingPage::OnBtnConfirm()
{
    KillAllEditFocus();
    CheckDateInfo();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(true);   
}

void CTimeSettingPage::UpdateCCUDate()
{  
    QString ccu_date = "";

    ccu_date = StrFromInt( 2000+CTALL_Year_U8, 10 )+"/"+StrFromInt( CTALL_Month_U8, 10 )+"/"+StrFromInt( CTALL_Day_U8, 10 );
    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUDATE))->SetCtrlText(ccu_date);
}

void CTimeSettingPage::UpdateCCUTime()
{
    QString ccu_time = "";

    ccu_time = StrFromInt(CTALL_Hour_U8, 10 )+":"+StrFromInt( CTALL_Minite_U8, 10 )+":"+StrFromInt(CTALL_Second_U8, 10 );
    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUTIME))->SetCtrlText(ccu_time);

}

void CTimeSettingPage::UpdateATCDate()
{
//    QString atc_date = "";

//    atc_date = StrFromInt( 2000+ATC_A10_11 % 256, 10 )+"/"+StrFromInt( ATC_A10_11 / 256, 10 )+"/"+StrFromInt(ATC_A10_12 % 256, 10 );
//    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCDATE))->SetCtrlText(atc_date);

    QDate date = QDate::currentDate();
    QString str;
    str = QString::number(date.year()) + QObject::trUtf8("-")+
          QString::number(date.month()) + QObject::trUtf8("-")+
          QString::number(date.day()) + QObject::trUtf8("");
    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCDATE))->SetCtrlText(str);


}

void CTimeSettingPage::UpdateATCTime()
{
//    QString atc_time = "00:00:00";

//    atc_time = StrFromInt(ATC_A10_12 / 256, 10 )+":"+StrFromInt( ATC_A10_13 % 256, 10 )+":"+StrFromInt(ATC_A10_13 / 256, 10 );
//    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIME))->SetCtrlText(atc_time);

    QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
    //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIME))->SetCtrlText(time+"f"+ QString::number(time_Calibrate_Flag));
}


void CTimeSettingPage::UpdateATCtimeFlg()
{

    //((CEdit *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIMEFLG1))->SetCtrlText(QString::number(ATC_time_flag));
    //((CEdit *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIMEFLG2))->SetCtrlText(QString::number(Bit(ATC_time_flag,9) ) );
}


void CTimeSettingPage::OnHMICheckTime()
{
//    time_set_mode = 0;
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_DOWN);
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME))->ChangeButtonState(LBUTTON_UP);

//    g_TimeSettingState = TIMESETTING_HMI;
//    SetINIInfo("/CNR_BJ/TimeSettingState", QString::number(g_TimeSettingState));

}

void CTimeSettingPage::OnATCCheckTime()
{
//    time_set_mode = 1;
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME))->ChangeButtonState(LBUTTON_DOWN);
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_UP);

//    g_TimeSettingState = TIMESETTING_ATC;
//    SetINIInfo("/CNR_BJ/TimeSettingState", QString::number(g_TimeSettingState));
}

void CTimeSettingPage::CheckDateInfo()
{
    QString str;

    QDate date = QDate::currentDate();
    //year
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText(QString::number(date.year()));
    else if(str.toInt() > 2037)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText("2037");

    //month
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
    else if(str.toInt() > 12)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText("12");

    //day
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
    else if(str.toInt() > 31)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText("31");

    QTime time = QDateTime::currentDateTime().time();
    //hour
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
    else if(str.toInt() > 24)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText("24");

    //minite
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
    else if(str.toInt() >= 60)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText("59");

    //second
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));
    else if(str.toInt() >= 60)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText("59");
}
