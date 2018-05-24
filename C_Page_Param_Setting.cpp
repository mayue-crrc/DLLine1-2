#include "C_Page_Param_Setting.h"
#include <qprocess.h>
#include "cwarningdialog.h"



ROMDATA g_PicRom_ParameterSetting1[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("参数设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("参数\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PARAMETERSET_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PARAMETERSET_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PARAMETERSET_ARROW_LEFT                 },

    {"",                  D_FONT_BOLD(6),      QRect( 10,  160, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  190, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  220, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  250, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  280, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  310, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  340, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect( 10,  370, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect( 10,  400, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {QObject::trUtf8("车   号"),      D_FONT_BOLD(8),      QRect( 11, 161, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1"),            D_FONT_BOLD(8),      QRect(103, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("2"),            D_FONT_BOLD(8),      QRect(203, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3"),            D_FONT_BOLD(8),      QRect(303, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("4"),            D_FONT_BOLD(8),      QRect(403, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5"),            D_FONT_BOLD(8),      QRect(503, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6"),            D_FONT_BOLD(8),      QRect(603, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect( 11, 191, 88, 28),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMBER         },
    //{QObject::trUtf8("列车号"),       D_FONT_BOLD(6),      QRect( 12, 192,  44, 27),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSTR            },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(11, 192,  88, 27),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMVAL         },


    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(103, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER1         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(203, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER3         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(303, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER4         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(403, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER5         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(503, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER7         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(603, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER8         },

    {QObject::trUtf8("1轴轮径"),      D_FONT_BOLD(8),      QRect( 11, 221, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,            ID_IGNORE         },

    {QObject::trUtf8("--"),            D_FONT_BOLD(8),      QRect(103, 221,  95, 28),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(203, 221,  95, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR2DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(303, 221,  95, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR3DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(403, 221,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR4DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(503, 221,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR5DIAMETER1      },
    {QObject::trUtf8("--"),            D_FONT_BOLD(8),      QRect(603, 221,  95, 28),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER1      },

    {QObject::trUtf8("2轴轮径"),      D_FONT_BOLD(8),      QRect(  11, 251, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(203, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 251,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER2        },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 251,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER2        },

    {QObject::trUtf8("3轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 281, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(203, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("--"),             D_FONT_BOLD(8),      QRect(103, 281,  95, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),             D_FONT_BOLD(8),      QRect(603, 281,  95, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("4轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 311, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(203, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("--"),              D_FONT_BOLD(8),      QRect(103, 311, 95, 28),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),              D_FONT_BOLD(8),      QRect(603, 311, 95, 28),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("AS压力(满)"),   D_FONT_BOLD(8),      QRect( 11, 341, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(103, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(178, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(253, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(328, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(403, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(478, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(553, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("560"),           D_FONT_BOLD(8),      QRect(628, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("AS压力(空)"),   D_FONT_BOLD(8),      QRect( 11, 371, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(103, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(178, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(253, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(328, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(403, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(478, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(553, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("250"),           D_FONT_BOLD(8),      QRect(628, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

   // {QObject::trUtf8("4轴轮径"),          D_FONT_BOLD(8),      QRect( 11, 366, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_PICCARSET_LABEL_LINE1_OR_LINE2          },

//    {QObject::trUtf8("1号线"),            D_FONT_BOLD(8),      QRect(120, 360, 100, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PICCARSET_BUTTON_LINE_1   },
//    {QObject::trUtf8("2号线"),            D_FONT_BOLD(8),      QRect(260, 360, 100, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PICCARSET_BUTTON_LINE_2   },

    {QObject::trUtf8("如变更数据，请按相关数据进行设置。"),                     D_FONT_BOLD(8),     QRect(140, 420, 400, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,          ID_PICCARSET_BUTTON_LINE_3      },
    {QObject::trUtf8("全部设置完毕后，点击【变更】按钮，按钮弹起表示设置完毕。"),   D_FONT_BOLD(8),    QRect(140, 451, 470, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,          ID_PICCARSET_BUTTON_LINE_4      },
    {QObject::trUtf8("注 意:只有在紧急制动情况下，可以设定轮径。"),            D_FONT_BOLD(8),    QRect(140, 482, 470, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,          ID_PICCARSET_BUTTON_LINE_5       },


    {QObject::trUtf8("变   更"),        D_FONT_BOLD(8),      QRect( 25, 490, 100, 40),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_CHANGE              },
 //   {QObject::trUtf8("轮径履历"),       D_FONT_BOLD(8),      QRect(675, 490, 100, 40),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME  },

    {QObject::trUtf8("屏幕校准"),                D_FONT_BOLD(8),      QRect(630,  490, 100,  40),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_SCREENRECTIFY     },


};
int g_ParameterSetting1RomLen = sizeof(g_PicRom_ParameterSetting1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CParameterSettingPage1,CPage)
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

        ON_BTNCLK(ID_PICCARSET_LABEL_CAR2DIAMETER1, OnCar2Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR3DIAMETER1, OnCar3Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR4DIAMETER1, OnCar4Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR5DIAMETER1, OnCar5Diameter1SetBtnClk)



        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER2, OnCar1Diameter2SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER2, OnCar6Diameter2SetBtnClk)


        ON_BTNCLK(ID_PICCARSET_LABEL_TRAINNUMVAL, OnTrainNumBtnClk)

//        ON_BTNCLK(ID_PICCARSET_BUTTON_LINE_1, OnLine_1)
//        ON_BTNCLK(ID_PICCARSET_BUTTON_LINE_2, OnLine_2)


        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_CHANGE, OnChangeBtnDown)
  //      ON_BTNCLK(ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME, OnWheelDiamResumBtnClk)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_SCREENRECTIFY, OnScreenRectifyClk)

END_MESSAGE_MAP()

CParameterSettingPage1::CParameterSettingPage1()
{
    m_WheelDiaType = -1;
}

void CParameterSettingPage1::OnUpdatePage()
{
    updateTrain(ID_PARAMETERSET_TRAIN);
    updateArrow(ID_PARAMETERSET_ARROW_LEFT,ID_PARAMETERSET_ARROW_RIGHT);

    updateErrorLine(ID_PARAMETERSET_TRAIN);

    UpdateCarNumber();
    UpdateDiameterValue();
    UpdateTrainValue();
    //UpdateLineNumValue();

    if (m_bChange)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            prameter_setting_timer--;
            if (prameter_setting_timer==0)
            {
                m_bChange = false;
                prameter_setting_button=0;
                parameter_setting_se1ect1=0;

                HMCT_TrainNoSet_B1=false;
                HMCT_SetWheelEnable_B1=false;
                HMCT_LineNoSet_B1=false;

                HMCT_TimeCheck_U8=0x55;

                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
//                ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//                ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);

            //    SaveCurWheelDia();
                SaveWheelDiaToCSV();
            }
        }
    }
}

void CParameterSettingPage1::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->m_bAutoUpState = false;

//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->m_bAutoUpState = false;
//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->m_bAutoUpState = false;
     ((CLabel*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_3))->SetAlignment(Qt::AlignLeft);
     ((CLabel*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_4))->SetAlignment(Qt::AlignLeft);
      ((CLabel*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_5))->SetAlignment(Qt::AlignLeft);

}

void CParameterSettingPage1::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif

     m_bChange = false;
    prameter_setting_timer = 5;
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);

    this->InitPageHeader();

//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);
}

    void CParameterSettingPage1::OnComBtn1Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn2Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn3Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn4Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn5Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn6Clk()
    {

    }
    void CParameterSettingPage1::OnComBtn7Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn8Clk()
    {
        //reset label state
        for(int i = WHEELDIAENUM_CAR12; i <= WHEELDIAENUM_CAR62; i++)
            ResetParameter1Label(i);

        m_WheelDiaList.clear();

        HMCT_TrainNoSet_B1=false;
        HMCT_SetWheelEnable_B1=false;
        HMCT_LineNoSet_B1=false;

        ChangePage(PAGE_INDEX_MAINTAIN);

    }




void CParameterSettingPage1::OnChangeBtnDown()
{
    if(!m_bChange)
    {
        m_bChange = true;
        prameter_setting_timer = 5;


        //没有选中的轮径保持之前设定值
        HMCT_SetWheelDiaTC1_U8=CTHM_SetWheelDiaTC1_U8;
        HMCT_SetWheelDiaMp1_U8=CTHM_SetWheelDiaMp1_U8;
        HMCT_SetWheelDiaM1_U8=CTHM_SetWheelDiaM1_U8;
        HMCT_SetWheelDiaM2_U8=CTHM_SetWheelDiaM2_U8;
        HMCT_SetWheelDiaMp2_U8=CTHM_SetWheelDiaMp2_U8;
        HMCT_SetWheelDiaTC2_U8=CTHM_SetWheelDiaTC2_U8;
        HMCT_LineNoSet_U8=CTHM_LineNumber_U8 ;
        HMCT_LineNoSet_B1=false;



        if ( Bit(parameter_setting_se1ect1,1)==1)  //HMCT_SetWheelDiaTC1_U8
        {
               HMCT_SetWheelDiaTC1_U8=HMI_send_data_temp2-770;
        }
        if ( Bit(parameter_setting_se1ect1,2)==1)  //HMCT_SetWheelDiaTC1_U8
        {
               HMCT_SetWheelDiaMp1_U8=HMI_send_data_temp3-770;
        }
        if ( Bit(parameter_setting_se1ect1,3)==1)
        {
                HMCT_SetWheelDiaM1_U8=HMI_send_data_temp4-770;
        }
        if ( Bit(parameter_setting_se1ect1,4)==1)
        {
                HMCT_SetWheelDiaM2_U8=HMI_send_data_temp5-770;
        }
        if (Bit(parameter_setting_se1ect1,5)==1)
        {
                HMCT_SetWheelDiaMp2_U8=HMI_send_data_temp6-770;

        }
        if ( Bit(parameter_setting_se1ect1,6)==1)
        {
                HMCT_SetWheelDiaTC2_U8=HMI_send_data_temp7-770;

        }

        if ( Bit(parameter_setting_se1ect1,0)==1)
        {
            HMCT_TrainNoSet_U8=HMI_send_data_temp1;
            HMCT_LineNoSet_U8=HMI_send_data_temp16;


        }


        if ( Bit(parameter_setting_se1ect1,0)==1)
        {
                HMCT_TrainNoSet_B1=true;
                HMCT_LineNoSet_B1=true;


                HMCT_TimeCheck_U8=0xaa;

        }

        if ( (parameter_setting_se1ect1&126)!=0)
        {
                HMCT_SetWheelEnable_B1=true;

                HMCT_TimeCheck_U8=0xaa;

        }

        prameter_setting_button=1;
    //  prameter_setting_timer=5;
    //    SavePreWheelDia();




    }
    else
    {
        ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
    }


}

void CParameterSettingPage1::OnScreenRectifyClk()
{

    QString program = "./ts_calibrate_cnr";
    QProcess::execute(program);

}

void CParameterSettingPage1::OnWheelDiamResumBtnClk()
{
//    ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
}

void CParameterSettingPage1::UpdateCarNumber()
{
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER1,che1_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER3,che2_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER4,che3_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER5,che4_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER7,che5_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER8,che6_num);
   // SetIntValue(ID_PICCARSET_LABEL_CARNUMBER8,HMI_send_data16);

}

void CParameterSettingPage1::SetIntValue(int id, int aValue)
{

    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue));
}

void CParameterSettingPage1::SetStringValue(int id, QString aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}

void CParameterSettingPage1::UpdateTrainValue()
{

   // SetStringValue(ID_PICCARSET_LABEL_TRAINSTR, QObject::trUtf8("列车号"));

    if (Bit(parameter_setting_se1ect1,0))
    {
        SetLineTrainNum(ID_PICCARSET_LABEL_TRAINNUMVAL,HMI_send_data_temp16, HMI_send_data_temp1);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PICCARSET_LABEL_TRAINNUMVAL))->SetCtrlText(QObject::trUtf8("列车号"));
    }

    SetLabelColor(ID_PICCARSET_LABEL_TRAINNUMVAL, Bit(parameter_setting_se1ect1,0));
   // SetLabelColor(ID_PICCARSET_LABEL_TRAINSTR, Bit(parameter_setting_se1ect1,0));
}

void CParameterSettingPage1::SetLabelColor(int id, int colorVal)
{
    //ASSERT((colorVal >= 0) && (colorVal <= 15));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}

void CParameterSettingPage1::OnTrainNumBtnClk()
{
    if (Bit(parameter_setting_se1ect1,0)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,0,1);
        BitSet(parameter_setting_se1ect1,0,1);

        carnum_prompt=1;
        parameter_setting_text=QObject::trUtf8("列车编号设置");
        parameter_wheeldia=CTHM_TrainNumber_U8;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;

        //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,0,0);
    }
}



void CParameterSettingPage1::UpdateDiameterValue()
{

    if (Bit(parameter_setting_se1ect1,0))
    {
        SetLineTrainNum(ID_PICCARSET_LABEL_TRAINNUMVAL,HMI_send_data_temp16, HMI_send_data_temp1);
    }
    else
    {
        SetLineTrainNum(ID_PICCARSET_LABEL_TRAINNUMVAL,CTHM_LineNumber_U8,  CTHM_TrainNumber_U8);
    }


    if (Bit(parameter_setting_se1ect1,1))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, HMI_send_data_temp2);  //
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, CTHM_SetWheelDiaTC1_U8+770);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER2, Bit(parameter_setting_se1ect1,1));

    if (Bit(parameter_setting_se1ect1,2))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, HMI_send_data_temp3);  //
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, CTHM_SetWheelDiaMp1_U8+770);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR2DIAMETER1, Bit(parameter_setting_se1ect1,2));



    if (Bit(parameter_setting_se1ect1,3))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, HMI_send_data_temp4);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, CTHM_SetWheelDiaM1_U8+770);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR3DIAMETER1, Bit(parameter_setting_se1ect1,3));

    if (Bit(parameter_setting_se1ect1,4))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, HMI_send_data_temp5);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, CTHM_SetWheelDiaM2_U8+770);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR4DIAMETER1, Bit(parameter_setting_se1ect1,4));

    if (Bit(parameter_setting_se1ect1,5))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, HMI_send_data_temp6);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, CTHM_SetWheelDiaMp2_U8+770);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR5DIAMETER1, Bit(parameter_setting_se1ect1,5));



    if (Bit(parameter_setting_se1ect1,6))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER2, HMI_send_data_temp7);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER2, CTHM_SetWheelDiaTC2_U8+770);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER2, Bit(parameter_setting_se1ect1,6));





}

void CParameterSettingPage1::SetCarDiameterButtoColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CParameterSettingPage1::OnCar1Diameter1SetBtnClk()
{

}


void CParameterSettingPage1::OnCar1Diameter2SetBtnClk()
{
    if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,1)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,1,1);
        BitSet(parameter_setting_se1ect1,1,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("1车厢轴2轮径设置");
        parameter_wheeldia=CTHM_SetWheelDiaTC1_U8+770;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR12;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,1,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
    }
}
else
{
    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
    return;
}
}

void CParameterSettingPage1::OnCar1Diameter3SetBtnClk()
{

}

void CParameterSettingPage1::OnCar1Diameter4SetBtnClk()
{

}

void CParameterSettingPage1::OnCar2Diameter1SetBtnClk()
{
    //if(CTHM_EmgcyBrakeState_B1 )
    if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,2)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,2,1);
        BitSet(parameter_setting_se1ect1,2,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("2车厢轴1轮径设置");
        parameter_wheeldia=CTHM_SetWheelDiaMp1_U8+770;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR21;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,2,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
    }
    }
    else
    {
        ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
        return;
    }
}

void CParameterSettingPage1::OnCar3Diameter1SetBtnClk()
{
    if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,3)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,3,1);
        BitSet(parameter_setting_se1ect1,3,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("3车厢轴1轮径设置");
        parameter_wheeldia=CTHM_SetWheelDiaM1_U8+770;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR31;

    }
    else
    {
        BitSet(parameter_setting_se1ect1,3,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
    }
}
else
{
    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
    return;
}
}

void CParameterSettingPage1::OnCar4Diameter1SetBtnClk()
{
    if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,4)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,4,1);
        BitSet(parameter_setting_se1ect1,4,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("4车厢轴1轮径设置");
        parameter_wheeldia=CTHM_SetWheelDiaM2_U8+770;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR41;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,4,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
    }
}
else
{
    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
    return;
}
}

