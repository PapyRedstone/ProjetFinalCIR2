/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_15;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *NAMEBDD;
    QLabel *label_5;
    QLineEdit *NameBdd;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *IPBDD;
    QLabel *label_2;
    QLineEdit *ipbdd;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *USER;
    QLabel *label_3;
    QLineEdit *user;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *PASSWORD;
    QLabel *label_4;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *CONNEXION;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Connexion;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(941, 699);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-17, 0, 271, 68));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_15);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(642, 0, 301, 68));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_16);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(261, 1, 376, 584));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        label = new QLabel(widget2);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_8 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        NAMEBDD = new QHBoxLayout();
        NAMEBDD->setSpacing(6);
        NAMEBDD->setObjectName(QStringLiteral("NAMEBDD"));
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        NAMEBDD->addWidget(label_5);

        NameBdd = new QLineEdit(widget2);
        NameBdd->setObjectName(QStringLiteral("NameBdd"));

        NAMEBDD->addWidget(NameBdd);


        verticalLayout_3->addLayout(NAMEBDD);

        verticalSpacer_6 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        IPBDD = new QHBoxLayout();
        IPBDD->setSpacing(6);
        IPBDD->setObjectName(QStringLiteral("IPBDD"));
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        IPBDD->addWidget(label_2);

        ipbdd = new QLineEdit(widget2);
        ipbdd->setObjectName(QStringLiteral("ipbdd"));

        IPBDD->addWidget(ipbdd);


        verticalLayout_3->addLayout(IPBDD);

        verticalSpacer_7 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        verticalSpacer_2 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        USER = new QHBoxLayout();
        USER->setSpacing(6);
        USER->setObjectName(QStringLiteral("USER"));
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        USER->addWidget(label_3);

        user = new QLineEdit(widget2);
        user->setObjectName(QStringLiteral("user"));

        USER->addWidget(user);


        verticalLayout_3->addLayout(USER);

        verticalSpacer_9 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);

        PASSWORD = new QHBoxLayout();
        PASSWORD->setSpacing(6);
        PASSWORD->setObjectName(QStringLiteral("PASSWORD"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        PASSWORD->addWidget(label_4);

        password = new QLineEdit(widget2);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        PASSWORD->addWidget(password);


        verticalLayout_3->addLayout(PASSWORD);

        verticalSpacer_10 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);

        CONNEXION = new QHBoxLayout();
        CONNEXION->setSpacing(6);
        CONNEXION->setObjectName(QStringLiteral("CONNEXION"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CONNEXION->addItem(horizontalSpacer_7);

        Connexion = new QPushButton(widget2);
        Connexion->setObjectName(QStringLiteral("Connexion"));

        CONNEXION->addWidget(Connexion);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CONNEXION->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(CONNEXION);

        verticalSpacer_5 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Name BDD :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "IP BDD :       ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "User :           ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Password :  ", Q_NULLPTR));
        Connexion->setText(QApplication::translate("MainWindow", "Connexion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
