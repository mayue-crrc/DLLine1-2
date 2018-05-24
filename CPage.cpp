#include "CPage.h"
#include  <qdatetime.h>
#include "dialog.h"

extern vector<CPage*>  g_PageVec;

extern int g_RealTimeFaultsNum;

CPage::CPage()
{
}

CPage::~CPage()
{
    m_painter.end();
    for_each(m_ctrlmap.begin(), m_ctrlmap.end(), DELMAPOBJ<CONTROLPAIR>());
    SAFE_DELETE(m_pixmap);
}

void CPage::InitPage(
                      __in int nWidth,     //pixmap width
                      __in int nHeight,    //pixmap height
                      __in int nPageIndex, //page index
                      __in QDialog* pParent//parent pointer
                     )
{
    m_nWidth     = nWidth;
    m_nHeight    = nHeight;
    m_nPageIndex = nPageIndex;
    m_pDlg       = pParent;
    m_pixmap = new QPixmap(nWidth,nHeight);
    m_painter.begin(m_pixmap);
    m_painter.setRenderHint(QPainter::SmoothPixmapTransform); //使用平滑的pixmap变换算法（双线性查值算法），而不是近邻差值算法。
    //set pixmap bk color to black.
    m_painter.fillRect(0,0,m_nWidth,m_nHeight, Qt::black);
}

void  CPage::InitCommonLabel(
                             __in int nID,
                             __in int nType
                            )
{
    if (nType == CONTROL_LABEL )
    {
//        switch(nID)
//        {
//        case IDLB_COM_DATE:
//        case IDLB_COM_TIME:
//            ((CLabel*)GetDlgItem(nID))->SetAlignment(Qt::AlignLeft);
//            break;
//        default:
//            break;
//        }
        if (nID == IDLB_COM_DATE)
        {
//            QDate date = QDate::currentDate();
//            QString str;
//            str = QString::number(date.year()) + QObject::trUtf8("-")+
//                  QString::number(date.month()) + QObject::trUtf8("-")+
//                  QString::number(date.day()) + QObject::trUtf8("");
//            GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
            {

                QString str,Month,Day;
                Month.sprintf("%02d",CTALL_Month_U8);
                Day.sprintf("%02d",CTALL_Day_U8);
                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
                      Month + QObject::trUtf8("-")+
                      Day;

                GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


            }
            else
            {
                QDate date = QDate::currentDate();
                QString str;
                str = QString::number(date.year()) + QObject::trUtf8("-")+
                      QString::number(date.month()) + QObject::trUtf8("-")+
                      QString::number(date.day()) + QObject::trUtf8("");
                GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            }
        }
        if (nID == IDLB_COM_TIME)
        {
//            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//            GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
            if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
            {
//                QString time ;
//                time = QString::number(CTALL_Hour_U8) + QObject::trUtf8(":")+
//                      QString::number(CTALL_Minite_U8) + QObject::trUtf8(":")+
//                      QString::number(CTALL_Second_U8) ;
                QString time ,Hour,Minute,Second;
                Hour.sprintf("%02d",CTALL_Hour_U8);
                Minute.sprintf("%02d",CTALL_Minite_U8);
                Second.sprintf("%02d",CTALL_Second_U8);
                time = Hour + QObject::trUtf8(":")+
                      Minute+ QObject::trUtf8(":")+
                      Second;
                //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
                GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
            else
            {
                QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
                //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
                GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
        }

    }
}

void CPage::DrawByRom(ROMINFO pRomInfo)
{
    int nRomSize = pRomInfo.nRomSize;

    for (int i=0; i<nRomSize; i++)
    {
        AddControl(pRomInfo.pRom[i]->showStr,
                   pRomInfo.pRom[i]->rc,
                   pRomInfo.pRom[i]->fgColor,
                   pRomInfo.pRom[i]->font,
                   pRomInfo.pRom[i]->bkColor,
                   pRomInfo.pRom[i]->nID,
                   pRomInfo.pRom[i]->nControlType);


        InitCommonLabel(pRomInfo.pRom[i]->nID,pRomInfo.pRom[i]->nControlType);
    }
    OnInitPage();
}

void CPage::AddControl(
                        __in QString ctrl_str,     //ctrl string
                        __in QRect ctrl_rc,        //ctrl rect
                        __in QColor ctrl_txtcolor, //ctrl text color
                        __in QFont ctrl_font,      //ctrl text font
                        __in QColor ctrl_bkcolor,  //ctrl bk color
                        __in int ctrl_id,          //ctrl id
                        __in int ctrl_type         //ctrl type
                       )
{

    int a,b,c,d;

    ctrl_rc.getRect(&a,&b,&c,&d);
    if(c>1){c=SCREEN_factor*c;}
    if(d>1){d=SCREEN_factor*d;}
    ctrl_rc.setRect(a*SCREEN_factor,b*SCREEN_factor,c,d);

    if (m_ctrlmap[ctrl_id] != NULL)
    {
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
    }

    switch(ctrl_type)
    {
    case CONTROL_BUTTON:
        {

            CButton* pBtn = new CButton();
            pBtn->Create(ctrl_str,
                         ctrl_rc,
                         ctrl_txtcolor,
                         ctrl_font,
                         ctrl_bkcolor,
                         &m_painter,
                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBtn);
            break;
        }
     case CONTROL_EDIT:
        {

            CEdit* pEdit = new CEdit();
            pEdit->Create(ctrl_str,
                          ctrl_rc,
                          ctrl_txtcolor,
                          ctrl_font,
                          ctrl_bkcolor,
                          &m_painter,
                          ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pEdit);
            break;
        }
    case CONTROL_LABEL:
        {

            CLabel* pLabel = new CLabel();
            pLabel->Create(ctrl_str,
                           ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLabel);
            break;
        }
    case CONTROL_IMAGE:     
        {

            CImageCtrl* pImageCtrl = new CImageCtrl();
            pImageCtrl->Create(ctrl_str,
                               ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pImageCtrl);
            break;
        }
    case CONTROL_LINE:
        {
            CLine* pLineCtrl = new CLine();
            pLineCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLineCtrl);
            break;
        }
    case CONTROL_CIRCLE:
        {

            CCircle* pCircleCtrl = new CCircle();
            pCircleCtrl->Create(ctrl_str,
                                ctrl_rc,
                                ctrl_txtcolor,
                                ctrl_font,
                                ctrl_bkcolor,
                                &m_painter,
                                ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCircleCtrl);
            break;
        }
    case CONTROL_SCROLL:
        {
            CScrollCtrl* pScrollCtrl = new CScrollCtrl();
            pScrollCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pScrollCtrl);
            break;
        }
    case CONTROL_TRAIN:
        {

            CTrainCtrl* pTrainCtrl = new CTrainCtrl();
            pTrainCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainCtrl);
            break;
        }
    case CONTROL_ARROW:
        {

            CArrowCtrl* pArrowCtrl = new CArrowCtrl();
            pArrowCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pArrowCtrl);
            break;
        }
    case CONTROL_TRAINDIAGRAM:
        {
            CTrainDiagramCtrl* pTrainDiagramCtrl = new CTrainDiagramCtrl();
            pTrainDiagramCtrl->Create(ctrl_str,
                                      ctrl_rc,
                                      ctrl_txtcolor,
                                      ctrl_font,
                                      ctrl_bkcolor,
                                      &m_painter,
                                      ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainDiagramCtrl);
            break;
        }
    default:
        ASSERT(false); //error:unkown control type.
        break;
    }
}

void CPage::RemoveControl(
                           __in int ctrl_id
                          )
{
    if (m_ctrlmap.find(ctrl_id) != m_ctrlmap.end())
    {
        m_painter.setBrush(Qt::black);
        m_painter.setPen(Qt::black);
        m_painter.drawRect(GetDlgItem(ctrl_id)->GetCtrlRect());
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
        m_ctrlmap.erase(ctrl_id);
    }
}

