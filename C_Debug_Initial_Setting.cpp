#include "C_Debug_Initial_Setting.h"

#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qprocess.h>
#include <qsettings.h>

ROMDATA g_PicRom_DebugSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QObject::trUtf8("设置为TC1端 "),                D_FONT_BOLD(8),      QRect( 55,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_VERINF         },
    {QObject::trUtf8("设置为TC2端 "),                D_FONT_BOLD(8),      QRect(195,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_LIFESINGAL     },
//    {QObject::trUtf8("RIOM调试"),               D_FONT_BOLD(8),      QRect(335,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_RIOMDEBUG      },
//    {QObject::trUtf8("刷新时间"),                D_FONT_BOLD(8),      QRect(475,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_FRESHTIME      },
//    {QObject::trUtf8("数据监控"),                D_FONT_BOLD(8),      QRect( 55, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_DATACONTROL    },
//    {QObject::trUtf8("屏幕校准"),                D_FONT_BOLD(8),      QRect(195,  170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_SCREENRECTIFY     },
//    {QObject::trUtf8("RIOM详细信息"),            D_FONT_BOLD(8),      QRect(335, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_RIOMDEBUGINFO  },
//    {QObject::trUtf8("出厂设置"),            D_FONT_BOLD(8),      QRect(335, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_RAWSETTING  },
    {QObject::trUtf8("重启显示屏"),                D_FONT_BOLD(8),      QRect(600, 80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_REBOOT         },


    {QObject::trUtf8("返   回"),                D_FONT_BOLD(8),      QRect(600, 370, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDSET_BUTTON_RETURN         },

   // {QObject::trUtf8("显示屏内部温度"),         D_FONT_BOLD(8),      QRect( 30, 295, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,295, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDSET_LABEL_TEMP_IN_HMI                       },
   // {QObject::trUtf8("当前显示屏所处位置"),         D_FONT_BOLD(8),      QRect( 30, 40, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 55,40, 580, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDSET_LABEL_HMI_TC1orTC2                       },
   // {QObject::trUtf8("以太网接收数据包个数"),    D_FONT_BOLD(8),      QRect( 30, 355, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,355, 160, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDSET_LABEL_UDP_NUM                       },
    //{QObject::trUtf8("信任MVB还是以太网(UDP)"),    D_FONT_BOLD(8),      QRect( 30, 385, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,385, 280, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDSET_LABEL_MVBorUDP                       },



};
int g_DebugSettingRomLen = sizeof(g_PicRom_DebugSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Debug_Initial_Setting,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_PIBDSET_BUTTON_VERINF, OnBtn1Clk)
        ON_BTNCLK(ID_PIBDSET_BUTTON_LIFESINGAL, OnBtn2Clk)
//        ON_BTNCLK(ID_PIBDSET_BUTTON_RIOMDEBUG, OnBtn3Clk)
//        ON_BTNCLK(ID_PIBDSET_BUTTON_FRESHTIME, OnBtn4Clk)
//        ON_BTNCLK(ID_PIBDSET_BUTTON_DATACONTROL, OnBtn5Clk)

        ON_BTNCLK(ID_PIBDSET_BUTTON_REBOOT, OnBtn9Clk)
        ON_BTNCLK(ID_PIBDSET_BUTTON_RETURN, OnBtn6Clk)
//        ON_BTNCLK(ID_PIBDSET_BUTTON_RIOMDEBUGINFO, OnBtn7Clk)
//        ON_BTNCLK(ID_PIBDSET_BUTTON_SCREENRECTIFY, OnBtn8Clk)
//        ON_BTNCLK(ID_PIBDSET_BUTTON_RAWSETTING, OnBtn8Clk)
END_MESSAGE_MAP()

C_Debug_Initial_Setting::C_Debug_Initial_Setting()
{

}

void C_Debug_Initial_Setting::OnUpdatePage()
{
  //  ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_TEMP_IN_HMI))->SetCtrlText(QString::number((test_tempdata[23]-48)*10+(test_tempdata[24]-48)).append(QObject::trUtf8("℃")));
  //  ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_UDP_NUM))->SetCtrlText(QString::number(udp_num)+"  "+QString::number(udp_num4));
  // ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_UDP_NUM))->SetCtrlText(QString::number(65535)+"  "+QString::number(65535));

    if(TC1_HMI==1&&TC2_HMI==0)
    {
        //((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("当前显示屏所处位置: ")+QObject::trUtf8("Tc1")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI)+QObject::trUtf8("  读编码状态  ")+QString::number(test_tempdata[65]));
        ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("当前显示屏所处位置: ")+QObject::trUtf8("TC1. ")+QObject::trUtf8("设置成功后，请点击【重启显示屏】按钮，重启显示屏生效!"));
    }
    else
    {
        if(TC1_HMI==0&&TC2_HMI==1)
        {
           // ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("当前显示屏所处位置: ")+QObject::trUtf8("Tc2")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI)+QObject::trUtf8("  读编码状态  ")+QString::number(test_tempdata[65]));
            ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("当前显示屏所处位置: ")+QObject::trUtf8("Tc2. ")+QObject::trUtf8("设置成功后，请点击【重启显示屏】按钮，重启显示屏生效!"));
        }
        else
        {
          //  ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("当前显示屏所处位置: ")+QObject::trUtf8("未识别，请检查显示屏编码")+QObject::trUtf8("  读编码状态  ")+QString::number(test_tempdata[65]));
            ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("当前显示屏所处位置: ")+QObject::trUtf8("未识别，请重新设置显示屏位置!"));
        }
    }

