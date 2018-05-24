#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include "CRealTimeFaultsWarnningDialog.h"
/*
   vector是C++标准模板库（STL）中的一部分，它是一个多功能，能够操作多种数据结构和算法的模板类和函数库
   vector之所以被认为是一个容器，是因为它能够像容器一样存放各种类型的对象，简单地说vector是一个能够存放任意类型的动态数组
   使用g_PageVec容器用于存放每个页面实例的指针，通过这个指针实现不同页面内容的切换
*/
vector<CPage*>  g_PageVec(BKSURFACENUM);


BEGIN_PAGE_MANAGE()
        ADD_PAGE(CCommStatusPage,               ROM_INDEX(PAGE_INDEX_COMMSTATUS))
        ADD_PAGE(CCommStatusHelpPage,           ROM_INDEX(PAGE_INDEX_COMMSTATUSHELP))
        ADD_PAGE(CMainPage,                     ROM_INDEX(PAGE_INDEX_MAIN))
        ADD_PAGE(CInitialSettingPage,           ROM_INDEX(PAGE_INDEX_INITIALSETTING))
 //       ADD_PAGE(CReserveSettingPage,           ROM_INDEX(PAGE_INDEX_RESERVESETTING))
        ADD_PAGE(CStationSettingPage,           ROM_INDEX(PAGE_INDEX_STATIONSETTING))
 //       ADD_PAGE(CDirectionConfirmPage,         ROM_INDEX(PAGE_INDEX_DIRECTIONCONFIRM))
        ADD_PAGE(CRunStatePage,                 ROM_INDEX(PAGE_INDEX_RUNSTATE))
        ADD_PAGE(CRunHelp1Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP1))
        ADD_PAGE(CRunHelp2Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP2))
        ADD_PAGE(CRunHelp3Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP3))
        ADD_PAGE(CRunHelp4Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP4))
        ADD_PAGE(CCarStatus1Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS1))
        ADD_PAGE(CCarStatus1Help1Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP1))
        ADD_PAGE(CCarStatus1Help2Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP2))
        ADD_PAGE(CCarStatus1Help3Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP3))
        ADD_PAGE(CCarStatus2Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS2))
        ADD_PAGE(CCarStatusHelpPage,            ROM_INDEX(PAGE_INDEX_CARSTATUSHELP))
        ADD_PAGE(CCarStatus3Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS3))
        ADD_PAGE(CCarStatus3HelpPage,           ROM_INDEX(PAGE_INDEX_CARSTATUS3HELP))
        ADD_PAGE(CFaultPage,                    ROM_INDEX(PAGE_INDEX_FAULT))
        ADD_PAGE(CHVACSettingPage,              ROM_INDEX(PAGE_INDEX_HVACSETTING))
        ADD_PAGE(CHVACSettingHelpPage,          ROM_INDEX(PAGE_INDEX_HVACSETTINGHELP))
        ADD_PAGE(CMaintainPage,                 ROM_INDEX(PAGE_INDEX_MAINTAIN))
        ADD_PAGE(CParameterSettingPage1,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING1))
        ADD_PAGE(CParameterSettingPage2,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING2))
        ADD_PAGE(CWheelDiaRecordPage,           ROM_INDEX(PAGE_INDEX_WHEELDIARECORD))
 //       ADD_PAGE(CDoorTestPage,                 ROM_INDEX(PAGE_INDEX_DOORTEST))
 //       ADD_PAGE(CDoorTestHelpPage,             ROM_INDEX(PAGE_INDEX_DOORTESTHELP))
        ADD_PAGE(CTractionSystemTestPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTEST))
        ADD_PAGE(CTractionSystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTESTHELP))
        ADD_PAGE(CAccessorySystemTestPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTEST))
        ADD_PAGE(CAccessorySystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP))
        ADD_PAGE(CBrakeTestPage,                ROM_INDEX(PAGE_INDEX_BRAKETEST))
        ADD_PAGE(CBrakeTestHelpPage,        	ROM_INDEX(PAGE_INDEX_BRAKETESTHELP))
        ADD_PAGE(CBrakeSelfTestPage,            ROM_INDEX(PAGE_INDEX_BRAKESELFTEST))
        ADD_PAGE(CBrakeSelfTestHelpPage,	ROM_INDEX(PAGE_INDEX_BRAKESELFTESTHELP))
        ADD_PAGE(CTodayFaultPage,               ROM_INDEX(PAGE_INDEX_TODAYFAULT))
        ADD_PAGE(CRunRecordPage,                ROM_INDEX(PAGE_INDEX_RUNRECORD))
        ADD_PAGE(CTryRunTestPage,               ROM_INDEX(PAGE_INDEX_TRYRUNTEST))
        ADD_PAGE(CPasswordPage,                 ROM_INDEX(PAGE_INDEX_PASSWORD))
        ADD_PAGE(CResetRunRecordPage,       	ROM_INDEX(PAGE_INDEX_RESETRUNRECORD))
        ADD_PAGE(CInstancyBroadcastPage,	ROM_INDEX(PAGE_INDEX_INSTANCYBROADCAST))
        ADD_PAGE(CRealTimeFaultPage,            ROM_INDEX(PAGE_INDEX_REALTIMEFAULT))
//        ADD_PAGE(CHistoryFaultPage,             ROM_INDEX(PAGE_INDEX_HISTORYFAULT))
        ADD_PAGE(CTractionSystemFaultPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMFAULT))
        ADD_PAGE(CDebugMainPage,                ROM_INDEX(PAGE_INDEX_DEBUGMAIN))
        ADD_PAGE(CVersionInfoPage,              ROM_INDEX(PAGE_INDEX_VERSIONINFO))
        ADD_PAGE(CVialSignalPage,               ROM_INDEX(PAGE_INDEX_VIALSIGNAL))
        ADD_PAGE(CRIOMDebugPage,                ROM_INDEX(PAGE_INDEX_RIOMDEBUG))
        ADD_PAGE(CRefreshTimePage,              ROM_INDEX(PAGE_INDEX_REFRESHTIME))
   //     ADD_PAGE(CCommStatusDebugPage,          ROM_INDEX(PAGE_INDEX_COMMSTATUSDEBUG))
        ADD_PAGE(CPasswordModifyPage,           ROM_INDEX(PAGE_INDEX_PASSWORDMODIFY))
        ADD_PAGE(CTimeSettingPage,              ROM_INDEX(PAGE_INDEX_TIMESETTING))
   //     ADD_PAGE(CFaultInfoPage,                ROM_INDEX(PAGE_INDEX_FAULTINFO))
        ADD_PAGE(CWheelDiaRecordSelectPage,     ROM_INDEX(PAGE_INDEX_WHEELDIARECORDSELECT))
//        ADD_PAGE(CCommStatus2Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS2))
//        ADD_PAGE(CCommStatus3Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS3))
//        ADD_PAGE(CCommStatus4Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS4))
//        ADD_PAGE(CCommStatus5Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS5))
//        ADD_PAGE(CCommStatus6Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS6))
        ADD_PAGE(CIOTCTablePage,                ROM_INDEX(PAGE_INDEX_IOTCTABLE))
        ADD_PAGE(CIOMTablePage,                 ROM_INDEX(PAGE_INDEX_IOMTABLE))
        ADD_PAGE(CDOTablePage,                  ROM_INDEX(PAGE_INDEX_DOTABLE))
        ADD_PAGE(CUdpDataPage1,                 ROM_INDEX(PAGE_INDEX_UDPDATA1))
 //       ADD_PAGE(CAW0Setting,                   ROM_INDEX(PAGE_INDEX_AW0SETTING))
        ADD_PAGE(FASPage,                       ROM_INDEX(PAGE_INDEX_FASPage))
//        ADD_PAGE(CRefreshTimePage2,             ROM_INDEX(PAGE_INDEX_REFRESHTIME2))
        ADD_PAGE(CFaultPageHelp,                ROM_INDEX(PAGE_INDEX_FAULTPAGEHELP))
        ADD_PAGE(C_Page_Brake_Status,                ROM_INDEX(PAGE_BRAKESTATUS))
        ADD_PAGE(C_Debug_RIOM_M_DI_new,                ROM_INDEX(PAGE_INDEX_IOMTABLE_NEW))
        ADD_PAGE(C_Page_Door_Setting,                ROM_INDEX(PAGE_INDEX_DOORSETTING))
        ADD_PAGE(C_Debug_Initial_Setting,                ROM_INDEX(PAGE_INDEX_DEBUGSETTING))   
        ADD_PAGE(C_Page_Brake_Status2,              ROM_INDEX(PAGE_INDEX_BRAKESTATUS2))
        ADD_PAGE(C_Page_Brake_Status3,              ROM_INDEX(PAGE_INDEX_BRAKESTATUS3))
        ADD_PAGE(C_Page_TCU_Status2,                ROM_INDEX(PAGE_INDEX_TCUSTATUS2))
        ADD_PAGE(C_Page_TCU_Status3,                ROM_INDEX(PAGE_INDEX_TCUSTATUS3))
        ADD_PAGE(C_Page_TCU_Status4,                ROM_INDEX(PAGE_INDEX_TCUSTATUS4))
        ADD_PAGE(C_Page_SIV_Status2,                ROM_INDEX(PAGE_INDEX_SIVSTATUS2))
        ADD_PAGE(C_Page_SIV_Status3,                ROM_INDEX(PAGE_INDEX_SIVSTATUS3))
        ADD_PAGE(C_Page_Brake_Status_Help,          ROM_INDEX(PAGE_INDEX_BRAKESTATUSHELP))
        ADD_PAGE(C_Debug_ATCTest,          ROM_INDEX(PAGE_INDEX_ATCTEST))

END_PAGE_MANAGE()


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->retranslateUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if ((nScrW == SCREEN_W*SCREEN_factor) && (nScrH == SCREEN_H*SCREEN_factor))
    {
        this->showFullScreen();
    }
    else
    {
//        this->setFixedSize(1024, 768);
        this->setFixedSize(int(SCREEN_W*SCREEN_factor), int(SCREEN_H*SCREEN_factor));

        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2+9;
        this->move(x,y);
    }

    globalDataInit();
    //TC1_HMI=1;
    if(TC1_HMI_ini==1)
    {
        TC1_HMI=1;
        TC2_HMI=0;
        system("ifconfig eth0 192.168.2.3");

        //如果显示屏位置同时为1则弹出提示框
        if(TC2_HMI_ini==1)
        {
            QMessageBox::warning(NULL,
                                         "error",
                                         QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                          "\nsystem.ini is error ! TC1=1 && TC2=1"+QObject::trUtf8("  请联系TMS调试人员!"),
                                         QMessageBox::Ok,QMessageBox::Ok);
        }
    }
    else
    {
        if(TC2_HMI_ini==1)
        {
                TC2_HMI=1;
                TC1_HMI=0;
                system("ifconfig eth0 192.168.2.4");
        }
        else
        {
            QMessageBox::warning(NULL,
                                         "error",
                                         QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                          "\nsystem.ini is error ! TC1=0 && TC2=0"+QObject::trUtf8("  请联系TMS调试人员!"),
                                         QMessageBox::Ok,QMessageBox::Ok);
            #ifdef LOG_OPEN
                    qWarning()<<"system.ini is not OK! TC1=0 && TC2=0";
            #endif

        }
    }

#ifndef USE_RAND_DATA

    //HMI_Initial_Set();
    //SetWarningTemperature();
    //读报警，关闭显示屏，关闭电源 温度设定值
    //BackLightCtrl(1);
#endif


#ifdef USE_SERIAL_DATA

    m_serialThread  = new SerialThread;
    m_serialThread->render();
//    connect( m_serialThread, SIGNAL( SendReadData(  int, QByteArray, int ) ),
//             this,  SLOT( getRevDataSlot( int, QByteArray, int ) ) );
#endif

#ifdef USE_MVB_DATA

    m_mvbthread  = new MvbThread;
    m_mvbthread->render();
    //writeLog("USE_MVB_DATA\n");
#endif


    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ChangePage(PAGE_INDEX_COMMSTATUS);
    //ui->retranslateUi(this);
    //init rand seed
    #ifndef windows_demo
    srand((unsigned int)time(NULL));
    #endif  //windows_demo


    //update date
    connect(&dateTimer,SIGNAL(timeout()),this,SLOT(OnUpdateDate()));
    dateTimer.start(1000);
    //update data timer
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));
    UpdateDataTimer.start(200);
    //start 4s timer
    connect(&timer4s,SIGNAL(timeout()),this,SLOT(OnTimer4s()));
    timer4s.start(4000);

    #ifndef windows_demo
    connect(&timer30s,SIGNAL(timeout()),this,SLOT(OnTimer30s()));
    timer30s.start(5000);
    #endif  //windows_demo


    connect(&timer_settingtime,SIGNAL(timeout()),this,SLOT(OnTimer_settingtime()));
    connect(&timer_calibration,SIGNAL(timeout()),this,SLOT(OnTimer_calibration()));

#ifdef LOG_OPEN

//    connect(&m_logTimer,SIGNAL(timeout()),this,SLOT(OnLogTimer()));
//    m_logTimer.start(10000);
#endif

#ifdef LOG_OPEN
//    QString dateStr = GetDateStr();
//    dateStr.replace("-", "");
//    QString timeStr = GetTimeStr();
//    timeStr.replace(':', "");
//    g_logFileName = "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
#endif
}

Dialog::~Dialog()
{
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::OnUpdateData()
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
    //更新接收数据
    initReceiveData();

    //检测到显示屏时间校准标志位，延时5秒后显示屏同CCU校时
    if(timer_settingtime.isActive())
    {
          //  qDebug() <<"timer_settingtime.isActive()";

    }
    else
    {
        //if((bool)HM1CT_TimeSetFlag__B1||(bool)HM2CT_TimeSetFlag__B1)
        if(HM1CT_TimeSetFlag__B1||HM2CT_TimeSetFlag__B1)
        {
                timer_settingtime.start(5000);
           //     qDebug() <<"timer_settingtime.start(5000) is running";
        }

    }
    //if(CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    if(timer_calibration.isActive())
    {

    }
    else
    {
        if(CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
        {
        C2Hmorethan3sFunc();
        }
    }

//    if(HMCT_TimeCalibrationFlag_B1)
//    {
//        static quint32 times = 0;
//        times++;
//        if (times%times_n == 0)
//        {
//            time_calbration_timer--;

//            if (time_calbration_timer == 0)
//            {
//                HMCT_TimeCalibrationFlag_B1=false;
//            }
//        }
//    }

    //刷新试试故障信息
    FaultsScanning();
    //刷新页面内容
    pPage->ConnectEvent(WM_UPDATEPAGE);

    //网压 网流 速度 牵引制动级位 站点信息
    if (pPage->TestControlExists(IDLB_COM_voltage))
    {
        pPage->UpdateVoltage(IDLB_COM_voltage);
    }


    if (pPage->TestControlExists(IDLB_COM_level))//牵引制动级位
    {
        pPage->UpdateTractionLevel(IDLB_COM_level);
    }
    if (pPage->TestControlExists(IDLB_COM_speed))//列车速度
    {
        pPage->UpdateSpeed(IDLB_COM_speed);

    }

    if (pPage->TestControlExists(IDLB_COM_current))
    {

        pPage->UpdateCurrent(IDLB_COM_current);

    }
    if (pPage->TestControlExists(IDLB_COM_CurrentStation))
    {
        pPage->UpdateStation();

    }
    if (pPage->TestControlExists(IDLB_COM_TrainFault))
    {
        pPage->updateFault(IDLB_COM_TrainFault);
    }

    createSendData();
}

void Dialog::OnUpdateDate()
{


    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        if (pPage == NULL)
            return;
    if (pPage->TestControlExists(IDLB_COM_TIME))
    {
           {

                QDate date = QDate::currentDate();
                QString str;
                QString str1;
                str1 = QObject::trUtf8("蓄电池断");
                str = QString::number(date.year()) + QObject::trUtf8("-")+
                      QString::number(date.month()) + QObject::trUtf8("-")+
                      QString::number(date.day()) + QObject::trUtf8("");
                bool fault_Bit;
                if(( Pantogtaph1InPlace ==1)||( Pantogtaph2InPlace ==1))
                   {
                       if(RIOM1CT_DIM1DI24_B1)
                       {
                            fault_Bit = false;
                       }
                       else
                       {
                           if(RIOM6CT_DIM1DI24_B1)
                       {
                           fault_Bit = false;
                       }

                          else
                          {
                             fault_Bit = true;
                          }
                      }
                    }
                else
                   {
                       fault_Bit =  false;
                   }
                if(fault_Bit)
                {


                pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str1);
                pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlBKColor(Qt::red);


                }
                else
                {
                    pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);
                    pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlBKColor(Qt::black);

                }
                QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
                pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
#ifdef USE_MVB_DATA

    pixymvb_ForceSwitch();
#endif


    }


//    if((PIS1CT_NextStationID_U16 != temp_NextStation )&&(temp_NextStation!=0))
//    {
//        PIS1CT_CurrntSttnID_U16 = temp_NextStation;
//        temp_NextStation = PIS1CT_NextStationID_U16;
//    }
//    else
//    {
//         temp_NextStation = PIS1CT_NextStationID_U16;
//    }
    PIS1CT_CurrntSttnID_U16 = PIS1CT_StartStationID_U16;

    //send data 28 29 30
//    QTime time = QDateTime::currentDateTime().time();
//    QDate date = QDate::currentDate();
//    time_setting_1 = date.year();
//    time_setting_2 = date.month();
//    time_setting_3 = date.day();
//    time_setting_4 = time.hour();
//    time_setting_5 = time.minute();
//    time_setting_6 = time.second();
//    HMI_send_data30=(time_setting_1-2000)+time_setting_2*256;
//    HMI_send_data31=time_setting_3+time_setting_4*256;
//    HMI_send_data32=time_setting_5+time_setting_6*256;
}

void Dialog::paintEvent(QPaintEvent* /*e*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
//    if (pPage->TestControlExists(IDLB_COM_TIME))
//    {
//        QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
//    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();
}

void Dialog::keyPressEvent( QKeyEvent * event )
{
    if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_F)
    {
        CDebugDialog dbgDlg(this);
        if (dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_D)
    {
        if(serialDebugDlg.isHidden())
            serialDebugDlg.show();
    }
    else if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if((event->modifiers() & Qt::ControlModifier) && event->key() == Qt::Key_D)
    {
        //stop or continue scann fault.
        g_bScannFault = !g_bScannFault;
    }
}

void Dialog::mouseMoveEvent( QMouseEvent * /*event*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_MOUSEMOVE);
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ConnectEvent(event->pos(),WM_LBTNCLICK);
        pPage->ResetButtonState();
        update();
    }
}

void Dialog::reject()
{
    close();
}

void Dialog::closeEvent(QCloseEvent* /*e*/)
{
    system("killall CNR_Dalian_Metro_Line12");
}

void Dialog::globalDataInit()
{
    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;

    HistoryFaultsListInit();

    GetINIInfo();

}

