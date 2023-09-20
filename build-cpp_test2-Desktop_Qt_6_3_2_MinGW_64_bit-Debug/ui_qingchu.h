/********************************************************************************
** Form generated from reading UI file 'qingchu.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QINGCHU_H
#define UI_QINGCHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_qingchu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *qingchu)
    {
        if (qingchu->objectName().isEmpty())
            qingchu->setObjectName(QString::fromUtf8("qingchu"));
        qingchu->resize(400, 250);
        qingchu->setMinimumSize(QSize(400, 250));
        qingchu->setMaximumSize(QSize(400, 250));
        label = new QLabel(qingchu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 80, 231, 31));
        pushButton = new QPushButton(qingchu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 180, 71, 28));
        pushButton_2 = new QPushButton(qingchu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 180, 71, 28));

        retranslateUi(qingchu);

        QMetaObject::connectSlotsByName(qingchu);
    } // setupUi

    void retranslateUi(QDialog *qingchu)
    {
        qingchu->setWindowTitle(QCoreApplication::translate("qingchu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("qingchu", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">\350\255\246\345\221\212\357\274\201\344\275\240\345\260\206\346\270\205\351\231\244\346\211\200\346\234\211\346\225\260\346\215\256\357\274\201</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("qingchu", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("qingchu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qingchu: public Ui_qingchu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QINGCHU_H
