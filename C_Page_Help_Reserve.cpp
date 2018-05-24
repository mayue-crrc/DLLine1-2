#include "C_Page_Help_Reserve.h"

ROMDATA g_PicRom_CarStatus1Help1[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
      D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态帮助"))

      {"",                            D_FONT_BOLD(6),      QRect(100,  60, 600,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(100, 100, 600,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(100, 260, 600,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(100, 340, 600,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(100, 500, 600,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

      {"",                            D_FONT_BOLD(6),      QRect(250, 140, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250, 180, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250, 220, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250, 300, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250, 380, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250, 420, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250, 460, 450,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

      {"",                            D_FONT_BOLD(6),      QRect(100,  60,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(250,  60,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(350,  60,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(450,  60,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
      {"",                            D_FONT_BOLD(6),      QRect(700,  60,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

      {QObject::trUtf8("显示项目"),               D_FONT_BOLD(6),      QRect(102,  61, 140,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("第三轨电压"),             D_FONT_BOLD(8),      QRect(102, 151, 140,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("网流"),                   D_FONT_BOLD(8),      QRect(102, 285, 140,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("牵引电"),                 D_FONT_BOLD(8),      QRect(102, 381, 140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("制动级位"),               D_FONT_BOLD(8),      QRect(102, 410, 140,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

      {QObject::trUtf8("显示条件"),               D_FONT_BOLD(6),      QRect(252,  61,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("正常"),                  D_FONT_BOLD(6),      QRect(252, 101,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("电压过低"),               D_FONT_BOLD(6),      QRect(252, 141,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("电压过高"),               D_FONT_BOLD(6),      QRect(252, 181,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("通信异常"),               D_FONT_BOLD(6),      QRect(252, 221,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("正常"),                  D_FONT_BOLD(6),      QRect(252, 261,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("通信异常"),               D_FONT_BOLD(6),      QRect(252, 301,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("惰行"),                  D_FONT_BOLD(6),      QRect(252, 341,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("牵引"),                  D_FONT_BOLD(6),      QRect(252, 381,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("制动"),                  D_FONT_BOLD(6),      QRect(252, 421,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("紧急制动"),               D_FONT_BOLD(6),     QRect(252, 461,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

      {QObject::trUtf8("显示"),                  D_FONT_BOLD(6),      QRect(352,  61,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("750V"),                 D_FONT_BOLD(6),      QRect(352, 101,  98,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("250V"),                 D_FONT_BOLD(6),      QRect(352, 141,  98,  38),           Qt::black,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("950V"),                 D_FONT_BOLD(6),      QRect(352, 181,  98,  38),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(352, 221,  98,  38),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("80A"),                  D_FONT_BOLD(6),      QRect(352, 261,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(352, 301,  98,  38),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("惰行"),                  D_FONT_BOLD(6),      QRect(352, 341,  98,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("牵引 50%"),              D_FONT_BOLD(6),      QRect(352, 381,  98,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("制动 50%"),              D_FONT_BOLD(6),      QRect(352, 421,  98,  38),           Qt::black,                QColor(255,153,0,255),    CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("紧急制动"),               D_FONT_BOLD(6),      QRect(352, 461,  98,  38),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },

      {QObject::trUtf8("备注"),                  D_FONT_BOLD(6),      QRect(452,  61, 240,  38),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("该车辆牵引系统检测出第三轨电压"), D_FONT_BOLD(6), QRect(452, 101, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("500V以下"),               D_FONT_BOLD(6),      QRect(452, 141, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("900V以上"),               D_FONT_BOLD(6),      QRect(452, 181, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                       D_FONT_BOLD(6),      QRect(452, 221, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8("该车辆牵引系统检测出网流"),  D_FONT_BOLD(6),      QRect(452, 261, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                       D_FONT_BOLD(6),      QRect(452, 301, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                       D_FONT_BOLD(6),      QRect(452, 341, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                       D_FONT_BOLD(6),      QRect(452, 381, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                       D_FONT_BOLD(6),      QRect(452, 421, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
      {QObject::trUtf8(""),                       D_FONT_BOLD(6),      QRect(452, 461, 240,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

      D_COMMON_PAGE_BUTTON_BAR
};

int g_CarStatus1Help1RomLen = sizeof(g_PicRom_CarStatus1Help1)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCarStatus1Help1Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CCarStatus1Help1Page::CCarStatus1Help1Page()
{
}

void CCarStatus1Help1Page::OnUpdatePage()
{

}

void CCarStatus1Help1Page::OnInitPage()
{

}

void CCarStatus1Help1Page::OnShowPage()
{

    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));

    this->InitPageHeader();
}

void CCarStatus1Help1Page::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_CARSTATUS1);
}

void CCarStatus1Help1Page::OnComBtn2Clk()
{

}

void CCarStatus1Help1Page::OnComBtn3Clk()
{

}

void CCarStatus1Help1Page::OnComBtn4Clk()
{

}

void CCarStatus1Help1Page::OnComBtn5Clk()
{

}

void CCarStatus1Help1Page::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
}
