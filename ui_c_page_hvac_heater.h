/********************************************************************************
** Form generated from reading UI file 'c_page_hvac_heater.ui'
**
** Created: Tue Mar 8 08:13:45 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_PAGE_HVAC_HEATER_H
#define UI_C_PAGE_HVAC_HEATER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_C_Page_Hvac_Heater
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_num4;
    QLabel *label;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_num6;
    QLineEdit *lineEdit_var;
    QPushButton *pushButton_num0;
    QLabel *label_2;
    QLineEdit *lineEdit_var_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QDialog *C_Page_Hvac_Heater)
    {
        if (C_Page_Hvac_Heater->objectName().isEmpty())
            C_Page_Hvac_Heater->setObjectName(QString::fromUtf8("C_Page_Hvac_Heater"));
        C_Page_Hvac_Heater->resize(711, 407);
        buttonBox = new QDialogButtonBox(C_Page_Hvac_Heater);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(410, 330, 251, 61));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton_num2 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num2->setObjectName(QString::fromUtf8("pushButton_num2"));
        pushButton_num2->setEnabled(false);
        pushButton_num2->setGeometry(QRect(100, 180, 65, 65));
        pushButton_num7 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num7->setObjectName(QString::fromUtf8("pushButton_num7"));
        pushButton_num7->setEnabled(false);
        pushButton_num7->setGeometry(QRect(100, 250, 65, 65));
        pushButton_num5 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num5->setObjectName(QString::fromUtf8("pushButton_num5"));
        pushButton_num5->setEnabled(false);
        pushButton_num5->setGeometry(QRect(310, 180, 65, 65));
        pushButton_num9 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num9->setObjectName(QString::fromUtf8("pushButton_num9"));
        pushButton_num9->setEnabled(false);
        pushButton_num9->setGeometry(QRect(240, 250, 65, 65));
        pushButton_num3 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num3->setObjectName(QString::fromUtf8("pushButton_num3"));
        pushButton_num3->setEnabled(false);
        pushButton_num3->setGeometry(QRect(170, 180, 65, 65));
        pushButton_num1 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num1->setObjectName(QString::fromUtf8("pushButton_num1"));
        pushButton_num1->setGeometry(QRect(30, 180, 65, 65));
        pushButton_num4 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num4->setObjectName(QString::fromUtf8("pushButton_num4"));
        pushButton_num4->setEnabled(false);
        pushButton_num4->setGeometry(QRect(240, 180, 65, 65));
        label = new QLabel(C_Page_Hvac_Heater);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);
        pushButton_num8 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num8->setObjectName(QString::fromUtf8("pushButton_num8"));
        pushButton_num8->setEnabled(false);
        pushButton_num8->setGeometry(QRect(170, 250, 65, 65));
        pushButton_clear = new QPushButton(C_Page_Hvac_Heater);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(410, 180, 91, 131));
        pushButton_num6 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num6->setObjectName(QString::fromUtf8("pushButton_num6"));
        pushButton_num6->setEnabled(false);
        pushButton_num6->setGeometry(QRect(30, 250, 65, 65));
        lineEdit_var = new QLineEdit(C_Page_Hvac_Heater);
        lineEdit_var->setObjectName(QString::fromUtf8("lineEdit_var"));
        lineEdit_var->setGeometry(QRect(280, 40, 171, 41));
        lineEdit_var->setMaxLength(32);
        lineEdit_var->setReadOnly(true);
        pushButton_num0 = new QPushButton(C_Page_Hvac_Heater);
        pushButton_num0->setObjectName(QString::fromUtf8("pushButton_num0"));
        pushButton_num0->setGeometry(QRect(310, 250, 65, 65));
        label_2 = new QLabel(C_Page_Hvac_Heater);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 110, 151, 41));
        label_2->setFont(font);
        lineEdit_var_2 = new QLineEdit(C_Page_Hvac_Heater);
        lineEdit_var_2->setObjectName(QString::fromUtf8("lineEdit_var_2"));
        lineEdit_var_2->setGeometry(QRect(280, 110, 171, 41));
        lineEdit_var_2->setMaxLength(32);
        lineEdit_var_2->setReadOnly(true);
        label_3 = new QLabel(C_Page_Hvac_Heater);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 40, 211, 41));
        label_3->setFont(font);
        label_4 = new QLabel(C_Page_Hvac_Heater);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 110, 211, 41));
        label_4->setFont(font);
        label_5 = new QLabel(C_Page_Hvac_Heater);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 40, 66, 51));
        label_5->setFont(font);
        pushButton = new QPushButton(C_Page_Hvac_Heater);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 190, 101, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        pushButton->setFont(font1);

        retranslateUi(C_Page_Hvac_Heater);
        QObject::connect(buttonBox, SIGNAL(accepted()), C_Page_Hvac_Heater, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), C_Page_Hvac_Heater, SLOT(reject()));

        QMetaObject::connectSlotsByName(C_Page_Hvac_Heater);
    } // setupUi

    void retranslateUi(QDialog *C_Page_Hvac_Heater)
    {
        C_Page_Hvac_Heater->setWindowTitle(QApplication::translate("C_Page_Hvac_Heater", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_num2->setText(QApplication::translate("C_Page_Hvac_Heater", "2", 0, QApplication::UnicodeUTF8));
        pushButton_num7->setText(QApplication::translate("C_Page_Hvac_Heater", "7", 0, QApplication::UnicodeUTF8));
        pushButton_num5->setText(QApplication::translate("C_Page_Hvac_Heater", "5", 0, QApplication::UnicodeUTF8));
        pushButton_num9->setText(QApplication::translate("C_Page_Hvac_Heater", "9", 0, QApplication::UnicodeUTF8));
        pushButton_num3->setText(QApplication::translate("C_Page_Hvac_Heater", "3", 0, QApplication::UnicodeUTF8));
        pushButton_num1->setText(QApplication::translate("C_Page_Hvac_Heater", "1", 0, QApplication::UnicodeUTF8));
        pushButton_num4->setText(QApplication::translate("C_Page_Hvac_Heater", "4", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("C_Page_Hvac_Heater", "\347\224\265\346\232\226\346\260\224\345\274\200\345\220\257\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        pushButton_num8->setText(QApplication::translate("C_Page_Hvac_Heater", "8", 0, QApplication::UnicodeUTF8));
        pushButton_clear->setText(QApplication::translate("C_Page_Hvac_Heater", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_num6->setText(QApplication::translate("C_Page_Hvac_Heater", "6", 0, QApplication::UnicodeUTF8));
        lineEdit_var->setText(QString());
        pushButton_num0->setText(QApplication::translate("C_Page_Hvac_Heater", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("C_Page_Hvac_Heater", "\347\224\265\346\232\226\346\260\224\345\205\263\351\227\255\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        lineEdit_var_2->setText(QString());
        label_3->setText(QApplication::translate("C_Page_Hvac_Heater", "\345\210\206\351\222\237(\350\214\203\345\233\264 25-120\345\210\206\351\222\237)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("C_Page_Hvac_Heater", "\345\210\206\351\222\237(\350\214\203\345\233\264 10-60\345\210\206\351\222\237)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("C_Page_Hvac_Heater", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("C_Page_Hvac_Heater", "\345\220\257\345\212\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class C_Page_Hvac_Heater: public Ui_C_Page_Hvac_Heater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_PAGE_HVAC_HEATER_H