void Dialog::initReceiveData()
{

    //用于模拟变量
    SerialDebug();

#ifdef USE_RAND_DATA

    for(int i=0;i<4000;i++)
    {
        g_dataBuffer_Display[i]=g_dataBuffer_MVB[i];
    }

    BitSet(g_dataBuffer_MVB[1872],7,1);  //ccu1 online


    BitSet(g_dataBuffer_MVB[1877],0,1);  //tcu4 online
    BitSet(g_dataBuffer_MVB[1877],1,1);
    BitSet(g_dataBuffer_MVB[1877],2,1);
    BitSet(g_dataBuffer_MVB[1877],3,1);

    BitSet(g_dataBuffer_MVB[1877],7,1);  //bcu1 online
    BitSet(g_dataBuffer_MVB[1877],6,1);
    BitSet(g_dataBuffer_MVB[1877],4,1);
    BitSet(g_dataBuffer_MVB[466],14,1);  //bcu1 is master

    BitSet(g_dataBuffer_MVB[1877],5,1);  //bcu3 online
    BitSet(g_dataBuffer_MVB[466+192],14,1);  //bcu3 is master

    BitSet(g_dataBuffer_MVB[1877],15,1);  //siv online
    BitSet(g_dataBuffer_MVB[1877],14,1);

//    BitSet(g_dataBuffer_MVB[1878],7,1);  //EDCU1 online
//    BitSet(g_dataBuffer_MVB[1878],6,1);  //EDCU2 online
    g_dataBuffer_MVB[1878]=65535;
    //g_dataBuffer_MVB[1879]=65535;

    BitSet(g_dataBuffer_MVB[1885],7,1);   //CTHM_RunForward_B1
    BitSet(g_dataBuffer_MVB[1885],4,1);   //CTHM_TC1CabActive_B1
    BitSet(g_dataBuffer_MVB[1885],1,1);  //CTHM_EmgcyBrakeState_B1


    //BitSet(g_dataBuffer_MVB[1885],4,1);
    g_dataBuffer_MVB[1490]=g_dataBuffer_MVB[1490]/256 +5; //TC1 制动制冷

    BitSet(g_dataBuffer_MVB[1492],7,1);   //TC1 集控
    BitSet(g_dataBuffer_MVB[1874],6,1);
    BitSet(g_dataBuffer_MVB[1874],5,1);

//        uchar tmpChar[8000];
//        for (int i=0; i<8000; i++)
//        {
//            tmpChar[i]=0;
//        }
//        for (int i=0; i<4000; i++)
//        {
//              g_dataBuffer_Display[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
//        }
#endif



#ifndef USE_RAND_DATA

    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
    {
        for(int i=0;i<4000;i++)
        {

             g_dataBuffer_Display[i]=g_dataBuffer_MVB[i];
        }




        //RIOM网关通信中断则重置通过网关上传的DI,DO,AX的生命信号标志
         /*
            if(CTHM_RIOM1_GW_IsOnline_B1)
            {

            }
            else
            {
                g_dataBuffer_MVB[1873]=g_dataBuffer_Display[1873]&0x00ff;
            }
            if(CTHM_RIOM2_GW_IsOnline_B1)
            {

            }
            else
            {
                g_dataBuffer_MVB[1873]=g_dataBuffer_Display[1874]&0xff00;
            }
            if(CTHM_RIOM3_GW_IsOnline_B1)
            {

            }
            else
            {
                g_dataBuffer_MVB[1873]=g_dataBuffer_Display[1874]&0x00ff;
            }
            if(CTHM_RIOM4_GW_IsOnline_B1)
            {

            }
            else
            {
                g_dataBuffer_MVB[1873]=g_dataBuffer_Display[1875]&0xff00;
            }
            if(CTHM_RIOM5_GW_IsOnline_B1)
            {

            }
            else
            {
                g_dataBuffer_MVB[1873]=g_dataBuffer_Display[1875]&0x00ff;
            }
            if(CTHM_RIOM6_GW_IsOnline_B1)
            {

            }
            else
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1876]&0xff00;
            }
          */

    }
    else  //MVB通信异常则信任以太网UDP数据包
    {

    }

    //CCU生命信号不变则清零所有生命信号标志位
    if (Bit(hmi_485_error,4))
    {
        for(int j=0;j<8;j++)
        {
            g_dataBuffer_Display[1872+j] = 0;
        }

    }
#endif

    //用于判断对端显示屏 发送的车号设置，轮径设置标志位 跳变延（取下降沿）
    if(TC1_HMI==1)
    {   //g_dataBuffer_UDP_2
             g_dataBuffer_UDP_2[9]=g_dataBuffer_Display[415]^g_dataBuffer_UDP[9];
                if(g_dataBuffer_UDP_2[9])//1872
                {
                    if(g_dataBuffer_UDP_2[9]& bit1)
                    {
                        if(g_dataBuffer_Display[415]& bit1)
                        {

                        }
                        else
                        {
                            // do write csv
                        }

                    }

                }

                g_dataBuffer_UDP[9]=g_dataBuffer_Display[415]  ;

    }
    else
    {
            g_dataBuffer_UDP_2[9]=g_dataBuffer_Display[351]^g_dataBuffer_UDP[9];
               if(g_dataBuffer_UDP_2[9])//1872
               {
                   if(g_dataBuffer_UDP_2[9]& bit1)
                   {
                       if(g_dataBuffer_Display[351]& bit1)
                       {

                       }
                       else
                       {
                           // do write csv
                       }

                   }

               }

               g_dataBuffer_UDP[9]=g_dataBuffer_Display[351]  ;

    }
    //用于判断CCU发送的生命信号 跳变延
    for(int j=0;j<8;j++)
    {
        g_dataBuffer_UDP_2[j]=g_dataBuffer_Display[1872+j]^g_dataBuffer_UDP[j];

    }

    if(g_dataBuffer_UDP_2[0])//1872
    {
        if(g_dataBuffer_UDP_2[0]& bit7)
        {
            if(g_dataBuffer_Display[1872]& bit7)
            {
                g_ccu1_comm_err_flg=false;
            }
            else
            {
                g_ccu1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[0]& bit6)
        {
            if(g_dataBuffer_Display[1872]& bit6)
            {
                g_ccu2_comm_err_flg=false;
            }
            else
            {
                g_ccu2_comm_err_flg=true;
            }

        }


    }

    if(g_dataBuffer_UDP_2[1])//1873
    {
        if(g_dataBuffer_UDP_2[1]& bit15)
        {
            if(g_dataBuffer_Display[1873]& bit15)
            {
                g_riom1_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom1_gw123_comm_err_flg=true;
            }

        }
    }

    if(g_dataBuffer_UDP_2[2])//1874
    {
        if(g_dataBuffer_UDP_2[2]& bit15)
        {
            if(g_dataBuffer_Display[1874]& bit15)
            {
                g_riom3_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom3_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[2]& bit6)
        {
            if(g_dataBuffer_Display[1874]& bit6)
            {
                g_riom2_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom2_gw123_comm_err_flg=true;
            }

        }
    }

    if(g_dataBuffer_UDP_2[3])//1875
    {
        if(g_dataBuffer_UDP_2[3]& bit15)
        {
            if(g_dataBuffer_Display[1875]& bit15)
            {
                g_riom5_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom5_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit12)
        {
            if(g_dataBuffer_Display[1875]& bit12)
            {
                g_riom6_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom6_gw123_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[3]& bit4)
        {
            if(g_dataBuffer_Display[1875]& bit4)
            {
                g_riom4_gw123_comm_err_flg=false;
            }
            else
            {
                g_riom4_gw123_comm_err_flg=true;
            }

        }
    }

    if(g_dataBuffer_UDP_2[4])//1876
    {
        if(g_dataBuffer_UDP_2[4]& bit15)
        {
            if(g_dataBuffer_Display[1876]& bit15)
            {
                g_erm1_comm_err_flg=false;
            }
            else
            {
                g_erm1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[4]& bit14)
        {
            if(g_dataBuffer_Display[1876]& bit14)
            {
               g_erm2_comm_err_flg=false;
            }
            else
            {
                g_erm2_comm_err_flg=true;
            }
        }
    }

    if(g_dataBuffer_UDP_2[5])//1877
    {
        if(g_dataBuffer_UDP_2[5]& bit15)
        {
            if(g_dataBuffer_Display[1877]& bit15)
            {
                g_acu1_comm_err_flg=false;
            }
            else
            {
                g_acu1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[5]& bit14)
        {
            if(g_dataBuffer_Display[1877]& bit14)
            {
                g_acu2_comm_err_flg=false;
            }
            else
            {
                 g_acu2_comm_err_flg=true;
            }
        }

               if(g_dataBuffer_UDP_2[5]& bit7)
               {
                   if(g_dataBuffer_Display[1877]& bit7)
                   {
                       g_bcu1_comm_err_flg=false;
                   }
                   else
                   {
                       g_bcu1_comm_err_flg=true;
                   }

               }
               if(g_dataBuffer_UDP_2[5]& bit6)
               {
                   if(g_dataBuffer_Display[1877]& bit6)
                   {
                      g_bcu2_comm_err_flg=false;
                   }
                   else
                   {
                       g_bcu2_comm_err_flg=true;
                   }
               }
               if(g_dataBuffer_UDP_2[5]& bit5)
                      {
                          if(g_dataBuffer_Display[1877]& bit5)
                          {
                              g_bcu3_comm_err_flg=false;
                          }
                          else
                          {
                              g_bcu3_comm_err_flg=true;
                          }

                      }
                      if(g_dataBuffer_UDP_2[5]& bit4)
                      {
                          if(g_dataBuffer_Display[1877]& bit4)
                          {
                             g_bcu4_comm_err_flg=false;
                          }
                          else
                          {
                              g_bcu4_comm_err_flg=true;
                          }
                      }
                      if(g_dataBuffer_UDP_2[5]& bit3)
                             {
                                 if(g_dataBuffer_Display[1877]& bit3)
                                 {
                                     g_tcu1_comm_err_flg=false;
                                 }
                                 else
                                 {
                                     g_tcu1_comm_err_flg=true;
                                 }

                             }
                             if(g_dataBuffer_UDP_2[5]& bit2)
                             {
                                 if(g_dataBuffer_Display[1877]& bit2)
                                 {
                                    g_tcu2_comm_err_flg=false;
                                 }
                                 else
                                 {
                                     g_tcu2_comm_err_flg=true;
                                 }
                             }
                             if(g_dataBuffer_UDP_2[5]& bit1)
                                    {
                                        if(g_dataBuffer_Display[1877]& bit1)
                                        {
                                            g_tcu3_comm_err_flg=false;
                                        }
                                        else
                                        {
                                            g_tcu3_comm_err_flg=true;
                                        }

                                    }
                                    if(g_dataBuffer_UDP_2[5]& bit0)
                                    {
                                        if(g_dataBuffer_Display[1877]& bit0)
                                        {
                                           g_tcu4_comm_err_flg=false;
                                        }
                                        else
                                        {
                                            g_tcu4_comm_err_flg=true;
                                        }
                                    }
    }

    if(g_dataBuffer_UDP_2[6])//1878
    {
        if(g_dataBuffer_UDP_2[6]& bit15)
        {
            if(g_dataBuffer_Display[1878]& bit15)
            {
                 g_door9_comm_err_flg=false;
            }
            else
            {
                 g_door9_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[6]& bit14)
        {
            if(g_dataBuffer_Display[1878]& bit14)
            {
                 g_door10_comm_err_flg=false;
            }
            else
            {
                 g_door10_comm_err_flg=true;
            }
        }
        if(g_dataBuffer_UDP_2[6]& bit13)
        {
            if(g_dataBuffer_Display[1878]& bit13)
            {
                 g_door11_comm_err_flg=false;
            }
            else
            {
                 g_door11_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[6]& bit12)
        {
            if(g_dataBuffer_Display[1878]& bit12)
            {
                 g_door12_comm_err_flg=false;
            }
            else
            {
                  g_door12_comm_err_flg=true;
            }
        }


               if(g_dataBuffer_UDP_2[6]& bit7)
               {
                   if(g_dataBuffer_Display[1878]& bit7)
                   {
                        g_door1_comm_err_flg=false;
                   }
                   else
                   {
                       g_door1_comm_err_flg=true;
                   }

               }
               if(g_dataBuffer_UDP_2[6]& bit6)
               {
                   if(g_dataBuffer_Display[1878]& bit6)
                   {
                       g_door2_comm_err_flg=false;
                   }
                   else
                   {
                        g_door2_comm_err_flg=true;
                   }
               }
               if(g_dataBuffer_UDP_2[6]& bit5)
                      {
                          if(g_dataBuffer_Display[1878]& bit5)
                          {
                               g_door3_comm_err_flg=false;
                          }
                          else
                          {
                               g_door3_comm_err_flg=true;
                          }

                      }
                      if(g_dataBuffer_UDP_2[6]& bit4)
                      {
                          if(g_dataBuffer_Display[1878]& bit4)
                          {
                              g_door4_comm_err_flg=false;
                          }
                          else
                          {
                               g_door4_comm_err_flg=true;
                          }
                      }
                      if(g_dataBuffer_UDP_2[6]& bit3)
                             {
                                 if(g_dataBuffer_Display[1878]& bit3)
                                 {
                                      g_door5_comm_err_flg=false;
                                 }
                                 else
                                 {
                                      g_door5_comm_err_flg=true;
                                 }

                             }
                             if(g_dataBuffer_UDP_2[6]& bit2)
                             {
                                 if(g_dataBuffer_Display[1878]& bit2)
                                 {
                                     g_door6_comm_err_flg=false;
                                 }
                                 else
                                 {
                                      g_door6_comm_err_flg=true;
                                 }
                             }
                             if(g_dataBuffer_UDP_2[6]& bit1)
                                    {
                                        if(g_dataBuffer_Display[1878]& bit1)
                                        {
                                             g_door7_comm_err_flg=false;
                                        }
                                        else
                                        {
                                             g_door7_comm_err_flg=true;
                                        }

                                    }
                                    if(g_dataBuffer_UDP_2[6]& bit0)
                                    {
                                        if(g_dataBuffer_Display[1878]& bit0)
                                        {
                                            g_door8_comm_err_flg=false;
                                        }
                                        else
                                        {
                                             g_door8_comm_err_flg=true;
                                        }
                                    }
    }

    if(g_dataBuffer_UDP_2[7])//1879
    {
        if(g_dataBuffer_UDP_2[7]& bit15)
        {
            if(g_dataBuffer_Display[1879]& bit15)
            {
                 g_atc1_comm_err_flg=false;
            }
            else
            {
                 g_atc1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[7]& bit14)
        {
            if(g_dataBuffer_Display[1879]& bit14)
            {
                 g_atc2_comm_err_flg=false;
            }
            else
            {
                 g_atc2_comm_err_flg=true;
            }
        }
        if(g_dataBuffer_UDP_2[7]& bit13)
        {
            if(g_dataBuffer_Display[1879]& bit13)
            {
                 g_pis1_comm_err_flg=false;
            }
            else
            {
                 g_pis1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[7]& bit12)
        {
            if(g_dataBuffer_Display[1879]& bit12)
            {
                 g_pis2_comm_err_flg=false;
            }
            else
            {
                  g_pis2_comm_err_flg=true;
            }
        }
        if(g_dataBuffer_UDP_2[7]& bit11)
        {
            if(g_dataBuffer_Display[1879]& bit11)
            {
                 g_fas1_comm_err_flg=false;
            }
            else
            {
                 g_fas1_comm_err_flg=true;
            }

        }
        if(g_dataBuffer_UDP_2[7]& bit10)
        {
            if(g_dataBuffer_Display[1879]& bit10)
            {
                 g_fas2_comm_err_flg=false;
            }
            else
            {
                 g_fas2_comm_err_flg=true;
            }
        }


               if(g_dataBuffer_UDP_2[7]& bit7)
               {
                   if(g_dataBuffer_Display[1879]& bit7)
                   {
                        g_hvac1_comm_err_flg=false;
                   }
                   else
                   {
                       g_hvac1_comm_err_flg=true;
                   }

               }
               if(g_dataBuffer_UDP_2[7]& bit6)
               {
                   if(g_dataBuffer_Display[1879]& bit6)
                   {
                       g_hvac2_comm_err_flg=false;
                   }
                   else
                   {
                        g_hvac2_comm_err_flg=true;
                   }
               }
               if(g_dataBuffer_UDP_2[7]& bit5)
                      {
                          if(g_dataBuffer_Display[1879]& bit5)
                          {
                               g_hvac3_comm_err_flg=false;
                          }
                          else
                          {
                               g_hvac3_comm_err_flg=true;
                          }

                      }
                      if(g_dataBuffer_UDP_2[7]& bit4)
                      {
                          if(g_dataBuffer_Display[1879]& bit4)
                          {
                              g_hvac4_comm_err_flg=false;
                          }
                          else
                          {
                               g_hvac4_comm_err_flg=true;
                          }
                      }
                      if(g_dataBuffer_UDP_2[7]& bit3)
                             {
                                 if(g_dataBuffer_Display[1879]& bit3)
                                 {
                                      g_hvac5_comm_err_flg=false;
                                 }
                                 else
                                 {
                                      g_hvac5_comm_err_flg=true;
                                 }

                             }
                             if(g_dataBuffer_UDP_2[7]& bit2)
                             {
                                 if(g_dataBuffer_Display[1879]& bit2)
                                 {
                                     g_hvac6_comm_err_flg=false;
                                 }
                                 else
                                 {
                                      g_hvac6_comm_err_flg=true;
                                 }
                             }

    }

    for(int j=0;j<8;j++)
    {
        g_dataBuffer_UDP[j]=g_dataBuffer_Display[1872+j]  ;
    }
    //运行数据选择:ERM1在线
    if(CTHM_ERM1_Online_B1 && CTHM_ERM2_Online_B1)
    {
        if(CTHM_ERM1_Online_B1)
        {
            for(int j=0;j<48;j++)
            {
                  g_dataBuffer_Display[224+j]=g_dataBuffer_MVB[224+j];
            }
        }
    }
    else{
        if(CTHM_ERM1_Online_B1)
        {
            for(int j=0;j<48;j++)
            {
                  g_dataBuffer_Display[224+j]=g_dataBuffer_MVB[224+j];
            }
        }

        if(CTHM_ERM2_Online_B1)
        {
            for(int j=0;j<48;j++)
            {
                  g_dataBuffer_Display[224+j]=g_dataBuffer_MVB[288+j];
            }
        }


    }

    //PIS 数据选择
        if(CTHM_PIS1_Online_B1 && CTHM_PIS2_Online_B1)
        {
                for(int j=0;j<32;j++)
                {
                      g_dataBuffer_Display[1648+j]=g_dataBuffer_MVB[1648+j];
                }
        }
        else{
            if(CTHM_PIS1_Online_B1)
            {
                for(int j=0;j<32;j++)
                {
                      g_dataBuffer_Display[1648+j]=g_dataBuffer_MVB[1648+j];
                }
            }

            if(CTHM_PIS2_Online_B1)
            {
                for(int j=0;j<32;j++)
                {
                      g_dataBuffer_Display[1648+j]=g_dataBuffer_MVB[1648+32+j];
                }
            }


        }


    //烟火报警数据选择 FAU1，FAU2同时在线信任 FAU1，FAU1掉线则信任FAU2，同时不在线则清零
    if(CTHM_FAU1_Online_B1||CTHM_FAU2_Online_B1)
    {
        if(CTHM_FAU1_Online_B1)
        {
            for(int j=0;j<16;j++)
            {
                  g_dataBuffer_Display[1712+j]=g_dataBuffer_MVB[1712+j];
            }
        }
        else
        {
            for(int j=0;j<16;j++)
            {
                  g_dataBuffer_Display[1712+j]=g_dataBuffer_MVB[1728+j];
            }

        }

    }
    else
    {
        for(int j=0;j<16;j++)
        {
              g_dataBuffer_Display[1712+j]=0;
        }
    }


    //门网关通信中断则清零相应端口所有数据
    if(CTHM_EDCU1_Online_B1)
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1104+j]=0;
        }

    }


    if(CTHM_EDCU2_Online_B1 )
    {
    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1136+j]=0;
        }
    }

    if(CTHM_EDCU3_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1168+j]=0;
        }
    }

    if(CTHM_EDCU4_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1200+j]=0;
        }
    }

    if(CTHM_EDCU5_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1232+j]=0;
        }
    }

    if(CTHM_EDCU6_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1264+j]=0;
        }
    }

    if(CTHM_EDCU7_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1296+j]=0;
        }
    }

    if(CTHM_EDCU8_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1328+j]=0;
        }
    }

    if(CTHM_EDCU9_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1360+j]=0;
        }
    }

    if(CTHM_EDCU10_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1392+j]=0;
        }
    }

    if(CTHM_EDCU11_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1424+j]=0;
        }
    }

    if(CTHM_EDCU12_Online_B1 )
    {

    }
    else
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_MVB[1456+j]=0;
        }
    }




   //BCU1 is Master
    if(Bit(g_dataBuffer_MVB[466],14)==1)
    {

        for(int j=0;j<96;j++)
        {
              g_dataBuffer_Display[464+j]=g_dataBuffer_MVB[464+j];
        }
    }
    //BCU2 is Master
    if(Bit(g_dataBuffer_MVB[466+96],14)==1)
    {

        for(int j=0;j<96;j++)
        {
              g_dataBuffer_Display[464+j]=g_dataBuffer_MVB[464+96+j];
        }
    }

    //BCU3 is Master
    if(Bit(g_dataBuffer_MVB[466+192],14)==1)
    {

        for(int j=0;j<96;j++)
        {
              g_dataBuffer_Display[464+192+j]=g_dataBuffer_MVB[464+192+j];
        }
    }
    //BCU4 is Master
    if(Bit(g_dataBuffer_MVB[466+288],14)==1)
    {

        for(int j=0;j<96;j++)
        {
              g_dataBuffer_Display[464+192+j]=g_dataBuffer_MVB[464+288+j];
        }
    }


    // 1 车厢
    if((g_dataBuffer_MVB[1118]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1104+j]=g_dataBuffer_MVB[1104+j];

        }

            //门故障共9种，任意一个发生则视为有故障
            if(
               (Bit(g_dataBuffer_MVB[1120+1],0))
             ||(Bit(g_dataBuffer_MVB[1120+1],1))
             ||(Bit(g_dataBuffer_MVB[1120+1],2))
             ||(Bit(g_dataBuffer_MVB[1120+1],3))
             ||(Bit(g_dataBuffer_MVB[1120+1],4))
             ||(Bit(g_dataBuffer_MVB[1120+1],5))
             ||(Bit(g_dataBuffer_MVB[1120+1],6))
             ||(Bit(g_dataBuffer_MVB[1120+1],7))
             ||(Bit(g_dataBuffer_MVB[1120+1],15))
                )
            {
                che1_door1_Fault = 1;
            }
            else
            {
                che1_door1_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+2],0))
             ||(Bit(g_dataBuffer_MVB[1120+2],1))
             ||(Bit(g_dataBuffer_MVB[1120+2],2))
             ||(Bit(g_dataBuffer_MVB[1120+2],3))
             ||(Bit(g_dataBuffer_MVB[1120+2],4))
             ||(Bit(g_dataBuffer_MVB[1120+2],5))
             ||(Bit(g_dataBuffer_MVB[1120+2],6))
             ||(Bit(g_dataBuffer_MVB[1120+2],7))
             ||(Bit(g_dataBuffer_MVB[1120+2],15))
                )
            {
                che1_door2_Fault = 1;
            }
            else
            {
                che1_door2_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+3],0))
             ||(Bit(g_dataBuffer_MVB[1120+3],1))
             ||(Bit(g_dataBuffer_MVB[1120+3],2))
             ||(Bit(g_dataBuffer_MVB[1120+3],3))
             ||(Bit(g_dataBuffer_MVB[1120+3],4))
             ||(Bit(g_dataBuffer_MVB[1120+3],5))
             ||(Bit(g_dataBuffer_MVB[1120+3],6))
             ||(Bit(g_dataBuffer_MVB[1120+3],7))
             ||(Bit(g_dataBuffer_MVB[1120+3],15))
                )
            {
                che1_door3_Fault = 1;
            }
            else
            {
                che1_door3_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+4],0))
             ||(Bit(g_dataBuffer_MVB[1120+4],1))
             ||(Bit(g_dataBuffer_MVB[1120+4],2))
             ||(Bit(g_dataBuffer_MVB[1120+4],3))
             ||(Bit(g_dataBuffer_MVB[1120+4],4))
             ||(Bit(g_dataBuffer_MVB[1120+4],5))
             ||(Bit(g_dataBuffer_MVB[1120+4],6))
             ||(Bit(g_dataBuffer_MVB[1120+4],7))
             ||(Bit(g_dataBuffer_MVB[1120+4],15))
                )
            {
                che1_door4_Fault = 1;
            }
            else
            {
                che1_door4_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+5],0))
             ||(Bit(g_dataBuffer_MVB[1120+5],1))
             ||(Bit(g_dataBuffer_MVB[1120+5],2))
             ||(Bit(g_dataBuffer_MVB[1120+5],3))
             ||(Bit(g_dataBuffer_MVB[1120+5],4))
             ||(Bit(g_dataBuffer_MVB[1120+5],5))
             ||(Bit(g_dataBuffer_MVB[1120+5],6))
             ||(Bit(g_dataBuffer_MVB[1120+5],7))
             ||(Bit(g_dataBuffer_MVB[1120+5],15))
                )
            {
                che1_door5_Fault = 1;
            }
            else
            {
                che1_door5_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+6],0))
             ||(Bit(g_dataBuffer_MVB[1120+6],1))
             ||(Bit(g_dataBuffer_MVB[1120+6],2))
             ||(Bit(g_dataBuffer_MVB[1120+6],3))
             ||(Bit(g_dataBuffer_MVB[1120+6],4))
             ||(Bit(g_dataBuffer_MVB[1120+6],5))
             ||(Bit(g_dataBuffer_MVB[1120+6],6))
             ||(Bit(g_dataBuffer_MVB[1120+6],7))
             ||(Bit(g_dataBuffer_MVB[1120+6],15))
                )
            {
                che1_door6_Fault = 1;
            }
            else
            {
                che1_door6_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+7],0))
             ||(Bit(g_dataBuffer_MVB[1120+7],1))
             ||(Bit(g_dataBuffer_MVB[1120+7],2))
             ||(Bit(g_dataBuffer_MVB[1120+7],3))
             ||(Bit(g_dataBuffer_MVB[1120+7],4))
             ||(Bit(g_dataBuffer_MVB[1120+7],5))
             ||(Bit(g_dataBuffer_MVB[1120+7],6))
             ||(Bit(g_dataBuffer_MVB[1120+7],7))
             ||(Bit(g_dataBuffer_MVB[1120+7],15))
                )
            {
                che1_door7_Fault = 1;
            }
            else
            {
                che1_door7_Fault = 0;
            }
            if(
               (Bit(g_dataBuffer_MVB[1120+8],0))
             ||(Bit(g_dataBuffer_MVB[1120+8],1))
             ||(Bit(g_dataBuffer_MVB[1120+8],2))
             ||(Bit(g_dataBuffer_MVB[1120+8],3))
             ||(Bit(g_dataBuffer_MVB[1120+8],4))
             ||(Bit(g_dataBuffer_MVB[1120+8],5))
             ||(Bit(g_dataBuffer_MVB[1120+8],6))
             ||(Bit(g_dataBuffer_MVB[1120+8],7))
             ||(Bit(g_dataBuffer_MVB[1120+8],15))
                )
            {
                che1_door8_Fault = 1;
            }
            else
            {
                che1_door8_Fault = 0;
            }





            //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
           if ( (Bit(g_dataBuffer_MVB[1120],7) )  )
           {
               che1_door1 = 1;
           }
           else
           {
               che1_door1 = 0;
           }
           if ( (Bit(g_dataBuffer_MVB[1120],6) ) )
           {
               che1_door2 = 1;
           }
           else
           {
               che1_door2 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],5) )  )
           {
               che1_door3 = 1;
           }
           else
           {
               che1_door3 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],4) )  )
           {
               che1_door4 = 1;
           }
           else
           {
               che1_door4 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],3) )  )
           {
               che1_door5 = 1;
           }
           else
           {
               che1_door5 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],2) )  )
           {
               che1_door6 = 1;
           }
           else
           {
               che1_door6 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],1) )  )
           {
               che1_door7 = 1;
           }
           else
           {
               che1_door7 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],0) )  )
           {
               che1_door8 = 1;
           }
           else
           {
               che1_door8 = 0;
           }

        }

    else
    {
        if((g_dataBuffer_MVB[1118+32]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1104+j]=g_dataBuffer_MVB[1136+j];

                   //门故障共9种，任意一个发生则视为有故障

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+1],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+1],15))
                    )
                {
                    che1_door1_Fault = 1;
                }
                else
                {
                    che1_door1_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+2],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+2],15))
                    )
                {
                    che1_door2_Fault = 1;
                }
                else
                {
                    che1_door2_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+3],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+3],15))
                    )
                {
                    che1_door3_Fault = 1;
                }
                else
                {
                    che1_door3_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+4],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+4],15))
                    )
                {
                    che1_door4_Fault = 1;
                }
                else
                {
                    che1_door4_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+5],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+5],15))
                    )
                {
                    che1_door5_Fault = 1;
                }
                else
                {
                    che1_door5_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+6],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+6],15))
                    )
                {
                    che1_door6_Fault = 1;
                }
                else
                {
                    che1_door6_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+7],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+7],15))
                    )
                {
                    che1_door7_Fault = 1;
                }
                else
                {
                    che1_door7_Fault = 0;
                }
                if(
                   (Bit(g_dataBuffer_MVB[1120+32+8],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+8],15))
                    )
                {
                    che1_door8_Fault = 1;
                }
                else
                {
                    che1_door8_Fault = 0;
                }



                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if (  (Bit(g_dataBuffer_MVB[1152],7) ) )
               {
                   che1_door1 = 1;
               }
               else
               {
                   che1_door1 = 0;
               }
               if (  (Bit(g_dataBuffer_MVB[1152],6) ) )
               {
                   che1_door2 = 1;
               }
               else
               {
                   che1_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152],5) ) )
               {
                   che1_door3 = 1;
               }
               else
               {
                   che1_door3 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1152],4) ) )
               {
                   che1_door4 = 1;
               }
               else
               {
                   che1_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152],3) ) )
               {
                   che1_door5 = 1;
               }
               else
               {
                   che1_door5 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1152],2) ) )
               {
                   che1_door6 = 1;
               }
               else
               {
                   che1_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152],1) ) )
               {
                   che1_door7 = 1;
               }
               else
               {
                   che1_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152],0) ) )
               {
                   che1_door8 = 1;
               }
               else
               {
                   che1_door8 = 0;
               }
            }
        }
        else
        {
            if(((g_dataBuffer_MVB[1118]%256)>1)||((g_dataBuffer_MVB[1118+32]%256)>1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {
                if((g_dataBuffer_MVB[1118]%256)>1)
                {
                    if(Bit(g_dataBuffer_MVB[1120],7)==1)
                    {
                        g_dataBuffer_Display[1105]=g_dataBuffer_MVB[1105];
                        g_dataBuffer_Display[1121]=g_dataBuffer_MVB[1121];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],6)==1)
                    {
                        g_dataBuffer_Display[1106]=g_dataBuffer_MVB[1106];
                        g_dataBuffer_Display[1122]=g_dataBuffer_MVB[1122];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],5)==1)
                    {
                        g_dataBuffer_Display[1107]=g_dataBuffer_MVB[1107];
                        g_dataBuffer_Display[1123]=g_dataBuffer_MVB[1123];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],4)==1)
                    {
                        g_dataBuffer_Display[1108]=g_dataBuffer_MVB[1108];
                        g_dataBuffer_Display[1124]=g_dataBuffer_MVB[1124];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],3)==1)
                    {
                        g_dataBuffer_Display[1109]=g_dataBuffer_MVB[1109];
                        g_dataBuffer_Display[1125]=g_dataBuffer_MVB[1125];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],2)==1)
                    {
                        g_dataBuffer_Display[1110]=g_dataBuffer_MVB[1110];
                        g_dataBuffer_Display[1126]=g_dataBuffer_MVB[1126];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],1)==1)
                    {
                        g_dataBuffer_Display[1111]=g_dataBuffer_MVB[1111];
                        g_dataBuffer_Display[1127]=g_dataBuffer_MVB[1127];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],0)==1)
                    {
                        g_dataBuffer_Display[1112]=g_dataBuffer_MVB[1112];
                        g_dataBuffer_Display[1128]=g_dataBuffer_MVB[1128];
                    }

                }
                if((g_dataBuffer_MVB[1118+32]%256)>1)
                {

                    if(Bit(g_dataBuffer_MVB[1152],7)==1)
                    {
                        g_dataBuffer_Display[1105]=g_dataBuffer_MVB[1105+32];
                        g_dataBuffer_Display[1121]=g_dataBuffer_MVB[1121+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],6)==1)
                    {
                        g_dataBuffer_Display[1106]=g_dataBuffer_MVB[1106+32];
                        g_dataBuffer_Display[1122]=g_dataBuffer_MVB[1122+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],5)==1)
                    {
                        g_dataBuffer_Display[1107]=g_dataBuffer_MVB[1107+32];
                        g_dataBuffer_Display[1123]=g_dataBuffer_MVB[1123+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],4)==1)
                    {
                        g_dataBuffer_Display[1108]=g_dataBuffer_MVB[1108+32];
                        g_dataBuffer_Display[1124]=g_dataBuffer_MVB[1124+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],3)==1)
                    {
                        g_dataBuffer_Display[1109]=g_dataBuffer_MVB[1109+32];
                        g_dataBuffer_Display[1125]=g_dataBuffer_MVB[1125+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],2)==1)
                    {
                        g_dataBuffer_Display[1110]=g_dataBuffer_MVB[1110+32];
                        g_dataBuffer_Display[1126]=g_dataBuffer_MVB[1126+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],1)==1)
                    {
                        g_dataBuffer_Display[1111]=g_dataBuffer_MVB[1111+32];
                        g_dataBuffer_Display[1127]=g_dataBuffer_MVB[1127+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],0)==1)
                    {
                        g_dataBuffer_Display[1112]=g_dataBuffer_MVB[1112+32];
                        g_dataBuffer_Display[1128]=g_dataBuffer_MVB[1128+32];
                    }

                }

                //门故障共9种，任意一个发生则视为有故障,取Display的数据

                if(
                   (Bit(g_dataBuffer_Display[1120+1],0))
                 ||(Bit(g_dataBuffer_Display[1120+1],1))
                 ||(Bit(g_dataBuffer_Display[1120+1],2))
                 ||(Bit(g_dataBuffer_Display[1120+1],3))
                 ||(Bit(g_dataBuffer_Display[1120+1],4))
                 ||(Bit(g_dataBuffer_Display[1120+1],5))
                 ||(Bit(g_dataBuffer_Display[1120+1],6))
                 ||(Bit(g_dataBuffer_Display[1120+1],7))
                 ||(Bit(g_dataBuffer_Display[1120+1],15))
                    )
                {
                    che1_door1_Fault = 1;
                }
                else
                {
                    che1_door1_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+2],0))
                 ||(Bit(g_dataBuffer_Display[1120+2],1))
                 ||(Bit(g_dataBuffer_Display[1120+2],2))
                 ||(Bit(g_dataBuffer_Display[1120+2],3))
                 ||(Bit(g_dataBuffer_Display[1120+2],4))
                 ||(Bit(g_dataBuffer_Display[1120+2],5))
                 ||(Bit(g_dataBuffer_Display[1120+2],6))
                 ||(Bit(g_dataBuffer_Display[1120+2],7))
                 ||(Bit(g_dataBuffer_Display[1120+2],15))
                    )
                {
                    che1_door2_Fault = 1;
                }
                else
                {
                    che1_door2_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+3],0))
                 ||(Bit(g_dataBuffer_Display[1120+3],1))
                 ||(Bit(g_dataBuffer_Display[1120+3],2))
                 ||(Bit(g_dataBuffer_Display[1120+3],3))
                 ||(Bit(g_dataBuffer_Display[1120+3],4))
                 ||(Bit(g_dataBuffer_Display[1120+3],5))
                 ||(Bit(g_dataBuffer_Display[1120+3],6))
                 ||(Bit(g_dataBuffer_Display[1120+3],7))
                 ||(Bit(g_dataBuffer_Display[1120+3],15))
                    )
                {
                    che1_door3_Fault = 1;
                }
                else
                {
                    che1_door3_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+4],0))
                 ||(Bit(g_dataBuffer_Display[1120+4],1))
                 ||(Bit(g_dataBuffer_Display[1120+4],2))
                 ||(Bit(g_dataBuffer_Display[1120+4],3))
                 ||(Bit(g_dataBuffer_Display[1120+4],4))
                 ||(Bit(g_dataBuffer_Display[1120+4],5))
                 ||(Bit(g_dataBuffer_Display[1120+4],6))
                 ||(Bit(g_dataBuffer_Display[1120+4],7))
                 ||(Bit(g_dataBuffer_Display[1120+4],15))
                    )
                {
                    che1_door4_Fault = 1;
                }
                else
                {
                    che1_door4_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+5],0))
                 ||(Bit(g_dataBuffer_Display[1120+5],1))
                 ||(Bit(g_dataBuffer_Display[1120+5],2))
                 ||(Bit(g_dataBuffer_Display[1120+5],3))
                 ||(Bit(g_dataBuffer_Display[1120+5],4))
                 ||(Bit(g_dataBuffer_Display[1120+5],5))
                 ||(Bit(g_dataBuffer_Display[1120+5],6))
                 ||(Bit(g_dataBuffer_Display[1120+5],7))
                 ||(Bit(g_dataBuffer_Display[1120+5],15))
                    )
                {
                    che1_door5_Fault = 1;
                }
                else
                {
                    che1_door5_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+6],0))
                 ||(Bit(g_dataBuffer_Display[1120+6],1))
                 ||(Bit(g_dataBuffer_Display[1120+6],2))
                 ||(Bit(g_dataBuffer_Display[1120+6],3))
                 ||(Bit(g_dataBuffer_Display[1120+6],4))
                 ||(Bit(g_dataBuffer_Display[1120+6],5))
                 ||(Bit(g_dataBuffer_Display[1120+6],6))
                 ||(Bit(g_dataBuffer_Display[1120+6],7))
                 ||(Bit(g_dataBuffer_Display[1120+6],15))
                    )
                {
                    che1_door6_Fault = 1;
                }
                else
                {
                    che1_door6_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+7],0))
                 ||(Bit(g_dataBuffer_Display[1120+7],1))
                 ||(Bit(g_dataBuffer_Display[1120+7],2))
                 ||(Bit(g_dataBuffer_Display[1120+7],3))
                 ||(Bit(g_dataBuffer_Display[1120+7],4))
                 ||(Bit(g_dataBuffer_Display[1120+7],5))
                 ||(Bit(g_dataBuffer_Display[1120+7],6))
                 ||(Bit(g_dataBuffer_Display[1120+7],7))
                 ||(Bit(g_dataBuffer_Display[1120+7],15))
                    )
                {
                    che1_door7_Fault = 1;
                }
                else
                {
                    che1_door7_Fault = 0;
                }
                if(
                   (Bit(g_dataBuffer_Display[1120+8],0))
                 ||(Bit(g_dataBuffer_Display[1120+8],1))
                 ||(Bit(g_dataBuffer_Display[1120+8],2))
                 ||(Bit(g_dataBuffer_Display[1120+8],3))
                 ||(Bit(g_dataBuffer_Display[1120+8],4))
                 ||(Bit(g_dataBuffer_Display[1120+8],5))
                 ||(Bit(g_dataBuffer_Display[1120+8],6))
                 ||(Bit(g_dataBuffer_Display[1120+8],7))
                 ||(Bit(g_dataBuffer_Display[1120+8],15))
                    )
                {
                    che1_door8_Fault = 1;
                }
                else
                {
                    che1_door8_Fault = 0;
                }

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if ( (Bit(g_dataBuffer_MVB[1120],7) ) || (Bit(g_dataBuffer_MVB[1152],7) ) )
               {
                   che1_door1 = 1;
               }
               else
               {
                   che1_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_MVB[1120],6) ) || (Bit(g_dataBuffer_MVB[1152],6) ) )
               {
                   che1_door2 = 1;
               }
               else
               {
                   che1_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120],5) ) || (Bit(g_dataBuffer_MVB[1152],5) ) )
               {
                   che1_door3 = 1;
               }
               else
               {
                   che1_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120],4) ) || (Bit(g_dataBuffer_MVB[1152],4) ) )
               {
                   che1_door4 = 1;
               }
               else
               {
                   che1_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120],3) ) || (Bit(g_dataBuffer_MVB[1152],3) ) )
               {
                   che1_door5 = 1;
               }
               else
               {
                   che1_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120],2) ) || (Bit(g_dataBuffer_MVB[1152],2) ) )
               {
                   che1_door6 = 1;
               }
               else
               {
                   che1_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120],1) ) || (Bit(g_dataBuffer_MVB[1152],1) ) )
               {
                   che1_door7 = 1;
               }
               else
               {
                   che1_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120],0) ) || (Bit(g_dataBuffer_MVB[1152],0) ) )
               {
                   che1_door8 = 1;
               }
               else
               {
                   che1_door8 = 0;
               }
            }
            else
            {
                che1_door1 = 0;
                che1_door2 = 0;
                che1_door3 = 0;
                che1_door4 = 0;
                che1_door5 = 0;
                che1_door6 = 0;
                che1_door7 = 0;
                che1_door8 = 0;

            //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
            }

        }
    }
    // 2 车厢
    if((g_dataBuffer_MVB[1118+64]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1104+j+64]=g_dataBuffer_MVB[1104+j+64];
        }

        //门故障共9种，任意一个发生则视为有故障
        if(
           (Bit(g_dataBuffer_MVB[1120+64+1],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+1],15))
            )
        {
            che2_door1_Fault = 1;
        }
        else
        {
            che2_door1_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+64+2],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+2],15))
            )
        {
            che2_door2_Fault = 1;
        }
        else
        {
            che2_door2_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+64+3],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+3],15))
            )
        {
            che2_door3_Fault = 1;
        }
        else
        {
            che2_door3_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+64+4],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+4],15))
            )
        {
            che2_door4_Fault = 1;
        }
        else
        {
            che2_door4_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+64+5],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+5],15))
            )
        {
            che2_door5_Fault = 1;
        }
        else
        {
            che2_door5_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+64+6],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+6],15))
            )
        {
            che2_door6_Fault = 1;
        }
        else
        {
            che2_door6_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+64+7],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+7],15))
            )
        {
            che2_door7_Fault = 1;
        }
        else
        {
            che2_door7_Fault = 0;
        }
        if(
           (Bit(g_dataBuffer_MVB[1120+64+8],0))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],1))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],2))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],3))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],4))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],5))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],6))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],7))
         ||(Bit(g_dataBuffer_MVB[1120+64+8],15))
            )
        {
            che2_door8_Fault = 1;
        }
        else
        {
            che2_door8_Fault = 0;
        }


        //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

       if ( (Bit(g_dataBuffer_MVB[1120+64],7) )  )
       {
           che2_door1 = 1;
       }
       else
       {
           che2_door1 = 0;
       }
       if ( (Bit(g_dataBuffer_MVB[1120+64],6) )  )
       {
           che2_door2 = 1;
       }
       else
       {
           che2_door2 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+64],5) )  )
       {
           che2_door3 = 1;
       }
       else
       {
           che2_door3 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+64],4) )  )
       {
           che2_door4 = 1;
       }
       else
       {
           che2_door4 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+64],3) ) )
       {
           che2_door5 = 1;
       }
       else
       {
           che2_door5 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+64],2) ) )
       {
           che2_door6 = 1;
       }
       else
       {
           che2_door6 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+64],1) )  )
       {
           che2_door7 = 1;
       }
       else
       {
           che2_door7 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+64],0) )  )
       {
           che2_door8 = 1;
       }
       else
       {
           che2_door8 = 0;
       }
    }
    else
    {
        if((g_dataBuffer_MVB[1118+64+32]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1104+j+64]=g_dataBuffer_MVB[1136+j+64];
            }


            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+1],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+1],15))
                )
            {
                che2_door1_Fault = 1;
            }
            else
            {
                che2_door1_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+2],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+2],15))
                )
            {
                che2_door2_Fault = 1;
            }
            else
            {
                che2_door2_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+3],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+3],15))
                )
            {
                che2_door3_Fault = 1;
            }
            else
            {
                che2_door3_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+4],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+4],15))
                )
            {
                che2_door4_Fault = 1;
            }
            else
            {
                che2_door4_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+5],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+5],15))
                )
            {
                che2_door5_Fault = 1;
            }
            else
            {
                che2_door5_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+6],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+6],15))
                )
            {
                che2_door6_Fault = 1;
            }
            else
            {
                che2_door6_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+7],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+7],15))
                )
            {
                che2_door7_Fault = 1;
            }
            else
            {
                che2_door7_Fault = 0;
            }
            if(
               (Bit(g_dataBuffer_MVB[1120+32+64+8],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+64+8],15))
                )
            {
                che2_door8_Fault = 1;
            }
            else
            {
                che2_door8_Fault = 0;
            }

            //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

           if (  (Bit(g_dataBuffer_MVB[1152+64],7) ) )
           {
               che2_door1 = 1;
           }
           else
           {
               che2_door1 = 0;
           }
           if (  (Bit(g_dataBuffer_MVB[1152+64],6) ) )
           {
               che2_door2 = 1;
           }
           else
           {
               che2_door2 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1152+64],5) ) )
           {
               che2_door3 = 1;
           }
           else
           {
               che2_door3 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1152+64],4) ) )
           {
               che2_door4 = 1;
           }
           else
           {
               che2_door4 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1152+64],3) ) )
           {
               che2_door5 = 1;
           }
           else
           {
               che2_door5 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1152+64],2) ) )
           {
               che2_door6 = 1;
           }
           else
           {
               che2_door6 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1152+64],1) ) )
           {
               che2_door7 = 1;
           }
           else
           {
               che2_door7 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1152+64],0) ) )
           {
               che2_door8 = 1;
           }
           else
           {
               che2_door8 = 0;
           }
        }
        else
        {
            if(((g_dataBuffer_MVB[1118+64]%256)>1)||((g_dataBuffer_MVB[1118+64+32]%256)>1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {
                if((g_dataBuffer_MVB[1118+64]%256)>1)
                {
                    if(Bit(g_dataBuffer_MVB[1120+64],7)==1)
                    {
                        g_dataBuffer_Display[1105+64]=g_dataBuffer_MVB[1105+64];
                        g_dataBuffer_Display[1121+64]=g_dataBuffer_MVB[1121+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],6)==1)
                    {
                        g_dataBuffer_Display[1106+64]=g_dataBuffer_MVB[1106+64];
                        g_dataBuffer_Display[1122+64]=g_dataBuffer_MVB[1122+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],5)==1)
                    {
                        g_dataBuffer_Display[1107+64]=g_dataBuffer_MVB[1107+64];
                        g_dataBuffer_Display[1123+64]=g_dataBuffer_MVB[1123+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],4)==1)
                    {
                        g_dataBuffer_Display[1108+64]=g_dataBuffer_MVB[1108+64];
                        g_dataBuffer_Display[1124+64]=g_dataBuffer_MVB[1124+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],3)==1)
                    {
                        g_dataBuffer_Display[1109+64]=g_dataBuffer_MVB[1109+64];
                        g_dataBuffer_Display[1125+64]=g_dataBuffer_MVB[1125+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],2)==1)
                    {
                        g_dataBuffer_Display[1110+64]=g_dataBuffer_MVB[1110+64];
                        g_dataBuffer_Display[1126+64]=g_dataBuffer_MVB[1126+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],1)==1)
                    {
                        g_dataBuffer_Display[1111+64]=g_dataBuffer_MVB[1111+64];
                        g_dataBuffer_Display[1127+64]=g_dataBuffer_MVB[1127+64];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+64],0)==1)
                    {
                        g_dataBuffer_Display[1112+64]=g_dataBuffer_MVB[1112+64];
                        g_dataBuffer_Display[1128+64]=g_dataBuffer_MVB[1128+64];
                    }

                }
                if((g_dataBuffer_MVB[1118+64+32]%256)>1)
                {

                    if(Bit(g_dataBuffer_MVB[1152+64],7)==1)
                    {
                        g_dataBuffer_Display[1105+64]=g_dataBuffer_MVB[1105+64+32];
                        g_dataBuffer_Display[1121+64]=g_dataBuffer_MVB[1121+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],6)==1)
                    {
                        g_dataBuffer_Display[1106+64]=g_dataBuffer_MVB[1106+64+32];
                        g_dataBuffer_Display[1122+64]=g_dataBuffer_MVB[1122+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],5)==1)
                    {
                        g_dataBuffer_Display[1107+64]=g_dataBuffer_MVB[1107+64+32];
                        g_dataBuffer_Display[1123+64]=g_dataBuffer_MVB[1123+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],4)==1)
                    {
                        g_dataBuffer_Display[1108+64]=g_dataBuffer_MVB[1108+64+32];
                        g_dataBuffer_Display[1124+64]=g_dataBuffer_MVB[1124+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],3)==1)
                    {
                        g_dataBuffer_Display[1109+64]=g_dataBuffer_MVB[1109+64+32];
                        g_dataBuffer_Display[1125+64]=g_dataBuffer_MVB[1125+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],2)==1)
                    {
                        g_dataBuffer_Display[1110+64]=g_dataBuffer_MVB[1110+64+32];
                        g_dataBuffer_Display[1126+64]=g_dataBuffer_MVB[1126+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],1)==1)
                    {
                        g_dataBuffer_Display[1111+64]=g_dataBuffer_MVB[1111+64+32];
                        g_dataBuffer_Display[1127+64]=g_dataBuffer_MVB[1127+64+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+64],0)==1)
                    {
                        g_dataBuffer_Display[1112+64]=g_dataBuffer_MVB[1112+64+32];
                        g_dataBuffer_Display[1128+64]=g_dataBuffer_MVB[1128+64+32];
                    }

                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+1],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+1],15))
                    )
                {
                    che2_door1_Fault = 1;
                }
                else
                {
                    che2_door1_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+2],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+2],15))
                    )
                {
                    che2_door2_Fault = 1;
                }
                else
                {
                    che2_door2_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+3],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+3],15))
                    )
                {
                    che2_door3_Fault = 1;
                }
                else
                {
                    che2_door3_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+4],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+4],15))
                    )
                {
                    che2_door4_Fault = 1;
                }
                else
                {
                    che2_door4_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+5],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+5],15))
                    )
                {
                    che2_door5_Fault = 1;
                }
                else
                {
                    che2_door5_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+6],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+6],15))
                    )
                {
                    che2_door6_Fault = 1;
                }
                else
                {
                    che2_door6_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+64+7],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+7],15))
                    )
                {
                    che2_door7_Fault = 1;
                }
                else
                {
                    che2_door7_Fault = 0;
                }
                if(
                   (Bit(g_dataBuffer_Display[1120+64+8],0))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],1))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],2))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],3))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],4))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],5))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],6))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],7))
                 ||(Bit(g_dataBuffer_Display[1120+64+8],15))
                    )
                {
                    che2_door8_Fault = 1;
                }
                else
                {
                    che2_door8_Fault = 0;
                }

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if ( (Bit(g_dataBuffer_MVB[1120+64],7) ) || (Bit(g_dataBuffer_MVB[1152+64],7) ) )
               {
                   che2_door1 = 1;
               }
               else
               {
                   che2_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_MVB[1120+64],6) ) || (Bit(g_dataBuffer_MVB[1152+64],6) ) )
               {
                   che2_door2 = 1;
               }
               else
               {
                   che2_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+64],5) ) || (Bit(g_dataBuffer_MVB[1152+64],5) ) )
               {
                   che2_door3 = 1;
               }
               else
               {
                   che2_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+64],4) ) || (Bit(g_dataBuffer_MVB[1152+64],4) ) )
               {
                   che2_door4 = 1;
               }
               else
               {
                   che2_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+64],3) ) || (Bit(g_dataBuffer_MVB[1152+64],3) ) )
               {
                   che2_door5 = 1;
               }
               else
               {
                   che2_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+64],2) ) || (Bit(g_dataBuffer_MVB[1152+64],2) ) )
               {
                   che2_door6 = 1;
               }
               else
               {
                   che2_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+64],1) ) || (Bit(g_dataBuffer_MVB[1152+64],1) ) )
               {
                   che2_door7 = 1;
               }
               else
               {
                   che2_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+64],0) ) || (Bit(g_dataBuffer_MVB[1152+64],0) ) )
               {
                   che2_door8 = 1;
               }
               else
               {
                   che2_door8 = 0;
               }
            }
            else
            {
            //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                che2_door1 = 0;
                che2_door2 = 0;
                che2_door3 = 0;
                che2_door4 = 0;
                che2_door5 = 0;
                che2_door6 = 0;
                che2_door7 = 0;
                che2_door8 = 0;
            }

        }
    }


    // 3 车厢
    if((g_dataBuffer_MVB[1118+128]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1104+j+128]=g_dataBuffer_MVB[1104+j+128];
        }


        if(
           (Bit(g_dataBuffer_MVB[1120+128+1],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+1],15))
            )
        {
            che3_door1_Fault = 1;
        }
        else
        {
            che3_door1_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+128+2],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+2],15))
            )
        {
            che3_door2_Fault = 1;
        }
        else
        {
            che3_door2_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+128+3],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+3],15))
            )
        {
            che3_door3_Fault = 1;
        }
        else
        {
            che3_door3_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+128+4],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+4],15))
            )
        {
            che3_door4_Fault = 1;
        }
        else
        {
            che3_door4_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+128+5],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+5],15))
            )
        {
            che3_door5_Fault = 1;
        }
        else
        {
            che3_door5_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+128+6],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+6],15))
            )
        {
            che3_door6_Fault = 1;
        }
        else
        {
            che3_door6_Fault = 0;
        }

        if(
           (Bit(g_dataBuffer_MVB[1120+128+7],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+7],15))
            )
        {
            che3_door7_Fault = 1;
        }
        else
        {
            che3_door7_Fault = 0;
        }
        if(
           (Bit(g_dataBuffer_MVB[1120+128+8],0))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],1))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],2))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],3))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],4))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],5))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],6))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],7))
         ||(Bit(g_dataBuffer_MVB[1120+128+8],15))
            )
        {
            che3_door8_Fault = 1;
        }
        else
        {
            che3_door8_Fault = 0;
        }

        if ( (Bit(g_dataBuffer_MVB[1120+128],7) ) )
       {
           che3_door1 = 1;
       }
       else
       {
           che3_door1 = 0;
       }
       if ( (Bit(g_dataBuffer_MVB[1120+128],6) )  )
       {
           che3_door2 = 1;
       }
       else
       {
           che3_door2 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+128],5) )  )
       {
           che3_door3 = 1;
       }
       else
       {
           che3_door3 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+128],4) )  )
       {
           che3_door4 = 1;
       }
       else
       {
           che3_door4 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+128],3) )  )
       {
           che3_door5 = 1;
       }
       else
       {
           che3_door5 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+128],2) ) )
       {
           che3_door6 = 1;
       }
       else
       {
           che3_door6 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+128],1) )  )
       {
           che3_door7 = 1;
       }
       else
       {
           che3_door7 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1120+128],0) ) )
       {
           che3_door8 = 1;
       }
       else
       {
           che3_door8 = 0;
       }
    }
    else
    {
        if((g_dataBuffer_MVB[1118+32+128]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1104+j+128]=g_dataBuffer_MVB[1136+j+128];
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+1],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+1],15))
                )
            {
                che3_door1_Fault = 1;
            }
            else
            {
                che3_door1_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+2],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+2],15))
                )
            {
                che3_door2_Fault = 1;
            }
            else
            {
                che3_door2_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+3],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+3],15))
                )
            {
                che3_door3_Fault = 1;
            }
            else
            {
                che3_door3_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+4],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+4],15))
                )
            {
                che3_door4_Fault = 1;
            }
            else
            {
                che3_door4_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+5],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+5],15))
                )
            {
                che3_door5_Fault = 1;
            }
            else
            {
                che3_door5_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+6],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+6],15))
                )
            {
                che3_door6_Fault = 1;
            }
            else
            {
                che3_door6_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+7],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+7],15))
                )
            {
                che3_door7_Fault = 1;
            }
            else
            {
                che3_door7_Fault = 0;
            }
            if(
               (Bit(g_dataBuffer_MVB[1120+32+128+8],0))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],1))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],2))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],3))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],4))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],5))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],6))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],7))
             ||(Bit(g_dataBuffer_MVB[1120+32+128+8],15))
                )
            {
                che3_door8_Fault = 1;
            }
            else
            {
                che3_door8_Fault = 0;
            }
            if ( (Bit(g_dataBuffer_MVB[1152+128],7) ) )
            {
                che3_door1 = 1;
            }
            else
            {
                che3_door1 = 0;
            }
            if (  (Bit(g_dataBuffer_MVB[1152+128],6) ) )
            {
                che3_door2 = 1;
            }
            else
            {
                che3_door2 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1152+128],5) ) )
            {
                che3_door3 = 1;
            }
            else
            {
                che3_door3 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1152+128],4) ) )
            {
                che3_door4 = 1;
            }
            else
            {
                che3_door4 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1152+128],3) ) )
            {
                che3_door5 = 1;
            }
            else
            {
                che3_door5 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1152+128],2) ) )
            {
                che3_door6 = 1;
            }
            else
            {
                che3_door6 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1152+128],1) ) )
            {
                che3_door7 = 1;
            }
            else
            {
                che3_door7 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1152+128],0) ) )
            {
                che3_door8 = 1;
            }
            else
            {
                che3_door8 = 0;
            }
        }
        else
        {
            if(((g_dataBuffer_MVB[1118+128]%256)>1)||((g_dataBuffer_MVB[1118+32+128]%256)>1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {
                if((g_dataBuffer_MVB[1118+128]%256)>1)
                {
                    if(Bit(g_dataBuffer_MVB[1120+128],7)==1)
                    {
                        g_dataBuffer_Display[1105+128]=g_dataBuffer_MVB[1105+128];
                        g_dataBuffer_Display[1121+128]=g_dataBuffer_MVB[1121+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],6)==1)
                    {
                        g_dataBuffer_Display[1106+128]=g_dataBuffer_MVB[1106+128];
                        g_dataBuffer_Display[1122+128]=g_dataBuffer_MVB[1122+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],5)==1)
                    {
                        g_dataBuffer_Display[1107+128]=g_dataBuffer_MVB[1107+128];
                        g_dataBuffer_Display[1123+128]=g_dataBuffer_MVB[1123+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],4)==1)
                    {
                        g_dataBuffer_Display[1108+128]=g_dataBuffer_MVB[1108+128];
                        g_dataBuffer_Display[1124+128]=g_dataBuffer_MVB[1124+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],3)==1)
                    {
                        g_dataBuffer_Display[1109+128]=g_dataBuffer_MVB[1109+128];
                        g_dataBuffer_Display[1125+128]=g_dataBuffer_MVB[1125+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],2)==1)
                    {
                        g_dataBuffer_Display[1110+128]=g_dataBuffer_MVB[1110+128];
                        g_dataBuffer_Display[1126+128]=g_dataBuffer_MVB[1126+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],1)==1)
                    {
                        g_dataBuffer_Display[1111+128]=g_dataBuffer_MVB[1111+128];
                        g_dataBuffer_Display[1127+128]=g_dataBuffer_MVB[1127+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1120+128],0)==1)
                    {
                        g_dataBuffer_Display[1112+128]=g_dataBuffer_MVB[1112+128];
                        g_dataBuffer_Display[1128+128]=g_dataBuffer_MVB[1128+128];
                    }

                }
                if((g_dataBuffer_MVB[1118+32+128]%256)>1)
                {

                    if(Bit(g_dataBuffer_MVB[1152+128],7)==1)
                    {
                        g_dataBuffer_Display[1105+128]=g_dataBuffer_MVB[1105+32+128];
                        g_dataBuffer_Display[1121+128]=g_dataBuffer_MVB[1121+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],6)==1)
                    {
                        g_dataBuffer_Display[1106+128]=g_dataBuffer_MVB[1106+32+128];
                        g_dataBuffer_Display[1122+128]=g_dataBuffer_MVB[1122+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],5)==1)
                    {
                        g_dataBuffer_Display[1107+128]=g_dataBuffer_MVB[1107+32+128];
                        g_dataBuffer_Display[1123+128]=g_dataBuffer_MVB[1123+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],4)==1)
                    {
                        g_dataBuffer_Display[1108+128]=g_dataBuffer_MVB[1108+32+128];
                        g_dataBuffer_Display[1124+128]=g_dataBuffer_MVB[1124+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],3)==1)
                    {
                        g_dataBuffer_Display[1109+128]=g_dataBuffer_MVB[1109+32+128];
                        g_dataBuffer_Display[1125+128]=g_dataBuffer_MVB[1125+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],2)==1)
                    {
                        g_dataBuffer_Display[1110+128]=g_dataBuffer_MVB[1110+32+128];
                        g_dataBuffer_Display[1126+128]=g_dataBuffer_MVB[1126+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],1)==1)
                    {
                        g_dataBuffer_Display[1111+128]=g_dataBuffer_MVB[1111+32+128];
                        g_dataBuffer_Display[1127+128]=g_dataBuffer_MVB[1127+32+128];
                    }
                    if(Bit(g_dataBuffer_MVB[1152+128],0)==1)
                    {
                        g_dataBuffer_Display[1112+128]=g_dataBuffer_MVB[1112+32+128];
                        g_dataBuffer_Display[1128+128]=g_dataBuffer_MVB[1128+32+128];
                    }

                }
                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                if(
                   (Bit(g_dataBuffer_Display[1120+128+1],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+1],15))
                    )
                {
                    che3_door1_Fault = 1;
                }
                else
                {
                    che3_door1_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+128+2],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+2],15))
                    )
                {
                    che3_door2_Fault = 1;
                }
                else
                {
                    che3_door2_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+128+3],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+3],15))
                    )
                {
                    che3_door3_Fault = 1;
                }
                else
                {
                    che3_door3_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+128+4],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+4],15))
                    )
                {
                    che3_door4_Fault = 1;
                }
                else
                {
                    che3_door4_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+128+5],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+5],15))
                    )
                {
                    che3_door5_Fault = 1;
                }
                else
                {
                    che3_door5_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+128+6],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+6],15))
                    )
                {
                    che3_door6_Fault = 1;
                }
                else
                {
                    che3_door6_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_Display[1120+128+7],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+7],15))
                    )
                {
                    che3_door7_Fault = 1;
                }
                else
                {
                    che3_door7_Fault = 0;
                }
                if(
                   (Bit(g_dataBuffer_Display[1120+128+8],0))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],1))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],2))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],3))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],4))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],5))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],6))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],7))
                 ||(Bit(g_dataBuffer_Display[1120+128+8],15))
                    )
                {
                    che3_door8_Fault = 1;
                }
                else
                {
                    che3_door8_Fault = 0;
                }

               if ( (Bit(g_dataBuffer_MVB[1120+128],7) ) || (Bit(g_dataBuffer_MVB[1152+128],7) ) )
               {
                   che3_door1 = 1;
               }
               else
               {
                   che3_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_MVB[1120+128],6) ) || (Bit(g_dataBuffer_MVB[1152+128],6) ) )
               {
                   che3_door2 = 1;
               }
               else
               {
                   che3_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+128],5) ) || (Bit(g_dataBuffer_MVB[1152+128],5) ) )
               {
                   che3_door3 = 1;
               }
               else
               {
                   che3_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+128],4) ) || (Bit(g_dataBuffer_MVB[1152+128],4) ) )
               {
                   che3_door4 = 1;
               }
               else
               {
                   che3_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+128],3) ) || (Bit(g_dataBuffer_MVB[1152+128],3) ) )
               {
                   che3_door5 = 1;
               }
               else
               {
                   che3_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+128],2) ) || (Bit(g_dataBuffer_MVB[1152+128],2) ) )
               {
                   che3_door6 = 1;
               }
               else
               {
                   che3_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+128],1) ) || (Bit(g_dataBuffer_MVB[1152+128],1) ) )
               {
                   che3_door7 = 1;
               }
               else
               {
                   che3_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+128],0) ) || (Bit(g_dataBuffer_MVB[1152+128],0) ) )
               {
                   che3_door8 = 1;
               }
               else
               {
                   che3_door8 = 0;
               }
            }
            else
            {
            //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                che3_door1 = 0;
                che3_door2 = 0;
                che3_door3 = 0;
                che3_door4 = 0;
                che3_door5 = 0;
                che3_door6 = 0;
                che3_door7 = 0;
                che3_door8 = 0;
            }

        }
    }


    // 4 车厢
        if((g_dataBuffer_MVB[1118+192]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1104+j+192]=g_dataBuffer_MVB[1104+j+192];
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+1],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+1],15))
                )
            {
                che4_door1_Fault = 1;
            }
            else
            {
                che4_door1_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+2],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+2],15))
                )
            {
                che4_door2_Fault = 1;
            }
            else
            {
                che4_door2_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+3],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+3],15))
                )
            {
                che4_door3_Fault = 1;
            }
            else
            {
                che4_door3_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+4],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+4],15))
                )
            {
                che4_door4_Fault = 1;
            }
            else
            {
                che4_door4_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+5],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+5],15))
                )
            {
                che4_door5_Fault = 1;
            }
            else
            {
                che4_door5_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+6],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+6],15))
                )
            {
                che4_door6_Fault = 1;
            }
            else
            {
                che4_door6_Fault = 0;
            }

            if(
               (Bit(g_dataBuffer_MVB[1120+192+7],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+7],15))
                )
            {
                che4_door7_Fault = 1;
            }
            else
            {
                che4_door7_Fault = 0;
            }
            if(
               (Bit(g_dataBuffer_MVB[1120+192+8],0))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],1))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],2))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],3))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],4))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],5))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],6))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],7))
             ||(Bit(g_dataBuffer_MVB[1120+192+8],15))
                )
            {
                che4_door8_Fault = 1;
            }
            else
            {
                che4_door8_Fault = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],7) )  )
            {
                che4_door1 = 1;
            }
            else
            {
                che4_door1 = 0;
            }
            if ( (Bit(g_dataBuffer_MVB[1120+192],6) )  )
            {
                che4_door2 = 1;
            }
            else
            {
                che4_door2 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],5) )  )
            {
                che4_door3 = 1;
            }
            else
            {
                che4_door3 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],4) ))
            {
                che4_door4 = 1;
            }
            else
            {
                che4_door4 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],3) )  )
            {
                che4_door5 = 1;
            }
            else
            {
                che4_door5 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],2) ) )
            {
                che4_door6 = 1;
            }
            else
            {
                che4_door6 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],1) )  )
            {
                che4_door7 = 1;
            }
            else
            {
                che4_door7 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1120+192],0) )  )
            {
                che4_door8 = 1;
            }
            else
            {
                che4_door8 = 0;
            }
        }
        else
        {
            if((g_dataBuffer_MVB[1118+32+192]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
            {

                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_Display[1104+j+192]=g_dataBuffer_MVB[1136+j+192];
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+1],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+1],15))
                    )
                {
                    che4_door1_Fault = 1;
                }
                else
                {
                    che4_door1_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+2],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+2],15))
                    )
                {
                    che4_door2_Fault = 1;
                }
                else
                {
                    che4_door2_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+3],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+3],15))
                    )
                {
                    che4_door3_Fault = 1;
                }
                else
                {
                    che4_door3_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+4],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+4],15))
                    )
                {
                    che4_door4_Fault = 1;
                }
                else
                {
                    che4_door4_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+5],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+5],15))
                    )
                {
                    che4_door5_Fault = 1;
                }
                else
                {
                    che4_door5_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+6],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+6],15))
                    )
                {
                    che4_door6_Fault = 1;
                }
                else
                {
                    che4_door6_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+7],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+7],15))
                    )
                {
                    che4_door7_Fault = 1;
                }
                else
                {
                    che4_door7_Fault = 0;
                }
                if(
                   (Bit(g_dataBuffer_MVB[1120+32+192+8],0))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],1))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],2))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],3))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],4))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],5))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],6))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],7))
                 ||(Bit(g_dataBuffer_MVB[1120+32+192+8],15))
                    )
                {
                    che4_door8_Fault = 1;
                }
                else
                {
                    che4_door8_Fault = 0;
                }

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if (  (Bit(g_dataBuffer_MVB[1152+192],7) ) )
               {
                   che4_door1 = 1;
               }
               else
               {
                   che4_door1 = 0;
               }
               if (  (Bit(g_dataBuffer_MVB[1152+192],6) ) )
               {
                   che4_door2 = 1;
               }
               else
               {
                   che4_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152+192],5) ) )
               {
                   che4_door3 = 1;
               }
               else
               {
                   che4_door3 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1152+192],4) ) )
               {
                   che4_door4 = 1;
               }
               else
               {
                   che4_door4 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1152+192],3) ) )
               {
                   che4_door5 = 1;
               }
               else
               {
                   che4_door5 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1152+192],2) ) )
               {
                   che4_door6 = 1;
               }
               else
               {
                   che4_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152+192],1) ) )
               {
                   che4_door7 = 1;
               }
               else
               {
                   che4_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1152+192],0) ) )
               {
                   che4_door8 = 1;
               }
               else
               {
                   che4_door8 = 0;
               }
            }
            else
            {
                if(((g_dataBuffer_MVB[1118+192]%256)>1)||((g_dataBuffer_MVB[1118+32+192]%256)>1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                {
                    if((g_dataBuffer_MVB[1118+192]%256)>1)
                    {
                        if(Bit(g_dataBuffer_MVB[1120+192],7)==1)
                        {
                            g_dataBuffer_Display[1105+192]=g_dataBuffer_MVB[1105+192];
                            g_dataBuffer_Display[1121+192]=g_dataBuffer_MVB[1121+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],6)==1)
                        {
                            g_dataBuffer_Display[1106+192]=g_dataBuffer_MVB[1106+192];
                            g_dataBuffer_Display[1122+192]=g_dataBuffer_MVB[1122+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],5)==1)
                        {
                            g_dataBuffer_Display[1107+192]=g_dataBuffer_MVB[1107+192];
                            g_dataBuffer_Display[1123+192]=g_dataBuffer_MVB[1123+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],4)==1)
                        {
                            g_dataBuffer_Display[1108+192]=g_dataBuffer_MVB[1108+192];
                            g_dataBuffer_Display[1124+192]=g_dataBuffer_MVB[1124+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],3)==1)
                        {
                            g_dataBuffer_Display[1109+192]=g_dataBuffer_MVB[1109+192];
                            g_dataBuffer_Display[1125+192]=g_dataBuffer_MVB[1125+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],2)==1)
                        {
                            g_dataBuffer_Display[1110+192]=g_dataBuffer_MVB[1110+192];
                            g_dataBuffer_Display[1126+192]=g_dataBuffer_MVB[1126+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],1)==1)
                        {
                            g_dataBuffer_Display[1111+192]=g_dataBuffer_MVB[1111+192];
                            g_dataBuffer_Display[1127+192]=g_dataBuffer_MVB[1127+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1120+192],0)==1)
                        {
                            g_dataBuffer_Display[1112+192]=g_dataBuffer_MVB[1112+192];
                            g_dataBuffer_Display[1128+192]=g_dataBuffer_MVB[1128+192];
                        }

                    }
                    if((g_dataBuffer_MVB[1118+32+192]%256)>1)
                    {

                        if(Bit(g_dataBuffer_MVB[1152+192],7)==1)
                        {
                            g_dataBuffer_Display[1105+192]=g_dataBuffer_MVB[1105+32+192];
                            g_dataBuffer_Display[1121+192]=g_dataBuffer_MVB[1121+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],6)==1)
                        {
                            g_dataBuffer_Display[1106+192]=g_dataBuffer_MVB[1106+32+192];
                            g_dataBuffer_Display[1122+192]=g_dataBuffer_MVB[1122+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],5)==1)
                        {
                            g_dataBuffer_Display[1107+192]=g_dataBuffer_MVB[1107+32+192];
                            g_dataBuffer_Display[1123+192]=g_dataBuffer_MVB[1123+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],4)==1)
                        {
                            g_dataBuffer_Display[1108+192]=g_dataBuffer_MVB[1108+32+192];
                            g_dataBuffer_Display[1124+192]=g_dataBuffer_MVB[1124+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],3)==1)
                        {
                            g_dataBuffer_Display[1109+192]=g_dataBuffer_MVB[1109+32+192];
                            g_dataBuffer_Display[1125+192]=g_dataBuffer_MVB[1125+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],2)==1)
                        {
                            g_dataBuffer_Display[1110+192]=g_dataBuffer_MVB[1110+32+192];
                            g_dataBuffer_Display[1126+192]=g_dataBuffer_MVB[1126+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],1)==1)
                        {
                            g_dataBuffer_Display[1111+192]=g_dataBuffer_MVB[1111+32+192];
                            g_dataBuffer_Display[1127+192]=g_dataBuffer_MVB[1127+32+192];
                        }
                        if(Bit(g_dataBuffer_MVB[1152+192],0)==1)
                        {
                            g_dataBuffer_Display[1112+192]=g_dataBuffer_MVB[1112+32+192];
                            g_dataBuffer_Display[1128+192]=g_dataBuffer_MVB[1128+32+192];
                        }

                    }
                    if(
                       (Bit(g_dataBuffer_Display[1120+192+1],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+1],15))
                        )
                    {
                        che4_door1_Fault = 1;
                    }
                    else
                    {
                        che4_door1_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_Display[1120+192+2],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+2],15))
                        )
                    {
                        che4_door2_Fault = 1;
                    }
                    else
                    {
                        che4_door2_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_Display[1120+192+3],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+3],15))
                        )
                    {
                        che4_door3_Fault = 1;
                    }
                    else
                    {
                        che4_door3_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_Display[1120+192+4],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+4],15))
                        )
                    {
                        che4_door4_Fault = 1;
                    }
                    else
                    {
                        che4_door4_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_Display[1120+192+5],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+5],15))
                        )
                    {
                        che4_door5_Fault = 1;
                    }
                    else
                    {
                        che4_door5_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_Display[1120+192+6],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+6],15))
                        )
                    {
                        che4_door6_Fault = 1;
                    }
                    else
                    {
                        che4_door6_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_Display[1120+192+7],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+7],15))
                        )
                    {
                        che4_door7_Fault = 1;
                    }
                    else
                    {
                        che4_door7_Fault = 0;
                    }
                    if(
                       (Bit(g_dataBuffer_Display[1120+192+8],0))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],1))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],2))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],3))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],4))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],5))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],6))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],7))
                     ||(Bit(g_dataBuffer_Display[1120+192+8],15))
                        )
                    {
                        che4_door8_Fault = 1;
                    }
                    else
                    {
                        che4_door8_Fault = 0;
                    }

                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                   if ( (Bit(g_dataBuffer_MVB[1120+192],7) ) || (Bit(g_dataBuffer_MVB[1152+192],7) ) )
                   {
                       che4_door1 = 1;
                   }
                   else
                   {
                       che4_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_MVB[1120+192],6) ) || (Bit(g_dataBuffer_MVB[1152+192],6) ) )
                   {
                       che4_door2 = 1;
                   }
                   else
                   {
                       che4_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+192],5) ) || (Bit(g_dataBuffer_MVB[1152+192],5) ) )
                   {
                       che4_door3 = 1;
                   }
                   else
                   {
                       che4_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+192],4) ) || (Bit(g_dataBuffer_MVB[1152+192],4) ) )
                   {
                       che4_door4 = 1;
                   }
                   else
                   {
                       che4_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+192],3) ) || (Bit(g_dataBuffer_MVB[1152+192],3) ) )
                   {
                       che4_door5 = 1;
                   }
                   else
                   {
                       che4_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+192],2) ) || (Bit(g_dataBuffer_MVB[1152+192],2) ) )
                   {
                       che4_door6 = 1;
                   }
                   else
                   {
                       che4_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+192],1) ) || (Bit(g_dataBuffer_MVB[1152+192],1) ) )
                   {
                       che4_door7 = 1;
                   }
                   else
                   {
                       che4_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+192],0) ) || (Bit(g_dataBuffer_MVB[1152+192],0) ) )
                   {
                       che4_door8 = 1;
                   }
                   else
                   {
                       che4_door8 = 0;
                   }
                }
                else
                {
                //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。

                    che4_door1 = 0;
                    che4_door2 = 0;
                    che4_door3 = 0;
                    che4_door4 = 0;
                    che4_door5 = 0;
                    che4_door6 = 0;
                    che4_door7 = 0;
                    che4_door8 = 0;
                }

            }
        }
  // che5
        if((g_dataBuffer_MVB[1118+256]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
            {

                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_Display[1104+j+256]=g_dataBuffer_MVB[1104+j+256];
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+1],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+1],15))
                    )
                {
                    che5_door1_Fault = 1;
                }
                else
                {
                    che5_door1_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+2],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+2],15))
                    )
                {
                    che5_door2_Fault = 1;
                }
                else
                {
                    che5_door2_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+3],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+3],15))
                    )
                {
                    che5_door3_Fault = 1;
                }
                else
                {
                    che5_door3_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+4],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+4],15))
                    )
                {
                    che5_door4_Fault = 1;
                }
                else
                {
                    che5_door4_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+5],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+5],15))
                    )
                {
                    che5_door5_Fault = 1;
                }
                else
                {
                    che5_door5_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+6],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+6],15))
                    )
                {
                    che5_door6_Fault = 1;
                }
                else
                {
                    che5_door6_Fault = 0;
                }

                if(
                   (Bit(g_dataBuffer_MVB[1120+256+7],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+7],15))
                    )
                {
                    che5_door7_Fault = 1;
                }
                else
                {
                    che5_door7_Fault = 0;
                }
                if(
                   (Bit(g_dataBuffer_MVB[1120+256+8],0))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],1))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],2))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],3))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],4))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],5))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],6))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],7))
                 ||(Bit(g_dataBuffer_MVB[1120+256+8],15))
                    )
                {
                    che5_door8_Fault = 1;
                }
                else
                {
                    che5_door8_Fault = 0;
                }
                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if ( (Bit(g_dataBuffer_MVB[1120+256],7) )  )
               {
                   che5_door1 = 1;
               }
               else
               {
                   che5_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_MVB[1120+256],6) )  )
               {
                   che5_door2 = 1;
               }
               else
               {
                   che5_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+256],5) )  )
               {
                   che5_door3 = 1;
               }
               else
               {
                   che5_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+256],4) )  )
               {
                   che5_door4 = 1;
               }
               else
               {
                   che5_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+256],3) )  )
               {
                   che5_door5 = 1;
               }
               else
               {
                   che5_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+256],2) )  )
               {
                   che5_door6 = 1;
               }
               else
               {
                   che5_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+256],1) )  )
               {
                   che5_door7 = 1;
               }
               else
               {
                   che5_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1120+256],0) )  )
               {
                   che5_door8 = 1;
               }
               else
               {
                   che5_door8 = 0;
               }
            }
            else
            {
                if((g_dataBuffer_MVB[1118+32+256]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
                {

                    for(int j=0;j<32;j++)
                    {
                        g_dataBuffer_Display[1104+j+256]=g_dataBuffer_MVB[1136+j+256];
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+1],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+1],15))
                        )
                    {
                        che5_door1_Fault = 1;
                    }
                    else
                    {
                        che5_door1_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+2],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+2],15))
                        )
                    {
                        che5_door2_Fault = 1;
                    }
                    else
                    {
                        che5_door2_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+3],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+3],15))
                        )
                    {
                        che5_door3_Fault = 1;
                    }
                    else
                    {
                        che5_door3_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+4],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+4],15))
                        )
                    {
                        che5_door4_Fault = 1;
                    }
                    else
                    {
                        che5_door4_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+5],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+5],15))
                        )
                    {
                        che5_door5_Fault = 1;
                    }
                    else
                    {
                        che5_door5_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+6],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+6],15))
                        )
                    {
                        che5_door6_Fault = 1;
                    }
                    else
                    {
                        che5_door6_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+7],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+7],15))
                        )
                    {
                        che5_door7_Fault = 1;
                    }
                    else
                    {
                        che5_door7_Fault = 0;
                    }
                    if(
                       (Bit(g_dataBuffer_MVB[1120+32+256+8],0))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],1))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],2))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],3))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],4))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],5))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],6))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],7))
                     ||(Bit(g_dataBuffer_MVB[1120+32+256+8],15))
                        )
                    {
                        che5_door8_Fault = 1;
                    }
                    else
                    {
                        che5_door8_Fault = 0;
                    }
                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                   if (  (Bit(g_dataBuffer_MVB[1152+256],7) ) )
                   {
                       che5_door1 = 1;
                   }
                   else
                   {
                       che5_door1 = 0;
                   }
                   if (  (Bit(g_dataBuffer_MVB[1152+256],6) ) )
                   {
                       che5_door2 = 1;
                   }
                   else
                   {
                       che5_door2 = 0;
                   }

                   if (  (Bit(g_dataBuffer_MVB[1152+256],5) ) )
                   {
                       che5_door3 = 1;
                   }
                   else
                   {
                       che5_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1152+256],4) ) )
                   {
                       che5_door4 = 1;
                   }
                   else
                   {
                       che5_door4 = 0;
                   }

                   if (  (Bit(g_dataBuffer_MVB[1152+256],3) ) )
                   {
                       che5_door5 = 1;
                   }
                   else
                   {
                       che5_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1152+256],2) ) )
                   {
                       che5_door6 = 1;
                   }
                   else
                   {
                       che5_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1152+256],1) ) )
                   {
                       che5_door7 = 1;
                   }
                   else
                   {
                       che5_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1152+256],0) ) )
                   {
                       che5_door8 = 1;
                   }
                   else
                   {
                       che5_door8 = 0;
                   }
                }
                else
                {
                    if(((g_dataBuffer_MVB[1118+256]%256)>1)||((g_dataBuffer_MVB[1118+32+256]%256)>1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                    {
                        if((g_dataBuffer_MVB[1118+256]%256)>1)
                        {
                            if(Bit(g_dataBuffer_MVB[1120+256],7)==1)
                            {
                                g_dataBuffer_Display[1105+256]=g_dataBuffer_MVB[1105+256];
                                g_dataBuffer_Display[1121+256]=g_dataBuffer_MVB[1121+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],6)==1)
                            {
                                g_dataBuffer_Display[1106+256]=g_dataBuffer_MVB[1106+256];
                                g_dataBuffer_Display[1122+256]=g_dataBuffer_MVB[1122+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],5)==1)
                            {
                                g_dataBuffer_Display[1107+256]=g_dataBuffer_MVB[1107+256];
                                g_dataBuffer_Display[1123+256]=g_dataBuffer_MVB[1123+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],4)==1)
                            {
                                g_dataBuffer_Display[1108+256]=g_dataBuffer_MVB[1108+256];
                                g_dataBuffer_Display[1124+256]=g_dataBuffer_MVB[1124+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],3)==1)
                            {
                                g_dataBuffer_Display[1109+256]=g_dataBuffer_MVB[1109+256];
                                g_dataBuffer_Display[1125+256]=g_dataBuffer_MVB[1125+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],2)==1)
                            {
                                g_dataBuffer_Display[1110+256]=g_dataBuffer_MVB[1110+256];
                                g_dataBuffer_Display[1126+256]=g_dataBuffer_MVB[1126+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],1)==1)
                            {
                                g_dataBuffer_Display[1111+256]=g_dataBuffer_MVB[1111+256];
                                g_dataBuffer_Display[1127+256]=g_dataBuffer_MVB[1127+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1120+256],0)==1)
                            {
                                g_dataBuffer_Display[1112+256]=g_dataBuffer_MVB[1112+256];
                                g_dataBuffer_Display[1128+256]=g_dataBuffer_MVB[1128+256];
                            }

                        }
                        if((g_dataBuffer_MVB[1118+32+256]%256)>1)
                        {

                            if(Bit(g_dataBuffer_MVB[1152+256],7)==1)
                            {
                                g_dataBuffer_Display[1105+256]=g_dataBuffer_MVB[1105+32+256];
                                g_dataBuffer_Display[1121+256]=g_dataBuffer_MVB[1121+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],6)==1)
                            {
                                g_dataBuffer_Display[1106+256]=g_dataBuffer_MVB[1106+32+256];
                                g_dataBuffer_Display[1122+256]=g_dataBuffer_MVB[1122+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],5)==1)
                            {
                                g_dataBuffer_Display[1107+256]=g_dataBuffer_MVB[1107+32+256];
                                g_dataBuffer_Display[1123+256]=g_dataBuffer_MVB[1123+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],4)==1)
                            {
                                g_dataBuffer_Display[1108+256]=g_dataBuffer_MVB[1108+32+256];
                                g_dataBuffer_Display[1124+256]=g_dataBuffer_MVB[1124+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],3)==1)
                            {
                                g_dataBuffer_Display[1109+256]=g_dataBuffer_MVB[1109+32+256];
                                g_dataBuffer_Display[1125+256]=g_dataBuffer_MVB[1125+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],2)==1)
                            {
                                g_dataBuffer_Display[1110+256]=g_dataBuffer_MVB[1110+32+256];
                                g_dataBuffer_Display[1126+256]=g_dataBuffer_MVB[1126+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],1)==1)
                            {
                                g_dataBuffer_Display[1111+256]=g_dataBuffer_MVB[1111+32+256];
                                g_dataBuffer_Display[1127+256]=g_dataBuffer_MVB[1127+32+256];
                            }
                            if(Bit(g_dataBuffer_MVB[1152+256],0)==1)
                            {
                                g_dataBuffer_Display[1112+256]=g_dataBuffer_MVB[1112+32+256];
                                g_dataBuffer_Display[1128+256]=g_dataBuffer_MVB[1128+32+256];
                            }

                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+1],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+1],15))
                            )
                        {
                            che5_door1_Fault = 1;
                        }
                        else
                        {
                            che5_door1_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+2],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+2],15))
                            )
                        {
                            che5_door2_Fault = 1;
                        }
                        else
                        {
                            che5_door2_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+3],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+3],15))
                            )
                        {
                            che5_door3_Fault = 1;
                        }
                        else
                        {
                            che5_door3_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+4],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+4],15))
                            )
                        {
                            che5_door4_Fault = 1;
                        }
                        else
                        {
                            che5_door4_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+5],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+5],15))
                            )
                        {
                            che5_door5_Fault = 1;
                        }
                        else
                        {
                            che5_door5_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+6],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+6],15))
                            )
                        {
                            che5_door6_Fault = 1;
                        }
                        else
                        {
                            che5_door6_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_Display[1120+256+7],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+7],15))
                            )
                        {
                            che5_door7_Fault = 1;
                        }
                        else
                        {
                            che5_door7_Fault = 0;
                        }
                        if(
                           (Bit(g_dataBuffer_Display[1120+256+8],0))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],1))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],2))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],3))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],4))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],5))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],6))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],7))
                         ||(Bit(g_dataBuffer_Display[1120+256+8],15))
                            )
                        {
                            che5_door8_Fault = 1;
                        }
                        else
                        {
                            che5_door8_Fault = 0;
                        }
                        //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                       if ( (Bit(g_dataBuffer_MVB[1120+256],7) ) || (Bit(g_dataBuffer_MVB[1152+256],7) ) )
                       {
                           che5_door1 = 1;
                       }
                       else
                       {
                           che5_door1 = 0;
                       }
                       if ( (Bit(g_dataBuffer_MVB[1120+256],6) ) || (Bit(g_dataBuffer_MVB[1152+256],6) ) )
                       {
                           che5_door2 = 1;
                       }
                       else
                       {
                           che5_door2 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1120+256],5) ) || (Bit(g_dataBuffer_MVB[1152+256],5) ) )
                       {
                           che5_door3 = 1;
                       }
                       else
                       {
                           che5_door3 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1120+256],4) ) || (Bit(g_dataBuffer_MVB[1152+256],4) ) )
                       {
                           che5_door4 = 1;
                       }
                       else
                       {
                           che5_door4 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1120+256],3) ) || (Bit(g_dataBuffer_MVB[1152+256],3) ) )
                       {
                           che5_door5 = 1;
                       }
                       else
                       {
                           che5_door5 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1120+256],2) ) || (Bit(g_dataBuffer_MVB[1152+256],2) ) )
                       {
                           che5_door6 = 1;
                       }
                       else
                       {
                           che5_door6 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1120+256],1) ) || (Bit(g_dataBuffer_MVB[1152+256],1) ) )
                       {
                           che5_door7 = 1;
                       }
                       else
                       {
                           che5_door7 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1120+256],0) ) || (Bit(g_dataBuffer_MVB[1152+256],0) ) )
                       {
                           che5_door8 = 1;
                       }
                       else
                       {
                           che5_door8 = 0;
                       }
                    }
                    else
                    {
                    //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                        che5_door1 = 0;
                        che5_door2 = 0;
                        che5_door3 = 0;
                        che5_door4 = 0;
                        che5_door5 = 0;
                        che5_door6 = 0;
                        che5_door7 = 0;
                        che5_door8 = 0;
                    }

                }
            }

            // 6 车厢
                if((g_dataBuffer_MVB[1118+320]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
                {

                    for(int j=0;j<32;j++)
                    {
                        g_dataBuffer_Display[1104+j+320]=g_dataBuffer_MVB[1104+j+320];
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+1],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+1],15))
                        )
                    {
                        che6_door1_Fault = 1;
                    }
                    else
                    {
                        che6_door1_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+2],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+2],15))
                        )
                    {
                        che6_door2_Fault = 1;
                    }
                    else
                    {
                        che6_door2_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+3],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+3],15))
                        )
                    {
                        che6_door3_Fault = 1;
                    }
                    else
                    {
                        che6_door3_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+4],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+4],15))
                        )
                    {
                        che6_door4_Fault = 1;
                    }
                    else
                    {
                        che6_door4_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+5],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+5],15))
                        )
                    {
                        che6_door5_Fault = 1;
                    }
                    else
                    {
                        che6_door5_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+6],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+6],15))
                        )
                    {
                        che6_door6_Fault = 1;
                    }
                    else
                    {
                        che6_door6_Fault = 0;
                    }

                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+7],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+7],15))
                        )
                    {
                        che6_door7_Fault = 1;
                    }
                    else
                    {
                        che6_door7_Fault = 0;
                    }
                    if(
                       (Bit(g_dataBuffer_MVB[1120+320+8],0))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],1))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],2))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],3))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],4))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],5))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],6))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],7))
                     ||(Bit(g_dataBuffer_MVB[1120+320+8],15))
                        )
                    {
                        che6_door8_Fault = 1;
                    }
                    else
                    {
                        che6_door8_Fault = 0;
                    }
                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                   if ( (Bit(g_dataBuffer_MVB[1120+320],7) ) )
                   {
                       che6_door1 = 1;
                   }
                   else
                   {
                       che6_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_MVB[1120+320],6) )  )
                   {
                       che6_door2 = 1;
                   }
                   else
                   {
                       che6_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+320],5) )  )
                   {
                       che6_door3 = 1;
                   }
                   else
                   {
                       che6_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+320],4) )  )
                   {
                       che6_door4 = 1;
                   }
                   else
                   {
                       che6_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+320],3) )  )
                   {
                       che6_door5 = 1;
                   }
                   else
                   {
                       che6_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+320],2) )  )
                   {
                       che6_door6 = 1;
                   }
                   else
                   {
                       che6_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+320],1) )  )
                   {
                       che6_door7 = 1;
                   }
                   else
                   {
                       che6_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1120+320],0) )  )
                   {
                       che6_door8 = 1;
                   }
                   else
                   {
                       che6_door8 = 0;
                   }
                }
                else
                {
                    if((g_dataBuffer_MVB[1118+32+320]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
                    {

                        for(int j=0;j<32;j++)
                        {
                            g_dataBuffer_Display[1104+j+320]=g_dataBuffer_MVB[1136+j+320];
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+1],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+1],15))
                            )
                        {
                            che6_door1_Fault = 1;
                        }
                        else
                        {
                            che6_door1_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+2],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+2],15))
                            )
                        {
                            che6_door2_Fault = 1;
                        }
                        else
                        {
                            che6_door2_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+3],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+3],15))
                            )
                        {
                            che6_door3_Fault = 1;
                        }
                        else
                        {
                            che6_door3_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+4],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+4],15))
                            )
                        {
                            che6_door4_Fault = 1;
                        }
                        else
                        {
                            che6_door4_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+5],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+5],15))
                            )
                        {
                            che6_door5_Fault = 1;
                        }
                        else
                        {
                            che6_door5_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+6],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+6],15))
                            )
                        {
                            che6_door6_Fault = 1;
                        }
                        else
                        {
                            che6_door6_Fault = 0;
                        }

                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+7],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+7],15))
                            )
                        {
                            che6_door7_Fault = 1;
                        }
                        else
                        {
                            che6_door7_Fault = 0;
                        }
                        if(
                           (Bit(g_dataBuffer_MVB[1120+32+320+8],0))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],1))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],2))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],3))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],4))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],5))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],6))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],7))
                         ||(Bit(g_dataBuffer_MVB[1120+32+320+8],15))
                            )
                        {
                            che6_door8_Fault = 1;
                        }
                        else
                        {
                            che6_door8_Fault = 0;
                        }
                        //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                       if ( (Bit(g_dataBuffer_MVB[1152+320],7) ) )
                       {
                           che6_door1 = 1;
                       }
                       else
                       {
                           che6_door1 = 0;
                       }
                       if ( (Bit(g_dataBuffer_MVB[1152+320],6) ) )
                       {
                           che6_door2 = 1;
                       }
                       else
                       {
                           che6_door2 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1152+320],5) ) )
                       {
                           che6_door3 = 1;
                       }
                       else
                       {
                           che6_door3 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1152+320],4) ) )
                       {
                           che6_door4 = 1;
                       }
                       else
                       {
                           che6_door4 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1152+320],3) ) )
                       {
                           che6_door5 = 1;
                       }
                       else
                       {
                           che6_door5 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1152+320],2) ) )
                       {
                           che6_door6 = 1;
                       }
                       else
                       {
                           che6_door6 = 0;
                       }

                       if (  (Bit(g_dataBuffer_MVB[1152+320],1) ) )
                       {
                           che6_door7 = 1;
                       }
                       else
                       {
                           che6_door7 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1152+320],0) ) )
                       {
                           che6_door8 = 1;
                       }
                       else
                       {
                           che6_door8 = 0;
                       }
                    }
                    else
                    {
                        if(((g_dataBuffer_MVB[1118+320]%256)>1)||((g_dataBuffer_MVB[1118+32+320]%256)>1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                        {
                            if((g_dataBuffer_MVB[1118+320]%256)>1)
                            {
                                if(Bit(g_dataBuffer_MVB[1120+320],7)==1)
                                {
                                    g_dataBuffer_Display[1105+320]=g_dataBuffer_MVB[1105+320];
                                    g_dataBuffer_Display[1121+320]=g_dataBuffer_MVB[1121+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],6)==1)
                                {
                                    g_dataBuffer_Display[1106+320]=g_dataBuffer_MVB[1106+320];
                                    g_dataBuffer_Display[1122+320]=g_dataBuffer_MVB[1122+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],5)==1)
                                {
                                    g_dataBuffer_Display[1107+320]=g_dataBuffer_MVB[1107+320];
                                    g_dataBuffer_Display[1123+320]=g_dataBuffer_MVB[1123+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],4)==1)
                                {
                                    g_dataBuffer_Display[1108+320]=g_dataBuffer_MVB[1108+320];
                                    g_dataBuffer_Display[1124+320]=g_dataBuffer_MVB[1124+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],3)==1)
                                {
                                    g_dataBuffer_Display[1109+320]=g_dataBuffer_MVB[1109+320];
                                    g_dataBuffer_Display[1125+320]=g_dataBuffer_MVB[1125+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],2)==1)
                                {
                                    g_dataBuffer_Display[1110+320]=g_dataBuffer_MVB[1110+320];
                                    g_dataBuffer_Display[1126+320]=g_dataBuffer_MVB[1126+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],1)==1)
                                {
                                    g_dataBuffer_Display[1111+320]=g_dataBuffer_MVB[1111+320];
                                    g_dataBuffer_Display[1127+320]=g_dataBuffer_MVB[1127+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1120+320],0)==1)
                                {
                                    g_dataBuffer_Display[1112+320]=g_dataBuffer_MVB[1112+320];
                                    g_dataBuffer_Display[1128+320]=g_dataBuffer_MVB[1128+320];
                                }

                            }
                            if((g_dataBuffer_MVB[1118+32+320]%256)>1)
                            {

                                if(Bit(g_dataBuffer_MVB[1152+320],7)==1)
                                {
                                    g_dataBuffer_Display[1105+320]=g_dataBuffer_MVB[1105+32+320];
                                    g_dataBuffer_Display[1121+320]=g_dataBuffer_MVB[1121+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],6)==1)
                                {
                                    g_dataBuffer_Display[1106+320]=g_dataBuffer_MVB[1106+32+320];
                                    g_dataBuffer_Display[1122+320]=g_dataBuffer_MVB[1122+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],5)==1)
                                {
                                    g_dataBuffer_Display[1107+320]=g_dataBuffer_MVB[1107+32+320];
                                    g_dataBuffer_Display[1123+320]=g_dataBuffer_MVB[1123+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],4)==1)
                                {
                                    g_dataBuffer_Display[1108+320]=g_dataBuffer_MVB[1108+32+320];
                                    g_dataBuffer_Display[1124+320]=g_dataBuffer_MVB[1124+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],3)==1)
                                {
                                    g_dataBuffer_Display[1109+320]=g_dataBuffer_MVB[1109+32+320];
                                    g_dataBuffer_Display[1125+320]=g_dataBuffer_MVB[1125+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],2)==1)
                                {
                                    g_dataBuffer_Display[1110+320]=g_dataBuffer_MVB[1110+32+320];
                                    g_dataBuffer_Display[1126+320]=g_dataBuffer_MVB[1126+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],1)==1)
                                {
                                    g_dataBuffer_Display[1111+320]=g_dataBuffer_MVB[1111+32+320];
                                    g_dataBuffer_Display[1127+320]=g_dataBuffer_MVB[1127+32+320];
                                }
                                if(Bit(g_dataBuffer_MVB[1152+320],0)==1)
                                {
                                    g_dataBuffer_Display[1112+320]=g_dataBuffer_MVB[1112+32+320];
                                    g_dataBuffer_Display[1128+320]=g_dataBuffer_MVB[1128+32+320];
                                }

                            }



                            if(
                               (Bit(g_dataBuffer_Display[1120+320+1],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+1],15))
                                )
                            {
                                che6_door1_Fault = 1;
                            }
                            else
                            {
                                che6_door1_Fault = 0;
                            }

                            if(
                               (Bit(g_dataBuffer_Display[1120+320+2],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+2],15))
                                )
                            {
                                che6_door2_Fault = 1;
                            }
                            else
                            {
                                che6_door2_Fault = 0;
                            }

                            if(
                               (Bit(g_dataBuffer_Display[1120+320+3],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+3],15))
                                )
                            {
                                che6_door3_Fault = 1;
                            }
                            else
                            {
                                che6_door3_Fault = 0;
                            }

                            if(
                               (Bit(g_dataBuffer_Display[1120+320+4],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+4],15))
                                )
                            {
                                che6_door4_Fault = 1;
                            }
                            else
                            {
                                che6_door4_Fault = 0;
                            }

                            if(
                               (Bit(g_dataBuffer_Display[1120+320+5],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+5],15))
                                )
                            {
                                che6_door5_Fault = 1;
                            }
                            else
                            {
                                che6_door5_Fault = 0;
                            }

                            if(
                               (Bit(g_dataBuffer_Display[1120+320+6],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+6],15))
                                )
                            {
                                che6_door6_Fault = 1;
                            }
                            else
                            {
                                che6_door6_Fault = 0;
                            }

                            if(
                               (Bit(g_dataBuffer_Display[1120+320+7],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+7],15))
                                )
                            {
                                che6_door7_Fault = 1;
                            }
                            else
                            {
                                che6_door7_Fault = 0;
                            }
                            if(
                               (Bit(g_dataBuffer_Display[1120+320+8],0))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],1))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],2))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],3))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],4))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],5))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],6))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],7))
                             ||(Bit(g_dataBuffer_Display[1120+320+8],15))
                                )
                            {
                                che6_door8_Fault = 1;
                            }
                            else
                            {
                                che6_door8_Fault = 0;
                            }
                            //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                           if ( (Bit(g_dataBuffer_MVB[1120+320],7) ) || (Bit(g_dataBuffer_MVB[1152+320],7) ) )
                           {
                               che6_door1 = 1;
                           }
                           else
                           {
                               che6_door1 = 0;
                           }
                           if ( (Bit(g_dataBuffer_MVB[1120+320],6) ) || (Bit(g_dataBuffer_MVB[1152+320],6) ) )
                           {
                               che6_door2 = 1;
                           }
                           else
                           {
                               che6_door2 = 0;
                           }

                           if ( (Bit(g_dataBuffer_MVB[1120+320],5) ) || (Bit(g_dataBuffer_MVB[1152+320],5) ) )
                           {
                               che6_door3 = 1;
                           }
                           else
                           {
                               che6_door3 = 0;
                           }

                           if ( (Bit(g_dataBuffer_MVB[1120+320],4) ) || (Bit(g_dataBuffer_MVB[1152+320],4) ) )
                           {
                               che6_door4 = 1;
                           }
                           else
                           {
                               che6_door4 = 0;
                           }

                           if ( (Bit(g_dataBuffer_MVB[1120+320],3) ) || (Bit(g_dataBuffer_MVB[1152+320],3) ) )
                           {
                               che6_door5 = 1;
                           }
                           else
                           {
                               che6_door5 = 0;
                           }

                           if ( (Bit(g_dataBuffer_MVB[1120+320],2) ) || (Bit(g_dataBuffer_MVB[1152+320],2) ) )
                           {
                               che6_door6 = 1;
                           }
                           else
                           {
                               che6_door6 = 0;
                           }

                           if ( (Bit(g_dataBuffer_MVB[1120+320],1) ) || (Bit(g_dataBuffer_MVB[1152+320],1) ) )
                           {
                               che6_door7 = 1;
                           }
                           else
                           {
                               che6_door7 = 0;
                           }

                           if ( (Bit(g_dataBuffer_MVB[1120+320],0) ) || (Bit(g_dataBuffer_MVB[1152+320],0) ) )
                           {
                               che6_door8 = 1;
                           }
                           else
                           {
                               che6_door8 = 0;
                           }
                        }
                        else
                        {
                        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                            che6_door1 = 0;
                            che6_door2 = 0;
                            che6_door3 = 0;
                            che6_door4 = 0;
                            che6_door5 = 0;
                            che6_door6 = 0;
                            che6_door7 = 0;
                            che6_door8 = 0;
                        }

                    }
                }


    //CTHM_CarNumber_U16	列车号	由显示屏设定
    if(
            ((0<CTHM_TrainNumber_U8)&&(CTHM_TrainNumber_U8<100))&&
            ((0<CTHM_LineNumber_U8) &&(CTHM_LineNumber_U8<100 ))
      )
    {

        if (CTHM_LineNumber_U8<10)
        {
            if ( CTHM_TrainNumber_U8<10)
            {
                che1_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                che2_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                che3_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                che4_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                che5_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                che6_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                che7_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                che8_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";

            }
            else
            {
                if (CTHM_TrainNumber_U8<100)
                {
                    che1_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                    che2_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                    che3_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                    che4_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                    che5_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                    che6_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                    che7_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                    che8_num="0"+StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";

                }
                else
                {
                    che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                    che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                    che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                    che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                    che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                    che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                    che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                    che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";

                }
            }
        }
        else
        {
            if(CTHM_LineNumber_U8<100)
            {
                if ( CTHM_TrainNumber_U8<10)
                {
                       che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                       che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                       che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                       che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                       che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                       che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                       che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                       che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+"0"+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";
                }
                else
                {
                          if(CTHM_TrainNumber_U8<100)
                          {
                              che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                              che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                              che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                              che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                              che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                              che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                              che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                              che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";
                          }
                          else
                          {
                              che1_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"1";
                              che2_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"2";
                              che3_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"3";
                              che4_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"4";
                              che5_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"5";
                              che6_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"6";
                              che7_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"7";
                              che8_num=StrFromInt( CTHM_LineNumber_U8, 10 )+StrFromInt(CTHM_TrainNumber_U8,10 )+"8";
                          }
                      }
                 }
        }
    }
    else
    {

        che1_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"1";
        che2_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"2";
        che3_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"3";
        che4_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"4";
        che5_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"5";
        che6_num=QString("%1").arg(Train_num_Systemini,4,10,QLatin1Char('0'))+"6";

    }





}