void CParameterSettingPage1::OnCar5Diameter1SetBtnClk()
{
    if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,5)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,5,1);
        BitSet(parameter_setting_se1ect1,5,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("5车厢轴1轮径设置");
        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
       // LABEL=parameter_setting_data9;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR51;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,5,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
    }
}
else
{
    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
    return;
}
}

void CParameterSettingPage1::OnCar6Diameter1SetBtnClk()
{

}

void CParameterSettingPage1::OnCar7Diameter1SetBtnClk()
{

}

void CParameterSettingPage1::OnCar8Diameter1SetBtnClk()
{

}



void CParameterSettingPage1::OnCar6Diameter2SetBtnClk()
{
    if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,6)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,6,1);
        BitSet(parameter_setting_se1ect1,6,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("6车厢轴2轮径设置");
        parameter_wheeldia=CTHM_SetWheelDiaTC2_U8+770;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR62;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,6,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
    }
}
else
{
    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
    return;
}
}



void CParameterSettingPage1::OnCar8Diameter3SetBtnClk()
{

}



void CParameterSettingPage1::OnCar8Diameter4SetBtnClk()
{

}

void CParameterSettingPage1::ClearWheelDiaFromMemByType(int nType)
{
    for(int i = 0; i < m_WheelDiaList.size(); i++)
    {
        if(m_WheelDiaList[i].WheelDiaType == nType)
        {
            m_WheelDiaList.removeAt(i);
        }
    }
}