void CPage::ResetButtonState()
{
    for (CONTROLMAP::iterator it = m_ctrlmap.begin(); it != m_ctrlmap.end(); ++it)
    {
        if (it->second->IsKindOf("CButton"))
        {
            CButton* pButton = (CButton*)it->second;
            if (pButton->m_bAutoUpState)
            {
               pButton->ChangeButtonState(LBUTTON_UP);

            }
        }
//        else if (it->second->IsKindOf("CScrollCtrl"))
//        {
//            CScrollCtrl* pScrollCtrl = (CScrollCtrl*)it->second;
//            pScrollCtrl->SetSelectedPos(false,pScrollCtrl->m_LButtonDownPos);
//        }
    }
}

bool CPage::TestControlExists(
                              __in int ctrl_id
                             )
{
    if (find_if (m_ctrlmap.begin(), m_ctrlmap.end(), bind2nd(FINDKEY<CONTROLPAIR>(),ctrl_id)) == m_ctrlmap.end())
    {
        return false;
    }
    return true;
}

CControlInterface* CPage::GetDlgItem(
                                     __in int ctrl_id // control id
                                    )
{
    if (!TestControlExists(ctrl_id))
    {
        QMessageBox::warning(NULL,
                             "error",
                             "page index: "+QString::number(m_nPageIndex) +"\ncontrol id: 0x"+
                             QString::number(ctrl_id,16)+ "not found!",
                             QMessageBox::Ok,QMessageBox::Ok);
        assert(false);  //error: cant find control
    }

    return m_ctrlmap[ctrl_id];
}

void CPage::ChangePage(
                       __in int PageIndex // page index
                      )
{
  //  PageIndex=PAGE_INDEX_COMMSTATUS;
    CPage* pPage = NULL;
    Dialog* pDlg = (Dialog*)GetParentDlg();

    CGlobal::m_nPrePageIndex = CGlobal::m_nCurPageIndex;
    CGlobal::m_nNextPageIndex = PICTURE_INDEX(PageIndex);
    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_LEAVEPAGE);

    CGlobal::m_nCurPageIndex = PICTURE_INDEX(PageIndex);

    if (g_PageVec[CGlobal::m_nCurPageIndex] == NULL) {
        CREATE_PAGE(CGlobal::m_nCurPageIndex,pDlg)
            }

    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->OnUpdatePage();
    pPage->ConnectEvent(WM_SHOWPAGE);
}

CPage* CPage::GetPage(
                       __in int PageIndex
                     )
{
    Dialog* pDlg = (Dialog*)GetParentDlg();
    if (g_PageVec[PageIndex] == NULL)
        CREATE_PAGE(PageIndex,pDlg)

    return g_PageVec[PageIndex];
}

void CPage::UpdateVoltage(int id)
{
    //DR1CT_LineVoltage_U16		4节动车的网压最大值
    int Max_LineVoltage=0;
    if(CTHM_DCU2_Online_B1||CTHM_DCU3_Online_B1||CTHM_DCU4_Online_B1||CTHM_DCU5_Online_B1||CTHM_SIV1_Online_B1||CTHM_SIV2_Online_B1)
    {
        if(CTHM_DCU2_Online_B1)
        {
            if(DR1CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR1CT_LineVoltage_U16;
            }
        }
        if(CTHM_DCU3_Online_B1)
        {
            if(DR2CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR2CT_LineVoltage_U16;
            }
        }
        if(CTHM_DCU4_Online_B1)
        {
            if(DR3CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR3CT_LineVoltage_U16;
            }
        }
        if(CTHM_DCU5_Online_B1)
        {
            if(DR4CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR4CT_LineVoltage_U16;
            }
        }
        if(CTHM_SIV1_Online_B1)
        {
            if(SIV1CT_InputVoltageUd_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=SIV1CT_InputVoltageUd_U16;
            }
        }

        if(CTHM_SIV2_Online_B1)
        {
            if(SIV2CT_InputVoltageUd_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=SIV2CT_InputVoltageUd_U16;
            }
        }

        if (Max_LineVoltage < 1000)
        {
            voltage_color = 2;
        }
        else if (1800 < Max_LineVoltage)
        {
            voltage_color = 2;
        }
        else if ((999<Max_LineVoltage) && (Max_LineVoltage<1801))
        {
            voltage_color = 0;
        }

    }
    else
    {
        voltage_color = 4;

    }

    SetVoltageLabelColor(id, voltage_color);

    SetVoltageValue(id, Max_LineVoltage);
    SetVoltageFontColor(id, voltage_color);

   // ((CLabel *) GetDlgItem(id))->SetBorderColor(Qt::white);

}

void CPage::UpdateCurrent(int id)
{
        //DR2CT_IntermediateCurrent_U16                  	4节动车的中间电流相加
    int Net_current=0;
    if(CTHM_DCU2_Online_B1||CTHM_DCU3_Online_B1||CTHM_DCU4_Online_B1||CTHM_DCU5_Online_B1)
    {
        if(CTHM_DCU2_Online_B1)
        {
                Net_current=Net_current+DR1CT_IntermediateCurrent_U16;
        }
        if(CTHM_DCU3_Online_B1)
        {
            Net_current=Net_current+DR2CT_IntermediateCurrent_U16;
        }
        if(CTHM_DCU4_Online_B1)
        {
            Net_current=Net_current+DR3CT_IntermediateCurrent_U16;
        }
        if(CTHM_DCU5_Online_B1)
        {
            Net_current=Net_current+DR4CT_IntermediateCurrent_U16;
        }
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));

    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);

    }
    SetCurrentValue(id, Net_current);

}

void CPage::UpdateSpeed(int id)
{
    if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    if (CTHM_TrainSpeed_U16==65535)
    {
        this->GetDlgItem(id)->SetCtrlText("---km/h");

    }
    else{
    this->GetDlgItem(id)->SetCtrlText(QString::number(int(CTHM_TrainSpeed_U16*0.01)).append(" km/h"));
}

}

void CPage::UpdateTractionLevel(int id)
{

    if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
    {
        SetTractionBrakeLabelColor(id, 0);

        if(CTHM_EmgcyBrakeState_B1||CTHM_BrakeState_B1||CTHM_QuickBrake_B1||CTHM_TractionState_B1)
        {
            // CTHM_Braking_B1	制动指令
            if (CTHM_BrakeState_B1)
            {
                SetTractionBrakeLabelColor(id, 1);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("制动 ").append(QString::number(CTHM_BrakeLevel_U8)).append("%"));
                SetTractionBrakeFontColor(id, 0);
            }
            // CTHM_Braking_B1	快速制动
            if (CTHM_QuickBrake_B1)
            {
                SetTractionBrakeLabelColor(id, 1);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8(" 快速制动"));
                SetTractionBrakeFontColor(id, 0);
            }
            //CTHM_Driving_B1	牵引指令
            if (CTHM_TractionState_B1)
            {
                SetTractionBrakeLabelColor(id, 2);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("牵引 ").append(QString::number(CTHM_TractionLevel_U8)).append("%"));
                SetTractionBrakeFontColor(id, 1);
            }
            //CTHM_EmBke_B1	紧急制动
            if (CTHM_EmgcyBrakeState_B1)
            {

                SetTractionBrakeLabelColor(id, 3);
                SetTractionBrakeFontColor(id, 0);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("紧急制动"));

            }

        }
        else
        {
            //CTHM_Sliding_B1	惰行

                SetTractionBrakeLabelColor(id, 0);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("惰行 "));
                SetTractionBrakeFontColor(id, 0);

        }
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8(""));
        SetTractionBrakeLabelColor(id, 5);
        SetTractionBrakeFontColor(id, 1);
    }

}

void CPage::UpdateCarSpeedMode(int id)
{
    //CTHM_ATCOn_B1	ATC在线
    if (Bit(CCU_HMI_222_9, 4 ) == 1)
    {
        //ATCT_CBTC_B1	ATC运营模式-基于无线列车运营
        if(Bit(ATC_A10_2, 16))
        {
            //ATCT_Fast_B1	快慢车
            if(Bit(ATC_A10_4, 11))
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("快车"));
            }else
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("慢车"));
            }
        }
        else
        {
            if ((Bit(CCU_HMI_222_16, 8 )) ||(Bit(CCU_HMI_222_16, 7 ))== 1)   //PIS1 PIS2
            {
                   if(Bit(PIS_Master_9i0_7, 11))
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("快车"));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("慢车"));
                   }

            }

        }
    }

}