void Dialog::createSendData()
{
    //显示屏发送的生命信号
    if (sendData[0] == 255)
    {
        sendData[0] = 0;
    }
    else
    {
       sendData[0]=sendData[0]+1;
    }
    QDate date = QDate::currentDate();
    HMCT_Test_Year_U8  = date.year()-2000;
    HMCT_Test_Month_U8 = date.month();
    HMCT_Test_Day_U8   = date.day();
    QTime time = QTime::currentTime();
    HMCT_Test_Hour_U8   = time.hour();
    HMCT_Test_Minute_U8 = time.minute();
    HMCT_Test_Second_U8 = time.second();


    HMCT_Version_U8=10;  // 显示屏版本号  v1.0
    //显示屏发送所有 字变量高8位低八位交换
    //sendData[0]  = HMI_send_data1&0x00FF;
    sendData[1]  = HMCT_Year_U8;
    sendData[2]  = HMCT_Month_U8;
    sendData[3]  = HMCT_Day_U8;
    sendData[4]  = HMCT_Hour_U8;
    sendData[5]  = HMCT_Minute_U8;
    sendData[6]  = HMCT_Second_U8;
    sendData[7]  = HMCT_TimeSetFlag_B1*128+
                   HMCT_FAUMute_B1*64+
                   HMCT_FAUReset_B1*32+
                   HMCT_BCUSelfDetection_B1*16+
                   HMCT_BackPressureSelection_B1*8+
                   HMCT_BackPressureSelection2_B1*4+
                   HMCT_ACDETestStartFlag_B1*2+
                   HMCT_ACDETestStopFlag*1;

    sendData[8]  = (HMCT_SingleMileSet_U32/65536)/256;
    sendData[9]  = (HMCT_SingleMileSet_U32/65536)%256;
    sendData[10] = (HMCT_SingleMileSet_U32%65536)/256;
    sendData[11] = (HMCT_SingleMileSet_U32%65536)%256;
    sendData[12] = (HMCT_SingleTimeSet_U32/65536)/256;
    sendData[13] = (HMCT_SingleTimeSet_U32/65536)%256;
    sendData[14] = (HMCT_SingleTimeSet_U32%65536)/256;
    sendData[15] = (HMCT_SingleTimeSet_U32%65536)%256;
    sendData[16] = (HMCT_SingleTracPowerSet_U32/65536)/256;
    sendData[17] = (HMCT_SingleTracPowerSet_U32/65536)%256;
    sendData[18] = (HMCT_SingleTracPowerSet_U32%65536)/256;
    sendData[19] = (HMCT_SingleTracPowerSet_U32%65536)%256;
    sendData[20] = (HMCT_SingleBrakePowerSet_U32/65536)/256;
    sendData[21] = (HMCT_SingleBrakePowerSet_U32/65536)%256;
    sendData[22] = (HMCT_SingleBrakePowerSet_U32%65536)/256;
    sendData[23] = (HMCT_SingleBrakePowerSet_U32%65536)%256;
    sendData[24] = (HMCT_SingleSivPowerSet_U32/65536)/256;
    sendData[25] = (HMCT_SingleSivPowerSet_U32/65536)%256;
    sendData[26] = (HMCT_SingleSivPowerSet_U32%65536)/256;
    sendData[27] = (HMCT_SingleSivPowerSet_U32%65536)%256;
    sendData[28] = HMCT_LineNoSet_U8;
    sendData[29] = HMCT_TrainNoSet_U8;
    sendData[30] = HMCT_SingleMileSet_B1        *128+
                   HMCT_SingleTimeSet_B1        *64 +
                   HMCT_SingleTracPowerSet_B1   *32 +
                   HMCT_SingleBrakePowerSet_B1  *16+
                   HMCT_SingleSivPowerSet_B1    *8+
                   HMCT_LineNoSet_B1            *4+
                   HMCT_TrainNoSet_B1           *2+
                   HMCT_ResetDetectionMile_B1   *1;
    sendData[31] = HMCT_Version_U8;

    sendData[32] = HMCT_SetHVACEnableTC1_B1        *128+
                   HMCT_SetHVACEnableMP1_B1        *64 +
                   HMCT_SetHVACEnableM1_B1         *32 +
                   HMCT_SetHVACEnableM2_B1         *16+
                   HMCT_SetHVACEnableMP2_B1        *8+
                   HMCT_SetHVACEnableTC2_B1        *4+
                   HMCT_SetDrEnable_B1             *2+
                   HMCT_SetWheelEnable_B1          *1;


    sendData[33] = HMCT_SetHVACModeTC1_U8;
    sendData[34] = HMCT_SetHVACModeMP1_U8;
    sendData[35] = HMCT_SetHVACModeM1_U8;
    sendData[36] = HMCT_SetHVACModeM2_U8;
    sendData[37] = HMCT_SetHVACModeMP2_U8;
    sendData[38] = HMCT_SetHVACModeTC2_U8;
    sendData[39] = HMCT_SetHVACTempTC1_U8;
    sendData[40] = HMCT_SetHVACTempMP1_U8;
    sendData[41] = HMCT_SetHVACTempM1_U8;
    sendData[42] = HMCT_SetHVACTempM2_U8;
    sendData[43] = HMCT_SetHVACTempMP2_U8;
    sendData[44] = HMCT_SetHVACTempTC2_U8;
    sendData[45] = HMCT_SetDrObsCloseForce1_U8;
    sendData[46] = HMCT_SetDrObsCloseForce2_U8;
    sendData[47] = HMCT_SetDrObsCloseForce3_U8;
    sendData[48] = HMCT_SetDrObsCloseForce4_U8;
    sendData[49] = HMCT_SetDrObsCloseForce5_U8;
    sendData[50] = HMCT_SetDrOpenTime_U8;
    sendData[51] = HMCT_SetDrCloSetDrime_U8;
    sendData[52] = HMCT_SetDrObsNumber_U8;
    sendData[53] = HMCT_SetDrOpenWidthOnObs_U8;
    sendData[54] = HMCT_SetDrObsDetectionDelay_U8;
    sendData[55] = HMCT_SetDrDelayTimeForOpen_U8;
    sendData[56] = HMCT_SetDrDelayTimeForClose_U8;
    sendData[57] = HMCT_SetDrObsRecloseDelay_U8;
    sendData[58] = HMCT_SetWheelDiaTC1_U8;
    sendData[59] = HMCT_SetWheelDiaMp1_U8;
    sendData[60] = HMCT_SetWheelDiaM1_U8;
    sendData[61] = HMCT_SetWheelDiaM2_U8;
    sendData[62] = HMCT_SetWheelDiaMp2_U8;
    sendData[63] = HMCT_SetWheelDiaTC2_U8;

    sendData[64] = HMCT_EmgcyBroadcastID_U8;
    sendData[65] = HMCT_ResetDetectDistance_B1*128 +
                   HMCT_ResetAP1_B1*64 +
                   HMCT_ResetAP2_B1*32+
                   HMCT_HeaterTimingControl*16;
    sendData[66] = HMCT_TimeCheck_U8;
    sendData[67] = HMCT_HeaterWorkingTime_U8;
    sendData[68] = HMCT_HeaterquiescentTime_U8;
    sendData[69] = HMCT_TimeCalibrationFlag_B1*128;
    sendData[70]  = HMCT_Test_Year_U8;
    sendData[71]  = HMCT_Test_Month_U8;
    sendData[72]  = HMCT_Test_Day_U8;
    sendData[73]  = HMCT_Test_Hour_U8;
    sendData[74]  = HMCT_Test_Minute_U8;
    sendData[75]  = HMCT_Test_Second_U8;


    SerialDebug();
}


