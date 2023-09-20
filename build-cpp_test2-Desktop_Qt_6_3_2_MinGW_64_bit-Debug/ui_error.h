/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_error
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_sure;
    QPushButton *btn_cancel;

    void setupUi(QWidget *error)
    {
        if (error->objectName().isEmpty())
            error->setObjectName(QString::fromUtf8("error"));
        error->resize(400, 300);
        label = new QLabel(error);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 151, 31));
        label_2 = new QLabel(error);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 301, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        btn_sure = new QPushButton(error);
        btn_sure->setObjectName(QString::fromUtf8("btn_sure"));
        btn_sure->setGeometry(QRect(40, 210, 93, 28));
        btn_sure->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 170, 127);"));
        btn_cancel = new QPushButton(error);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(260, 210, 93, 28));
        btn_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        retranslateUi(error);

        QMetaObject::connectSlotsByName(error);
    } // setupUi

    void retranslateUi(QWidget *error)
    {
        error->setWindowTitle(QCoreApplication::translate("error", "Form", nullptr));
        label->setText(QCoreApplication::translate("error", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">\350\255\246\345\221\212\357\274\201</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("error", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">\344\275\240\345\275\223\345\211\215\350\276\223\345\205\245\347\232\204\345\206\205\345\256\271\346\234\211\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201</span></p></body></html>", nullptr));
        btn_sure->setText(QCoreApplication::translate("error", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("error", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class error: public Ui_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
