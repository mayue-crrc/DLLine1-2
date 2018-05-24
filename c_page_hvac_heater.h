#ifndef C_PAGE_HVAC_HEATER_H
#define C_PAGE_HVAC_HEATER_H

#include <QDialog>

namespace Ui {
    class C_Page_Hvac_Heater;
}

class C_Page_Hvac_Heater : public QDialog
{
    Q_OBJECT

public:
    explicit C_Page_Hvac_Heater(QWidget *parent = 0);
    ~C_Page_Hvac_Heater();

private:
    Ui::C_Page_Hvac_Heater *ui;
private slots:
    void on_pushButton_clicked();
    void on_lineEdit_var_2_selectionChanged();
    void on_lineEdit_var_selectionChanged();
    void on_lineEdit_var_lostFocus();
    void on_pushButton_clear_clicked();
    void on_pushButton_num0_clicked();
    void on_pushButton_num9_clicked();
    void on_pushButton_num8_clicked();
    void on_pushButton_num7_clicked();
    void on_pushButton_num6_clicked();
    void on_pushButton_num5_clicked();
    void on_pushButton_num4_clicked();
    void on_pushButton_num3_clicked();
    void on_pushButton_num2_clicked();
    void on_pushButton_num1_clicked();
};

#endif // C_PAGE_HVAC_HEATER_H