void Dialog::OnTimer_settingtime()
{

    /*
    显示屏校时逻辑（大连地铁）
    1.显示屏程序启动后4秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
    2.显示屏接收到任意一个显示屏发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
    */

#ifdef USE_MVB_DATA
    if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
    {
        ATC_time_temp1 = CTALL_Year_U8+2000;
        ATC_time_temp2 = CTALL_Month_U8;
        ATC_time_temp3 = CTALL_Day_U8;
        ATC_time_temp4 = CTALL_Hour_U8;
        ATC_time_temp5 = CTALL_Minite_U8;
        ATC_time_temp6 = CTALL_Second_U8;
        if(ATC_time_temp1<2038)
        {
            SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);

        }

        //SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
      //  qDebug() <<"setting time   ok!";
    }
    else
    {
        //qDebug() <<"setting time  not ok!,because ccu is not online!";
    }

#endif

    timer_settingtime.stop();

    //qDebug() <<"timer_settingtime.isActive()"<<timer_settingtime.isActive();


}

void Dialog::OnTimer_calibration()
{
    HMCT_TimeCalibrationFlag_B1=false;
    timer_calibration.stop();
}

void Dialog::OnTimer4s()
{
    // ccu LifeSignal
    if(CCU_life_temp_MVB==g_dataBuffer_MVB[0])
    {
        BitSet(hmi_485_error,4,1);

    }
    else
    {
            CCU_life_temp_MVB=g_dataBuffer_MVB[0];
            BitSet(hmi_485_error,4,0);
            /*
            显示屏校时逻辑（大连地铁）
            1.显示屏程序启动后20秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
            2.显示屏接收到任意一个显示屏发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
            3.显示屏设置时间功能不直接修改显示屏时间，通过设置时间页面修改时间，等待按钮弹起时显示屏同CCU校时一次。
            */


            if(SetTime_flag==false)
            {
                timesetting_num++;
                if(timesetting_num==5)
                {
                        #ifdef USE_MVB_DATA
                            if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
                            {
                                ATC_time_temp1 = CTALL_Year_U8+2000;
                                ATC_time_temp2 = CTALL_Month_U8;
                                ATC_time_temp3 = CTALL_Day_U8;
                                ATC_time_temp4 = CTALL_Hour_U8;
                                ATC_time_temp5 = CTALL_Minite_U8;
                                ATC_time_temp6 = CTALL_Second_U8;
                                if(ATC_time_temp1<2038)
                                {
                                    SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);

                                }


                                //SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
                              //  qDebug() <<"setting time   ok!";
                            }
                            else
                            {
                                // qDebug() <<"setting time  not ok!,because ccu is not online!";
                            }
                        #endif
                            SetTime_flag=true;

                }


            }

    }

    CheckLifeSignalChange();
}

