#include "C_Page_Station_Setting.h"

#include "CStationSettingPage.h"

ROMDATA g_PicRom_InitialSetting[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("初始设定") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("初始\n设定") )

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QObject::trUtf8("初始设定"))
    D_COMMON_PAGE_BUTTON_BAR

#endif


    {QObject::trUtf8("始发站 "),                  D_FONT_BOLD(8),      QRect(150, 200, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_ORIGINATOR         },
    {QObject::trUtf8("终点站"),                   D_FONT_BOLD(8),      QRect(150, 300, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_TERMINUS           },
    {QObject::trUtf8("西苑"),                    D_FONT_BOLD(8),      QRect(290, 200, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWORIGINATOR        },
    {QObject::trUtf8("俸伯"),                    D_FONT_BOLD(8),      QRect(290, 300, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWTERMINUS          },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(480, 200, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTORIGINATOR    },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(480, 300, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTTERMINUS      },
    {QObject::trUtf8("新设定值"),                 D_FONT_BOLD(8),      QRect(290, 150, 150, 40),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE       },
    {QObject::trUtf8("当前设定值"),               D_FONT_BOLD(8),      QRect(480, 150, 150, 40),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE        },
//    {QObject::trUtf8("方向确认"),                 D_FONT_BOLD(8),      QRect(545, 500, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_DIRECTIONCONFIRM    },
//    {QObject::trUtf8("预留设定"),                 D_FONT_BOLD(8),      QRect(675, 500, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_RESERVESET          },
    {QObject::trUtf8("请设定以上各条后，按右下角[确认]键。\n等待[确认]按钮弹起，且当前设定值与新设定值一致时，表明设置生效。"),D_FONT_BOLD(8), QRect( 50, 440, 700, 50),  Qt::white, Qt::black, CONTROL_LABEL, ID_PIBIS_LABEL_EXPLAIN  },
};
int g_InitialSettingRomLen = sizeof(g_PicRom_InitialSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CInitialSettingPage,CPage)
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
//        ON_BTNCLK(ID_PIBIS_BUTTON_DIRECTIONCONFIRM, OnDirectConfirmBtnClk)
//        ON_BTNCLK(ID_PIBIS_BUTTON_RESERVESET, OnReserveSetBtnClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_ORIGINATOR, OnStartStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_TERMINUS, OnEndStationClk)
END_MESSAGE_MAP()

CInitialSettingPage::CInitialSettingPage()
{
   //  ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;
}


void CInitialSettingPage::OnUpdatePage()
{
    if (m_bConfirmDown)
    {
        static quint32 times= 0;
        times++;

        if (times%times_n == 0)
        {
            command_valid_timer--;
            if (command_valid_timer <= 0)
            {
                BitSet( HMI_send_data28, 8, 0);

                updateStationName();
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(true);
                m_bConfirmDown = false;
                times = 0;
            }
        }
    }
}

void CInitialSettingPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_PIBIS_LABEL_EXPLAIN))->SetAlignment(Qt::AlignLeft);
    ((CButton*)GetDlgItem(IDLB_COM_BTN6))->m_bAutoUpState = false;

}

void CInitialSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("确   认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

    updateStationName();

    m_bConfirmDown = false;
    command_valid_timer = 4;
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CInitialSettingPage::OnComBtn1Clk()
        {
            // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
             m_bConfirmDown = false;
             ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {

        }
        void CInitialSettingPage::OnComBtn7Clk()
        {

        }

        void CInitialSettingPage::OnComBtn8Clk()
        {
           ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(false);

            m_bConfirmDown = true;
        //    if (command_valid_timer==0)
        //    {
                HMI_send_data26=station_start+station_end*256;


                BitSet( HMI_send_data28, 8, 1);
                command_valid_timer=4;
               ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);
        //    }
        }
#else
        void CInitialSettingPage::OnComBtn1Clk()
        {
           // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
            m_bConfirmDown = false;
            ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {
            m_bConfirmDown = true;
        //    if (command_valid_timer==0)
        //    {
                HMI_send_data22=station_start;
                HMI_send_data23=station_end;
                BitSet( HMI_send_data25, 16, 1);
                command_valid_timer=4;
        //    }
        }
#endif




void CInitialSettingPage::OnDirectConfirmBtnClk()
{
    //ChangePage(PAGE_INDEX_DIRECTIONCONFIRM);
}

void CInitialSettingPage::OnReserveSetBtnClk()
{
    //ChangePage(PAGE_INDEX_RESERVESETTING);
}

void CInitialSettingPage::OnStartStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_START;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

void CInitialSettingPage::OnEndStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_END;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

QString CInitialSettingPage::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";


    if ( (nStationID > 100) && (nStationID < 123) )
    {
        if (nStationID == 101)
        {
            retStr = QObject::trUtf8("姚家");
        }
        if (nStationID == 102)
        {
            retStr = QObject::trUtf8("大连北站");
        }
        if (nStationID == 103)
        {
            retStr = QObject::trUtf8("华北路");
        }
        if (nStationID == 104)
        {
            retStr = QObject::trUtf8("华南北");
        }
        if (nStationID == 105)
        {
            retStr = QObject::trUtf8("华南广场");
        }
        if (nStationID == 106)
        {
            retStr = QObject::trUtf8("千山路");
        }
        if (nStationID == 107)
        {
            retStr = QObject::trUtf8("松江路");
        }
        if (nStationID == 108)
        {
            retStr = QObject::trUtf8("东纬路");
        }
        if (nStationID == 109)
        {
            retStr = QObject::trUtf8("春柳");
        }
        if (nStationID == 110)
        {
            retStr = QObject::trUtf8("香工街");
        }
        if (nStationID == 111)
        {
            retStr = QObject::trUtf8("中长街");
        }
        if (nStationID == 112)
        {
            retStr = QObject::trUtf8("兴工街");
        }
        if (nStationID == 113)
        {
            retStr = QObject::trUtf8("西安路");
        }
        if (nStationID == 114)
        {
            retStr = QObject::trUtf8("富国街");
        }
        if (nStationID == 115)
        {
            retStr = QObject::trUtf8("会展中心");
        }
        if (nStationID == 116)
        {
            retStr = QObject::trUtf8("星海广场");
        }
        if (nStationID == 117)
        {
            retStr = QObject::trUtf8("大医二院");
        }
        if (nStationID == 118)
        {
            retStr = QObject::trUtf8("黑石礁");
        }
        if (nStationID == 119)
        {
            retStr = QObject::trUtf8("学苑广场");
        }
        if (nStationID == 120)
        {
            retStr = QObject::trUtf8("海事大学");
        }
        if (nStationID == 121)
        {
            retStr = QObject::trUtf8("七贤岭");
        }
        if (nStationID == 122)
        {
            retStr = QObject::trUtf8("河口");
        }
    }

    else
    {
        if ( (nStationID > 200) && (nStationID < 230))
        {
            if (nStationID == 228)
            {
                retStr = QObject::trUtf8("大连北站");
            }
            if (nStationID == 227)
            {
                retStr = QObject::trUtf8("南关岭");
            }
            if (nStationID == 226)
            {
                retStr = QObject::trUtf8("体育中心");
            }
            if (nStationID == 225)
            {
                retStr = QObject::trUtf8("卫生中心");
            }
            if (nStationID == 224)
            {
                retStr = QObject::trUtf8("后革");
            }
            if (nStationID == 223)
            {
                retStr = QObject::trUtf8("革镇堡");
            }
            if (nStationID == 222)
            {
                retStr = QObject::trUtf8("中革");
            }
            if (nStationID == 221)
            {
                retStr = QObject::trUtf8("前革");
            }
            if (nStationID == 220)
            {
                retStr = QObject::trUtf8("辛寨子");
            }
            if (nStationID == 219)
            {
                retStr = QObject::trUtf8("机场");
            }
            if (nStationID == 218)
            {
                retStr = QObject::trUtf8("虹港路");
            }
            if (nStationID == 217)
            {
                retStr = QObject::trUtf8("虹锦路");
            }
            if (nStationID == 216)
            {
                retStr = QObject::trUtf8("红旗西路");
            }
            if (nStationID == 215)
            {
                retStr = QObject::trUtf8("湾家");
            }
            if (nStationID == 214)
            {
                retStr = QObject::trUtf8("马栏广场");
            }
            if (nStationID == 213)
            {
                retStr = QObject::trUtf8("辽师");
            }

            if (nStationID == 212)
            {
                retStr = QObject::trUtf8("交通大学");
            }
            if (nStationID == 211)
            {
                retStr = QObject::trUtf8("西安路");
            }
            if (nStationID == 210)
            {
                retStr = QObject::trUtf8("联合路");
            }
            if (nStationID == 209)
            {
                retStr = QObject::trUtf8("人民广场");
            }
            if (nStationID == 208)
            {
                retStr = QObject::trUtf8("一二九街站");
            }
            if (nStationID == 207)
            {
                retStr = QObject::trUtf8("青泥洼桥");
            }
            if (nStationID == 206)
            {
                retStr = QObject::trUtf8("友好广场");
            }
            if (nStationID == 205)
            {
                retStr = QObject::trUtf8("中山广场");
            }
            if (nStationID == 204)
            {
                retStr = QObject::trUtf8("港湾广场");
            }
            if (nStationID == 203)
            {
                retStr = QObject::trUtf8("会议中心");
            }
            if (nStationID == 202)
            {
                retStr = QObject::trUtf8("东港");
            }
            if (nStationID == 201)
            {
                retStr = QObject::trUtf8("东海");
            }
            if (nStationID == 229)
            {
                retStr = QObject::trUtf8("海之韵");
            }

        }
        }
/*

    if ( (nStationID > 10) && (nStationID < 32) )
    {
        if (nStationID == 11)
        {
            retStr = QObject::trUtf8("姚家");
        }
        if (nStationID == 12)
        {
            retStr = QObject::trUtf8("大连北站");
        }
        if (nStationID == 13)
        {
            retStr = QObject::trUtf8("华北路");
        }
        if (nStationID == 14)
        {
            retStr = QObject::trUtf8("华南北");
        }
        if (nStationID == 15)
        {
            retStr = QObject::trUtf8("华南广场");
        }
        if (nStationID == 16)
        {
            retStr = QObject::trUtf8("千山路");
        }
        if (nStationID == 17)
        {
            retStr = QObject::trUtf8("松江路");
        }
        if (nStationID == 18)
        {
            retStr = QObject::trUtf8("东纬路");
        }
        if (nStationID == 19)
        {
            retStr = QObject::trUtf8("春柳");
        }
        if (nStationID == 20)
        {
            retStr = QObject::trUtf8("香工街");
        }
        if (nStationID == 21)
        {
            retStr = QObject::trUtf8("中长街");
        }
        if (nStationID == 22)
        {
            retStr = QObject::trUtf8("兴工街");
        }
        if (nStationID == 23)
        {
            retStr = QObject::trUtf8("西安路");
        }
        if (nStationID == 24)
        {
            retStr = QObject::trUtf8("会展中心");
        }
        if (nStationID == 25)
        {
            retStr = QObject::trUtf8("星海广场");
        }
        if (nStationID == 26)
        {
            retStr = QObject::trUtf8("大医二院");
        }
        if (nStationID == 27)
        {
            retStr = QObject::trUtf8("黑石礁");
        }
        if (nStationID == 28)
        {
            retStr = QObject::trUtf8("学苑广场");
        }
        if (nStationID == 29)
        {
            retStr = QObject::trUtf8("海事大学");
        }
        if (nStationID == 30)
        {
            retStr = QObject::trUtf8("七贤岭");
        }
        if (nStationID == 31)
        {
            retStr = QObject::trUtf8("河口");
        }
    }

    else
    {
        if ( (nStationID > 32) && (nStationID < 60))
        {
            if (nStationID == 33)
            {
                retStr = QObject::trUtf8("大连北站");
            }
            if (nStationID == 34)
            {
                retStr = QObject::trUtf8("南关岭");
            }
            if (nStationID == 35)
            {
                retStr = QObject::trUtf8("体育中心");
            }
            if (nStationID == 36)
            {
                retStr = QObject::trUtf8("卫生中心");
            }
            if (nStationID == 37)
            {
                retStr = QObject::trUtf8("后革");
            }
            if (nStationID == 38)
            {
                retStr = QObject::trUtf8("革镇堡");
            }
            if (nStationID == 39)
            {
                retStr = QObject::trUtf8("中革");
            }
            if (nStationID == 40)
            {
                retStr = QObject::trUtf8("前革");
            }
            if (nStationID == 41)
            {
                retStr = QObject::trUtf8("辛寨子");
            }
            if (nStationID == 42)
            {
                retStr = QObject::trUtf8("机场");
            }
            if (nStationID == 43)
            {
                retStr = QObject::trUtf8("虹港路");
            }
            if (nStationID == 44)
            {
                retStr = QObject::trUtf8("虹锦路");
            }
            if (nStationID == 45)
            {
                retStr = QObject::trUtf8("红旗西路");
            }
            if (nStationID == 46)
            {
                retStr = QObject::trUtf8("湾家");
            }
            if (nStationID == 47)
            {
                retStr = QObject::trUtf8("马栏广场");
            }
            if (nStationID == 48)
            {
                retStr = QObject::trUtf8("辽师");
            }

            if (nStationID == 49)
            {
                retStr = QObject::trUtf8("西南路");
            }
            if (nStationID == 50)
            {
                retStr = QObject::trUtf8("联合路");
            }
            if (nStationID == 51)
            {
                retStr = QObject::trUtf8("人民广场");
            }
            if (nStationID == 52)
            {
                retStr = QObject::trUtf8("一二九街站");
            }
            if (nStationID == 53)
            {
                retStr = QObject::trUtf8("青泥洼桥");
            }
            if (nStationID == 54)
            {
                retStr = QObject::trUtf8("友好广场");
            }
            if (nStationID == 55)
            {
                retStr = QObject::trUtf8("中山广场");
            }
            if (nStationID == 56)
            {
                retStr = QObject::trUtf8("港湾广场");
            }
            if (nStationID == 57)
            {
                retStr = QObject::trUtf8("会议中心");
            }
            if (nStationID == 58)
            {
                retStr = QObject::trUtf8("东港站");
            }
            if (nStationID == 59)
            {
                retStr = QObject::trUtf8("海之韵");
            }


        }

    }
*/
    return retStr;
}

void CInitialSettingPage::updateStationName()
{
    station_start_display = GetStationNameByID(station_start);
    station_end_display = GetStationNameByID(station_end);
    station_start_ccu = GetStationNameByID(CCU_HMI_221_13%256);
    station_end_ccu = GetStationNameByID(CCU_HMI_221_13/256);

    GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR)->SetCtrlText(station_start_display);
    GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS)->SetCtrlText(station_end_display);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR)->SetCtrlText(station_start_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS)->SetCtrlText(station_end_ccu);
}