void CPage::SetVoltageValue(int id, int aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" V"));
}



void CPage::SetCurrentValue(int id, int16_t aValue)
{

    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" A"));

}




// set V label back ground color
void CPage::SetVoltageLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

// Set V Font color
void CPage::SetVoltageFontColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (1 <= colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));
    }
}

void CPage::SetTractionBrakeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    // 黑 橘红  绿 红 黑 0—4
    if (0 == colorVal || 4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CPage::SetTractionBrakeFontColor(int id, int colorVal)
{
    if (1 == colorVal || 2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
}

//tain common function.
void CPage::updateTrain(int nTrainID)
{
    //CCU1在线 CCU2
    if ( (CTHM_CCU1_IsOnline_B1)||(CTHM_CCU2_IsOnline_B1))
    {
    //    ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC1司机室激活
        if (CTHM_TC1CabActive_B1)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::green);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);

    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::white);
    }
   //CTHM_Tc2DI1On_B1	TC2车DI1在线 && CTHM_Tc2GWOn_B1	TC2车GW在线
    if (  (CTHM_CCU1_IsOnline_B1) ||(CTHM_CCU2_IsOnline_B1))
    {
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC2司机室激活
        if (CTHM_TC2CabActive_B1)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::green);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::gray);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::white);
    }


    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (CTHM_RIOM1_GW_IsOnline_B1)&&(CTHM_RIOM1_DIM1_IsOnline_B1))
    {
        //DICT_EmergencyDoorOpenTci_B1    	Emergency door open	逃生门监视
        if ((RIOM1CT_DIM1DI23_B1 ))
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::red);
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::green);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::white);
    }
    if (  (CTHM_RIOM6_GW_IsOnline_B1) &&(CTHM_RIOM6_DIM1_IsOnline_B1) )
    {
        if ((RIOM6CT_DIM1DI23_B1) )
        {
             ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::red);
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::green);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::white);
    }


    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (CTHM_RIOM2_GW_IsOnline_B1)&&(CTHM_RIOM2_DIM1_IsOnline_B1))
    {
        //升弓到位监视	高电平代表升弓到位
        if (RIOM2CT_DIM1DI7_B1 )
        {
            Pantogtaph1InPlace = 1;
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 1,0);
        }
        else
        {
            Pantogtaph1InPlace = 0;
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 0,0);
        }
    }
    else
    {
        Pantogtaph1InPlace = 2;
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 2,0);
    }

    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (CTHM_RIOM5_GW_IsOnline_B1)&&(CTHM_RIOM5_DIM1_IsOnline_B1))
    {
        //升弓到位监视	高电平代表升弓到位
        if (RIOM5CT_DIM1DI7_B1 )
        {
            Pantogtaph2InPlace = 1;
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 1,0);
        }
        else
        {
            Pantogtaph2InPlace = 0;
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 0,0);
        }
    }
    else
    {
        Pantogtaph2InPlace = 2;
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 2,0);
    }




    UpdateWarning(nTrainID);

//    //car num
    QString nCarNum[] =
    {
        che1_num,
        che2_num,
        che3_num,
        che4_num,
        che5_num,
        che6_num,

    };
    for (int i=0; i<6; i++)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetCarText(i,nCarNum[i]);
    }

}

