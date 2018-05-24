#include "C_Page_Param_Setting.h"
#include "C_Page_Param_Setting_Input.h"



#include "cwarningdialog.h"

ROMDATA g_PicRom_ParameterSetting2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("参数设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("参数设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("车辆4011车轮直径"),    D_FONT_BOLD(8),      QRect(100, 100, 200, 30),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_PICCARSET_LABEL_1               },
//  {QObject::trUtf8("4011"),               D_FONT_BOLD(8),      QRect(170, 100,  60, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("车轮直径"),            D_FONT_BOLD(8),      QRect(240, 100,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("原值设定"),            D_FONT_BOLD(8),      QRect(100, 150,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("850"),                D_FONT_BOLD(8),      QRect(100, 190, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,            ID_PICCARSET_EDIT_OLDWHEELDIAMETER},
    {QObject::trUtf8("mm"),                 D_FONT_BOLD(8),      QRect(260, 180,  50, 50),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_PICCARSET_LABEL_5              },


    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(300, 100,  150, 30),           Qt::white,                Qt::black,         CONTROL_LABEL,            ID_PICCARSET_LABEL_LINE         },
    {QObject::trUtf8("1号线"),                D_FONT_BOLD(8),      QRect(460, 100, 90, 35),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,            ID_PICCARSET_BUTTON_LINESELECT_1         },
    {QObject::trUtf8("2号线"),                D_FONT_BOLD(8),      QRect(570, 100, 90, 35),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,            ID_PICCARSET_BUTTON_LINESELECT_2         },

    {QObject::trUtf8("新设定值"),            D_FONT_BOLD(8),      QRect(100, 250,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("850"),                D_FONT_BOLD(8),      QRect(100, 290, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,            ID_PICCARSET_EDIT_NEWWHEELDIAMETER},
    {QObject::trUtf8("mm"),                 D_FONT_BOLD(8),      QRect(260, 280,  50, 50),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_PICCARSET_LABEL_6              },

    {QObject::trUtf8("1"),                  D_FONT_BOLD(8),      QRect(460, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM1         },
    {QObject::trUtf8("2"),                  D_FONT_BOLD(8),      QRect(530, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM2         },
    {QObject::trUtf8("3"),                  D_FONT_BOLD(8),      QRect(600, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM3         },
    {QObject::trUtf8("4"),                  D_FONT_BOLD(8),      QRect(460, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM4         },
    {QObject::trUtf8("5"),                  D_FONT_BOLD(8),      QRect(530, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM5         },
    {QObject::trUtf8("6"),                  D_FONT_BOLD(8),      QRect(600, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM6         },
    {QObject::trUtf8("7"),                  D_FONT_BOLD(8),      QRect(460, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM7         },
    {QObject::trUtf8("8"),                  D_FONT_BOLD(8),      QRect(530, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM8         },
    {QObject::trUtf8("9"),                  D_FONT_BOLD(8),      QRect(600, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM9         },
    {QObject::trUtf8("0"),                  D_FONT_BOLD(8),      QRect(460, 400,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM0         },
    {QObject::trUtf8("清  空"),             D_FONT_BOLD(8),      QRect(530, 400, 130, 60),            Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PICCARSET_BUTTON_CLEAR         },

    {QObject::trUtf8("车厢号有效范围为(01-99)"),  D_FONT_BOLD(8),  QRect(100, 380, 250,  30),        Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PICCARSET_LABEL_2              },
    {QObject::trUtf8("轮径值有效范围为(770mm-850mm)"),  D_FONT_BOLD(8), QRect(100, 380, 350, 30),      Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PICCARSET_LABEL_3              },
    {QObject::trUtf8("设置完成后按[设置]键。\n等待[设置]按钮弹起后再退出页面。"),  D_FONT_BOLD(8), QRect(100, 420, 350, 60), Qt::white,Qt::black,             CONTROL_LABEL,            ID_PICCARSET_LABEL_4              },
    {QObject::trUtf8("设  置"),             D_FONT_BOLD(8),       QRect(100, 500, 100, 40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_SET           },



};
int g_ParameterSetting2RomLen = sizeof(g_PicRom_ParameterSetting2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CParameterSettingPage2,CPage)
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

        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM1, OnNum1Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM2, OnNum2Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM3, OnNum3Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM4, OnNum4Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM5, OnNum5Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM6, OnNum6Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM7, OnNum7Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM8, OnNum8Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM9, OnNum9Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM0, OnNum0Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_SET, OnBtnSetClk)

        ON_BTNCLK(ID_PICCARSET_BUTTON_CLEAR, OnClearClk)

        ON_BTNCLK(ID_PICCARSET_BUTTON_LINESELECT_1, OnLine1Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_LINESELECT_2, OnLine2Clk)
END_MESSAGE_MAP()

CParameterSettingPage2::CParameterSettingPage2()
{
}

void CParameterSettingPage2::OnUpdatePage()
{
    if (carnum_prompt)
    {
     updateLineNoSetValue();
    }
}

void CParameterSettingPage2::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_4))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_LINE))->SetAlignment(Qt::AlignLeft);



    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetSelected(true);
}

void CParameterSettingPage2::OnShowPage()
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

    GetDlgItem(ID_PICCARSET_LABEL_1)->SetCtrlText(parameter_setting_text);
    GetDlgItem(ID_PICCARSET_EDIT_OLDWHEELDIAMETER)->SetCtrlText(QString::number(parameter_wheeldia));
    if (carnum_prompt)
    {
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_5))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_6))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_LINE))->ShowLabel();

        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_LINE))->ShowLabel();
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->ShowButton();
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->ShowButton();
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->ChangeButtonState(LBUTTON_DOWN);
        ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetLimitNum(2);

        HMI_send_data_temp16=1;
        m_BLine1=true;
        m_BLine2=false;

    }
    else
    {
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_5))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_6))->ShowLabel();

        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_LINE))->HideLabel();
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->HideButton();
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->HideButton();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_LINE))->HideLabel();


        ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetLimitNum(4);

    }

    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetCtrlText("");
    this->InitPageHeader();
}




