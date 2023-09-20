/********************************************************************************
** Form generated from reading UI file 'zuheclear.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZUHECLEAR_H
#define UI_ZUHECLEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zuheclear
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *zuheclear)
    {
        if (zuheclear->objectName().isEmpty())
            zuheclear->setObjectName(QString::fromUtf8("zuheclear"));
        zuheclear->resize(400, 250);
        zuheclear->setMinimumSize(QSize(400, 250));
        zuheclear->setMaximumSize(QSize(400, 250));
        label = new QLabel(zuheclear);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 241, 31));
        pushButton = new QPushButton(zuheclear);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 140, 61, 28));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);"));
        pushButton_2 = new QPushButton(zuheclear);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 140, 61, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));

        retranslateUi(zuheclear);

        QMetaObject::connectSlotsByName(zuheclear);
    } // setupUi

    void retranslateUi(QDialog *zuheclear)
    {
        zuheclear->setWindowTitle(QCoreApplication::translate("zuheclear", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("zuheclear", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">\350\255\246\345\221\212\357\274\201\344\275\240\345\260\206\346\270\205\351\231\244\346\211\200\346\234\211\346\225\260\346\215\256\357\274\201</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("zuheclear", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("zuheclear", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zuheclear: public Ui_zuheclear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZUHECLEAR_H
