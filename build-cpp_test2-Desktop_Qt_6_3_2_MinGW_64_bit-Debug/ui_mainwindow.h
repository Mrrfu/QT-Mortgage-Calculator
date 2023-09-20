/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 750);
        MainWindow->setMinimumSize(QSize(700, 750));
        MainWindow->setMaximumSize(QSize(700, 750));
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"#MainWindow{\n"
"border-image:url(:/Image/1575271832099.jpg)}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(70, 280, 191, 51));
        btn_1->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\215\216\346\226\207\344\273\277\345\256\213\";"));
        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(400, 280, 201, 51));
        btn_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\215\216\346\226\207\344\273\277\345\256\213\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 261, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 130, 311, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "\345\225\206\344\270\232\350\264\267\346\254\276\346\210\226\345\205\254\347\247\257\351\207\221\350\264\267\346\254\276", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "\347\273\204\345\220\210\345\236\213\350\264\267\346\254\276", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic;\">\346\254\242\350\277\216\344\275\277\347\224\250\346\210\277\350\264\267\350\256\241\347\256\227\345\231\250</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\350\264\267\346\254\276\346\226\271\345\274\217</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