#ifdef PAGE_BUTTON_BAR_NEW
        void CParameterSettingPage2::OnComBtn1Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn2Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn3Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn4Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn5Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn6Clk()
        {

        }
        void CParameterSettingPage2::OnComBtn7Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn8Clk()
        {
            CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
            pPage->ResetParameter1Label(pPage->m_WheelDiaType);
            ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }
#else
        void CParameterSettingPage2::OnComBtn1Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn2Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn3Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn4Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn5Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn6Clk()
        {
           CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
           pPage->ResetParameter1Label(pPage->m_WheelDiaType);
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }

#endif


void CParameterSettingPage2::OnNum1Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("1");
}

void CParameterSettingPage2::OnNum2Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("2");
}

void CParameterSettingPage2::OnNum3Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("3");
}

void CParameterSettingPage2::OnNum4Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("4");
}

void CParameterSettingPage2::OnNum5Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("5");
}

void CParameterSettingPage2::OnNum6Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("6");
}

void CParameterSettingPage2::OnNum7Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("7");
}

void CParameterSettingPage2::OnNum8Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("8");
}

void CParameterSettingPage2::OnNum9Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("9");
}

void CParameterSettingPage2::OnNum0Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("0");
}

void CParameterSettingPage2::OnClearClk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetCtrlText("");
}

void CParameterSettingPage2::OnBtnSetClk()
{
    WHEELDIAINFO info = {0,0};
    CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
    info.WheelDiaType = pPage->m_WheelDiaType;
    parameter_setting_temp = GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER)->GetCtrlText();

    //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;

    if ( Bit(p_set_signal,0)==1)
    {
        //qDebug() << "parameter_setting_new :"<<parameter_setting_new<<"HMI_send_data_temp1:"<<HMI_send_data_temp1;
        parameter_setting_new = StrToInt( parameter_setting_temp);

        if (parameter_setting_new < 100&&parameter_setting_new > 0)
        {
           HMI_send_data_temp1 = StrToInt( parameter_setting_temp);
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
           if (m_BLine1)
           {
            HMI_send_data_temp16 = 1;
           }
           else
           {
               if (m_BLine2)
               {
                   HMI_send_data_temp16 = 2;
               }
           }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,1)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
              HMI_send_data_temp2



                      =StrToInt( parameter_setting_temp);
              ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,2)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
               HMI_send_data_temp3=StrToInt( parameter_setting_temp);
               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,3)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                HMI_send_data_temp4=StrToInt( parameter_setting_temp);
                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }

        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if (Bit(p_set_signal,4)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
              HMI_send_data_temp5=StrToInt( parameter_setting_temp);
              ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,5)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
               HMI_send_data_temp6=StrToInt( parameter_setting_temp);
               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }

        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,6)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
               HMI_send_data_temp7=StrToInt( parameter_setting_temp);
               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,7)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                  HMI_send_data_temp8=StrToInt( parameter_setting_temp);
                  ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }

        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,8)==1)//M4轮径1
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                HMI_send_data_temp9=StrToInt( parameter_setting_temp);
                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,9)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
               HMI_send_data_temp10=StrToInt( parameter_setting_temp);
               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,10)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                HMI_send_data_temp11=StrToInt( parameter_setting_temp);
                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,11)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                HMI_send_data_temp12=StrToInt( parameter_setting_temp);
                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }

        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,12)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                 HMI_send_data_temp13=StrToInt( parameter_setting_temp);
                 ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,13)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                 HMI_send_data_temp14=StrToInt( parameter_setting_temp);
                 ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,14)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                 HMI_send_data_temp15=StrToInt( parameter_setting_temp);
                 ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QObject::trUtf8("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if (info.WheelDiaType != WHEELDIAENUM_TRAINCODE)
    {
        info.WheelDiaStr = parameter_setting_temp;
        pPage->m_WheelDiaList.append(info);
    }
}

void CParameterSettingPage2::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
    dlg.exec();
}

void CParameterSettingPage2::OnLine1Clk()
{
    if(!m_BLine1)
    {
        m_BLine1=true;
        m_BLine2=false;
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->ChangeButtonState(LBUTTON_DOWN);

    }
    else
    {
        m_BLine1=false;
        m_BLine2=true;
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->ChangeButtonState(LBUTTON_DOWN);

    }
}

void CParameterSettingPage2::OnLine2Clk()
{
    if(!m_BLine2)
    {
        m_BLine2=true;
        m_BLine1=false;
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->ChangeButtonState(LBUTTON_DOWN);

    }
    else
    {
        m_BLine2=false;
        m_BLine1=true;
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_LINESELECT_1))->ChangeButtonState(LBUTTON_DOWN);

    }

}
void CParameterSettingPage2::updateLineNoSetValue()
{
    if (m_BLine1)
    {
     HMI_send_data_temp16 = 1;
    }
    else
    {
        if (m_BLine2)
        {
            HMI_send_data_temp16 = 2;
        }
    }
    QString lineValue;
    lineValue= QObject::trUtf8("线路设置：line")+QString::number(HMI_send_data_temp16);
((CLabel *)GetDlgItem( ID_PICCARSET_LABEL_LINE ))->SetCtrlText(lineValue);
}
