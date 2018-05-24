#include "CRunRecordPage.h"

ROMDATA g_PicRom_RunRecord[] =
{
  /*string                font                            rc                  foreground color              background color                control type                   ID           */
  //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录"))
  D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("运行\n记录") )

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
  {"",                            D_FONT_BOLD(6),      QRect( 100, 115, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 145, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 180, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 215, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 250, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 285, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 320, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 355, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 390, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 425, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 460, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
 // {"",                            D_FONT_BOLD(6),      QRect( 100, 495, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {"",                            D_FONT_BOLD(6),      QRect(100, 115,   1, 345),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(260, 115,   1, 345),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(500, 115,   1, 345),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(700, 115,   1, 345),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {QObject::trUtf8("记录项目"),               D_FONT_BOLD(8),      QRect( 100, 115, 160,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("记录状态"),               D_FONT_BOLD(8),      QRect(200, 115, 110,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("记录开始时刻"),            D_FONT_BOLD(8),      QRect(260, 115, 240,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("记录容量"),               D_FONT_BOLD(8),      QRect(500, 115, 200,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

//  {QObject::trUtf8("累计运行时间"),           D_FONT_BOLD(8),      QRect( 100, 145, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("检修里程"),               D_FONT_BOLD(8),     QRect( 100, 180, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("运行总里程"),             D_FONT_BOLD(8),      QRect( 100, 215, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("牵引能耗"),               D_FONT_BOLD(8),      QRect( 100, 250, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("再生电能"),               D_FONT_BOLD(8),      QRect( 100, 285, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("辅助系统能耗"),            D_FONT_BOLD(8),      QRect( 100, 320, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC1空压机工作时间"),       D_FONT_BOLD(8),      QRect( 100, 355, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC1空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 390, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC2空压机工作时间"),       D_FONT_BOLD(8),      QRect( 100, 425, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC2空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 460, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

  {QObject::trUtf8("运行总时间"),           D_FONT_BOLD(8),      QRect( 100, 145, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("运行总里程"),             D_FONT_BOLD(8),      QRect( 100, 180, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("检修里程"),               D_FONT_BOLD(8),     QRect( 100, 215, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("牵引能耗"),               D_FONT_BOLD(8),      QRect( 100, 250, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("制动能耗"),               D_FONT_BOLD(8),      QRect( 100, 285, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("辅助能耗"),            D_FONT_BOLD(8),      QRect( 100, 320, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("空压机1工作时间"),       D_FONT_BOLD(8),      QRect( 100, 355, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("空压机2工作时间"),         D_FONT_BOLD(8),      QRect( 100, 390, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

  {QObject::trUtf8("总能耗"),       D_FONT_BOLD(8),      QRect( 100, 425, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("TC2空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 460, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },



//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 320, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 355, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 390, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 425, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 460, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 146, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME1       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 181, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME2       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 216, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME3      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 251, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME4       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 286, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME5       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 321, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME6       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 356, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME7       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 391, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME8       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 426, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME9       },
 // {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 461, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME11       },

  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 146, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE1      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 181, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE2      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 216, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE3      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 251, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE4      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 286, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE5      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 321, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE6      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 356, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE7      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 391, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE8      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 426, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE9      },
  //{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 461, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE11      },

  {QObject::trUtf8("分钟"),                  D_FONT_BOLD(8),      QRect(650, 145,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("km"),                  D_FONT_BOLD(8),      QRect(650, 180,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("km"),                   D_FONT_BOLD(8),      QRect(650, 215,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 250,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 285,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 320,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("分钟"),                   D_FONT_BOLD(8),      QRect(650, 355,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("分钟"),                   D_FONT_BOLD(8),      QRect(650, 390,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 425,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
 // {QObject::trUtf8("%"),                   D_FONT_BOLD(8),      QRect(650, 461,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },


};
int g_RunRecordRomLen = sizeof(g_PicRom_RunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordPage,CPage)
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

CRunRecordPage::CRunRecordPage()
{
}

void CRunRecordPage::OnUpdatePage()
{
    UpdateRun_RecordData();
    UpdateEarlierTime();
}

void CRunRecordPage::OnInitPage()
{

}

void CRunRecordPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返   回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));
#endif

    this->InitPageHeader();
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME1))->SetCtrlText(g_runtime1);
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME2))->SetCtrlText(g_runtime2);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {

        }
        void CRunRecordPage::OnComBtn7Clk()
        {

        }

        void CRunRecordPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif



void CRunRecordPage::UpdateRun_RecordData()
{


    run_record_date1 = StrFromInt( DTHM_RunTime_Year_U8+ 2000, 10 )
               + "-" + StrFromInt( DTHM_RunTime_Month_U8, 10 )
               + "-" + StrFromInt( DTHM_RunTime_Day_U8, 10 );
    run_record_date2 = StrFromInt( DTHM_Distance_Year_U8+ 2000, 10 )
               + "-" + StrFromInt( DTHM_Distance_Month_U8, 10 )
               + "-" + StrFromInt( DTHM_Distance_Day_U8, 10 );
    run_record_date3 = StrFromInt( DTHM_DeteDistance_Year_U8+ 2000, 10 )
               + "-" + StrFromInt( DTHM_DeteDistance_Month_U8, 10 )
               + "-" + StrFromInt( DTHM_DeteDistance_Day_U8, 10 );
    run_record_date4 = StrFromInt( DTHM_TractionPower_Year_U8 + 2000, 10 )
               + "-" + StrFromInt( DTHM_TractionPower_Month_U8, 10 )
               + "-" + StrFromInt( DTHM_TractionPower_Day_U8, 10 );
    run_record_date5 = StrFromInt( DTHM_BrakePower_Year_U8 + 2000, 10 )
               + "-" + StrFromInt( DTHM_BrakePower_Month_U8, 10 )
               + "-" + StrFromInt( DTHM_BrakePower_Day_U8, 10 );
    run_record_date6 = StrFromInt( DTHM_SivPower_Year_U8  + 2000, 10 )
               + "-" + StrFromInt( DTHM_SivPower_Month_U8 , 10 )
               + "-" + StrFromInt( DTHM_SivPower_Day_U8 , 10 );
    run_record_date7 = StrFromInt( DTHM_AP1Time_Year_U8 + 2000, 10 )
               + "-" + StrFromInt( DTHM_AP1Time_Month_U8 , 10 )
               + "-" + StrFromInt( DTHM_AP1Time_Day_U8 , 10 );
    run_record_date8 = StrFromInt( DTHM_AP2Time_Year_U8 + 2000, 10 )
               + "-" + StrFromInt( DTHM_AP2Time_Month_U8 , 10 )
               + "-" + StrFromInt( DTHM_AP2Time_Day_U8 , 10 );

   double run_record_data_9 = (DTHM_SingleTractionPower_U32)
                            + (DTHM_SingleSivPower_U32)
                            - (DTHM_SingleBrakePower_U32);



    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME1, run_record_date1);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE1, DTHM_SingleRunTime_U32);


    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME2, run_record_date2);
    SetRun_Record_LabelString_long2(ID_PIBRRP_LABEL_REDRANGE2,DTHM_SingleDistance_U32);


    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME3, run_record_date3);
    SetRun_Record_LabelString_long2(ID_PIBRRP_LABEL_REDRANGE3, DTHM_SingleDetecDistance_U32);


    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME4, run_record_date4);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE4,DTHM_SingleTractionPower_U32);


    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME5, run_record_date5);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE5, DTHM_SingleBrakePower_U32);


    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME6, run_record_date6);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE6, DTHM_SingleSivPower_U32);


    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME7, run_record_date7);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE7, DTHM_SingleAP1Time_U32);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME8, run_record_date8);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE8, DTHM_SingleAP2Time_U32);

    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE9,run_record_data_9);


    }

