#include "C_Debug_Parameter_Setting.h"
#include "ui_C_Debug_Parameter_Setting.h"
#include "CGlobal.h"

C_Debug_Parameter_Setting::C_Debug_Parameter_Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::C_Debug_Parameter_Setting)
{
    ui->setupUi(this);
    bBinaryVar = false;

    ui->label->setText(QObject::trUtf8("累计里程:")
                       +QString::number(DTHM_SingleDistance_U32)
                       +QObject::trUtf8("  累计时间")
                       +QString::number(DTHM_SingleRunTime_U32)
                       +QObject::trUtf8("  牵引能耗")
                       +QString::number(DTHM_SingleTractionPower_U32)
                       +QObject::trUtf8("  制动能耗")
                       +QString::number(DTHM_SingleBrakePower_U32)
                       +QObject::trUtf8("  ")//辅助能耗
                       +QString::number(DTHM_SingleSivPower_U32));


    SetSoftKeyBoardState();
    connect(&timer_1s,SIGNAL(timeout()),this,SLOT(OnTimer_1s()));
    connect(&timer_5s,SIGNAL(timeout()),this,SLOT(OnTimer_5s()));
    timer_1s.start(1000);
}

C_Debug_Parameter_Setting::~C_Debug_Parameter_Setting()
{
    HMCT_SingleMileSet_B1=false;
    HMCT_SingleTimeSet_B1=false;
    HMCT_SingleTracPowerSet_B1=false;
    HMCT_SingleBrakePowerSet_B1=false;
    HMCT_SingleSivPowerSet_B1=false;


    HMCT_SingleMileSet_U32=0;
    HMCT_SingleTimeSet_U32=0;
    HMCT_SingleTracPowerSet_U32=0;
    HMCT_SingleBrakePowerSet_U32=0;
    HMCT_SingleSivPowerSet_U32=0;

    HMCT_TimeCheck_U8=0x55;

    delete ui;
}

void C_Debug_Parameter_Setting::changeEvent(QEvent *e)
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

void C_Debug_Parameter_Setting::on_pushButton_num1_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"1");
   if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"1");
}

void C_Debug_Parameter_Setting::on_pushButton_num2_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"2");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"2");
}

void C_Debug_Parameter_Setting::on_pushButton_num3_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"3");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"3");
}

void C_Debug_Parameter_Setting::on_pushButton_num4_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"4");
   if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"4");
}

void C_Debug_Parameter_Setting::on_pushButton_num5_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"5");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"5");
}

void C_Debug_Parameter_Setting::on_pushButton_num6_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"6");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"6");
}

void C_Debug_Parameter_Setting::on_pushButton_num7_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"7");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"7");
}

void C_Debug_Parameter_Setting::on_pushButton_num8_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"8");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"8");
}


void C_Debug_Parameter_Setting::on_pushButton_num9_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"9");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"9");
}

void C_Debug_Parameter_Setting::on_pushButton_num0_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"0");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"0");
}

void C_Debug_Parameter_Setting::on_pushButton_clear_clicked()
{
//    if(!ui->lineEdit_arrayindex->isReadOnly())
//        ui->lineEdit_arrayindex->setText("");
     if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText("");
}

void C_Debug_Parameter_Setting::on_pushButton_set_2_clicked()
{
    HMCT_SingleMileSet_B1=false;
    HMCT_SingleTimeSet_B1=false;
    HMCT_SingleTracPowerSet_B1=false;
    HMCT_SingleBrakePowerSet_B1=false;
    HMCT_SingleSivPowerSet_B1=false;

    HMCT_SingleMileSet_U32=0;
    HMCT_SingleTimeSet_U32=0;
    HMCT_SingleTracPowerSet_U32=0;
    HMCT_SingleBrakePowerSet_U32=0;
    HMCT_SingleSivPowerSet_U32=0;

    HMCT_TimeCheck_U8=0x55;
  reject();
}

void C_Debug_Parameter_Setting::on_pushButton_set_clicked()
{
    if( ui->lineEdit_var->text() == "")
    {
        return;
    }

    QString varTextStr = ui->lineEdit_var->text();
    if(this->bBinaryVar)
    {
        while(varTextStr.length() < 32)
        {
            varTextStr.insert(0,"0");
        }
    }
    else
    {
        if(varTextStr.toInt() > 4294967295)
            varTextStr = "4294967295";
    }
    ui->lineEdit_var->setText(varTextStr);

//    //SERIALSETSTRU serialStru;
//    serialStru.nArrayIndex = ui->lineEdit_arrayindex->text().toInt();
    unsigned int nNum;
    if(this->bBinaryVar)
        nNum = strtol(ui->lineEdit_var->text().toStdString().c_str(), NULL, 2);
    else
        nNum = ui->lineEdit_var->text().toInt();


    if(ui->comboBox->currentIndex()==0)
    {
        HMCT_SingleMileSet_U32=nNum;
        HMCT_SingleMileSet_B1=true;
        HMCT_TimeCheck_U8=0xaa;
        timer_5s.start(5000);
    }
    if(ui->comboBox->currentIndex()==1)
    {
        HMCT_SingleTimeSet_U32=nNum;
        HMCT_SingleTimeSet_B1=true;
        HMCT_TimeCheck_U8=0xaa;
        timer_5s.start(5000);
    }
    if(ui->comboBox->currentIndex()==2)
    {
        HMCT_SingleTracPowerSet_U32=nNum;
        HMCT_SingleTracPowerSet_B1=true;
        HMCT_TimeCheck_U8=0xaa;
        timer_5s.start(5000);
    }
    if(ui->comboBox->currentIndex()==3)
    {
        HMCT_SingleBrakePowerSet_U32=nNum;
        HMCT_SingleBrakePowerSet_B1=true;
        HMCT_TimeCheck_U8=0xaa;
        timer_5s.start(5000);
    }
    if(ui->comboBox->currentIndex()==4)
    {
        HMCT_SingleSivPowerSet_U32=nNum;
        HMCT_SingleSivPowerSet_B1=true;
        HMCT_TimeCheck_U8=0xaa;
        timer_5s.start(5000);
    }

//    if(ui->comboBox->currentText() == "|=")
//        serialStru.nOperation = 0;
//    else if(ui->comboBox->currentText() == "&=")
//        serialStru.nOperation = 1;
//    else if(ui->comboBox->currentText() == "^=")
//        serialStru.nOperation = 2;
//    else if(ui->comboBox->currentText() == "=")
//        serialStru.nOperation = 3;

//    serialStru.bSetRevData = bSetRevData;
//    serialSetList.push_back(serialStru);

//    QString str;
//    if(this->bSetRevData)
//        str = "receiveData";
//    else
//        str = "sendData";

//    ui->textEdit->setPlainText(ui->textEdit->toPlainText()+
//                               "\n"+ str+
//                               "["+ui->lineEdit_arrayindex->text()+"]"
//                               + ui->comboBox->currentText() + ui->lineEdit_var->text()+";");
}