void Dialog::ShowFaultPage()
{
//    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//    pPage->ChangePage(PAGE_INDEX_FAULTINFO);
}

// call this function when serial have data.
void Dialog::getRevDataSlot( int const pageNo, const QByteArray data, int const length )
{

}

void Dialog::CheckLifeSignalChange()
{
    //TC1_HMI=1;
    //当处于TC1端时弹出TC1端以太网通信异常故障
    if (Bit(hmi_485_error,4) && (TC1_HMI==1))
        g_485_comm_err_flg1 = true;
    else
        g_485_comm_err_flg1 = false;

    if (Bit(hmi_485_error,4) && (TC2_HMI==1))
        g_485_comm_err_flg2 = true;
    else
        g_485_comm_err_flg2 = false;


/*
    //if 485 error ,no more deal with other errors.
    if((g_485_comm_err_flg1  || g_485_comm_err_flg2))
    {

        return;
    }



    if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
    {
        g_riom1_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1873], 15 );
        g_riom6_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1875], 12 );
        g_riom2_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1874], 6 );
        g_riom5_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1875], 15 );
        g_riom3_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1874], 15 );
        g_riom4_gw123_comm_err_flg=Bit(~g_dataBuffer_Display[1875], 4 );

        g_ccu1_comm_err_flg=Bit(~g_dataBuffer_Display[1872], 7 );
        g_ccu2_comm_err_flg=Bit(~g_dataBuffer_Display[1872], 6 );
        g_tcu1_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 3 );
        g_tcu2_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 2 );
        g_tcu3_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 1 );
        g_tcu4_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 0 );
        //g_tcu1_comm_err_flg=!((bool) CTHM_DCU2_Online_B1);
//        g_tcu2_comm_err_flg=!((bool) CTHM_DCU3_Online_B1);
//        g_tcu3_comm_err_flg=!((bool) CTHM_DCU4_Online_B1);
//        g_tcu4_comm_err_flg=!((bool) CTHM_DCU5_Online_B1);
        g_bcu1_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 7 );
        g_bcu2_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 6 );
        g_bcu3_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 5 );
        g_bcu4_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 4 );
        g_acu1_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 15 );
        g_acu2_comm_err_flg=Bit(~g_dataBuffer_Display[1877], 14 );
        g_atc1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 15 );
        g_atc2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 14 );

        //g_atc1_comm_err_flg=!((bool) CTHM_ATC1_Online_B1);
        //g_atc2_comm_err_flg=!((bool) CTHM_ATC2_Online_B1);
        g_pis1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 13 );
        g_pis2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 12 );
        g_erm1_comm_err_flg=Bit(~g_dataBuffer_Display[1876], 15 );
        g_erm2_comm_err_flg=Bit(~g_dataBuffer_Display[1876], 14 );
        g_fas1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 11 );
        g_fas2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 10 );
        g_door1_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 7 );
        g_door2_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 6 );
        g_door3_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 5 );
        g_door4_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 4 );
        g_door5_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 3 );
        g_door6_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 2 );
        g_door7_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 1 );
        g_door8_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 0 );
        g_door9_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 15 );
        g_door10_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 14 );
        g_door11_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 13 );
        g_door12_comm_err_flg=Bit(~g_dataBuffer_Display[1878], 12 );
        g_hvac1_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 7 );
        g_hvac2_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 6 );
        g_hvac3_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 5 );
        g_hvac4_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 4 );
        g_hvac5_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 3 );
        g_hvac6_comm_err_flg=Bit(~g_dataBuffer_Display[1879], 2 );


        g_riom1_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1873], 15 );
        g_riom6_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1875], 12 );
        g_riom2_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1874], 6 );
        g_riom5_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1875], 15 );
        g_riom3_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1874], 15 );
        g_riom4_gw123_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1875], 4 );

        g_ccu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1872], 7 );
        g_ccu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1872], 6 );
        g_tcu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 3 );
        g_tcu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 2 );
        g_tcu3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 1 );
        g_tcu4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 0 );
        //g_tcu1_comm_err_flg_temp=!((bool) CTHM_DCU2_Online_B1);
//        g_tcu2_comm_err_flg_temp=!((bool) CTHM_DCU3_Online_B1);
//        g_tcu3_comm_err_flg_temp=!((bool) CTHM_DCU4_Online_B1);
//        g_tcu4_comm_err_flg_temp=!((bool) CTHM_DCU5_Online_B1);
        g_bcu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 7 );
        g_bcu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 6 );
        g_bcu3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 5 );
        g_bcu4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 4 );
        g_acu1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 15 );
        g_acu2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1877], 14 );
        g_atc1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 15 );
        g_atc2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 14 );

        //g_atc1_comm_err_flg_temp=!((bool) CTHM_ATC1_Online_B1);
        //g_atc2_comm_err_flg_temp=!((bool) CTHM_ATC2_Online_B1);
        g_pis1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 13 );
        g_pis2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 12 );
        g_erm1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1876], 15 );
        g_erm2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1876], 14 );
        g_fas1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 11 );
        g_fas2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 10 );
        g_door1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 7 );
        g_door2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 6 );
        g_door3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 5 );
        g_door4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 4 );
        g_door5_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 3 );
        g_door6_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 2 );
        g_door7_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 1 );
        g_door8_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 0 );
        g_door9_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 15 );
        g_door10_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 14 );
        g_door11_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 13 );
        g_door12_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1878], 12 );
        g_hvac1_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 7 );
        g_hvac2_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 6 );
        g_hvac3_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 5 );
        g_hvac4_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 4 );
        g_hvac5_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 3 );
        g_hvac6_comm_err_flg_temp=Bit(~g_dataBuffer_Display[1879], 2 );

    }

*/
}

