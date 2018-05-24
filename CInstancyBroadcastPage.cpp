#include "CInstancyBroadcastPage.h"

ROMDATA g_PicRom_InstancyBroadcast[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("紧急广播"))
    {QSTR("火警"),            D_FONT_BOLD(8),      QRect( 55, 70, 120,  38),            Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R1     },
    {QSTR("紧急撤离"),         D_FONT_BOLD(8),      QRect(195,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R2     },
    {QSTR("等待救援"),         D_FONT_BOLD(8),      QRect(335,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R5     },
    {QSTR("紧急广播停止"),      D_FONT_BOLD(8),      QRect(55, 420, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_IBSTOP   },

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
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R1,OnFireBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R2,OnEvacuateBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R3,OnWaitHelpBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_IBSTOP,OnIBCStopBpBtnClk)
END_MESSAGE_MAP()

CInstancyBroadcastPage::CInstancyBroadcastPage()
{
}

void CInstancyBroadcastPage::OnUpdatePage()
{

}

void CInstancyBroadcastPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->m_bAutoUpState = false;
}

void CInstancyBroadcastPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
}

void CInstancyBroadcastPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
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

void CInstancyBroadcastPage::OnFireBtnClk()
{
    BitSet( HMI_send_data26,14,0 );
    HMI_send_data27 = 1;
    SetBtnDown(ID_PIBIB_BUTTON_L1R1);
}

void CInstancyBroadcastPage::OnEvacuateBtnClk()
{
    BitSet( HMI_send_data26,14,0 );
    HMI_send_data27 = 2;
    SetBtnDown(ID_PIBIB_BUTTON_L1R2);
}

void CInstancyBroadcastPage::OnWaitHelpBtnClk()
{
    BitSet(HMI_send_data26,14,0);
    HMI_send_data27 = 3;
    SetBtnDown(ID_PIBIB_BUTTON_L1R3);
}

void CInstancyBroadcastPage::OnIBCStopBpBtnClk()
{
    HMI_send_data27 = 0;
    BitSet( HMI_send_data26,14,1 );

    SetBtnDown(NULL);
}

void CInstancyBroadcastPage::SetBtnDown(int nBtnID)
{
    int nIDArray[] =
    {
        ID_PIBIB_BUTTON_L1R1,
        ID_PIBIB_BUTTON_L1R2,
        ID_PIBIB_BUTTON_L1R3
    };

    for (int i=0; i<3; i++)
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