void CPage::updateArrow(int nLeftArrowID,int nRightArrowID)
{
    //left
   // DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
    if (CTHM_TC1CabActive_B1 )
    {
        //DICT_DirectionBTci_B1    后退方向  DICT_DirectionFTci_B1   前进方向
        if ( (CTHM_RunForward_B1)&&!(CTHM_RunBackward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_LEFT );
        }
        if ( CTHM_RunBackward_B1&&!(CTHM_RunForward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( CTHM_RunForward_B1&&CTHM_RunBackward_B1)
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( !(CTHM_RunForward_B1)&&!(CTHM_RunBackward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
    }

    //right
    //DI_180_1=0;
    if (CTHM_TC2CabActive_B1 )
    {
        if ( (CTHM_RunForward_B1)&&!(CTHM_RunBackward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( !(CTHM_RunForward_B1)&&(CTHM_RunBackward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_LEFT);
        }
        if ( (CTHM_RunForward_B1)&&(CTHM_RunBackward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( !(CTHM_RunForward_B1)&&!(CTHM_RunBackward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
    }

}

void CPage::updateFault(int nFaultID)
{
    if (g_RealTimeFaultsNum)
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->ShowImage();
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->HideImage();
    }
}

void CPage::UpdateCommInterrupt(int nInteruptID)
{
    static quint32 times = 0;
    if (Bit(hmi_485_error,5)==1 )
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::white);
        if (times%times_n == 0)
        {
            QColor txtcolor = ((CLabel *)GetDlgItem(nInteruptID))->GetTxtColor();
            if (txtcolor == Qt::red)
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::white);
            else
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::red);
        }
        times++;
    }
    else
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
        times = 0;
    }
    ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
    ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
    times = 0;
}

void CPage::OnTitleCLK()
{
   #ifdef USE_RAND_DATA
   if(((Dialog*)GetParentDlg())->serialDebugDlg.isHidden())
       ((Dialog*)GetParentDlg())->serialDebugDlg.show();
  #endif

}

void CPage::updateErrorLine(int nTrainID)
{
    static quint32 times = 0;
    int x,y;
    x=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().x()+GetParentDlg()->x()-20;
    y=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().y()+GetParentDlg()->y()+43;
    if ( g_realtimeFaultsList.size()>0)
    {
       int j=g_realtimeFaultsList.size()-1;
       int confirm_num=0;
       for (int i=j; i >= 0; i--)
       {
                FAULTS_ROM_DATA *pdata = &g_faultsrom[g_realtimeFaultsList[i].nRomIndex];


                if (pdata->flg && (3 != pdata->level) && !pdata->confirm)
                {

                    if(((Dialog*)GetParentDlg())->dlg.isHidden())
                    {
                        ((Dialog*)GetParentDlg())->dlg.show();
                         error_turnoff_timer=3;
                        ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                        ((Dialog*)GetParentDlg())->dlg.move(x,y);


                       // ((Dialog*)GetParentDlg())->dlg.exec();
                        confirm_num=1;
                        break;
                    }
                    else
                    {

                        if(((Dialog*)GetParentDlg())->dlg.m_romidx==g_realtimeFaultsList[i].nRomIndex)
                        {
                            if(g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm_flg==false)
                            {
                                times++;
                                if (times%times_n == 0)
                                {
                                    error_turnoff_timer--;
                                    if (error_turnoff_timer <= 0)
                                    {
                                        g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm = true;
                                        ((Dialog*)GetParentDlg())->dlg.hide();
                                        error_turnoff_timer=0;
                                    }

                                }
                                confirm_num=1;
                                break;
                            }
                            else
                            {
                                confirm_num=1;
                                break;
                            }

                        }
                        else
                        {
                            //之前弹出的故障消失但还有需要确认的故障
//                           ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                            confirm_num=1;
                            ((Dialog*)GetParentDlg())->dlg.hide();
                            error_turnoff_timer=0;
                            break;
                        }

                    }
                }//if (pdata->confirm==false)
        }//for (int i=j; i >= 0; i--)
        //之前弹出的故障消失且没有需要确认的故障
        if(confirm_num==0)
        {
            ((Dialog*)GetParentDlg())->dlg.hide();
            error_turnoff_timer=0;
        }

    }
    else  //if ( g_realtimeFaultsList.size()>0)
    {
        ((Dialog*)GetParentDlg())->dlg.hide();
    }


}

void CPage::OnRealTimeFaultsWarnningIconClk_new()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CPage::UpdateStation()
{
   //PIS 到CCU的数据

    if ( (PIS1CT_FinalStationID_U16 > 100) && (PIS1CT_FinalStationID_U16 < 123) )
    {
        if (PIS1CT_FinalStationID_U16 == 101)
        {
            DestStation = QObject::trUtf8("姚家");
        }
        if (PIS1CT_FinalStationID_U16 == 102)
        {
            DestStation = QObject::trUtf8("大连北站");
        }
        if (PIS1CT_FinalStationID_U16 == 103)
        {
            DestStation = QObject::trUtf8("华北路");
        }
        if (PIS1CT_FinalStationID_U16 == 104)
        {
            DestStation = QObject::trUtf8("华南北");
        }
        if (PIS1CT_FinalStationID_U16 == 105)
        {
            DestStation = QObject::trUtf8("华南广场");
        }
        if (PIS1CT_FinalStationID_U16 == 106)
        {
            DestStation = QObject::trUtf8("千山路");
        }
        if (PIS1CT_FinalStationID_U16 == 107)
        {
            DestStation = QObject::trUtf8("松江路");
        }
        if (PIS1CT_FinalStationID_U16 == 108)
        {
            DestStation = QObject::trUtf8("东纬路");
        }
        if (PIS1CT_FinalStationID_U16 == 109)
        {
            DestStation = QObject::trUtf8("春柳");
        }
        if (PIS1CT_FinalStationID_U16 == 110)
        {
            DestStation = QObject::trUtf8("香工街");
        }
        if (PIS1CT_FinalStationID_U16 == 111)
        {
            DestStation = QObject::trUtf8("中长街");
        }
        if (PIS1CT_FinalStationID_U16 == 112)
        {
            DestStation = QObject::trUtf8("兴工街");
        }
        if (PIS1CT_FinalStationID_U16 == 113)
        {
            DestStation = QObject::trUtf8("西安路");
        }
        if (PIS1CT_FinalStationID_U16 == 114)
        {
            DestStation = QObject::trUtf8("富国街");
        }
        if (PIS1CT_FinalStationID_U16 == 115)
        {
            DestStation = QObject::trUtf8("会展中心");
        }
        if (PIS1CT_FinalStationID_U16 == 116)
        {
            DestStation = QObject::trUtf8("星海广场");
        }
        if (PIS1CT_FinalStationID_U16 == 117)
        {
            DestStation = QObject::trUtf8("大医二院");
        }
        if (PIS1CT_FinalStationID_U16 == 118)
        {
            DestStation = QObject::trUtf8("黑石礁");
        }
        if (PIS1CT_FinalStationID_U16 == 119)
        {
            DestStation = QObject::trUtf8("学苑广场");
        }
        if (PIS1CT_FinalStationID_U16 == 120)
        {
            DestStation = QObject::trUtf8("海事大学");
        }
        if (PIS1CT_FinalStationID_U16 == 121)
        {
            DestStation = QObject::trUtf8("七贤岭");
        }
        if (PIS1CT_FinalStationID_U16 == 122)
        {
            DestStation = QObject::trUtf8("河口");
        }
    }

    else
    {
        if ( (PIS1CT_FinalStationID_U16 > 200) && (PIS1CT_FinalStationID_U16 < 230))
        {
            if (PIS1CT_FinalStationID_U16 == 228)
            {
                DestStation = QObject::trUtf8("大连北站");
            }
            if (PIS1CT_FinalStationID_U16 == 227)
            {
                DestStation = QObject::trUtf8("南关岭");
            }
            if (PIS1CT_FinalStationID_U16 == 226)
            {
                DestStation = QObject::trUtf8("体育中心");
            }
            if (PIS1CT_FinalStationID_U16 == 225)
            {
                DestStation = QObject::trUtf8("卫生中心");
            }
            if (PIS1CT_FinalStationID_U16 == 224)
            {
                DestStation = QObject::trUtf8("后革");
            }
            if (PIS1CT_FinalStationID_U16 == 223)
            {
                DestStation = QObject::trUtf8("革镇堡");
            }
            if (PIS1CT_FinalStationID_U16 == 222)
            {
                DestStation = QObject::trUtf8("中革");
            }
            if (PIS1CT_FinalStationID_U16 == 221)
            {
                DestStation = QObject::trUtf8("前革");
            }
            if (PIS1CT_FinalStationID_U16 == 220)
            {
                DestStation = QObject::trUtf8("辛寨子");
            }
            if (PIS1CT_FinalStationID_U16 == 219)
            {
                DestStation = QObject::trUtf8("机场");
            }
            if (PIS1CT_FinalStationID_U16 == 218)
            {
                DestStation = QObject::trUtf8("虹港路");
            }
            if (PIS1CT_FinalStationID_U16 == 217)
            {
                DestStation = QObject::trUtf8("虹锦路");
            }
            if (PIS1CT_FinalStationID_U16 == 216)
            {
                DestStation = QObject::trUtf8("红旗西路");
            }
            if (PIS1CT_FinalStationID_U16 == 215)
            {
                DestStation = QObject::trUtf8("湾家");
            }
            if (PIS1CT_FinalStationID_U16 == 214)
            {
                DestStation = QObject::trUtf8("马栏广场");
            }
            if (PIS1CT_FinalStationID_U16 == 213)
            {
                DestStation = QObject::trUtf8("辽师");
            }

            if (PIS1CT_FinalStationID_U16 == 212)
            {
                DestStation = QObject::trUtf8("交通大学");
            }
            if (PIS1CT_FinalStationID_U16 == 211)
            {
                DestStation = QObject::trUtf8("西安路");
            }
            if (PIS1CT_FinalStationID_U16 == 210)
            {
                DestStation = QObject::trUtf8("联合路");
            }
            if (PIS1CT_FinalStationID_U16 == 209)
            {
                DestStation = QObject::trUtf8("人民广场");
            }
            if (PIS1CT_FinalStationID_U16 == 208)
            {
                DestStation = QObject::trUtf8("一二九街站");
            }
            if (PIS1CT_FinalStationID_U16 == 207)
            {
                DestStation = QObject::trUtf8("青泥洼桥");
            }
            if (PIS1CT_FinalStationID_U16 == 206)
            {
                DestStation = QObject::trUtf8("友好广场");
            }
            if (PIS1CT_FinalStationID_U16 == 205)
            {
                DestStation = QObject::trUtf8("中山广场");
            }
            if (PIS1CT_FinalStationID_U16 == 204)
            {
                DestStation = QObject::trUtf8("港湾广场");
            }
            if (PIS1CT_FinalStationID_U16 == 203)
            {
                DestStation = QObject::trUtf8("会议中心");
            }
            if (PIS1CT_FinalStationID_U16 == 202)
            {
                DestStation = QObject::trUtf8("东港");
            }
            if (PIS1CT_FinalStationID_U16 == 201)
            {
                DestStation = QObject::trUtf8("东海");
            }
            if (PIS1CT_FinalStationID_U16 == 229)
            {
                DestStation = QObject::trUtf8("海之韵");
            }

        }
        }


    if ( (PIS1CT_CurrntSttnID_U16 > 100) && (PIS1CT_CurrntSttnID_U16 < 123) )
    {
        if (PIS1CT_CurrntSttnID_U16 == 101)
        {
            CurrentStation = QObject::trUtf8("姚家");
        }
        if (PIS1CT_CurrntSttnID_U16 == 102)
        {
            CurrentStation = QObject::trUtf8("大连北站");
        }
        if (PIS1CT_CurrntSttnID_U16 == 103)
        {
            CurrentStation = QObject::trUtf8("华北路");
        }
        if (PIS1CT_CurrntSttnID_U16 == 104)
        {
            CurrentStation = QObject::trUtf8("华南北");
        }
        if (PIS1CT_CurrntSttnID_U16 == 105)
        {
            CurrentStation = QObject::trUtf8("华南广场");
        }
        if (PIS1CT_CurrntSttnID_U16 == 106)
        {
            CurrentStation = QObject::trUtf8("千山路");
        }
        if (PIS1CT_CurrntSttnID_U16 == 107)
        {
            CurrentStation = QObject::trUtf8("松江路");
        }
        if (PIS1CT_CurrntSttnID_U16 == 108)
        {
            CurrentStation = QObject::trUtf8("东纬路");
        }
        if (PIS1CT_CurrntSttnID_U16 == 109)
        {
            CurrentStation = QObject::trUtf8("春柳");
        }
        if (PIS1CT_CurrntSttnID_U16 == 110)
        {
            CurrentStation = QObject::trUtf8("香工街");
        }
        if (PIS1CT_CurrntSttnID_U16 == 111)
        {
            CurrentStation = QObject::trUtf8("中长街");
        }
        if (PIS1CT_CurrntSttnID_U16 == 112)
        {
            CurrentStation = QObject::trUtf8("兴工街");
        }
        if (PIS1CT_CurrntSttnID_U16 == 113)
        {
            CurrentStation = QObject::trUtf8("西安路");
        }
        if (PIS1CT_CurrntSttnID_U16 == 114)
        {
            CurrentStation = QObject::trUtf8("富国街");
        }
        if (PIS1CT_CurrntSttnID_U16 == 115)
        {
            CurrentStation = QObject::trUtf8("会展中心");
        }
        if (PIS1CT_CurrntSttnID_U16 == 116)
        {
            CurrentStation = QObject::trUtf8("星海广场");
        }
        if (PIS1CT_CurrntSttnID_U16 == 117)
        {
            CurrentStation = QObject::trUtf8("大医二院");
        }
        if (PIS1CT_CurrntSttnID_U16 == 118)
        {
            CurrentStation = QObject::trUtf8("黑石礁");
        }
        if (PIS1CT_CurrntSttnID_U16 == 119)
        {
            CurrentStation = QObject::trUtf8("学苑广场");
        }
        if (PIS1CT_CurrntSttnID_U16 == 120)
        {
            CurrentStation = QObject::trUtf8("海事大学");
        }
        if (PIS1CT_CurrntSttnID_U16 == 121)
        {
            CurrentStation = QObject::trUtf8("七贤岭");
        }
        if (PIS1CT_CurrntSttnID_U16 == 122)
        {
            CurrentStation = QObject::trUtf8("河口");
        }
    }

    else
    {
        if ( (PIS1CT_CurrntSttnID_U16 > 200) && (PIS1CT_CurrntSttnID_U16 < 230))
        {
            if (PIS1CT_CurrntSttnID_U16 == 228)
            {
                CurrentStation = QObject::trUtf8("大连北站");
            }
            if (PIS1CT_CurrntSttnID_U16 == 227)
            {
                CurrentStation = QObject::trUtf8("南关岭");
            }
            if (PIS1CT_CurrntSttnID_U16 == 226)
            {
                CurrentStation = QObject::trUtf8("体育中心");
            }
            if (PIS1CT_CurrntSttnID_U16 == 225)
            {
                CurrentStation = QObject::trUtf8("卫生中心");
            }
            if (PIS1CT_CurrntSttnID_U16 == 224)
            {
                CurrentStation = QObject::trUtf8("后革");
            }
            if (PIS1CT_CurrntSttnID_U16 == 223)
            {
                CurrentStation = QObject::trUtf8("革镇堡");
            }
            if (PIS1CT_CurrntSttnID_U16 == 222)
            {
                CurrentStation = QObject::trUtf8("中革");
            }
            if (PIS1CT_CurrntSttnID_U16 == 221)
            {
                CurrentStation = QObject::trUtf8("前革");
            }
            if (PIS1CT_CurrntSttnID_U16 == 220)
            {
                CurrentStation = QObject::trUtf8("辛寨子");
            }
            if (PIS1CT_CurrntSttnID_U16 == 219)
            {
                CurrentStation = QObject::trUtf8("机场");
            }
            if (PIS1CT_CurrntSttnID_U16 == 218)
            {
                CurrentStation = QObject::trUtf8("虹港路");
            }
            if (PIS1CT_CurrntSttnID_U16 == 217)
            {
                CurrentStation = QObject::trUtf8("虹锦路");
            }
            if (PIS1CT_CurrntSttnID_U16 == 216)
            {
                CurrentStation = QObject::trUtf8("红旗西路");
            }
            if (PIS1CT_CurrntSttnID_U16 == 215)
            {
                CurrentStation = QObject::trUtf8("湾家");
            }
            if (PIS1CT_CurrntSttnID_U16 == 214)
            {
                CurrentStation = QObject::trUtf8("马栏广场");
            }
            if (PIS1CT_CurrntSttnID_U16 == 213)
            {
                CurrentStation = QObject::trUtf8("辽师");
            }

            if (PIS1CT_CurrntSttnID_U16 == 212)
            {
                CurrentStation = QObject::trUtf8("交通大学");
            }
            if (PIS1CT_CurrntSttnID_U16 == 211)
            {
                CurrentStation = QObject::trUtf8("西安路");
            }
            if (PIS1CT_CurrntSttnID_U16 == 210)
            {
                CurrentStation = QObject::trUtf8("联合路");
            }
            if (PIS1CT_CurrntSttnID_U16 == 209)
            {
                CurrentStation = QObject::trUtf8("人民广场");
            }
            if (PIS1CT_CurrntSttnID_U16 == 208)
            {
                CurrentStation = QObject::trUtf8("一二九街站");
            }
            if (PIS1CT_CurrntSttnID_U16 == 207)
            {
                CurrentStation = QObject::trUtf8("青泥洼桥");
            }
            if (PIS1CT_CurrntSttnID_U16 == 206)
            {
                CurrentStation = QObject::trUtf8("友好广场");
            }
            if (PIS1CT_CurrntSttnID_U16 == 205)
            {
                CurrentStation = QObject::trUtf8("中山广场");
            }
            if (PIS1CT_CurrntSttnID_U16 == 204)
            {
                CurrentStation = QObject::trUtf8("港湾广场");
            }
            if (PIS1CT_CurrntSttnID_U16 == 203)
            {
                CurrentStation = QObject::trUtf8("会议中心");
            }
            if (PIS1CT_CurrntSttnID_U16 == 202)
            {
                CurrentStation = QObject::trUtf8("东港");
            }
            if (PIS1CT_CurrntSttnID_U16 == 201)
            {
                CurrentStation = QObject::trUtf8("东海");
            }
            if (PIS1CT_CurrntSttnID_U16 == 229)
            {
                CurrentStation = QObject::trUtf8("海之韵");
            }

        }
        }


 /*
    if ( (PIS1CT_CurrntSttnID_U16 > 10) && (PIS1CT_CurrntSttnID_U16 < 32) )
            {
                if (PIS1CT_CurrntSttnID_U16 == 11)
                {
                    CurrentStation = QObject::trUtf8("姚家");
                }
                if (PIS1CT_CurrntSttnID_U16 == 12)
                {
                    CurrentStation = QObject::trUtf8("大连北站");
                }
                if (PIS1CT_CurrntSttnID_U16 == 13)
                {
                    CurrentStation = QObject::trUtf8("华北路");
                }
                if (PIS1CT_CurrntSttnID_U16 == 14)
                {
                    CurrentStation = QObject::trUtf8("华南北");
                }
                if (PIS1CT_CurrntSttnID_U16 == 15)
                {
                    CurrentStation = QObject::trUtf8("华南广场");
                }
                if (PIS1CT_CurrntSttnID_U16 == 16)
                {
                    CurrentStation = QObject::trUtf8("千山路");
                }
                if (PIS1CT_CurrntSttnID_U16 == 17)
                {
                    CurrentStation = QObject::trUtf8("松江路");
                }
                if (PIS1CT_CurrntSttnID_U16 == 18)
                {
                    CurrentStation = QObject::trUtf8("东纬路");
                }
                if (PIS1CT_CurrntSttnID_U16 == 19)
                {
                    CurrentStation = QObject::trUtf8("春柳");
                }
                if (PIS1CT_CurrntSttnID_U16 == 20)
                {
                    CurrentStation = QObject::trUtf8("香工街");
                }
                if (PIS1CT_CurrntSttnID_U16 == 21)
                {
                    CurrentStation = QObject::trUtf8("中长街");
                }
                if (PIS1CT_CurrntSttnID_U16 == 22)
                {
                    CurrentStation = QObject::trUtf8("兴工街");
                }
                if (PIS1CT_CurrntSttnID_U16 == 23)
                {
                    CurrentStation = QObject::trUtf8("西安路");
                }
                if (PIS1CT_CurrntSttnID_U16 == 24)
                {
                    CurrentStation = QObject::trUtf8("会展中心");
                }
                if (PIS1CT_CurrntSttnID_U16 == 25)
                {
                    CurrentStation = QObject::trUtf8("星海广场");
                }
                if (PIS1CT_CurrntSttnID_U16 == 26)
                {
                    CurrentStation = QObject::trUtf8("大医二院");
                }
                if (PIS1CT_CurrntSttnID_U16 == 27)
                {
                    CurrentStation = QObject::trUtf8("黑石礁");
                }
                if (PIS1CT_CurrntSttnID_U16 == 28)
                {
                    CurrentStation = QObject::trUtf8("学苑广场");
                }
                if (PIS1CT_CurrntSttnID_U16 == 29)
                {
                    CurrentStation = QObject::trUtf8("海事大学");
                }
                if (PIS1CT_CurrntSttnID_U16 == 30)
                {
                    CurrentStation = QObject::trUtf8("七贤岭");
                }
                if (PIS1CT_CurrntSttnID_U16 == 31)
                {
                    CurrentStation = QObject::trUtf8("河口");
                }
            }

    else
            {
                if ( (PIS1CT_CurrntSttnID_U16 > 32) && (PIS1CT_CurrntSttnID_U16 < 60))
                {
                    if (PIS1CT_CurrntSttnID_U16 == 33)
                    {
                        CurrentStation = QObject::trUtf8("大连北站");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 34)
                    {
                        CurrentStation = QObject::trUtf8("南关岭");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 35)
                    {
                        CurrentStation = QObject::trUtf8("体育中心");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 36)
                    {
                        CurrentStation = QObject::trUtf8("卫生中心");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 37)
                    {
                        CurrentStation = QObject::trUtf8("后革");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 38)
                    {
                        CurrentStation = QObject::trUtf8("革镇堡");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 39)
                    {
                        CurrentStation = QObject::trUtf8("中革");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 40)
                    {
                        CurrentStation = QObject::trUtf8("前革");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 41)
                    {
                        CurrentStation = QObject::trUtf8("辛寨子");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 42)
                    {
                        CurrentStation = QObject::trUtf8("机场");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 43)
                    {
                        CurrentStation = QObject::trUtf8("虹港路");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 44)
                    {
                        CurrentStation = QObject::trUtf8("虹锦路");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 45)
                    {
                        CurrentStation = QObject::trUtf8("红旗西路");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 46)
                    {
                        CurrentStation = QObject::trUtf8("湾家");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 47)
                    {
                        CurrentStation = QObject::trUtf8("马栏广场");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 48)
                    {
                        CurrentStation = QObject::trUtf8("辽师");
                    }

                    if (PIS1CT_CurrntSttnID_U16 == 49)
                    {
                        CurrentStation = QObject::trUtf8("西南路");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 50)
                    {
                        CurrentStation = QObject::trUtf8("联合路");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 51)
                    {
                        CurrentStation = QObject::trUtf8("人民广场");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 52)
                    {
                        CurrentStation = QObject::trUtf8("一二九街站");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 53)
                    {
                        CurrentStation = QObject::trUtf8("青泥洼桥");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 54)
                    {
                        CurrentStation = QObject::trUtf8("友好广场");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 55)
                    {
                        CurrentStation = QObject::trUtf8("中山广场");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 56)
                    {
                        CurrentStation = QObject::trUtf8("港湾广场");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 57)
                    {
                        CurrentStation = QObject::trUtf8("会议中心");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 58)
                    {
                        CurrentStation = QObject::trUtf8("东港站");
                    }
                    if (PIS1CT_CurrntSttnID_U16 == 59)
                    {
                        CurrentStation = QObject::trUtf8("海之韵");
                    }


                }
            }
*/


    if ( (PIS1CT_NextStationID_U16 > 100) && (PIS1CT_NextStationID_U16 < 123) )
    {
        if (PIS1CT_NextStationID_U16 == 101)
        {
            NextStation  = QObject::trUtf8("姚家");
        }
        if (PIS1CT_NextStationID_U16 == 102)
        {
            NextStation  = QObject::trUtf8("大连北站");
        }
        if (PIS1CT_NextStationID_U16 == 103)
        {
            NextStation  = QObject::trUtf8("华北路");
        }
        if (PIS1CT_NextStationID_U16 == 104)
        {
            NextStation  = QObject::trUtf8("华南北");
        }
        if (PIS1CT_NextStationID_U16 == 105)
        {
            NextStation  = QObject::trUtf8("华南广场");
        }
        if (PIS1CT_NextStationID_U16 == 106)
        {
            NextStation  = QObject::trUtf8("千山路");
        }
        if (PIS1CT_NextStationID_U16 == 107)
        {
            NextStation  = QObject::trUtf8("松江路");
        }
        if (PIS1CT_NextStationID_U16 == 108)
        {
            NextStation  = QObject::trUtf8("东纬路");
        }
        if (PIS1CT_NextStationID_U16 == 109)
        {
            NextStation  = QObject::trUtf8("春柳");
        }
        if (PIS1CT_NextStationID_U16 == 110)
        {
            NextStation  = QObject::trUtf8("香工街");
        }
        if (PIS1CT_NextStationID_U16 == 111)
        {
            NextStation  = QObject::trUtf8("中长街");
        }
        if (PIS1CT_NextStationID_U16 == 112)
        {
            NextStation  = QObject::trUtf8("兴工街");
        }
        if (PIS1CT_NextStationID_U16 == 113)
        {
            NextStation  = QObject::trUtf8("西安路");
        }
        if (PIS1CT_NextStationID_U16 == 114)
        {
            NextStation  = QObject::trUtf8("富国街");
        }
        if (PIS1CT_NextStationID_U16 == 115)
        {
            NextStation  = QObject::trUtf8("会展中心");
        }
        if (PIS1CT_NextStationID_U16 == 116)
        {
            NextStation  = QObject::trUtf8("星海广场");
        }
        if (PIS1CT_NextStationID_U16 == 117)
        {
            NextStation  = QObject::trUtf8("大医二院");
        }
        if (PIS1CT_NextStationID_U16 == 118)
        {
            NextStation  = QObject::trUtf8("黑石礁");
        }
        if (PIS1CT_NextStationID_U16 == 119)
        {
            NextStation  = QObject::trUtf8("学苑广场");
        }
        if (PIS1CT_NextStationID_U16 == 120)
        {
            NextStation  = QObject::trUtf8("海事大学");
        }
        if (PIS1CT_NextStationID_U16 == 121)
        {
            NextStation  = QObject::trUtf8("七贤岭");
        }
        if (PIS1CT_NextStationID_U16 == 122)
        {
            NextStation  = QObject::trUtf8("河口");
        }
    }

    else
    {
        if ( (PIS1CT_NextStationID_U16 > 200) && (PIS1CT_NextStationID_U16 < 230))
        {
            if (PIS1CT_NextStationID_U16 == 228)
            {
                NextStation  = QObject::trUtf8("大连北站");
            }
            if (PIS1CT_NextStationID_U16 == 227)
            {
                NextStation  = QObject::trUtf8("南关岭");
            }
            if (PIS1CT_NextStationID_U16 == 226)
            {
                NextStation  = QObject::trUtf8("体育中心");
            }
            if (PIS1CT_NextStationID_U16 == 225)
            {
                NextStation  = QObject::trUtf8("卫生中心");
            }
            if (PIS1CT_NextStationID_U16 == 224)
            {
                NextStation  = QObject::trUtf8("后革");
            }
            if (PIS1CT_NextStationID_U16 == 223)
            {
                NextStation  = QObject::trUtf8("革镇堡");
            }
            if (PIS1CT_NextStationID_U16 == 222)
            {
                NextStation  = QObject::trUtf8("中革");
            }
            if (PIS1CT_NextStationID_U16 == 221)
            {
                NextStation  = QObject::trUtf8("前革");
            }
            if (PIS1CT_NextStationID_U16 == 220)
            {
                NextStation  = QObject::trUtf8("辛寨子");
            }
            if (PIS1CT_NextStationID_U16 == 219)
            {
                NextStation  = QObject::trUtf8("机场");
            }
            if (PIS1CT_NextStationID_U16 == 218)
            {
                NextStation  = QObject::trUtf8("虹港路");
            }
            if (PIS1CT_NextStationID_U16 == 217)
            {
                NextStation  = QObject::trUtf8("虹锦路");
            }
            if (PIS1CT_NextStationID_U16 == 216)
            {
                NextStation  = QObject::trUtf8("红旗西路");
            }
            if (PIS1CT_NextStationID_U16 == 215)
            {
                NextStation  = QObject::trUtf8("湾家");
            }
            if (PIS1CT_NextStationID_U16 == 214)
            {
                NextStation  = QObject::trUtf8("马栏广场");
            }
            if (PIS1CT_NextStationID_U16 == 213)
            {
                NextStation  = QObject::trUtf8("辽师");
            }

            if (PIS1CT_NextStationID_U16 == 212)
            {
                NextStation  = QObject::trUtf8("交通大学");
            }
            if (PIS1CT_NextStationID_U16 == 211)
            {
                NextStation  = QObject::trUtf8("西安路");
            }
            if (PIS1CT_NextStationID_U16 == 210)
            {
                NextStation  = QObject::trUtf8("联合路");
            }
            if (PIS1CT_NextStationID_U16 == 209)
            {
                NextStation  = QObject::trUtf8("人民广场");
            }
            if (PIS1CT_NextStationID_U16 == 208)
            {
                NextStation  = QObject::trUtf8("一二九街站");
            }
            if (PIS1CT_NextStationID_U16 == 207)
            {
                NextStation  = QObject::trUtf8("青泥洼桥");
            }
            if (PIS1CT_NextStationID_U16 == 206)
            {
                NextStation  = QObject::trUtf8("友好广场");
            }
            if (PIS1CT_NextStationID_U16 == 205)
            {
                NextStation  = QObject::trUtf8("中山广场");
            }
            if (PIS1CT_NextStationID_U16 == 204)
            {
                NextStation  = QObject::trUtf8("港湾广场");
            }
            if (PIS1CT_NextStationID_U16 == 203)
            {
                NextStation  = QObject::trUtf8("会议中心");
            }
            if (PIS1CT_NextStationID_U16 == 202)
            {
                NextStation  = QObject::trUtf8("东港");
            }
            if (PIS1CT_NextStationID_U16 == 201)
            {
                NextStation  = QObject::trUtf8("东海");
            }
            if (PIS1CT_NextStationID_U16 == 229)
            {
                NextStation  = QObject::trUtf8("海之韵");
            }

        }
        }

    /*
    if ( (PIS1CT_NextStationID_U16 > 10) && (PIS1CT_NextStationID_U16 < 32) )
        {
            if (PIS1CT_NextStationID_U16 == 11)
            {
                NextStation = QObject::trUtf8("姚家");
            }
            if (PIS1CT_NextStationID_U16 == 12)
            {
                NextStation = QObject::trUtf8("大连北站");
            }
            if (PIS1CT_NextStationID_U16 == 13)
            {
                NextStation = QObject::trUtf8("华北路");
            }
            if (PIS1CT_NextStationID_U16 == 14)
            {
                NextStation = QObject::trUtf8("华南北");
            }
            if (PIS1CT_NextStationID_U16 == 15)
            {
                NextStation = QObject::trUtf8("华南广场");
            }
            if (PIS1CT_NextStationID_U16 == 16)
            {
                NextStation = QObject::trUtf8("千山路");
            }
            if (PIS1CT_NextStationID_U16 == 17)
            {
                NextStation = QObject::trUtf8("松江路");
            }
            if (PIS1CT_NextStationID_U16 == 18)
            {
                NextStation = QObject::trUtf8("东纬路");
            }
            if (PIS1CT_NextStationID_U16 == 19)
            {
                NextStation = QObject::trUtf8("春柳");
            }
            if (PIS1CT_NextStationID_U16 == 20)
            {
                NextStation = QObject::trUtf8("香工街");
            }
            if (PIS1CT_NextStationID_U16 == 21)
            {
                NextStation = QObject::trUtf8("中长街");
            }
            if (PIS1CT_NextStationID_U16 == 22)
            {
                NextStation = QObject::trUtf8("兴工街");
            }
            if (PIS1CT_NextStationID_U16 == 23)
            {
                NextStation = QObject::trUtf8("西安路");
            }
            if (PIS1CT_NextStationID_U16 == 24)
            {
                NextStation = QObject::trUtf8("会展中心");
            }
            if (PIS1CT_NextStationID_U16 == 25)
            {
                NextStation = QObject::trUtf8("星海广场");
            }
            if (PIS1CT_NextStationID_U16 == 26)
            {
                NextStation = QObject::trUtf8("大医二院");
            }
            if (PIS1CT_NextStationID_U16 == 27)
            {
                NextStation = QObject::trUtf8("黑石礁");
            }
            if (PIS1CT_NextStationID_U16 == 28)
            {
                NextStation = QObject::trUtf8("学苑广场");
            }
            if (PIS1CT_NextStationID_U16 == 29)
            {
                NextStation = QObject::trUtf8("海事大学");
            }
            if (PIS1CT_NextStationID_U16 == 30)
            {
                NextStation = QObject::trUtf8("七贤岭");
            }
            if (PIS1CT_NextStationID_U16 == 31)
            {
                NextStation = QObject::trUtf8("河口");
            }
        }

    else
        {
            if ( (PIS1CT_NextStationID_U16 > 32) && (PIS1CT_NextStationID_U16 < 60))
            {
                if (PIS1CT_NextStationID_U16 == 33)
                {
                    NextStation = QObject::trUtf8("大连北站");
                }
                if (PIS1CT_NextStationID_U16 == 34)
                {
                    NextStation = QObject::trUtf8("南关岭");
                }
                if (PIS1CT_NextStationID_U16 == 35)
                {
                    NextStation = QObject::trUtf8("体育中心");
                }
                if (PIS1CT_NextStationID_U16 == 36)
                {
                    NextStation = QObject::trUtf8("卫生中心");
                }
                if (PIS1CT_NextStationID_U16 == 37)
                {
                    NextStation = QObject::trUtf8("后革");
                }
                if (PIS1CT_NextStationID_U16 == 38)
                {
                    NextStation = QObject::trUtf8("革镇堡");
                }
                if (PIS1CT_NextStationID_U16 == 39)
                {
                    NextStation = QObject::trUtf8("中革");
                }
                if (PIS1CT_NextStationID_U16 == 40)
                {
                    NextStation = QObject::trUtf8("前革");
                }
                if (PIS1CT_NextStationID_U16 == 41)
                {
                    NextStation = QObject::trUtf8("辛寨子");
                }
                if (PIS1CT_NextStationID_U16 == 42)
                {
                    NextStation = QObject::trUtf8("机场");
                }
                if (PIS1CT_NextStationID_U16 == 43)
                {
                    NextStation = QObject::trUtf8("虹港路");
                }
                if (PIS1CT_NextStationID_U16 == 44)
                {
                    NextStation = QObject::trUtf8("虹锦路");
                }
                if (PIS1CT_NextStationID_U16 == 45)
                {
                    NextStation = QObject::trUtf8("红旗西路");
                }
                if (PIS1CT_NextStationID_U16 == 46)
                {
                    NextStation = QObject::trUtf8("湾家");
                }
                if (PIS1CT_NextStationID_U16 == 47)
                {
                    NextStation = QObject::trUtf8("马栏广场");
                }
                if (PIS1CT_NextStationID_U16 == 48)
                {
                    NextStation = QObject::trUtf8("辽师");
                }

                if (PIS1CT_NextStationID_U16 == 49)
                {
                    NextStation = QObject::trUtf8("西南路");
                }
                if (PIS1CT_NextStationID_U16 == 50)
                {
                    NextStation = QObject::trUtf8("联合路");
                }
                if (PIS1CT_NextStationID_U16 == 51)
                {
                    NextStation = QObject::trUtf8("人民广场");
                }
                if (PIS1CT_NextStationID_U16 == 52)
                {
                    NextStation = QObject::trUtf8("一二九街站");
                }
                if (PIS1CT_NextStationID_U16 == 53)
                {
                    NextStation = QObject::trUtf8("青泥洼桥");
                }
                if (PIS1CT_NextStationID_U16 == 54)
                {
                    NextStation = QObject::trUtf8("友好广场");
                }
                if (PIS1CT_NextStationID_U16 == 55)
                {
                    NextStation = QObject::trUtf8("中山广场");
                }
                if (PIS1CT_NextStationID_U16 == 56)
                {
                    NextStation = QObject::trUtf8("港湾广场");
                }
                if (PIS1CT_NextStationID_U16 == 57)
                {
                    NextStation = QObject::trUtf8("会议中心");
                }
                if (PIS1CT_NextStationID_U16 == 58)
                {
                    NextStation = QObject::trUtf8("东港站");
                }
                if (PIS1CT_NextStationID_U16 == 59)
                {
                    NextStation = QObject::trUtf8("海之韵");
                }


            }

        }

*/

    SetStation(IDLB_COM_CurrentStation, CurrentStation);
    SetStation(IDLB_COM_NextStation, NextStation);
    SetStation(IDLB_COM_FinalStation, DestStation);


}
void CPage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}


void CPage::UpdateWarning(int nTrainID)
{



    //PAiCT_PICU11ToCbEmrgncy_B1	#1车-1位侧乘客紧急报警器呼叫司机	1=正在进行
           //   TC1
           if (PIS1CT_Tc1EmgcyAlert1Active_B1)
    //if(1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,0,Qt::red);
           }

           if (PIS1CT_Tc1EmgcyAlert2Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,0,Qt::red);
           }
           //2014_04_16
           if (PIS1CT_Tc1EmgcyAlert3Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 3,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 3,0,Qt::red);
           }

           if (PIS1CT_Tc1EmgcyAlert4Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 4,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 4,0,Qt::red);
           }
           //2014_04_16
           //   Mp1
           if (PIS1CT_Mp1EmgcyAlert1Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,0,Qt::red);
           }

           if (PIS1CT_Mp1EmgcyAlert2Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,0,Qt::red);
           }
           //2014_04_16
           if (PIS1CT_Mp1EmgcyAlert3Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 3,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 3,0,Qt::red);
           }

          if (PIS1CT_Mp1EmgcyAlert4Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 4,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 4,0,Qt::red);
           }

           //2014_04_16
           //M1
           if (PIS1CT_M1EmgcyAlert1Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,0,Qt::red);
           }

           if (PIS1CT_M1EmgcyAlert2Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,0,Qt::red);
           }
           //2014_04_16
          if (PIS1CT_M1EmgcyAlert3Active_B1)


           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 3,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 3,0,Qt::red);
           }

           if (PIS1CT_M1EmgcyAlert4Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 4,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 4,0,Qt::red);
           }
           //2014_04_16

           //M2
           if (PIS1CT_M2EmgcyAlert1Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,0,Qt::red);
           }

           if (PIS1CT_M2EmgcyAlert2Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,0,Qt::red);
           }
           //2014_04_16
            if(PIS1CT_M2EmgcyAlert3Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 3,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 3,0,Qt::red);
           }

           if (PIS1CT_M2EmgcyAlert4Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 4,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 4,0,Qt::red);
           }


           //2014_04_16

           //Mp2
           if (PIS1CT_Mp2EmgcyAlert1Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,0,Qt::red);
           }

           if (PIS1CT_Mp2EmgcyAlert2Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,0,Qt::red);
           }

           //2014_04_16
         if (PIS1CT_Mp2EmgcyAlert3Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 3,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 3,0,Qt::red);
           }

          if (PIS1CT_Mp2EmgcyAlert4Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 4,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 4,0,Qt::red);
           }
           //2014_04_16

           //TC2
           if (PIS1CT_Tc2EmgcyAlert1Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,0,Qt::red);
           }

           if (PIS1CT_Tc2EmgcyAlert2Active_B1)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,0,Qt::red);
           }

           //2014_04_16
           if (PIS1CT_Tc2EmgcyAlert3Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 3,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 3,0,Qt::red);
           }

           if (PIS1CT_Tc2EmgcyAlert4Active_B1)

           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 4,1,Qt::red);
           }
           else
           {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 4,0,Qt::red);
           }

           //2014_04_16