void CParameterSettingPage1::SavePreWheelDia()
{
    m_preWheelDiaList.clear();

    m_preWheelDiaList.append(HMI_send_data_temp2);
    m_preWheelDiaList.append(HMI_send_data_temp3);
    m_preWheelDiaList.append(HMI_send_data_temp4);
    m_preWheelDiaList.append(HMI_send_data_temp5);
    m_preWheelDiaList.append(HMI_send_data_temp6);
    m_preWheelDiaList.append(HMI_send_data_temp7);
    m_preWheelDiaList.append(HMI_send_data_temp8);
    m_preWheelDiaList.append(HMI_send_data_temp9);
    m_preWheelDiaList.append(HMI_send_data_temp10);
    m_preWheelDiaList.append(HMI_send_data_temp11);
    m_preWheelDiaList.append(HMI_send_data_temp12);
    m_preWheelDiaList.append(HMI_send_data_temp13);
    m_preWheelDiaList.append(HMI_send_data_temp14);
    m_preWheelDiaList.append(HMI_send_data_temp15);
    m_preWheelDiaList.append(HMI_send_data_temp16);

}

void CParameterSettingPage1::SaveCurWheelDia()
{
    m_curWheelDiaList.clear();
    m_curWheelDiaList.append(CCU_HMI_220_2);
    m_curWheelDiaList.append(CCU_HMI_220_3);
    m_curWheelDiaList.append(CCU_HMI_220_4);
    m_curWheelDiaList.append(CCU_HMI_220_5);
    m_curWheelDiaList.append(CCU_HMI_220_6);
    m_curWheelDiaList.append(CCU_HMI_220_7);
    m_curWheelDiaList.append(CCU_HMI_220_8);
    m_curWheelDiaList.append(CCU_HMI_220_9);
    m_curWheelDiaList.append(CCU_HMI_220_10);
    m_curWheelDiaList.append(CCU_HMI_220_11);
    m_curWheelDiaList.append(CCU_HMI_220_12);
    m_curWheelDiaList.append(CCU_HMI_220_13);
    m_curWheelDiaList.append(CCU_HMI_220_14);
    m_curWheelDiaList.append(CCU_HMI_220_15);
}

