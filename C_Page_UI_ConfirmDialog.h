#ifndef C_PAGE_UI_CONFIRMDIALOG_H
#define C_PAGE_UI_CONFIRMDIALOG_H


#include <QDialog>

namespace Ui {
    class CConfirmDialog;
}

class CConfirmDialog : public QDialog {
    Q_OBJECT
public:
    CConfirmDialog(QWidget *parent = 0);
    ~CConfirmDialog();

public:
    int m_nFlag;
    void SetConfirmStr(QString str);

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *);

private:
    Ui::CConfirmDialog *ui;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
};



#endif // C_PAGE_UI_CONFIRMDIALOG_H
