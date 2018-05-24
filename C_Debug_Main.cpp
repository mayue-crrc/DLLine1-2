#include "C_Debug_Main.h"

#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qprocess.h>

ROMDATA g_PicRom_DebugMain[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QObject::trUtf8("版本信息"),                D_FONT_BOLD(8),      QRect( 55,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_VERINF         },
    {QObject::trUtf8("生命信号"),                D_FONT_BOLD(8),      QRect(195,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_LIFESINGAL     },
    {QObject::trUtf8("RIOM调试"),               D_FONT_BOLD(8),      QRect(335,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RIOMDEBUG      },
    {QObject::trUtf8("刷新时间"),                D_FONT_BOLD(8),      QRect(475,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_FRESHTIME      },
    {QObject::trUtf8("数据监控"),                D_FONT_BOLD(8),      QRect( 55, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_DATACONTROL    },
    //{QObject::trUtf8("屏幕校准"),                D_FONT_BOLD(8),      QRect(195,  170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_SCREENRECTIFY     },
    {QObject::trUtf8("RIOM详细信息"),            D_FONT_BOLD(8),      QRect(195, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RIOMDEBUGINFO  },
    {QObject::trUtf8("出厂设置"),                D_FONT_BOLD(8),      QRect(335, 170, 120,  38),          Qt::black,                    Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RAWSETTING  },

    {QObject::trUtf8("ATC测试"),                D_FONT_BOLD(8),      QRect(475, 170, 120,  38),          Qt::black,                    Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_ATCTEST  },

    {QObject::trUtf8("返   回"),                D_FONT_BOLD(8),      QRect(600, 370, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RETURN         },

   // {QObject::trUtf8("显示屏内部温度"),         D_FONT_BOLD(8),      QRect( 30, 295, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,295, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_TEMP_IN_HMI                       },
    {QObject::trUtf8("显示屏所处位置"),         D_FONT_BOLD(8),      QRect( 30, 325, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,325, 280, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_HMI_TC1orTC2                       },
   // {QObject::trUtf8("以太网接收数据包个数"),    D_FONT_BOLD(8),      QRect( 30, 355, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,355, 160, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_UDP_NUM                       },
    //{QObject::trUtf8("信任MVB还是以太网(UDP)"),    D_FONT_BOLD(8),      QRect( 30, 385, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,385, 280, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_MVBorUDP                       },

    {QObject::trUtf8("CCU->BCU制动指令"),                     D_FONT_BOLD(6),      QRect( 15 ,415-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 150,415-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM2                      },

    {QObject::trUtf8("CCU->BCU级位"),                     D_FONT_BOLD(6),      QRect( 15 ,445-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,445-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM3                       },

    {QObject::trUtf8("CCU->DCU制动指令"),                     D_FONT_BOLD(6),      QRect( 15 ,475-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,475-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM4                       },

    {QObject::trUtf8("CCU->DCU级位"),                     D_FONT_BOLD(6),      QRect( 15 ,505-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,505-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM5                       },

    {QObject::trUtf8("DCU->CCU电制动能力"),                     D_FONT_BOLD(6),      QRect( 15 ,535-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,535-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM6                       },

    {QObject::trUtf8("CCU->BCU电制动能力"),                     D_FONT_BOLD(6),      QRect( 15 ,565-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,565-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM7                       },

    {QObject::trUtf8("BCU->CCU电制动力请求值"),                     D_FONT_BOLD(6),      QRect( 15 ,595-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,595-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM8                       },

    {QObject::trUtf8("CCU->DCU电制动力请求值"),                     D_FONT_BOLD(6),      QRect( 15 ,625-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(150,625-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM9                      },

    {QObject::trUtf8("DCU->CCU设定牵引／电制动力"),                     D_FONT_BOLD(6),      QRect( 250 ,415-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,415-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM10                       },

    {QObject::trUtf8("DCU->CCU实际牵引／电制动力"),                     D_FONT_BOLD(6),      QRect( 250 ,445-60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445-60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM1                       },

    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(250,445-30 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445-30 ,80 , 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM11                       },

    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(250,445 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445 ,80 , 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM12                       },

    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(250,445+30 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445+30 ,80 , 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM13                       },

    {QObject::trUtf8("ATC_9"),                     D_FONT_BOLD(6),      QRect(250,445+60 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445+60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM14                       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(480,445+60 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM17                       },

    {QObject::trUtf8("ATC_28"),                     D_FONT_BOLD(6),      QRect(250,445+90 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445+90 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM15                       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(480,445+90 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM18                       },

    {QObject::trUtf8("ATC_29"),                     D_FONT_BOLD(6),      QRect(250,445+120 ,130, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                  ID_IGNORE                 },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(380,445+120 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM16                       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(480,445+120 ,80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_NUM19                       },


};
int g_DebugMainRomLen = sizeof(g_PicRom_DebugMain)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDebugMainPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_PIBDM_BUTTON_VERINF, OnBtn1Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_LIFESINGAL, OnBtn2Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RIOMDEBUG, OnBtn3Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_FRESHTIME, OnBtn4Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_DATACONTROL, OnBtn5Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RETURN, OnBtn6Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RIOMDEBUGINFO, OnBtn7Clk)
        //      ON_BTNCLK(ID_PIBDM_BUTTON_SCREENRECTIFY, OnBtn8Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RAWSETTING, OnBtn9Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_ATCTEST, OnBtn10Clk)
END_MESSAGE_MAP()

CDebugMainPage::CDebugMainPage()
{

}

void CDebugMainPage::OnUpdatePage()
{
  //  ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_TEMP_IN_HMI))->SetCtrlText(QString::number((test_tempdata[23]-48)*10+(test_tempdata[24]-48)).append(QObject::trUtf8("℃")));
  //  ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(udp_num)+"  "+QString::number(udp_num4));
  // ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(65535)+"  "+QString::number(65535));

    QString test;
//    int i=100;
//    short si=-1;
    //test.sprintf("%-4d%4d",123,4567);
    //test.sprintf("%-8x%8X",123,4567);
    //test.sprintf("%4d",si);
    //test.sprintf("%.2f",(double)i);
    //test.sprintf("%d%*d",1,4,'A');
    //((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(HM1CT_TimeSetFlag__B1));


    if(TC1_HMI==1)
    {
        ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("Tc1"));
    }
    else
    {
        if(TC2_HMI==1)
        {
            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("Tc2"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("未知，请重新设置显示屏所处位置."));
        }
    }

//    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
//    {
//         ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("MVB")+"  MVB_TC1:"+QString::number(g_485_comm_err_flg1)+"  MVB_TC2:"+QString::number(g_485_comm_err_flg2));
//    }
//    else
//    {
//        if((g_udp_comm_err_flg1||g_udp_comm_err_flg2)!=1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("UDP")+"  UDP_TC1:"+QString::number(g_udp_comm_err_flg1)+"  UDP_TC2:"+QString::number(g_udp_comm_err_flg1));
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("MVB 以太网 通信都异常"));
//        }
//    }

    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM2))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI1_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM3))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI2_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM4))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI3_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM5))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI4_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM6))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI5_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM7))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI6_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM8))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI7_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM9))->SetCtrlText(QString::number(RIOM2CT_AIOM1AI8_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM10))->SetCtrlText(QString::number(RIOM2CT_PWMM1PWM1_U16).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM1))->SetCtrlText(QString::number(RIOM2CT_PWMM1PWM2_U16).append("ms"));

    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM11))->SetCtrlText(QString::number(RIOM2CT_DIM5LifeSign_U8).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM12))->SetCtrlText(QString::number(RIOM2CT_DIM6LifeSign_U8).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM13))->SetCtrlText(QString::number(RIOM2CT_DIM7LifeSign_U8).append("ms"));

    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM14))->SetCtrlText(QString::number(g_dataBuffer_MVB[1584+4]/256 ).append("us"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM15))->SetCtrlText(QString::number(g_dataBuffer_MVB[1584+14]%256).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM16))->SetCtrlText(QString::number(g_dataBuffer_MVB[1584+14]/256).append("ms"));

    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM17))->SetCtrlText(QString::number(g_dataBuffer_MVB[1616+4]/256 ).append("us"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM18))->SetCtrlText(QString::number(g_dataBuffer_MVB[1616+14]%256).append("ms"));
    ((CLabel*)GetDlgItem(ID_PIBDM_LABEL_NUM19))->SetCtrlText(QString::number(g_dataBuffer_MVB[1616+14]/256).append("ms"));

}

