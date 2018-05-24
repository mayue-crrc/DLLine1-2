#ifndef C_DEBUG_PARAMETER_SETTING_H
#define C_DEBUG_PARAMETER_SETTING_H

#include <QDialog>
#include "DataBuffer.h"
#include <qtimer.h>

namespace Ui {
    class C_Debug_Parameter_Setting;
}

class C_Debug_Parameter_Setting : public QDialog
{
    Q_OBJECT

public:
    explicit C_Debug_Parameter_Setting(QWidget *parent = 0);
    ~C_Debug_Parameter_Setting();

private:
    Ui::C_Debug_Parameter_Setting *ui;
    bool bBinaryVar;
    QTimer timer_1s;
    QTimer timer_5s;
    void SetSoftKeyBoardState();

protected:
    void changeEvent(QEvent *e);

private slots:
    void on_radioButton_decVar_clicked();
    void on_radioButton_binVar_clicked();

    void on_lineEdit_var_selectionChanged();
    //void on_pushButton_reset_clicked();
    void on_pushButton_set_clicked();
    void on_pushButton_set_2_clicked();
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
    void OnTimer_1s();
    void OnTimer_5s();
};

#endif // C_DEBUG_PARAMETER_SETTING_H
