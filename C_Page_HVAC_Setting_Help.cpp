#include "C_Page_HVAC_Setting_Help.h"


ROMDATA g_PicRom_HVACSettingHelp[] =
{
        /*string                font                            rc                  foreground color              background color                control type                   ID           */
        D_COMMON_PAGE_HEADER(QObject::trUtf8("空调设置帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

        {"",                                   D_FONT_BOLD(6),      QRect( 50,  60, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50,  90, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 200,  120, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        {"",                                   D_FONT_BOLD(6),      QRect( 50, 150, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        //{"",                                   D_FONT_BOLD(6),      QRect( 200, 180, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(50, 210, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        //{"",                                   D_FONT_BOLD(6),      QRect(200, 240, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 270, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        //{"",                                   D_FONT_BOLD(6),      QRect(200, 300, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(50, 330, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(200, 360, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(50, 390, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(200, 420, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        {"",                                   D_FONT_BOLD(6),      QRect( 50, 450, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        //{"",                                   D_FONT_BOLD(6),      QRect(50, 450, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 510, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        //{"",                                   D_FONT_BOLD(6),      QRect( 50, 524, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   //     {"",                                   D_FONT_BOLD(6),      QRect( 50, 530, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 245,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8("控制模式"),                       D_FONT_BOLD(8),      QRect( 52, 92, 145,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("集中控制"),                       D_FONT_BOLD(8),      QRect(202, 92,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("本地控制"),                       D_FONT_BOLD(8),      QRect(202, 122,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("集控 自动制冷"),                          D_FONT_BOLD(8),      QRect(302, 92, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("本控"),                          D_FONT_BOLD(8),      QRect(302, 122, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("TCMS集中控制，并显示发送的运行模式"),  D_FONT_BOLD(6),      QRect(452, 92, 325,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("本车控制"),                       D_FONT_BOLD(8),      QRect(452, 122, 325,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


        {QObject::trUtf8("运行模式"),                   D_FONT_BOLD(8),      QRect( 52, 152, 145,  57),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("自动制冷"),                       D_FONT_BOLD(8),      QRect(302, 152, 145,  57),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("空调系统返回的每节车运行模式"), D_FONT_BOLD(8),      QRect(452, 152, 325,  57),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //
        //{QObject::trUtf8("司机室被激活的一端，可以设置空调\n运行模式,此处显示CCU发送的指令"), D_FONT_BOLD(8),      QRect(452, 152, 320,  57),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //    {QObject::trUtf8("空调运行模式"),                       D_FONT_BOLD(8),      QRect(452, 125,  120,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8("设置温度(上)"),                       D_FONT_BOLD(8),      QRect(52,  212, 145, 57),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("20 ℃ "),                      D_FONT_BOLD(10),     QRect(302, 212, 145, 57),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("司机室被激活且空调处于自动制冷模式\n可以设置温度,制冷范围(19-28℃)"), D_FONT_BOLD(8),      QRect(452, 212, 325, 57),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8("车内（外）温度"),                       D_FONT_BOLD(8),      QRect(52,  272, 145, 57),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("20 (28) ℃ "),                      D_FONT_BOLD(10),     QRect(302, 272, 145, 57),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("空调处于在线状态则显示\n车内外温度,温度范围((-40)-70℃)"), D_FONT_BOLD(8),      QRect(452, 272, 325, 57),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        //     {QObject::trUtf8("模式可以设置温度,制冷范围"),      D_FONT_BOLD(8),      QRect(452, 177, 280, 25),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
   //     {QObject::trUtf8("(21-28℃)"),      D_FONT_BOLD(8),      QRect(452, 202, 280, 25),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8("压缩机，冷凝机,\n通风机,预热器"),         D_FONT_BOLD(8),      QRect( 52, 332, 145,  57),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("关闭"),                          D_FONT_BOLD(8),      QRect(202, 332,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("打开"),                          D_FONT_BOLD(8),      QRect(202, 362,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("自动制冷"),                       D_FONT_BOLD(8),      QRect(202, 392,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("自动制暖"),                       D_FONT_BOLD(8),      QRect(202, 422,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8("1"),                            D_FONT_BOLD(8),      QRect(320, 331,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF1       },
        {QObject::trUtf8("2"),                            D_FONT_BOLD(8),      QRect(350, 331,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF2       },
        {QObject::trUtf8("3"),                            D_FONT_BOLD(8),      QRect(380, 331,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF3       },
        {QObject::trUtf8("4"),                            D_FONT_BOLD(8),      QRect(410, 331,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF4       },

        {QObject::trUtf8("1"),                            D_FONT_BOLD(8),      QRect(320, 361,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON1        },
        {QObject::trUtf8("2"),                            D_FONT_BOLD(8),      QRect(350, 361,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON2        },
        {QObject::trUtf8("3"),                            D_FONT_BOLD(8),      QRect(380, 361,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON3        },
        {QObject::trUtf8("4"),                            D_FONT_BOLD(8),      QRect(410, 361,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON4        },

       // {QObject::trUtf8("1"),                            D_FONT_BOLD(8),      QRect(320, 391,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT1     },
      //  {QObject::trUtf8("2"),                            D_FONT_BOLD(8),      QRect(350, 391,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT2     },
       // {QObject::trUtf8("3"),                            D_FONT_BOLD(8),      QRect(380, 391,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT3     },
      //  {QObject::trUtf8("4"),                            D_FONT_BOLD(8),      QRect(410, 391,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT4     },
/*
        {QObject::trUtf8("新风阀"),                        D_FONT_BOLD(8),      QRect( 52, 282, 145,  87),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("关闭"),                          D_FONT_BOLD(8),      QRect(202, 281,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("打开"),                          D_FONT_BOLD(8),      QRect(202, 311,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("发生故障"),                       D_FONT_BOLD(8),      QRect(202, 341,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8(""),                            D_FONT_BOLD(8),      QRect(320, 282,  50,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNOFF1       },
        {QObject::trUtf8(""),                            D_FONT_BOLD(8),      QRect(380, 282,  50,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNOFF2       },

        {QObject::trUtf8("60"),                            D_FONT_BOLD(8),      QRect(320, 312,  50,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNON1        },
        {QObject::trUtf8("60"),                            D_FONT_BOLD(8),      QRect(380, 312,  50,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNON2        },

        {QObject::trUtf8(""),                            D_FONT_BOLD(8),      QRect(320, 342,  50,  26),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT1     },
        {QObject::trUtf8(""),                            D_FONT_BOLD(8),      QRect(380, 342,  50,  26),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT2     },

        {QObject::trUtf8("新风有30%，60%，100% 3种状态"),   D_FONT_BOLD(8),      QRect(452, 311,  320,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
*/
        {QObject::trUtf8("自动制冷/制暖"),                    D_FONT_BOLD(8),   QRect( 52, 392, 145,  56),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


        {QObject::trUtf8("自动制冷"),                        D_FONT_BOLD(8),      QRect(302, 392, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("自动制暖"),                        D_FONT_BOLD(8),      QRect(302, 422, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },



        {QObject::trUtf8("选择的车厢处理自动制冷模式时显示"),       D_FONT_BOLD(6),      QRect(452, 392, 320,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("选择的车厢处理自动制暖模式时显示"),       D_FONT_BOLD(6),      QRect(452, 422, 320,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


/*
        {QObject::trUtf8("紧急通风停止"),                     D_FONT_BOLD(8),      QRect( 52, 451, 145,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("紧急通风"),                          D_FONT_BOLD(8),      QRect(202, 451,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("非紧急通风"),                          D_FONT_BOLD(8),      QRect(202,481,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("紧急通风\n停止 "),                      D_FONT_BOLD(4),      QRect(332, 451, 85,  28),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_CHVACSET_BUTTON_AMERGEWIND1         },
        {QObject::trUtf8("紧急通风\n停止"),                       D_FONT_BOLD(4),      QRect(332, 481, 85,  28),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_CHVACSET_BUTTON_AMERGEWIND2         },
        {QObject::trUtf8("空调处于紧急通风状态时，按钮变为绿色，\n点击按钮停止紧急通风，其他状态按钮不可按 "),                     D_FONT_BOLD(6),      QRect(452, 451, 325,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
*/
        //{QObject::trUtf8("本车控制"),                       D_FONT_BOLD(8),      QRect(452, 401, 245,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QObject::trUtf8("设置温度(下)"),                       D_FONT_BOLD(8),      QRect(52,  452, 145, 56),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("26.0 ℃ "),                      D_FONT_BOLD(10),     QRect(302, 452, 145, 56),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QObject::trUtf8("空调处于自动制冷(或制暖)模式可以设置温度,\n制冷范围(22-28℃),制暖范围(12-22℃)"), D_FONT_BOLD(6),      QRect(452,452, 325, 56),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("备注：点击【全车】设置所有车厢，点击单个车厢号设置相应车厢。"),            D_FONT_BOLD(8),      QRect(28, 524, 700,  25),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },


};
int g_HVACSettingHelpRomLen = sizeof(g_PicRom_HVACSettingHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHVACSettingHelpPage,CPage)
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

CHVACSettingHelpPage::CHVACSettingHelpPage()
{
}

void CHVACSettingHelpPage::OnUpdatePage()
{

}

void CHVACSettingHelpPage::OnInitPage()
{

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF1))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF2))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF3))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF4))->SetBorderColor(Qt::green);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON4))->SetBorderColor(Qt::white);

    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT1))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT2))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT3))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT4))->SetBorderColor(Qt::white);
/*
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNOFF1))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNOFF2))->SetBorderColor(Qt::green);


    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNON1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNON2))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT2))->SetBorderColor(Qt::white);
*/
    //((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND2))->SetCtrlEnable(false);
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);

    //((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND1))->SetButtonType(BUTTON_STATION);



}

void CHVACSettingHelpPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif

    this->InitPageHeader();

}

        void CHVACSettingHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_HVACSETTING);
        }

        void CHVACSettingHelpPage::OnComBtn2Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn3Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn4Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn5Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn6Clk()
        {

        }
        void CHVACSettingHelpPage::OnComBtn7Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn8Clk()
        {

        }