//#ifdef USE_RAND_DATA
//    PIS_Master_9i1_4=1024;
//    PIS_Master_9i1_5=0;
//#endif

        //PAiCT_PICU11ToCbEmrgncy_B1	#1车-1位侧乘客紧急报警器呼叫司机	1=正在进行
//       if (Bit( PIS_Master_9i1_4, 8) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 8) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 6) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 6) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 4) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 4) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 2) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 2) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 16) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 16) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 14) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 14) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 12) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 12) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_4, 10) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_4, 10) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_5, 8) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 8) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_5, 6) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 6) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_5, 4) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 4) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,1,Qt::red);
//       }

//       if (Bit( PIS_Master_9i1_5, 2) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 2) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 16) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 16) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 14) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 14) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 2,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 12) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 12) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 2,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 10) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 10) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 1,1,Qt::red);
//       }

//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING1, warning1_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING2, warning2_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING1, warning3_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING2, warning4_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING1, warning5_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING2, warning6_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING1, warning7_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING2, warning8_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING1, warning9_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING2, warning10_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING1, warning11_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING2, warning12_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING1, warning13_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING2, warning14_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING1, warning15_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING2, warning16_color);

}

void CPage::InitPageHeader()
{
    //网压
    if (this->TestControlExists(IDLB_COM_voltage))
    {
        this->UpdateVoltage(IDLB_COM_voltage);
    }
    //网流
    if (this->TestControlExists(IDLB_COM_current))
    {

        this->UpdateCurrent(IDLB_COM_current);
    }
    //速度
    if (this->TestControlExists(IDLB_COM_speed))
    {
        this->UpdateSpeed(IDLB_COM_speed);

    }
    //牵引/制动级位
    if (this->TestControlExists(IDLB_COM_level))
    {
        this->UpdateTractionLevel(IDLB_COM_level);
    }

    //快慢车 预留（北京6号线使用）
    if (this->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        this->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);
    }



    if (this->TestControlExists(IDLB_COM_CurrentStation))
    {
        this->UpdateStation();
    }
    if (this->TestControlExists(IDLB_COM_TrainFault))
    {
        this->updateFault(IDLB_COM_TrainFault);
    }

    if (this->TestControlExists(IDLB_COM_TIME))
    {

//        if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
//        {
//            QString str,Month,Day;
//            Month.sprintf("%02d",CTALL_Month_U8);
//            Day.sprintf("%02d",CTALL_Day_U8);
//            str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
//                  Month + QObject::trUtf8("-")+
//                  Day;
//            this->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


//            QString time ,Hour,Minute,Second;
//            Hour.sprintf("%02d",CTALL_Hour_U8);
//            Minute.sprintf("%02d",CTALL_Minite_U8);
//            Second.sprintf("%02d",CTALL_Second_U8);
//            time = Hour + QObject::trUtf8(":")+
//                  Minute+ QObject::trUtf8(":")+
//                  Second;
//            this->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
//        }
//        else
        {
            QDate date = QDate::currentDate();
            QString str;
            str = QString::number(date.year()) + QObject::trUtf8("-")+
                  QString::number(date.month()) + QObject::trUtf8("-")+
                  QString::number(date.day()) + QObject::trUtf8("");
            this->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
            //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
            this->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

        }

    }
}


