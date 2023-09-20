/********************************************************************************
** Form generated from reading UI file 'tixing.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIXING_H
#define UI_TIXING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tixing
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *tixing)
    {
        if (tixing->objectName().isEmpty())
            tixing->setObjectName(QString::fromUtf8("tixing"));
        tixing->resize(400, 250);
        tixing->setMinimumSize(QSize(400, 250));
        tixing->setMaximumSize(QSize(400, 250));
        tixing->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 0);"));
        label = new QLabel(tixing);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 271, 31));
        pushButton = new QPushButton(tixing);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 190, 93, 28));

        retranslateUi(tixing);

        QMetaObject::connectSlotsByName(tixing);
    } // setupUi

    void retranslateUi(QDialog *tixing)
    {
        tixing->setWindowTitle(QCoreApplication::translate("tixing", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tixing", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\350\257\267\350\276\223\345\205\245\346\225\260\346\215\256\346\210\226\351\200\211\346\213\251\350\277\230\346\254\276\346\226\271\345\274\217\357\274\201</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("tixing", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tixing: public Ui_tixing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIXING_H