void CRunRecordPage::UpdateEarlierTime()
{

//4
// DTHM_TractionPower_Year_U8                              g_dataBuffer_Display[243]%256
// DTHM_TractionPower_Month_U8                             g_dataBuffer_Display[243]/256
// DTHM_TractionPower_Day_U8                               g_dataBuffer_Display[244]%256
//5
// DTHM_BrakePower_Year_U8                              g_dataBuffer_Display[244]/256
// DTHM_BrakePower_Month_U8                             g_dataBuffer_Display[245]%256
// DTHM_BrakePower_Day_U8                               g_dataBuffer_Display[245]/256
//6
// DTHM_SivPower_Year_U8                              g_dataBuffer_Display[246]%256
// DTHM_SivPower_Month_U8                             g_dataBuffer_Display[246]/256
// DTHM_SivPower_Day_U8                               g_dataBuffer_Display[247]%256



//    int TractionDay;
//    int BrakeDay;
//    int SivDay;

//   TractionDay = (DTHM_TractionPower_Year_U8-1)*365
//               + (DTHM_TractionPower_Month_U8-1)*12
//               + DTHM_TractionPower_Day_U8;

//   BrakeDay    = DTHM_BrakePower_Year_U8*365
//               + DTHM_BrakePower_Month_U8*12
//               + DTHM_BrakePower_Day_U8;

//   SivDay      = DTHM_SivPower_Year_U8*365
//               + DTHM_SivPower_Month_U8*12
//               + DTHM_SivPower_Day_U8;
   QString TempDate;
   TempDate = "";


     if(DTHM_TractionPower_Year_U8<DTHM_BrakePower_Year_U8)
    {
        TempDate = run_record_date4;
    }
     else if(DTHM_TractionPower_Year_U8>DTHM_BrakePower_Year_U8)
     {
           TempDate = run_record_date5;
     }
     else
     {
         if(DTHM_TractionPower_Month_U8<DTHM_BrakePower_Month_U8)
         {
             TempDate = run_record_date4;
         }
         else if(DTHM_TractionPower_Month_U8>DTHM_BrakePower_Month_U8)
         {
             TempDate = run_record_date5;
         }
         else
         {
             if(DTHM_TractionPower_Day_U8<DTHM_BrakePower_Day_U8)
             {
                 TempDate = run_record_date4;
             }
             else if(DTHM_TractionPower_Day_U8>DTHM_BrakePower_Day_U8)
             {
                 TempDate = run_record_date5;
             }
             else
             {
                  TempDate = run_record_date5;
             }
         }
     }
     if(TempDate == run_record_date4)
     {
         if(DTHM_TractionPower_Year_U8<DTHM_SivPower_Year_U8)
        {
            TempDate = run_record_date4;
        }
         else if(DTHM_TractionPower_Year_U8>DTHM_SivPower_Year_U8)
         {
               TempDate = run_record_date6;
         }
         else
         {
             if(DTHM_TractionPower_Month_U8<DTHM_SivPower_Month_U8)
             {
                 TempDate = run_record_date4;
             }
             else if(DTHM_TractionPower_Month_U8>DTHM_SivPower_Month_U8)
             {
                 TempDate = run_record_date6;
             }
             else
             {
                 if(DTHM_TractionPower_Day_U8<DTHM_SivPower_Day_U8)
                 {
                     TempDate = run_record_date4;
                 }
                 else if(DTHM_TractionPower_Day_U8>DTHM_SivPower_Day_U8)
                 {
                     TempDate = run_record_date6;
                 }
                 else
                 {
                      TempDate = run_record_date6;
                 }
             }
         }
     }

     if(TempDate == run_record_date5)
     {
         if(DTHM_BrakePower_Year_U8<DTHM_SivPower_Year_U8)
        {
            TempDate = run_record_date5;
        }
         else if(DTHM_BrakePower_Year_U8>DTHM_SivPower_Year_U8)
         {
               TempDate = run_record_date6;
         }
         else
         {
             if(DTHM_BrakePower_Month_U8<DTHM_SivPower_Month_U8)
             {
                 TempDate = run_record_date5;
             }
             else if(DTHM_BrakePower_Month_U8>DTHM_SivPower_Month_U8)
             {
                 TempDate = run_record_date6;
             }
             else
             {
                 if(DTHM_BrakePower_Day_U8<DTHM_SivPower_Day_U8)
                 {
                     TempDate = run_record_date5;
                 }
                 else if(DTHM_BrakePower_Day_U8>DTHM_SivPower_Day_U8)
                 {
                     TempDate = run_record_date6;
                 }
                 else
                 {
                      TempDate = run_record_date6;
                 }
             }
         }
     }

     run_record_date9 = TempDate;
SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME9, run_record_date9);

}

void CRunRecordPage::SetRun_Record_LabelString(int id, unsigned int DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::SetRun_Record_LabelString_long2(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.1;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',1));
}

void CRunRecordPage::SetRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

}
