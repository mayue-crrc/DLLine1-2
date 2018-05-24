/********************************************************************************
** Form generated from reading UI file 'C_Debug_Parameter_Setting.ui'
**
** Created: Tue Mar 8 08:13:45 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_DEBUG_PARAMETER_SETTING_H
#define UI_C_DEBUG_PARAMETER_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_C_Debug_Parameter_Setting
{
public:
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_num0;
    QTextEdit *textEdit;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_set;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num5;
    QRadioButton *radioButton_decVar;
    QLineEdit *lineEdit_var;
    QRadioButton *radioButton_binVar;
    QComboBox *comboBox;
    QTextEdit *textEdit_2;
    QLabel *label;
    QPushButton *pushButton_set_2;

    void setupUi(QDialog *C_Debug_Parameter_Setting)
    {
        if (C_Debug_Parameter_Setting->objectName().isEmpty())
            C_Debug_Parameter_Setting->setObjectName(QString::fromUtf8("C_Debug_Parameter_Setting"));
        C_Debug_Parameter_Setting->resize(736, 387);
        pushButton_num7 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num7->setObjectName(QString::fromUtf8("pushButton_num7"));
        pushButton_num7->setEnabled(false);
        pushButton_num7->setGeometry(QRect(60, 160, 51, 51));
        pushButton_num2 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num2->setObjectName(QString::fromUtf8("pushButton_num2"));
        pushButton_num2->setEnabled(false);
        pushButton_num2->setGeometry(QRect(60, 110, 51, 51));
        pushButton_num3 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num3->setObjectName(QString::fromUtf8("pushButton_num3"));
        pushButton_num3->setEnabled(false);
        pushButton_num3->setGeometry(QRect(110, 110, 51, 51));
        pushButton_num4 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num4->setObjectName(QString::fromUtf8("pushButton_num4"));
        pushButton_num4->setEnabled(false);
        pushButton_num4->setGeometry(QRect(160, 110, 51, 51));
        pushButton_num6 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num6->setObjectName(QString::fromUtf8("pushButton_num6"));
        pushButton_num6->setEnabled(false);
        pushButton_num6->setGeometry(QRect(10, 160, 51, 51));
        pushButton_num0 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num0->setObjectName(QString::fromUtf8("pushButton_num0"));
        pushButton_num0->setGeometry(QRect(210, 160, 51, 51));
        textEdit = new QTextEdit(C_Debug_Parameter_Setting);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(340, 110, 331, 101));
        textEdit->setReadOnly(true);
        pushButton_num9 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num9->setObjectName(QString::fromUtf8("pushButton_num9"));
        pushButton_num9->setEnabled(false);
        pushButton_num9->setGeometry(QRect(160, 160, 51, 51));
        pushButton_clear = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(260, 110, 81, 101));
        pushButton_num1 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num1->setObjectName(QString::fromUtf8("pushButton_num1"));
        pushButton_num1->setGeometry(QRect(10, 110, 51, 51));
        pushButton_set = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));
        pushButton_set->setGeometry(QRect(10, 210, 331, 38));
        pushButton_num8 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num8->setObjectName(QString::fromUtf8("pushButton_num8"));
        pushButton_num8->setEnabled(false);
        pushButton_num8->setGeometry(QRect(110, 160, 51, 51));
        pushButton_num5 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_num5->setObjectName(QString::fromUtf8("pushButton_num5"));
        pushButton_num5->setEnabled(false);
        pushButton_num5->setGeometry(QRect(210, 110, 51, 51));
        radioButton_decVar = new QRadioButton(C_Debug_Parameter_Setting);
        radioButton_decVar->setObjectName(QString::fromUtf8("radioButton_decVar"));
        radioButton_decVar->setGeometry(QRect(310, 70, 91, 33));
        radioButton_decVar->setChecked(true);
        radioButton_decVar->setAutoExclusive(false);
        lineEdit_var = new QLineEdit(C_Debug_Parameter_Setting);
        lineEdit_var->setObjectName(QString::fromUtf8("lineEdit_var"));
        lineEdit_var->setGeometry(QRect(410, 50, 301, 31));
        lineEdit_var->setMaxLength(32);
        lineEdit_var->setReadOnly(true);
        radioButton_binVar = new QRadioButton(C_Debug_Parameter_Setting);
        radioButton_binVar->setObjectName(QString::fromUtf8("radioButton_binVar"));
        radioButton_binVar->setGeometry(QRect(310, 30, 91, 33));
        radioButton_binVar->setChecked(false);
        radioButton_binVar->setAutoExclusive(false);
        comboBox = new QComboBox(C_Debug_Parameter_Setting);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 50, 221, 38));
        textEdit_2 = new QTextEdit(C_Debug_Parameter_Setting);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 260, 711, 84));
        label = new QLabel(C_Debug_Parameter_Setting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 721, 20));
        pushButton_set_2 = new QPushButton(C_Debug_Parameter_Setting);
        pushButton_set_2->setObjectName(QString::fromUtf8("pushButton_set_2"));
        pushButton_set_2->setGeometry(QRect(340, 210, 331, 38));

        retranslateUi(C_Debug_Parameter_Setting);

        QMetaObject::connectSlotsByName(C_Debug_Parameter_Setting);
    } // setupUi

    void retranslateUi(QDialog *C_Debug_Parameter_Setting)
    {
        C_Debug_Parameter_Setting->setWindowTitle(QApplication::translate("C_Debug_Parameter_Setting", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_num7->setText(QApplication::translate("C_Debug_Parameter_Setting", "7", 0, QApplication::UnicodeUTF8));
        pushButton_num2->setText(QApplication::translate("C_Debug_Parameter_Setting", "2", 0, QApplication::UnicodeUTF8));
        pushButton_num3->setText(QApplication::translate("C_Debug_Parameter_Setting", "3", 0, QApplication::UnicodeUTF8));
        pushButton_num4->setText(QApplication::translate("C_Debug_Parameter_Setting", "4", 0, QApplication::UnicodeUTF8));
        pushButton_num6->setText(QApplication::translate("C_Debug_Parameter_Setting", "6", 0, QApplication::UnicodeUTF8));
        pushButton_num0->setText(QApplication::translate("C_Debug_Parameter_Setting", "0", 0, QApplication::UnicodeUTF8));
        pushButton_num9->setText(QApplication::translate("C_Debug_Parameter_Setting", "9", 0, QApplication::UnicodeUTF8));
        pushButton_clear->setText(QApplication::translate("C_Debug_Parameter_Setting", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_num1->setText(QApplication::translate("C_Debug_Parameter_Setting", "1", 0, QApplication::UnicodeUTF8));
        pushButton_set->setText(QApplication::translate("C_Debug_Parameter_Setting", "Set", 0, QApplication::UnicodeUTF8));
        pushButton_num8->setText(QApplication::translate("C_Debug_Parameter_Setting", "8", 0, QApplication::UnicodeUTF8));
        pushButton_num5->setText(QApplication::translate("C_Debug_Parameter_Setting", "5", 0, QApplication::UnicodeUTF8));
        radioButton_decVar->setText(QApplication::translate("C_Debug_Parameter_Setting", "\345\215\201\350\277\233\345\210\266", 0, QApplication::UnicodeUTF8));
        lineEdit_var->setText(QString());
        radioButton_binVar->setText(QApplication::translate("C_Debug_Parameter_Setting", "\344\272\214\350\277\233\345\210\266", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("C_Debug_Parameter_Setting", "\347\264\257\350\256\241\351\207\214\347\250\213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("C_Debug_Parameter_Setting", "\347\264\257\350\256\241\350\277\220\350\241\214\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("C_Debug_Parameter_Setting", "\347\211\265\345\274\225\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("C_Debug_Parameter_Setting", "\345\206\215\347\224\237\345\210\266\345\212\250\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("C_Debug_Parameter_Setting", "\350\276\205\345\212\251\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("C_Debug_Parameter_Setting", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_set_2->setText(QApplication::translate("C_Debug_Parameter_Setting", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class C_Debug_Parameter_Setting: public Ui_C_Debug_Parameter_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_DEBUG_PARAMETER_SETTING_H
