/********************************************************************************
** Form generated from reading UI file 'CrapsMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAPSMAINWINDOW_H
#define UI_CRAPSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrapsMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *rollButton;
    QLabel *die1UI;
    QLabel *die2UI;
    QLabel *currentBankValueUI;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CrapsMainWindow)
    {
        if (CrapsMainWindow->objectName().isEmpty())
            CrapsMainWindow->setObjectName(QString::fromUtf8("CrapsMainWindow"));
        CrapsMainWindow->resize(692, 453);
        centralwidget = new QWidget(CrapsMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rollButton = new QPushButton(centralwidget);
        rollButton->setObjectName(QString::fromUtf8("rollButton"));
        rollButton->setGeometry(QRect(270, 320, 115, 32));
        die1UI = new QLabel(centralwidget);
        die1UI->setObjectName(QString::fromUtf8("die1UI"));
        die1UI->setGeometry(QRect(110, 40, 181, 171));
        die1UI->setPixmap(QPixmap(QString::fromUtf8(":/dieImages/6")));
        die2UI = new QLabel(centralwidget);
        die2UI->setObjectName(QString::fromUtf8("die2UI"));
        die2UI->setGeometry(QRect(380, 40, 181, 181));
        die2UI->setPixmap(QPixmap(QString::fromUtf8(":/dieImages/5")));
        currentBankValueUI = new QLabel(centralwidget);
        currentBankValueUI->setObjectName(QString::fromUtf8("currentBankValueUI"));
        currentBankValueUI->setGeometry(QRect(310, 10, 58, 16));
        CrapsMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CrapsMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 692, 26));
        CrapsMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CrapsMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CrapsMainWindow->setStatusBar(statusbar);

        retranslateUi(CrapsMainWindow);

        QMetaObject::connectSlotsByName(CrapsMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CrapsMainWindow)
    {
        CrapsMainWindow->setWindowTitle(QCoreApplication::translate("CrapsMainWindow", "MainWindow", nullptr));
        rollButton->setText(QCoreApplication::translate("CrapsMainWindow", "PushButton", nullptr));
        die1UI->setText(QString());
        die2UI->setText(QString());
        currentBankValueUI->setText(QCoreApplication::translate("CrapsMainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrapsMainWindow: public Ui_CrapsMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAPSMAINWINDOW_H
