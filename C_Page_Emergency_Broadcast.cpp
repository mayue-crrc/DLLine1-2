#include "C_Page_Emergency_Broadcast.h"


ROMDATA g_PicRom_InstancyBroadcast[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("紧急广播"))
    {QObject::trUtf8("故障站台清客"),                D_FONT_BOLD(8),      QRect( 55, 70, 120,  38),            Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R1     },
    {QObject::trUtf8("大小交路转换"),                D_FONT_BOLD(8),      QRect( 55, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R1     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect( 55, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R1     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect( 55, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R1     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect( 55, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R1     },
    {QObject::trUtf8("清客警示"),                   D_FONT_BOLD(8),      QRect(195,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R2     },
    {QObject::trUtf8("故障临时停车"),                D_FONT_BOLD(8),      QRect(195, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R2     },
    {QObject::trUtf8("") ,                D_FONT_BOLD(8),      QRect(195, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R2     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(195, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R2     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(195, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R2     },
    {QObject::trUtf8("救援站台清客"),                D_FONT_BOLD(8),      QRect(335,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R3     },
    {QObject::trUtf8("其他临时停车"),                D_FONT_BOLD(8),      QRect(335, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R3     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(335, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R3     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(335, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R3     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(335, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R3     },
    {QObject::trUtf8("区间清客"),                    D_FONT_BOLD(8),      QRect(475,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R4     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(475, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R4     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(475, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R4     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(475, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R4     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(475, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R4     },
    {QObject::trUtf8("其他站台清客"),                 D_FONT_BOLD(8),      QRect(615,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R5     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(615, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R5     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(615, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R5     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(615, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R5     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(615, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R5     },
    {QObject::trUtf8(""),      D_FONT_BOLD(8),      QRect(55, 420, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_IBSTOP   },
   // {QObject::trUtf8("紧急广播停止"),      D_FONT_BOLD(8),      QRect(55, 420, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_IBSTOP   },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_InstancyBroadcastRomLen = sizeof(g_PicRom_InstancyBroadcast)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CInstancyBroadcastPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R1,On1BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R2,On2BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R3,On3BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R4,On4BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R5,On5BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R1,On6BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R2,On7BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R3,On8BtnClk)


        ON_BTNCLK(ID_PIBIB_BUTTON_IBSTOP,OnIBCStopBpBtnClk)
END_MESSAGE_MAP()

CInstancyBroadcastPage::CInstancyBroadcastPage()
{
         m_bStart_FireAlarm=false;
         m_bStart_EmergEvacuation=false;
         m_bStart_WaitRescue=false;





}

void CInstancyBroadcastPage::OnUpdatePage()
{
    //测试代码，测试时用
//     ((CLabel*)GetDlgItem(ID_PIBIB_BUTTON_L5R5  ))->SetCtrlText(QString::number(m_bStart_FireAlarm)+" "+QString::number(set_timer_FireAlarm)
//                +" "+QString::number(HMCT_EmgcyBroadcastID_U8));

    if(m_bStart_FireAlarm)
    {

         static quint32 times_FireAlarm = 0;

         times_FireAlarm=times_FireAlarm+1;

         if (times_FireAlarm%times_n==0)
        {
             set_timer_FireAlarm--;
             if (set_timer_FireAlarm==0)
             {
                m_bStart_FireAlarm = false;
                times_FireAlarm = 0;
                set_timer_FireAlarm= 5;
                HMCT_EmgcyBroadcastID_U8 = 0;
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);


              }
        }
     }



}

void CInstancyBroadcastPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->m_bAutoUpState = false;

}

void CInstancyBroadcastPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
     m_Emergency_PrePageIndex=CGlobal::m_nPrePageIndex;

     this->InitPageHeader();
}

void CInstancyBroadcastPage::OnComBtn1Clk()
{
    m_bStart_FireAlarm = false;
    set_timer_FireAlarm= 5;
    HMCT_EmgcyBroadcastID_U8 = 0;
    SetBtnDown(NULL);
    ChangePage(m_Emergency_PrePageIndex);
}

void CInstancyBroadcastPage::OnComBtn2Clk()
{

}

void CInstancyBroadcastPage::OnComBtn3Clk()
{

}

void CInstancyBroadcastPage::OnComBtn4Clk()
{

}

void CInstancyBroadcastPage::OnComBtn5Clk()
{

}

void CInstancyBroadcastPage::OnComBtn6Clk()
{

}

void CInstancyBroadcastPage::On1BtnClk()
{
    //BitSet( HMI_send_data26,14,0 );
    HMCT_EmgcyBroadcastID_U8 = 1;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L1R1);
//   // ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);


}

void CInstancyBroadcastPage::On2BtnClk()
{
    //BitSet( HMI_send_data26,14,0 );
    HMCT_EmgcyBroadcastID_U8 = 2;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L1R2);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//   // ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::On3BtnClk()
{
    //BitSet(HMI_send_data26,14,0);
    HMCT_EmgcyBroadcastID_U8 = 3;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L1R3);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);


}

void CInstancyBroadcastPage::On4BtnClk()
{
    //BitSet(HMI_send_data26,14,0);
    HMCT_EmgcyBroadcastID_U8 = 4;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L1R4);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::On5BtnClk()
{
    //BitSet(HMI_send_data26,14,0);
    HMCT_EmgcyBroadcastID_U8 = 5;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L1R5);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::On6BtnClk()
{
    //BitSet(HMI_send_data26,14,0);
    HMCT_EmgcyBroadcastID_U8 = 6;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L2R1);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);

}
void CInstancyBroadcastPage::On7BtnClk()
{
    //BitSet(HMI_send_data26,14,0);
    HMCT_EmgcyBroadcastID_U8 = 7;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L2R2);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);

}
void CInstancyBroadcastPage::On8BtnClk()
{
    //BitSet(HMI_send_data26,14,0);
    HMCT_EmgcyBroadcastID_U8 = 8;
    m_bStart_FireAlarm = true;
    set_timer_FireAlarm= 5;
    SetBtnDown(ID_PIBIB_BUTTON_L2R3);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);

}


void CInstancyBroadcastPage::OnIBCStopBpBtnClk()
{
//    HMCT_EmgcyBroadcastID_U8 = 0;
// //   BitSet( HMI_send_data26,14,1 );

//    SetBtnDown(NULL);
}

void CInstancyBroadcastPage::SetBtnDown(int nBtnID)
{
    int nIDArray[] =
    {
        ID_PIBIB_BUTTON_L1R1,
        ID_PIBIB_BUTTON_L1R2,
        ID_PIBIB_BUTTON_L1R3,
        ID_PIBIB_BUTTON_L1R4,
        ID_PIBIB_BUTTON_L1R5,
        ID_PIBIB_BUTTON_L2R1,
        ID_PIBIB_BUTTON_L2R2,
        ID_PIBIB_BUTTON_L2R3
    };

    for (int i=0; i<8; i++)
    {
        if (nIDArray[i] == nBtnID)
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