bool Dialog::CheckLifeSignalValue(WORD &temp, WORD data)
{
    bool ret;
    if (temp == data)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }
    temp = data;
    return ret;
}

void Dialog::SerialDebug()
{
    if(serialDebugDlg.serialSetList.length() != 0)
    {
        int nOperation = 0;
        for(int i = 0; i < serialDebugDlg.serialSetList.length(); i++)
        {
            nOperation = serialDebugDlg.serialSetList[i].nOperation;
            if(nOperation == 0)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 1)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 2)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 3)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
            }
        }
    }
}

QString Dialog::SendText(QString sc_com)
{
    QString msg = sc_com;

    if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    {
         //   qDebug() << "SendText"<<msg.length();
            msg = msg + "\n";
            QByteArray data(msg.toAscii());
            ttyUSB_sc->write(data);
            // usleep(500);
            QString str;
            int read_num=0;
            while (1)
            {

                        str=ttyUSB_sc->readLine();

                        if(read_num>5)
                        {

           //                 qDebug() << "read_num :"<<read_num<<"length:"<<str.length();
                            read_num=0;
                            break;//while()
                        }
                        else
                        {
                            read_num++;
                        }
           //             qDebug() << "ttyUSB_sc->readLine()"<<"str.isEmpty()"<<str.isEmpty();


                        if(str.isEmpty())
                        {

                        }
                        else
                        {
           //                 qDebug()<<str<<"length:"<<str.length();
                            break;
                        }
                        #ifndef windows_demo
                        usleep(200);
                        #endif  //windows_demo

            }
            return str;
    }//if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    return "";
}