void CDebugMainPage::OnInitPage()
{

}

void CDebugMainPage::OnShowPage()
{
    this->InitPageHeader();
}

void CDebugMainPage::OnBtn1Clk()
{
    ChangePage(PAGE_INDEX_VERSIONINFO);
}

void CDebugMainPage::OnBtn2Clk()
{
    ChangePage(PAGE_INDEX_VIALSIGNAL);
}

void CDebugMainPage::OnBtn3Clk()
{
    ChangePage(PAGE_INDEX_RIOMDEBUG);
}

void CDebugMainPage::OnBtn4Clk()
{
    ChangePage(PAGE_INDEX_REFRESHTIME);
}

void CDebugMainPage::OnBtn5Clk()
{
    ChangePage(PAGE_INDEX_UDPDATA1);
}

void CDebugMainPage::OnBtn6Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS);
}

void CDebugMainPage::OnBtn7Clk()
{
    ChangePage(PAGE_INDEX_IOTCTABLE);
}

//void CDebugMainPage::OnBtn8Clk()
//{

//    QString program = "./ts_calibrate_cnr";
//    QProcess::execute(program);
//}

void CDebugMainPage::OnBtn9Clk()
{
    ChangePage(PAGE_INDEX_DEBUGSETTING);
}

void CDebugMainPage::OnBtn10Clk()
{
    ChangePage(PAGE_INDEX_ATCTEST);
}