void CParameterSettingPage1::SaveWheelDiaToCSV()
{
    if (m_WheelDiaType == -1)
        return;

    if (m_WheelDiaType == WHEELDIAENUM_TRAINCODE)
    {
        if(
                ((0<CTHM_TrainNumber_U8)&&(CTHM_TrainNumber_U8<100))&&
                ((0<CTHM_LineNumber_U8) &&(CTHM_LineNumber_U8<100 ))
          )
        {
            if(HMI_send_data_temp1==CTHM_TrainNumber_U8)
            {
                SetINIInfo("/CNR_BJ/Traincode", QString::number(CTHM_TrainNumber_U8+CTHM_LineNumber_U8*100));
            }
        }


    }
//    else
//    {
//        for (int i=0; i<m_WheelDiaList.size(); i++)
//        {
//            int nIndex = m_WheelDiaList[i].WheelDiaType;
//            if(m_preWheelDiaList[nIndex] == m_curWheelDiaList[nIndex]) {
//                SaveWheelDiaCSV(m_WheelDiaList[i].WheelDiaStr,m_WheelDiaList[i].WheelDiaType);
//            }
//        }
//    }

    m_WheelDiaList.clear();
    m_curWheelDiaList.clear();
    m_preWheelDiaList.clear();
}

void CParameterSettingPage1::ResetParameter1Label(int nType)
{
    switch(nType)
    {
        case WHEELDIAENUM_CAR12:
        {
            BitSet(parameter_setting_se1ect1,1,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
            break;
        }
        case WHEELDIAENUM_CAR21:
        {
            BitSet(parameter_setting_se1ect1,2,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
            break;
        }
        case WHEELDIAENUM_CAR31:
        {
            BitSet(parameter_setting_se1ect1,3,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
            break;
        }
        case WHEELDIAENUM_CAR41:
        {
            BitSet(parameter_setting_se1ect1,4,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
            break;
        }
        case WHEELDIAENUM_CAR51:
        {
            BitSet(parameter_setting_se1ect1,5,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
            break;
        }
        case WHEELDIAENUM_CAR62:
        {
            BitSet(parameter_setting_se1ect1,6,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
            break;
        }

        default:
           break;
    }
    Update();
}

//void CParameterSettingPage1::OnLine_1()
//{
//    if(!m_bChange)
//    {
//        m_bChange = true;
//        prameter_setting_timer = 5;

//        HMCT_LineNoSet_U8=1;
//        HMCT_LineNoSet_B1=true;
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//    }

//}

//void CParameterSettingPage1::OnLine_2()
//{

//    if(!m_bChange)
//    {
//        m_bChange = true;
//        prameter_setting_timer = 5;

//        HMCT_LineNoSet_U8=2;
//        HMCT_LineNoSet_B1=true;
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);
//    }

//}


//void CParameterSettingPage1::UpdateLineNumValue()
//{
//    ((CLabel *)GetDlgItem(ID_PICCARSET_LABEL_LINE1_OR_LINE2))->SetCtrlText("Line "+QString::number(CTHM_LineNumber_U8));

//}
void CParameterSettingPage1::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move((GetParentDlg()->x()+150)*SCREEN_factor,(GetParentDlg()->y()+150)*SCREEN_factor);
    dlg.exec();
}
void CParameterSettingPage1::SetLineTrainNum(int id, int lineNum, int trainNum)
{
    QString aValue;
    if (lineNum<10)
    {
        if(trainNum<10)
        aValue="0"+StrFromInt( lineNum, 10 )+"0"+StrFromInt(trainNum,10 );
        else
        {
            aValue="0"+StrFromInt( lineNum, 10 )+StrFromInt(trainNum,10 );
        }
    }
    else
    {
        if(trainNum<10)
        aValue=StrFromInt( lineNum, 10 )+"0"+StrFromInt(trainNum,10 );
        else
        {
            aValue=StrFromInt( lineNum, 10 )+StrFromInt(trainNum,10 );
        }
    }

   ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}