void Dialog::ReadFile()
{
   // qDebug() << "Widget::ReadFile()";

    QString str;
    while ((str = ttyUSB_sc->readLine()) != NULL)
    {
     //   qDebug() << str;
        //ui->text->append(str);
    }
}


void Dialog::OnLogTimer()
{
#ifdef LOG_OPEN
    m_log.Begin();

    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
    m_log.Log("CommunicateErr:" + QString::number(CLog::m_nCommErr) + "\n");
    m_log.Log("ErrPackageNum:"+ QString::number(CLog::m_nErrPackage) + "\n");
    m_log.Log("TimeSkipNum:" + QString::number(CLog::m_nTimeSkip) + "\n");
    if(UpdateDataTimer.isActive())
        m_log.Log("UpdateDataTimer is Active.\n");
    else
        m_log.Log("UpdateDataTimer is Dead.\n");
    m_log.Log("Memory info:\n");
    system("vmstat>>/root/mem.txt");
    string memInfoStr, tmpstr;
    fstream fs;
    fs.open("/root/mem.txt",ios_base::in);
    while(!fs.eof())
    {
        getline(fs, tmpstr, '\n');
        memInfoStr += tmpstr + "\n";
    }
    fs.close();
    system("rm -f /root/mem.txt");

    m_log.Log(QString(memInfoStr.c_str()) + "\n\n");

    m_log.End();
#endif
}


