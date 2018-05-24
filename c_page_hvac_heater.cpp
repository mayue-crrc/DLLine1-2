#include "c_page_hvac_heater.h"
#include "ui_c_page_hvac_heater.h"

C_Page_Hvac_Heater::C_Page_Hvac_Heater(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::C_Page_Hvac_Heater)
{
    ui->setupUi(this);
    ui->pushButton_num2->setDisabled(false);
    ui->pushButton_num3->setDisabled(false);
    ui->pushButton_num4->setDisabled(false);
    ui->pushButton_num5->setDisabled(false);
    ui->pushButton_num6->setDisabled(false);
    ui->pushButton_num7->setDisabled(false);
    ui->pushButton_num8->setDisabled(false);
    ui->pushButton_num9->setDisabled(false);
    ui->lineEdit_var->setReadOnly(false);
    ui->lineEdit_var->setMaxLength(3);
    ui->lineEdit_var_2->setMaxLength(2);
    if(1)
    {
        ui->label_5->setAutoFillBackground(true);
        QPalette palette;
        palette.setColor(QPalette::Window,QColor(0, 255, 0));
        ui->label_5->setPalette(palette);
    }
    else
    {
        ui->label_5->setAutoFillBackground(true);
        QPalette palette;
        palette.setColor(QPalette::Window,QColor(0, 255, 0));
        ui->label_5->setPalette(palette);
    }
}

C_Page_Hvac_Heater::~C_Page_Hvac_Heater()
{
    delete ui;
}


void C_Page_Hvac_Heater::on_pushButton_num1_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"1");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"1");
}

void C_Page_Hvac_Heater::on_pushButton_num2_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"2");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"2");
}

void C_Page_Hvac_Heater::on_pushButton_num3_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"3");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"3");
}

void C_Page_Hvac_Heater::on_pushButton_num4_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"4");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"4");
}

void C_Page_Hvac_Heater::on_pushButton_num5_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"5");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"5");
}

void C_Page_Hvac_Heater::on_pushButton_num6_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"6");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"6");
}

void C_Page_Hvac_Heater::on_pushButton_num7_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"7");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"7");
}

void C_Page_Hvac_Heater::on_pushButton_num8_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"8");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"8");
}


void C_Page_Hvac_Heater::on_pushButton_num9_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"9");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"9");
}

void C_Page_Hvac_Heater::on_pushButton_num0_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText(ui->lineEdit_var_2->text()+"0");
    if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"0");
}

void C_Page_Hvac_Heater::on_pushButton_clear_clicked()
{
    if(!ui->lineEdit_var_2->isReadOnly())
        ui->lineEdit_var_2->setText("");
     if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText("");
}

void C_Page_Hvac_Heater::on_lineEdit_var_lostFocus()
{

}

void C_Page_Hvac_Heater::on_lineEdit_var_selectionChanged()
{
    if(ui->lineEdit_var->isReadOnly())
    {
        ui->lineEdit_var->setReadOnly(false);
        ui->lineEdit_var_2->setReadOnly(true);
    }
}

void C_Page_Hvac_Heater::on_lineEdit_var_2_selectionChanged()
{
    if(ui->lineEdit_var_2->isReadOnly())
        {
            ui->lineEdit_var->setReadOnly(true);
            ui->lineEdit_var_2->setReadOnly(false);
        }

}

void C_Page_Hvac_Heater::on_pushButton_clicked()
{

}