void C_Debug_Parameter_Setting::on_radioButton_binVar_clicked()
{
    ui->radioButton_binVar->setChecked(true);
    ui->radioButton_decVar->setChecked(false);
    bBinaryVar = true;

    ui->lineEdit_var->setText("");
    if(!ui->lineEdit_var->isReadOnly())
        SetSoftKeyBoardState();
}

void C_Debug_Parameter_Setting::on_radioButton_decVar_clicked()
{
    ui->radioButton_binVar->setChecked(false);
    ui->radioButton_decVar->setChecked(true);
    bBinaryVar = false;

    ui->lineEdit_var->setText("");
    if(!ui->lineEdit_var->isReadOnly())
        SetSoftKeyBoardState();
}

void C_Debug_Parameter_Setting::SetSoftKeyBoardState()
{
    if(bBinaryVar)
    {
        ui->pushButton_num2->setDisabled(true);
        ui->pushButton_num3->setDisabled(true);
        ui->pushButton_num4->setDisabled(true);
        ui->pushButton_num5->setDisabled(true);
        ui->pushButton_num6->setDisabled(true);
        ui->pushButton_num7->setDisabled(true);
        ui->pushButton_num8->setDisabled(true);
        ui->pushButton_num9->setDisabled(true);
    }
    else
    {
        ui->pushButton_num2->setDisabled(false);
        ui->pushButton_num3->setDisabled(false);
        ui->pushButton_num4->setDisabled(false);
        ui->pushButton_num5->setDisabled(false);
        ui->pushButton_num6->setDisabled(false);
        ui->pushButton_num7->setDisabled(false);
        ui->pushButton_num8->setDisabled(false);
        ui->pushButton_num9->setDisabled(false);
    }
}

void C_Debug_Parameter_Setting::OnTimer_1s()
{

    //ui->textEdit_2
    WORD temp[64];
            for(int i = 0; i < 64; i++)
            {
                  temp[i] = (sendData[i*2+1]<<8) | sendData[i*2];

            }
            ui->textEdit_2->clear();
            for(int i=0; i<64; i++)
            {
              //  ui->textEdit_2->setPlainText(ui->textEdit_2->toPlainText()+" " + QString::number(data[i]));
                ui->textEdit_2->setPlainText(ui->textEdit_2->toPlainText()+" " + QString::number(i+1)+":"+QString::number(temp[i],16));
              //  rec_data -> setPlainText(rec_data->toPlainText()+" " + QString::number(data[i]));
            }

           // ui->label->setText(QObject::trUtf8("累计里程:")+QString::number(DT1HM_SingleMile_U32)+QObject::trUtf8("  累计时间")+QString::number(DT1HM_SingleTime_U32)+QObject::trUtf8("  牵引能耗")+QString::number(DT1HM_SingleTractionPower_U32)+QObject::trUtf8("  制动能耗")+QString::number(DT1HM_SingleBrakePower_U32)+QObject::trUtf8("  辅助能耗")+QString::number(DT1HM_SingleSivPower_U32));

            ui->label->setText(QObject::trUtf8("累计里程:")+QString::number(DTHM_SingleDistance_U32)+QObject::trUtf8("  累计时间")+QString::number(DTHM_SingleRunTime_U32)+QObject::trUtf8("  牵引能耗")+QString::number(DTHM_SingleTractionPower_U32)+QObject::trUtf8("  制动能耗")+QString::number(DTHM_SingleBrakePower_U32)+QObject::trUtf8("  辅助能耗")+QString::number(DTHM_SingleSivPower_U32));


}

void C_Debug_Parameter_Setting::OnTimer_5s()
{
    HMCT_SingleMileSet_B1=false;

    HMCT_SingleTimeSet_B1=false;
    HMCT_SingleTracPowerSet_B1=false;
    HMCT_SingleBrakePowerSet_B1=false;
    HMCT_SingleSivPowerSet_B1=false;
    HMCT_TimeCheck_U8=0x55;
    timer_5s.stop();

}


void C_Debug_Parameter_Setting::on_lineEdit_var_selectionChanged()
{
    if(ui->lineEdit_var->isReadOnly())
    {
        ui->lineEdit_var->setReadOnly(false);
        //ui->lineEdit_arrayindex->setReadOnly(true);
    }
    SetSoftKeyBoardState();
}