//  read hmi power id
void Dialog::OnTimer30s()
{



#ifndef windows_demo
    QString read_str;

   OpenPort();
   read_str=SendText("!#75");
   if(read_str.isEmpty())
   {

   }
   else
   {
       QByteArray data(read_str.toAscii());
       for (int i = 0; i < data.length(); i++)
       {
           //data.at(i);
           test_tempdata[16+i]=data.at(i);
       }

   }

   ClosePort();


#endif  //windows_demo

}
void Dialog::C2Hmorethan3sFunc()
{
    QDateTime dateTimeSystem;
    QDateTime dateTimeCcu;
    QDate date( CTALL_Year_U8+2000, CTALL_Month_U8, CTALL_Day_U8 );
    QTime time( CTALL_Hour_U8, CTALL_Minite_U8, CTALL_Second_U8 );
    dateTimeCcu.setDate(date);
    dateTimeCcu.setTime(time);
    int timeDiff = ( dateTimeCcu.toTime_t()-dateTimeSystem.currentDateTime().toTime_t());

    //qDebug()<< "CCU TIME: " <<dateTimeCcu.toTime_t() << "IDU TIME: " <<dateTimeSystem.currentDateTime().toTime_t()<<"diff: "<<timeDiff;
    if(bool(timeDiff<-6 )||bool(timeDiff>6))
    {
#ifdef USE_MVB_DATA

      //  if(ATC_time_temp1<2038)
        if(CTALL_Year_U8<38)
        {
             time_Calibrate_Flag++;
            HMCT_TimeCalibrationFlag_B1 = true;
            SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
            timer_calibration.start(5000);
        }
#endif
    }
    else
    {

    }
/*
    if(HMCT_TimeCalibrationFlag_B1)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            time_calbration_timer--;

            if (time_calbration_timer == 0)
            {
                HMCT_TimeCalibrationFlag_B1=false;
            }
        }
    }
*/

//    dateTimeCcu.setDate(date);
//    dateTimeCcu.setTime(time);
//    ATC_time_temp1 = CTALL_Year_U8+2000;
//    ATC_time_temp2 = CTALL_Month_U8;
//    ATC_time_temp3 = CTALL_Day_U8;
//    ATC_time_temp4 = CTALL_Hour_U8;
//    ATC_time_temp5 = CTALL_Minite_U8;
//    ATC_time_temp6 = CTALL_Second_U8;
}

void Dialog::OpenPort()
{
#ifndef windows_demo
    // qDebug() << "OpenPort";

     ttyUSB_sc = new QFile("/dev/ttyUSB_SC", this);
 //    connect(ttyUSB_sc, SIGNAL(readyRead()), this, SLOT(ReadFile()));
     if (!ttyUSB_sc->open(QIODevice::ReadWrite))
     {
 //        qDebug() <<"Open port failed\n";
         free(ttyUSB_sc);
         ttyUSB_sc = NULL;
         return;
     }
#endif  //windows_demo


}


void Dialog::ClosePort()
{
#ifndef windows_demo
    // close
    if (ttyUSB_sc != NULL)
    {

        ttyUSB_sc->close();
    //    qDebug()<<"closeport";
        ttyUSB_sc = NULL;

    }
#endif  //windows_demo

}

#ifndef windows_demo




int Dialog::InitSerialPort()
{

    MODEMDEVICE = "/dev/ttyUSB_SC";


    if ((fd = ::open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
       // qDebug() << "InitSerialPort not ok! fd="<<fd;
        return 1;

    }
    //qDebug() << "InitSerialPort  ok! fd="<<fd;
    return 0;
}

void Dialog::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    ::close(fd);
    isOpen = false;
}

int Dialog::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

int Dialog::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData,100);
       // qDebug() << "read() nread ="<<nread;

    }
    mutexRead.unlock();
    return nread;
}
//读报警和关机温度
void Dialog::BackLightCtrl()
{

            char cmd[20] ; // cmd 75,读报警和关机温度
            for(int i=0;i<20;i++)
            {
                    cmd[i]=0;
            }
            cmd[0] = 0x1B;
            cmd[1] = 0x23;
            cmd[2] = 0x37;
            cmd[3] = 0x35;
            cmd[4] = 0x0D;
            int len = 0;
            //     system("setserial /dev/ttyS2 irq 10");
            if(InitSerialPort() != 0 )
            return;
            if( ComWrite( cmd, 5 ) == 5 )
            {
                    while(1)//while 1
                    {
                        len = ComRead( cmd );
                        test_tempdata[30]=len;
                        usleep(200);
                        if(len>0)
                        {
                            for(int i=0;i<8;i++)
                            {
                                    test_tempdata[32+i]=cmd[i];
                            }
                            while(1) //while 2
                            {
                                len = ComRead( cmd );
                                usleep(200);
                                if(len>0)
                                {
                                        test_tempdata[31]=len;
                                        for(int i=0;i<len;i++)
                                        {
                                                test_tempdata[40+i]=cmd[i];
                                        }
                                        while(1)//while 3
                                        {
                                                len = ComRead( cmd );
                                                usleep(200);
                                                test_tempdata[48]=len;
                                                if(len>0)
                                                {
                                                        //test_tempdata[31]=len;
                                                        for(int i=0;i<len;i++)
                                                        {
                                                            test_tempdata[48+i]=cmd[i];
                                                        }
                                                        break;
                                                }
                                        }
                                        break;
                                }
                            }// end  while 2
                            break;
                        }//if(len>0)

                        
                    }//end while 1
             } //if( ComWrite( cmd, 5 ) == 5 )
             usleep(200);
             CloseSerialPort();
}
void Dialog::SetWarningTemperature()
{
    char cmd[] = {0x1B,0x23,0x32,0x39,0x2C,0x38,0x30,0x0D}; // cmd 29,temperatue 80

    if(InitSerialPort() != 0 )
        return;
    ComWrite(cmd, sizeof(cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
// set HMI in Tc1 or Tc2 ? and set IP address
void Dialog::HMI_Initial_Set()
{
//        char cmd[20] ; // cmd 94,device address
//        cmd[0] = 0x1B;
//        cmd[1] = 0x23;
//        cmd[2] = 0x39;
//        cmd[3] = 0x34;
//        cmd[4] = 0x0D;
//        int len = 0;
//        int timer1 = 0;
//        int power_id_ok=0;

//        //system("setserial /dev/ttyS2 irq 10");
//        if(InitSerialPort() != 0 )
//        {
//            return;
//        }
//        //读电源ID编码3次，有返回值则跳出for循环
//        for(int i=0;i<3;i++)
//        {
//                timer1=0;
//                if( ComWrite( cmd, 5 ) == 5 )
//                {
//                    //发送读取电源编码命令成功，则进入循环等待h8返回的数据
//                    while(1)
//                    {
//                        len = ComRead( cmd );
//                        usleep(300);

//                        if(timer1>180)
//                        {
//                            break;    //while
//                        }
//                        else
//                        {
//                            timer1++;
//                        }
//                        if( len==8 )
//                        {
//                            for(int j=0;j<len;j++)
//                            {
//                                test_tempdata[j]=cmd[j];
//                            }
//                            if( cmd[1]==0x01 && cmd[2]==0x23 && cmd[3]==0x39 && cmd[4]==0x34 && cmd[5]==0x2C )
//                            {
//                                if((cmd[6]==0x31)||(cmd[6]==0x30))
//                                {
//                                    if(cmd[6]==0x31)
//                                    {
//                                        TC1_HMI=1;
//                                        TC2_HMI=0;
//                                        system("ifconfig eth0 10.10.25.21");
//                                        //
//                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
//                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
//                                        power_id_ok=1;
//                                    }
//                                    if(cmd[6]==0x30)
//                                    {
//                                        TC2_HMI=1;
//                                        TC1_HMI=0;
//                                        system("ifconfig eth0 10.10.25.23");
//                                        //
//                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
//                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
//                                        power_id_ok=1;
//                                    }
//                                }

//                            }
//                            break;   //while
//                        }
////                        else    //if( len==8 )
////                        {
////                            break;   //while
////                        }

//                    }

//                    if(power_id_ok==1)
//                    {
//                        test_tempdata[64]=i;
//                        test_tempdata[65]=power_id_ok;
//                        test_tempdata[66]=timer1;
//                        break;   //for
//                    }
//                }
//                else
//                {
//                    usleep(300);
//                    //continue;
//                }
//        }
//        //没有正确读到电源编码，则使用上次正确读取编码时的数值
//        if(power_id_ok==0)
//        {
//            if(TC1_HMI_ini==1)
//            {
//                TC1_HMI=1;
//                TC2_HMI=0;
//                system("ifconfig eth0 10.10.25.21");
//            }
//            else
//            {
//                if(TC2_HMI_ini==1)
//                {
//                        TC2_HMI=1;
//                        TC1_HMI=0;
//                        system("ifconfig eth0 10.10.25.23");
//                }
//                else
//                {
//                    TC2_HMI=0;
//                    TC1_HMI=0;
//                }
//            }

//            //test_tempdata[64]=i;
//            test_tempdata[65]=power_id_ok;
//            test_tempdata[66]=timer1;

//        }
//        usleep(200);
//        CloseSerialPort();
}






int Dialog::read_h8_response(int fd)
{

    int offset, n;

    for (offset=0;;) {
        test_tempdata[21]+=1;
        test_tempdata[18]=sizeof(report);
        n=read(fd, report+offset, 8);

        test_tempdata[28]=offset;
        test_tempdata[29]=n;

        if (n <= 0) {
            test_tempdata[19]+=1;
            if ((n < 0) && (errno == EINTR)) continue;
            return 0;
        }  // end if
        if ((offset == 0) && (n == 1)) {
            test_tempdata[20]+=1;
            if ((report[0] == '\006') || (report[0] == '\025')) {
                return 1;
            } // end if
            return 0;
        } // end
        offset+=n;

            report[offset]=0;
        if (report[offset-1] == '\n')
        {
            break;
            test_tempdata[22]+=1;
        }

    } // end for
    test_tempdata[23]+=1;
    return offset;
    // test answer

//    printf("\nout:");
//    for(n=0;n<offset;n++)
//        printf("%x(%c)--",report[n],report[n]);
//    printf("\n");

//        return 0;
}
#endif  //windows_demo