//    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
//    {
//         ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("MVB")+"  MVB_TC1:"+QString::number(g_485_comm_err_flg1)+"  MVB_TC2:"+QString::number(g_485_comm_err_flg2));
//    }
//    else
//    {
//        if((g_udp_comm_err_flg1||g_udp_comm_err_flg2)!=1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("UDP")+"  UDP_TC1:"+QString::number(g_udp_comm_err_flg1)+"  UDP_TC2:"+QString::number(g_udp_comm_err_flg1));
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("MVB 以太网 通信都异常"));
//        }
//    }
}

void C_Debug_Initial_Setting::OnInitPage()
{
     ((CLabel *)GetDlgItem(ID_PIBDSET_LABEL_HMI_TC1orTC2))->SetAlignment(Qt::AlignLeft);

}

void C_Debug_Initial_Setting::OnShowPage()
{

}

void C_Debug_Initial_Setting::OnBtn1Clk()
{
    SetINIInfo("/HMI/TC1_HMI", QString::number(1));
    SetINIInfo("/HMI/TC2_HMI", QString::number(0));

    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );

  //  ASSERT(inifile.exists( fileName ));
    if ( inifile.exists( fileName ) )
    {
        if ( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            int TC1_HMI_read;
            int TC2_HMI_read;
            QSettings settings( fileName, QSettings::IniFormat );

            TC1_HMI_read = settings.value( "/HMI/TC1_HMI", "0" ).toInt();
            TC2_HMI_read = settings.value( "/HMI/TC2_HMI", "0" ).toInt();
            if(TC1_HMI_read==1&&TC2_HMI_read==0)
            {
                CWarningDialog dlg;
                dlg.SetWarningStr(QObject::trUtf8("设置成功! 显示屏设置为TC1"));
                dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
                dlg.exec();
            }

        }
    }
    else
    {

        CWarningDialog dlg;
        dlg.SetWarningStr(QObject::trUtf8("设置失败，请重新设置！"));
        dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
        dlg.exec();

    }
}

void C_Debug_Initial_Setting::OnBtn2Clk()
{
    SetINIInfo("/HMI/TC1_HMI", QString::number(0));
    SetINIInfo("/HMI/TC2_HMI", QString::number(1));


    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );

  //  ASSERT(inifile.exists( fileName ));
    if ( inifile.exists( fileName ) )
    {
        if ( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            int TC1_HMI_read;
            int TC2_HMI_read;
            QSettings settings( fileName, QSettings::IniFormat );

            TC1_HMI_read = settings.value( "/HMI/TC1_HMI", "0" ).toInt();
            TC2_HMI_read = settings.value( "/HMI/TC2_HMI", "0" ).toInt();
            if(TC1_HMI_read==0&&TC2_HMI_read==1)
            {
                CWarningDialog dlg;
                dlg.SetWarningStr(QObject::trUtf8("设置成功! 显示屏设置为TC2"));
                dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
                dlg.exec();
            }

        }
    }
    else
    {

        CWarningDialog dlg;
        dlg.SetWarningStr(QObject::trUtf8("设置失败，请重新设置！"));
        dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
        dlg.exec();

    }
}

void C_Debug_Initial_Setting::OnBtn3Clk()
{

}

void C_Debug_Initial_Setting::OnBtn4Clk()
{

}

void C_Debug_Initial_Setting::OnBtn5Clk()
{

}

void C_Debug_Initial_Setting::OnBtn6Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void C_Debug_Initial_Setting::OnBtn7Clk()
{

}

void C_Debug_Initial_Setting::OnBtn8Clk()
{

}

void C_Debug_Initial_Setting::OnBtn9Clk()
{
    system("reboot");
}





